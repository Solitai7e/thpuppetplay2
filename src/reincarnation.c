#include "global.h"
#include "pokemon.h"
#include "constants/items.h"
#include "random.h"
#include "data/reincarnation_forms.h"


#define STATMASK(stat) (1 << stat)
#define STATMASK_ALL   ~(~0 << NUM_STATS)


static u8 StatIDToIVField(u8 stat)
{
    switch (stat) {
        case STAT_HP:    return MON_DATA_HP_IV;
        case STAT_ATK:   return MON_DATA_ATK_IV;
        case STAT_DEF:   return MON_DATA_DEF_IV;
        case STAT_SPEED: return MON_DATA_SPEED_IV;
        case STAT_SPATK: return MON_DATA_SPATK_IV;
        case STAT_SPDEF: return MON_DATA_SPDEF_IV;

        default: return 0;
    }
}


static void CopyIVFromEitherDonor
(
    struct BoxPokemon *recipient, const struct BoxPokemon *donors[2],
    u8 stat
)
{
    const struct BoxPokemon *donor = Random() & 1 ? donors[0] : donors[1];

    u8 field = StatIDToIVField(stat);
    u8 value = GetBoxMonData(donor, field, NULL);

    SetBoxMonData(recipient, field, &value);
}

static void RerollIV(struct BoxPokemon *mon, u8 stat)
{
    u8 value = Random() & MAX_IV_MASK;
    SetBoxMonData(mon, StatIDToIVField(stat), &value);
}


static u8 DrawFromStatMask(u8 mask, u8 count)
{
    u8 result = 0;

    for (;;) {
        u8 value = Random() & mask, stat;

        for (stat = 0; stat < NUM_STATS; stat++) {
            if (count == 0 || mask == 0)   return result;
            if (!(value & STATMASK(stat))) continue;

            result |= STATMASK(stat);
            mask   &= ~STATMASK(stat);

            count--;
        }
    }
}

static u8 CopyIVsFromEitherDonor
(
    struct BoxPokemon *recipient, const struct BoxPokemon *donors[2],
    u8 mask, u8 numToCopy
)
{
    u8 toBeCopied = DrawFromStatMask(mask, numToCopy), stat;

    for (stat = 0; stat < NUM_STATS; stat++)
        if (toBeCopied & STATMASK(stat))
            CopyIVFromEitherDonor(recipient, donors, stat);

    return mask & ~toBeCopied;
}

static u8 RerollIVs(struct BoxPokemon *recipient, u8 mask, u8 numToReroll)
{
    u8 toBeRerolled = DrawFromStatMask(mask, numToReroll), stat;

    for (stat = 0; stat < NUM_STATS; stat++)
        if (toBeRerolled & STATMASK(stat))
            RerollIV(recipient, stat);

    return mask & ~toBeRerolled;
}


void ReincarnateBoxPokemon
(
    struct BoxPokemon *mon, const struct BoxPokemon *donors[2],
    u16 emblem, u16 support
)
{
    u16 speciesOld = GetBoxMonData(mon, MON_DATA_SPECIES, NULL);
    u16 species    = sReincarnationForms[speciesOld];

    u32 exp = gExperienceTables[gBaseStats[species].growthRate][1];


    EvolutionRenameMon((void *) mon, speciesOld, species); // ughhhh

    SetBoxMonData(mon, MON_DATA_SPECIES, &species);
    SetBoxMonData(mon, MON_DATA_EXP, &exp);

    // TODO: decide if we wanna implement the stat marks
    //SetBoxMonData(mon, MON_DATA_MARKINGS, ?????);


    switch (support) {
        u8 mask;

        case ITEM_NONE:
            mask = STATMASK_ALL;
            mask = CopyIVsFromEitherDonor(mon, donors, mask, 3);
            mask = RerollIVs(mon, mask, NUM_STATS);
            break;

        case ITEM_OMEGA_STONE: break;

        case ITEM_GOLD_STONE:
            mask = STATMASK_ALL & ~STATMASK(STAT_HP);
            mask = CopyIVsFromEitherDonor(mon, donors, mask, 3);
            mask = RerollIVs(mon, mask, NUM_STATS);
            break;

        case ITEM_RED_STONE:
            mask = STATMASK_ALL & ~STATMASK(STAT_ATK);
            mask = CopyIVsFromEitherDonor(mon, donors, mask, 3);
            mask = RerollIVs(mon, mask, NUM_STATS);
            break;

        case ITEM_BLUE_STONE:
            mask = STATMASK_ALL & ~STATMASK(STAT_DEF);
            mask = CopyIVsFromEitherDonor(mon, donors, mask, 3);
            mask = RerollIVs(mon, mask, NUM_STATS);
            break;

        case ITEM_BLACK_STONE:
            mask = STATMASK_ALL & ~STATMASK(STAT_SPATK);
            mask = CopyIVsFromEitherDonor(mon, donors, mask, 3);
            mask = RerollIVs(mon, mask, NUM_STATS);
            break;

        case ITEM_WHITE_STONE:
            mask = STATMASK_ALL & ~STATMASK(STAT_SPDEF);
            mask = CopyIVsFromEitherDonor(mon, donors, mask, 3);
            mask = RerollIVs(mon, mask, NUM_STATS);
            break;

        case ITEM_GREEN_STONE:
            mask = STATMASK_ALL & ~STATMASK(STAT_SPEED);
            mask = CopyIVsFromEitherDonor(mon, donors, mask, 3);
            mask = RerollIVs(mon, mask, NUM_STATS);
            break;

        case ITEM_RAINBOW_STONE:
            mask = STATMASK_ALL;
            mask = RerollIVs(mon, mask, 1);
            mask = CopyIVsFromEitherDonor(mon, donors, mask, NUM_STATS);
            break;
    }
}

void ReincarnatePokemon
(
    struct Pokemon *mon, const struct Pokemon *donors[2],
    u16 emblem, u16 support
)
{
    ReincarnateBoxPokemon((void *) mon, (void *) donors, emblem, support);
    CalculateMonStats(mon);
}

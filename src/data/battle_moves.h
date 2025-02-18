const struct BattleMove gBattleMoves[MOVES_COUNT] =
{
    [MOVE_NONE] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_POUND] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_KARATE_CHOP] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 50,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_KNOCK_OFF] =
    {
        .effect = EFFECT_KNOCK_OFF,
        .split = 0,
        .power = 50,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_COMET_PUNCH] =
    {
        .effect = EFFECT_MULTI_HIT,
        .split = 0,
        .power = 25,
        .type = TYPE_DREAM,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_DRAIN_PUNCH] =
    {
        .effect = EFFECT_ABSORB,
        .split = 0,
        .power = 75,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PAY_DAY] =
    {
        .effect = EFFECT_PAY_DAY,
        .split = 0,
        .power = 60,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_FIRE_PUNCH] =
    {
        .effect = EFFECT_BURN_HIT,
        .split = 0,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ICE_PUNCH] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .split = 0,
        .power = 75,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_THUNDER_PUNCH] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 75,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SCRATCH] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_BLADE,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_NIGHT_SLASH] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 70,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_JUDGEMENT] =
    {
        .effect = EFFECT_OHKO,
        .split = 0,
        .power = 1,
        .type = TYPE_FAITH,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_GUST] =
    {
        .effect = EFFECT_RAZOR_WIND,
        .split = 0,
        .power = 40,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SWORDS_DANCE] =
    {
        .effect = EFFECT_ATTACK_UP_2,
        .split = 0,
        .power = 0,
        .type = TYPE_BLADE,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_CUT] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_BLADE,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_RAZOR_WIND] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_GALE] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .split = 0,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_WHIRLWIND] =
    {
        .effect = EFFECT_ROAR,
        .split = 0,
        .power = 0,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FLY] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .split = 0,
        .power = 90,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_BIND] =
    {
        .effect = EFFECT_TRAP,
        .split = 0,
        .power = 60,
        .type = TYPE_HEART,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_POWER_WHIP] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_NATURE,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_VINE_WHIP] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_STOMP] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DOUBLE_KICK] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_GIGA_IMPACT] =
    {
        .effect = EFFECT_RECOIL_IF_MISS,
        .split = 0,
        .power = 130,
        .type = TYPE_DARK,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_JUMP_KICK] =
    {
        .effect = EFFECT_RECOIL_IF_MISS,
        .split = 0,
        .power = 85,
        .type = TYPE_DREAM,
        .accuracy = 95,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_ROLLING_KICK] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SAND_ATTACK] =
    {
        .effect = EFFECT_ACCURACY_DOWN,
        .split = 0,
        .power = 0,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_HEADBUTT] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_KNIFE_THROW] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 50,
        .type = TYPE_BLADE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_MAGIC_KNIFE] =
    {
        .effect = EFFECT_MULTI_HIT,
        .split = 0,
        .power = 25,
        .type = TYPE_REASON,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SCULPTURE] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 95,
        .type = TYPE_BLADE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_TACKLE] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 35,
        .type = TYPE_BEAST,
        .accuracy = 95,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_BODY_SLAM] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 85,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_WRAP] =
    {
        .effect = EFFECT_TRAP,
        .split = 0,
        .power = 60,
        .type = TYPE_NATURE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_DOUBLE_EDGE] =
    {
        .effect = EFFECT_HEAD_SMASH,
        .split = 0,
        .power = 120,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_THRASH] =
    {
        .effect = EFFECT_PRANK,
        .split = 0,
        .power = 100,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_HEAD_SMASH] =
    {
        .effect = EFFECT_HEAD_SMASH,
        .split = 0,
        .power = 120,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_TAIL_WHIP] =
    {
        .effect = EFFECT_DEFENSE_DOWN,
        .split = 0,
        .power = 0,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_POISON_STING] =
    {
        .effect = EFFECT_POISON_HIT,
        .split = 0,
        .power = 30,
        .type = TYPE_MIASMA,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SEALING_NEEDLE] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_FAITH,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PIN_MISSILE] =
    {
        .effect = EFFECT_MULTI_HIT,
        .split = 0,
        .power = 25,
        .type = TYPE_FAITH,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_LEER] =
    {
        .effect = EFFECT_DEFENSE_DOWN,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BITE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_GROWL] =
    {
        .effect = EFFECT_ATTACK_DOWN,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ROAR] =
    {
        .effect = EFFECT_ROAR,
        .split = 0,
        .power = 0,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SING] =
    {
        .effect = EFFECT_SLEEP,
        .split = 0,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 60,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_JAMMING] =
    {
        .effect = EFFECT_CHARMING_LOOK,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SONIC_BOOM] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_BLADE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DISABLE] =
    {
        .effect = EFFECT_DISABLE,
        .split = 0,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_POISON_TEARS] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_MIASMA,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_EMBER] =
    {
        .effect = EFFECT_BURN_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FLAMETHROWER] =
    {
        .effect = EFFECT_BURN_HIT,
        .split = 0,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MIST] =
    {
        .effect = EFFECT_MIST,
        .split = 0,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_WATER_GUN] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_HYDRO_PUMP] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SURF] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 95,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_ICE_BEAM] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .split = 0,
        .power = 90,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BLIZZARD] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_ICE,
        .accuracy = 75,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PSYBEAM] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BUBBLE_BEAM] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .split = 0,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_AURORA_BEAM] =
    {
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .split = 0,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_HYPER_BEAM] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_DARK,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PECK] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_WING_ATTACK] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SUBMISSION] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 85,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_LOW_KICK] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_FAITH,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_COUNTER] =
    {
        .effect = EFFECT_COUNTER,
        .split = 0,
        .power = 1,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .flags = FLAG_MAKES_CONTACT | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SEISMIC_TOSS] =
    {
        .effect = EFFECT_LEVEL_DAMAGE,
        .split = 0,
        .power = 1,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_STRENGTH] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ABSORB] =
    {
        .effect = EFFECT_ABSORB,
        .split = 0,
        .power = 20,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MEGA_DRAIN] =
    {
        .effect = EFFECT_ABSORB,
        .split = 0,
        .power = 40,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_LEECH_SEED] =
    {
        .effect = EFFECT_LEECH_SEED,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_GROWTH] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_UP,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_RAZOR_LEAF] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 65,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SOLAR_BEAM] =
    {
        .effect = EFFECT_SOLAR_BEAM,
        .split = 0,
        .power = 120,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_POISON_POWDER] =
    {
        .effect = EFFECT_POISON,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 75,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_STUN_SPORE] =
    {
        .effect = EFFECT_PARALYZE,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 75,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SLEEP_POWDER] =
    {
        .effect = EFFECT_SLEEP,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 75,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BATTLE_CHANT] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .split = 0,
        .power = 100,
        .type = TYPE_BLADE,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_WIRE_WEB] =
    {
        .effect = EFFECT_SPEED_DOWN_2,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DARK_PULSE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FIRE_SPIN] =
    {
        .effect = EFFECT_TRAP,
        .split = 0,
        .power = 60,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_THUNDER_SHOCK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_THUNDERBOLT] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 90,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_THUNDER_WAVE] =
    {
        .effect = EFFECT_PARALYZE,
        .split = 0,
        .power = 0,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_THUNDER] =
    {
        .effect = EFFECT_THUNDER,
        .split = 0,
        .power = 120,
        .type = TYPE_WIND,
        .accuracy = 70,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ROCK_SLIDE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_EARTHQUAKE] =
    {
        .effect = EFFECT_EARTHQUAKE,
        .split = 0,
        .power = 100,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_FISSURE] =
    {
        .effect = EFFECT_OHKO,
        .split = 0,
        .power = 1,
        .type = TYPE_EARTH,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DIG] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .split = 0,
        .power = 90,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_TOXIC] =
    {
        .effect = EFFECT_TOXIC,
        .split = 0,
        .power = 0,
        .type = TYPE_MIASMA,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PSYSHOT] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MANA_BURST] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 90,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_HYPNOSIS] =
    {
        .effect = EFFECT_SLEEP,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 60,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ZEN_HEADBUTT] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_AGILITY] =
    {
        .effect = EFFECT_SPEED_UP_2,
        .split = 0,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_QUICK_ATTACK] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .split = 0,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_RAGE] =
    {
        .effect = EFFECT_MIRROR_SHOT,
        .split = 0,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 70,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_TELEPORT] =
    {
        .effect = EFFECT_TELEPORT,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_NIGHT_SHADE] =
    {
        .effect = EFFECT_LEVEL_DAMAGE,
        .split = 0,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_MIMIC] =
    {
        .effect = EFFECT_MIMIC,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
    },

    [MOVE_SCREECH] =
    {
        .effect = EFFECT_DEFENSE_DOWN_2,
        .split = 0,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SHADOW_HIT] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 70,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_RECOVER] =
    {
        .effect = EFFECT_RESTORE_HP,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_HARDEN] =
    {
        .effect = EFFECT_DEFENSE_CURL,
        .split = 0,
        .power = 0,
        .type = TYPE_BLADE,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_MINIMIZE] =
    {
        .effect = EFFECT_EVASION_UP,
        .split = 0,
        .power = 0,
        .type = TYPE_EARTH,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_SMOKESCREEN] =
    {
        .effect = EFFECT_ACCURACY_DOWN,
        .split = 0,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_CONFUSE_RAY] =
    {
        .effect = EFFECT_CONFUSE,
        .split = 0,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_WITHDRAW] =
    {
        .effect = EFFECT_MUD_SLAP,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_DEFENSE_CURL] =
    {
        .effect = EFFECT_DEFENSE_CURL,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_BARRIER] =
    {
        .effect = EFFECT_DEFENSE_UP_2,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_LIGHT_SCREEN] =
    {
        .effect = EFFECT_LIGHT_SCREEN,
        .split = 0,
        .power = 0,
        .type = TYPE_FAITH,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_HAZE] =
    {
        .effect = EFFECT_HAZE,
        .split = 0,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_REFLECT] =
    {
        .effect = EFFECT_REFLECT,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_FOCUS_ENERGY] =
    {
        .effect = EFFECT_FOCUS_ENERGY,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_GUARD] =
    {
        .effect = EFFECT_DISTURBANCE,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .flags = 0,
    },

    [MOVE_METRONOME] =
    {
        .effect = EFFECT_METRONOME,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_FALSE_SWIPE] =
    {
        .effect = EFFECT_DRAWN_LINE,
        .split = 0,
        .power = 40,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SELF_DESTRUCT] =
    {
        .effect = EFFECT_EXPLOSION,
        .split = 0,
        .power = 200,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_MIND_BOMB] =
    {
        .effect = EFFECT_LOW_KICK,
        .split = 0,
        .power = 1,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_LICK] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 30,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_TOXIC_GAS] =
    {
        .effect = EFFECT_POISON_HIT,
        .split = 0,
        .power = 65,
        .type = TYPE_MIASMA,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_POISON_BOMB] =
    {
        .effect = EFFECT_POISON_HIT,
        .split = 0,
        .power = 95,
        .type = TYPE_MIASMA,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BONE_CLUB] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_BLADE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FIRE_BLAST] =
    {
        .effect = EFFECT_BURN_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_WATERFALL] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MANA_SHIELD] =
    {
        .effect = EFFECT_MUD_SLAP,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_SWIFT] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SKULL_BASH] =
    {
        .effect = EFFECT_SKULL_BASH,
        .split = 0,
        .power = 120,
        .type = TYPE_BLADE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_FEINT] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .split = 0,
        .power = 30,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .flags = FLAG_MAKES_CONTACT | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_CONSTRICT] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 30,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_AMNESIA] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_UP_2,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_LUNA_DIAL] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 55,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SOFT_BOILED] =
    {
        .effect = EFFECT_SOFTBOILED,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_HI_JUMP_KICK] =
    {
        .effect = EFFECT_RECOIL_IF_MISS,
        .split = 0,
        .power = 110,
        .type = TYPE_DREAM,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_COERCE] =
    {
        .effect = EFFECT_SPITE,
        .split = 0,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DREAM_EATER] =
    {
        .effect = EFFECT_ABSORB,
        .split = 0,
        .power = 75,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_OMINOUS_WIND] =
    {
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .split = 0,
        .power = 70,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BARRAGE] =
    {
        .effect = EFFECT_DOUBLE_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_FAITH,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_LEECH_LIFE] =
    {
        .effect = EFFECT_ABSORB,
        .split = 0,
        .power = 40,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_LOVELY_KISS] =
    {
        .effect = EFFECT_SLEEP,
        .split = 0,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 70,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SKY_ATTACK] =
    {
        .effect = EFFECT_SKY_ATTACK,
        .split = 0,
        .power = 160,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 80,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_TRANSFORM] =
    {
        .effect = EFFECT_TRANSFORM,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_BUBBLE] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DIZZY_PUNCH] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .split = 0,
        .power = 75,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BURN_POWDER] =
    {
        .effect = EFFECT_WILL_O_WISP,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 75,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FLASH] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .split = 0,
        .power = 65,
        .type = TYPE_FAITH,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PSYWAVE] =
    {
        .effect = EFFECT_PSYWAVE,
        .split = 0,
        .power = 1,
        .type = TYPE_REASON,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SPLASH] =
    {
        .effect = EFFECT_SPLASH,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_DISPERSE] =
    {
        .effect = EFFECT_DEFENSE_UP_2,
        .split = 0,
        .power = 0,
        .type = TYPE_MIASMA,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_AQUA_JET] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .split = 0,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_EXPLOSION] =
    {
        .effect = EFFECT_EXPLOSION,
        .split = 0,
        .power = 250,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_FURY_SWIPES] =
    {
        .effect = EFFECT_MULTI_HIT,
        .split = 0,
        .power = 25,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_CHECKMAID] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 100,
        .type = TYPE_MYSTERY,
        .accuracy = 100,
        .pp = 60,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .flags = FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_REST] =
    {
        .effect = EFFECT_REST,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_ROCK_WRECKER] =
    {
        .effect = EFFECT_DEFENSE_UP_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_EARTH,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_KILLING_BITE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 100,
        .type = TYPE_BEAST,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SHARPEN] =
    {
        .effect = EFFECT_ATTACK_UP,
        .split = 0,
        .power = 0,
        .type = TYPE_BLADE,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_CONVERSION] =
    {
        .effect = EFFECT_CONVERSION,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_TRI_ATTACK] =
    {
        .effect = EFFECT_TRI_ATTACK,
        .split = 0,
        .power = 80,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_HEAT_CLAW] =
    {
        .effect = EFFECT_LOW_KICK,
        .split = 0,
        .power = 1,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SLASH] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 90,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SUBSTITUTE] =
    {
        .effect = EFFECT_SUBSTITUTE,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_STRUGGLE] =
    {
        .effect = EFFECT_RECOIL,
        .split = 0,
        .power = 50,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SKETCH] =
    {
        .effect = EFFECT_SKETCH,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_TRIPLE_KICK] =
    {
        .effect = EFFECT_TRIPLE_KICK,
        .split = 0,
        .power = 10,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_THIEF] =
    {
        .effect = EFFECT_THIEF,
        .split = 0,
        .power = 40,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SPIDER_WEB] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 50,
        .type = TYPE_NATURE,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_HEARTS_EYE] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 85,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
    },

    [MOVE_NIGHTMARE] =
    {
        .effect = EFFECT_NIGHTMARE,
        .split = 0,
        .power = 70,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FLAME_WHEEL] =
    {
        .effect = EFFECT_THAW_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SNORE] =
    {
        .effect = EFFECT_SNORE,
        .split = 0,
        .power = 80,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_CURSE] =
    {
        .effect = EFFECT_CURSE,
        .split = 0,
        .power = 0,
        .type = TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_FLAIL] =
    {
        .effect = EFFECT_FLAIL,
        .split = 0,
        .power = 1,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_CONVERSION_2] =
    {
        .effect = EFFECT_CONVERSION_2,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_AEROBLAST] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 90,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_COTTON_SPORE] =
    {
        .effect = EFFECT_SPEED_DOWN_2,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_REVERSAL] =
    {
        .effect = EFFECT_FLAIL,
        .split = 0,
        .power = 1,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SPITE] =
    {
        .effect = EFFECT_SPITE,
        .split = 0,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_POWDER_SNOW] =
    {
        .effect = EFFECT_FREEZE_HIT,
        .split = 0,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PROTECT] =
    {
        .effect = EFFECT_DRACO_METEOR,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_MACH_PUNCH] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .split = 0,
        .power = 40,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SCARY_FACE] =
    {
        .effect = EFFECT_SPEED_DOWN_2,
        .split = 0,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FAINT_ATTACK] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SWEET_KISS] =
    {
        .effect = EFFECT_CONFUSE,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BELLY_DRUM] =
    {
        .effect = EFFECT_BELLY_DRUM,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_GUNK_SHOT] =
    {
        .effect = EFFECT_POISON_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_MIASMA,
        .accuracy = 75,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MUD_SHOT] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .split = 0,
        .power = 65,
        .type = TYPE_EARTH,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BLACK_RIPPLE] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SPIKES] =
    {
        .effect = EFFECT_SPIKES,
        .split = 0,
        .power = 0,
        .type = TYPE_EARTH,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_ENERGY_BALL] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_DREAM,
        .accuracy = 75,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FORESIGHT] =
    {
        .effect = EFFECT_FORESIGHT,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DESTINY_BOND] =
    {
        .effect = EFFECT_DESTINY_BOND,
        .split = 0,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_PERISH_SONG] =
    {
        .effect = EFFECT_PERISH_SONG,
        .split = 0,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_ICY_WIND] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .split = 0,
        .power = 55,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DETECT] =
    {
        .effect = EFFECT_PROTECT,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .flags = 0,
    },

    [MOVE_BONE_RUSH] =
    {
        .effect = EFFECT_MULTI_HIT,
        .split = 0,
        .power = 25,
        .type = TYPE_EARTH,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_LOCK_ON] =
    {
        .effect = EFFECT_DARK_PULSE,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_OUTRAGE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_DARK,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SANDSTORM] =
    {
        .effect = EFFECT_SANDSTORM,
        .split = 0,
        .power = 0,
        .type = TYPE_EARTH,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_GIGA_DRAIN] =
    {
        .effect = EFFECT_ABSORB,
        .split = 0,
        .power = 75,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ENDURE] =
    {
        .effect = EFFECT_ENDURE,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .flags = 0,
    },

    [MOVE_SMILE] =
    {
        .effect = EFFECT_ATTACK_DOWN_2,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_TREMORS] =
    {
        .effect = EFFECT_TREMORS,
        .split = 0,
        .power = 40,
        .type = TYPE_EARTH,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_DRAWN_LINE] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 80,
        .type = TYPE_BLADE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SWAGGER] =
    {
        .effect = EFFECT_SWAGGER,
        .split = 0,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MILK_DRINK] =
    {
        .effect = EFFECT_SOFTBOILED,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_SNATCH_AFFECTED,
    },

    [MOVE_DISCHARGE] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FURY_CUTTER] =
    {
        .effect = EFFECT_TREMORS,
        .split = 0,
        .power = 40,
        .type = TYPE_BLADE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_STEEL_WING] =
    {
        .effect = EFFECT_DEFENSE_UP_HIT,
        .split = 0,
        .power = 75,
        .type = TYPE_BLADE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_CHARMING_LOOK] =
    {
        .effect = EFFECT_TAUNT,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED,
    },

    [MOVE_ATTRACT] =
    {
        .effect = EFFECT_ATTRACT,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SLEEP_TALK] =
    {
        .effect = EFFECT_SLEEP_TALK,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_HEAL_BELL] =
    {
        .effect = EFFECT_HEAL_BELL,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_RETURN] =
    {
        .effect = EFFECT_RETURN,
        .split = 0,
        .power = 1,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_PRANK] =
    {
        .effect = EFFECT_HEAT_CLAW,
        .split = 0,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FRUSTRATION] =
    {
        .effect = EFFECT_FRUSTRATION,
        .split = 0,
        .power = 1,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SAFEGUARD] =
    {
        .effect = EFFECT_SAFEGUARD,
        .split = 0,
        .power = 0,
        .type = TYPE_FAITH,
        .accuracy = 0,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_PAIN_SPLIT] =
    {
        .effect = EFFECT_PAIN_SPLIT,
        .split = 0,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SACRED_FIRE] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .split = 0,
        .power = 100,
        .type = TYPE_FAITH,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MAGNITUDE] =
    {
        .effect = EFFECT_MAGNITUDE,
        .split = 0,
        .power = 1,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_DYNAMIC_PUNCH] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_DREAM,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BRAVE_BIRD] =
    {
        .effect = EFFECT_HEAD_SMASH,
        .split = 0,
        .power = 120,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_LAVA_PLUME] =
    {
        .effect = EFFECT_BURN_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BATON_PASS] =
    {
        .effect = EFFECT_BATON_PASS,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_ENCORE] =
    {
        .effect = EFFECT_ENCORE,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PURSUIT] =
    {
        .effect = EFFECT_PURSUIT,
        .split = 0,
        .power = 50,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_RAPID_SPIN] =
    {
        .effect = EFFECT_RAPID_SPIN,
        .split = 0,
        .power = 40,
        .type = TYPE_MIASMA,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_NATURE_POWER] =
    {
        .effect = EFFECT_LOW_KICK,
        .split = 0,
        .power = 1,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_STEEL_FIST] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 100,
        .type = TYPE_BLADE,
        .accuracy = 80,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_METAL_CLAW] =
    {
        .effect = EFFECT_ATTACK_UP_HIT,
        .split = 0,
        .power = 75,
        .type = TYPE_BLADE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_VITAL_THROW] =
    {
        .effect = EFFECT_KNOCK_OFF,
        .split = 0,
        .power = 80,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = -1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ENERGY_LIGHT] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SYNTHESIS] =
    {
        .effect = EFFECT_SYNTHESIS,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_LUNATIC] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_BLADE,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_CHARGE_BEAM] =
    {
        .effect = EFFECT_CHARGE,
        .split = 0,
        .power = 50,
        .type = TYPE_HEART,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 70,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_CROSS_CHOP] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 100,
        .type = TYPE_DREAM,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_TWISTER] =
    {
        .effect = EFFECT_RAPID_SPIN,
        .split = 0,
        .power = 40,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_RAIN_DANCE] =
    {
        .effect = EFFECT_RAIN_DANCE,
        .split = 0,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_SUNNY_DAY] =
    {
        .effect = EFFECT_SUNNY_DAY,
        .split = 0,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_CRUNCH] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MIRROR_COAT] =
    {
        .effect = EFFECT_MIRROR_COAT,
        .split = 0,
        .power = 1,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .flags = FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PSYCH_UP] =
    {
        .effect = EFFECT_PSYCH_UP,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_EXTREME_SPEED] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .split = 0,
        .power = 80,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_ANCIENT_POWER] =
    {
        .effect = EFFECT_DEFENSE_UP_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_EARTH,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SHADOW_BALL] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 90,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PSYCHO_CUT] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 70,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_ROCK_SMASH] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 50,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_WHIRLPOOL] =
    {
        .effect = EFFECT_TRAP,
        .split = 0,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_BEAT_UP] =
    {
        .effect = EFFECT_BEAT_UP,
        .split = 0,
        .power = 10,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_FAKE_OUT] =
    {
        .effect = EFFECT_FAKE_OUT,
        .split = 0,
        .power = 40,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_PERFORMANCE] =
    {
        .effect = EFFECT_PERFORMANCE,
        .split = 0,
        .power = 100,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_NASTY_PLOT] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_UP_2,
        .split = 0,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_MIRROR_SHOT] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .split = 0,
        .power = 65,
        .type = TYPE_HEART,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MYSTIC_WATER] =
    {
        .effect = EFFECT_INGRAIN,
        .split = 0,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_HEAT_WAVE] =
    {
        .effect = EFFECT_BURN_HIT,
        .split = 0,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_HAIL] =
    {
        .effect = EFFECT_HAIL,
        .split = 0,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_TORMENT] =
    {
        .effect = EFFECT_TORMENT,
        .split = 0,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_LUCKY_CHANT] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_UP_2,
        .split = 0,
        .power = 0,
        .type = TYPE_FAITH,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_WILL_O_WISP] =
    {
        .effect = EFFECT_WILL_O_WISP,
        .split = 0,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 75,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MEMENTO] =
    {
        .effect = EFFECT_MEMENTO,
        .split = 0,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_FACADE] =
    {
        .effect = EFFECT_FACADE,
        .split = 0,
        .power = 75,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FOCUS_PUNCH] =
    {
        .effect = EFFECT_FOCUS_PUNCH,
        .split = 0,
        .power = 150,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
    },

    [MOVE_SMELLING_SALT] =
    {
        .effect = EFFECT_SMELLINGSALT,
        .split = 0,
        .power = 75,
        .type = TYPE_FAITH,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DISTURBANCE] =
    {
        .effect = EFFECT_ACCURACY_DOWN,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ROCK_BULLET] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .split = 0,
        .power = 40,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_CHARGE] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_UP,
        .split = 0,
        .power = 0,
        .type = TYPE_WIND,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_TAUNT] =
    {
        .effect = EFFECT_TAUNT,
        .split = 0,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
    },

    [MOVE_HELPING_HAND] =
    {
        .effect = EFFECT_HELPING_HAND,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 5,
        .flags = 0,
    },

    [MOVE_TRICK] =
    {
        .effect = EFFECT_TRICK,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_RECOLLECTION] =
    {
        .effect = EFFECT_TRANSFORM,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_WISH] =
    {
        .effect = EFFECT_WISH,
        .split = 0,
        .power = 0,
        .type = TYPE_FAITH,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
    },

    [MOVE_ASSIST] =
    {
        .effect = EFFECT_ASSIST,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_INGRAIN] =
    {
        .effect = EFFECT_INGRAIN,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_SUPERPOWER] =
    {
        .effect = EFFECT_SUPERPOWER,
        .split = 0,
        .power = 120,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MAGIC_COAT] =
    {
        .effect = EFFECT_MAGIC_COAT,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .flags = 0,
    },

    [MOVE_RECYCLE] =
    {
        .effect = EFFECT_RECYCLE,
        .split = 0,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = 0,
    },

    [MOVE_REVENGE] =
    {
        .effect = EFFECT_REVENGE,
        .split = 0,
        .power = 60,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -4,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_BRICK_BREAK] =
    {
        .effect = EFFECT_BRICK_BREAK,
        .split = 0,
        .power = 75,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_YAWN] =
    {
        .effect = EFFECT_YAWN,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BRAVER] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_BLADE,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ENDEAVOR] =
    {
        .effect = EFFECT_ENDEAVOR,
        .split = 0,
        .power = 1,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_ERUPTION] =
    {
        .effect = EFFECT_ERUPTION,
        .split = 0,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SKILL_SWAP] =
    {
        .effect = EFFECT_SKILL_SWAP,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_IMPRISON] =
    {
        .effect = EFFECT_IMPRISON,
        .split = 0,
        .power = 0,
        .type = TYPE_FAITH,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
    },

    [MOVE_REFRESH] =
    {
        .effect = EFFECT_REFRESH,
        .split = 0,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_SHADOW_DANCE] =
    {
        .effect = EFFECT_RAMPAGE,
        .split = 0,
        .power = 120,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SNATCH] =
    {
        .effect = EFFECT_SNATCH,
        .split = 0,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .flags = 0,
    },

    [MOVE_SECRET_POWER] =
    {
        .effect = EFFECT_SECRET_POWER,
        .split = 0,
        .power = 70,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SHADOW_DIVE] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .split = 0,
        .power = 140,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_FORCE_PALM] =
    {
        .effect = EFFECT_PARALYZE_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_FAITH,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_CAMOUFLAGE] =
    {
        .effect = EFFECT_CAMOUFLAGE,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_MANA_CHARGE] =
    {
        .effect = EFFECT_CALM_MIND,
        .split = 0,
        .power = 0,
        .type = TYPE_REASON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_LUSTER_PURGE] =
    {
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_REASON,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MIST_BALL] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_HEART,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ROOST] =
    {
        .effect = EFFECT_RESTORE_HP,
        .split = 0,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_TEETER_DANCE] =
    {
        .effect = EFFECT_TEETER_DANCE,
        .split = 0,
        .power = 0,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED,
    },

    [MOVE_BLAZE_KICK] =
    {
        .effect = EFFECT_BLAZE_KICK,
        .split = 0,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MUD_SLAP] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .split = 0,
        .power = 30,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_ICE_BALL] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 90,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_NEEDLE_ARM] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SLACK_OFF] =
    {
        .effect = EFFECT_RESTORE_HP,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_HYPER_VOICE] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 95,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_CROSS_POISON] =
    {
        .effect = EFFECT_POISON_JAB,
        .split = 0,
        .power = 70,
        .type = TYPE_MIASMA,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_CRUSH_CLAW] =
    {
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .split = 0,
        .power = 75,
        .type = TYPE_BEAST,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_BLAST_BURN] =
    {
        .effect = EFFECT_FLARE_BLITZ,
        .split = 0,
        .power = 140,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_HYDRO_CANNON] =
    {
        .effect = EFFECT_FLARE_BLITZ,
        .split = 0,
        .power = 140,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_METEOR_MASH] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_BLADE,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_ASTONISH] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 50,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_WEATHER_BALL] =
    {
        .effect = EFFECT_WEATHER_BALL,
        .split = 0,
        .power = 50,
        .type = TYPE_ILLUSION,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_AROMATHERAPY] =
    {
        .effect = EFFECT_HEAL_BELL,
        .split = 0,
        .power = 0,
        .type = TYPE_NATURE,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_FAKE_TEARS] =
    {
        .effect = EFFECT_SWALLOW,
        .split = 0,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_AIR_SLASH] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FLARE_BLITZ] =
    {
        .effect = EFFECT_HEAD_SMASH,
        .split = 0,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_DOUBLE_TEAM] =
    {
        .effect = EFFECT_EVASION_UP,
        .split = 0,
        .power = 0,
        .type = TYPE_ILLUSION,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_ROCK_TOMB] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .split = 0,
        .power = 55,
        .type = TYPE_EARTH,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SILVER_WIND] =
    {
        .effect = EFFECT_SPEED_DOWN_HIT,
        .split = 0,
        .power = 120,
        .type = TYPE_FAITH,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_BINDING_VOICE] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_BEAST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_NATURE_SOUND] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 95,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_TICKLE] =
    {
        .effect = EFFECT_TICKLE,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_DRACO_METEOR] =
    {
        .effect = EFFECT_FLARE_BLITZ,
        .split = 0,
        .power = 140,
        .type = TYPE_ILLUSION,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_AQUA_SHOWER] =
    {
        .effect = EFFECT_ERUPTION,
        .split = 0,
        .power = 150,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SIGNAL_BEAM] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .split = 0,
        .power = 90,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SHADOW_PUNCH] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_EXTRASENSORY] =
    {
        .effect = EFFECT_FLINCH_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_FAITH,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_SOAR] =
    {
        .effect = EFFECT_SOAR,
        .split = 0,
        .power = 90,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SAND_TOMB] =
    {
        .effect = EFFECT_TRAP,
        .split = 0,
        .power = 60,
        .type = TYPE_EARTH,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SHEER_COLD] =
    {
        .effect = EFFECT_OHKO,
        .split = 0,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_MUDDY_WATER] =
    {
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_BULLET_SEED] =
    {
        .effect = EFFECT_MULTI_HIT,
        .split = 0,
        .power = 25,
        .type = TYPE_NATURE,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_BLADE_FLASH] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .split = 0,
        .power = 40,
        .type = TYPE_BLADE,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_ICE_SHARD] =
    {
        .effect = EFFECT_QUICK_ATTACK,
        .split = 0,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_IRON_DEFENSE] =
    {
        .effect = EFFECT_DEFENSE_UP_2,
        .split = 0,
        .power = 0,
        .type = TYPE_BLADE,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_BLOCK] =
    {
        .effect = EFFECT_CHARMING_LOOK,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_HOWL] =
    {
        .effect = EFFECT_ATTACK_UP,
        .split = 0,
        .power = 0,
        .type = TYPE_BEAST,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_HEART_BREAK] =
    {
        .effect = EFFECT_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_FRENZY_PLANT] =
    {
        .effect = EFFECT_FLARE_BLITZ,
        .split = 0,
        .power = 140,
        .type = TYPE_NATURE,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_BULK_UP] =
    {
        .effect = EFFECT_BULK_UP,
        .split = 0,
        .power = 0,
        .type = TYPE_DREAM,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_BOUNCE] =
    {
        .effect = EFFECT_SEMI_INVULNERABLE,
        .split = 0,
        .power = 85,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_EARTH_POWER] =
    {
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .split = 0,
        .power = 90,
        .type = TYPE_EARTH,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_POISON_JAB] =
    {
        .effect = EFFECT_POISON_HIT,
        .split = 0,
        .power = 80,
        .type = TYPE_MIASMA,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_COVET] =
    {
        .effect = EFFECT_THIEF,
        .split = 0,
        .power = 40,
        .type = TYPE_HEART,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED,
    },

    [MOVE_VOLT_TACKLE] =
    {
        .effect = EFFECT_HEAD_SMASH,
        .split = 0,
        .power = 120,
        .type = TYPE_WIND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_MAGICAL_LEAF] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_NATURE,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SPLASHING] =
    {
        .effect = EFFECT_REVENGE,
        .split = 0,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -4,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_CALM_MIND] =
    {
        .effect = EFFECT_CALM_MIND,
        .split = 0,
        .power = 0,
        .type = TYPE_FAITH,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_LEAF_BLADE] =
    {
        .effect = EFFECT_HIGH_CRITICAL,
        .split = 0,
        .power = 90,
        .type = TYPE_NATURE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_TAILWIND] =
    {
        .effect = EFFECT_TAILWIND,
        .split = 0,
        .power = 0,
        .type = TYPE_WIND,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .flags = FLAG_SNATCH_AFFECTED,
    },

    [MOVE_ROCK_BLAST] =
    {
        .effect = EFFECT_MULTI_HIT,
        .split = 0,
        .power = 25,
        .type = TYPE_EARTH,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_SHOCK_WAVE] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_WIND,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_WATER_PULSE] =
    {
        .effect = EFFECT_CONFUSE_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_DECISION] =
    {
        .effect = EFFECT_ALWAYS_HIT,
        .split = 0,
        .power = 60,
        .type = TYPE_FAITH,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },

    [MOVE_PSYCHO_BOOST] =
    {
        .effect = EFFECT_FLARE_BLITZ,
        .split = 0,
        .power = 140,
        .type = TYPE_REASON,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .flags = FLAG_PROTECT_AFFECTED | FLAG_FALSE_SWIPE_AFFECTED | FLAG_KINGS_ROCK_AFFECTED,
    },
};

const struct ContestMove gContestMoves[MOVES_COUNT] =
{
    [MOVE_NONE] = {0},

    [MOVE_POUND] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_POUND,
        .comboMoves = {0},
    },

    [MOVE_KARATE_CHOP] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY},
    },

    [MOVE_KNOCK_OFF] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_POUND},
    },

    [MOVE_COMET_PUNCH] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DRAIN_PUNCH] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY, COMBO_STARTER_HEARTS_EYE},
    },

    [MOVE_PAY_DAY] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_AUDIENCE_EXCITED,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FIRE_PUNCH] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_FIRE_PUNCH,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY, COMBO_STARTER_THUNDER_PUNCH, COMBO_STARTER_ICE_PUNCH},
    },

    [MOVE_ICE_PUNCH] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_ICE_PUNCH,
        .comboMoves = {COMBO_STARTER_THUNDER_PUNCH, COMBO_STARTER_FIRE_PUNCH},
    },

    [MOVE_THUNDER_PUNCH] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_THUNDER_PUNCH,
        .comboMoves = {COMBO_STARTER_CHARGE, COMBO_STARTER_FIRE_PUNCH, COMBO_STARTER_ICE_PUNCH},
    },

    [MOVE_SCRATCH] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_SCRATCH,
        .comboMoves = {COMBO_STARTER_LEER},
    },

    [MOVE_NIGHT_SLASH] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_NIGHT_SLASH,
        .comboMoves = {0},
    },

    [MOVE_JUDGEMENT] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_NIGHT_SLASH},
    },

    [MOVE_GUST] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SWORDS_DANCE] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_SWORDS_DANCE,
        .comboMoves = {0},
    },

    [MOVE_CUT] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SWORDS_DANCE},
    },

    [MOVE_RAZOR_WIND] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_GALE] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_WHIRLWIND] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FLY] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BIND] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_NIGHT_SLASH},
    },

    [MOVE_POWER_WHIP] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_POUND},
    },

    [MOVE_VINE_WHIP] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_GROWTH},
    },

    [MOVE_STOMP] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,{0, COMBO_STARTER_LEER},
    },

    [MOVE_DOUBLE_KICK] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_GIGA_IMPACT] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY, COMBO_STARTER_HEARTS_EYE},
    },

    [MOVE_JUMP_KICK] =
    {
        .effect = CONTEST_EFFECT_USER_MORE_EASILY_STARTLED,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_HEARTS_EYE},
    },

    [MOVE_ROLLING_KICK] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SAND_ATTACK] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_SAND_ATTACK,
        .comboMoves = {COMBO_STARTER_MUD_SHOT, COMBO_STARTER_SANDSTORM},
    },

    [MOVE_HEADBUTT] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY},
    },

    [MOVE_KNIFE_THROW] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_KNIFE_THROW,
        .comboMoves = {COMBO_STARTER_LEER},
    },

    [MOVE_MAGIC_KNIFE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_KNIFE_THROW, COMBO_STARTER_PECK},
    },

    [MOVE_SCULPTURE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_KNIFE_THROW},
    },

    [MOVE_TACKLE] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_DEFENSE_CURL, COMBO_STARTER_LEER, COMBO_STARTER_HARDEN},
    },

    [MOVE_BODY_SLAM] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_WRAP] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DOUBLE_EDGE] =
    {
        .effect = CONTEST_EFFECT_USER_MORE_EASILY_STARTLED,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY, COMBO_STARTER_HARDEN},
    },

    [MOVE_THRASH] =
    {
        .effect = CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAGE},
    },

    [MOVE_HEAD_SMASH] =
    {
        .effect = CONTEST_EFFECT_USER_MORE_EASILY_STARTLED,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY, COMBO_STARTER_HARDEN},
    },

    [MOVE_TAIL_WHIP] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SMILE},
    },

    [MOVE_POISON_STING] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SEALING_NEEDLE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_PIN_MISSILE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_LEER] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_LEER,
        .comboMoves = {COMBO_STARTER_RAGE, COMBO_STARTER_SCARY_FACE},
    },

    [MOVE_BITE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_LEER, COMBO_STARTER_SCARY_FACE},
    },

    [MOVE_GROWL] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SMILE},
    },

    [MOVE_ROAR] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SING] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_SING,
        .comboMoves = {0},
    },

    [MOVE_JAMMING] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SONIC_BOOM] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DISABLE] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_POISON_TEARS] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_EMBER] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_FLAMETHROWER] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_MIST] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_WATER_GUN] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE, COMBO_STARTER_SPLASHING, COMBO_STARTER_MUD_SLAP},
    },

    [MOVE_HYDRO_PUMP] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_SURF] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_SURF,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE, COMBO_STARTER_SHADOW_DIVE},
    },

    [MOVE_ICE_BEAM] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BLIZZARD] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_POWDER_SNOW, COMBO_STARTER_HAIL},
    },

    [MOVE_PSYBEAM] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CALM_MIND},
    },

    [MOVE_BUBBLE_BEAM] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_AURORA_BEAM] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_HYPER_BEAM] =
    {
        .effect = CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_PECK] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_PECK,
        .comboMoves = {0},
    },

    [MOVE_WING_ATTACK] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_PECK},
    },

    [MOVE_SUBMISSION] =
    {
        .effect = CONTEST_EFFECT_USER_MORE_EASILY_STARTLED,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_HEARTS_EYE},
    },

    [MOVE_LOW_KICK] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_COUNTER] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_TAUNT},
    },

    [MOVE_SEISMIC_TOSS] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FAKE_OUT},
    },

    [MOVE_STRENGTH] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_ABSORB] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_GROWTH},
    },

    [MOVE_MEGA_DRAIN] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_GROWTH},
    },

    [MOVE_LEECH_SEED] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_GROWTH] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_GROWTH,
        .comboMoves = {0},
    },

    [MOVE_RAZOR_LEAF] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_GROWTH},
    },

    [MOVE_SOLAR_BEAM] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY, COMBO_STARTER_GROWTH},
    },

    [MOVE_POISON_POWDER] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_NATURE_POWER},
    },

    [MOVE_STUN_SPORE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_NATURE_POWER},
    },

    [MOVE_SLEEP_POWDER] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_NATURE_POWER},
    },

    [MOVE_BATTLE_CHANT] =
    {
        .effect = CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_GROWTH},
    },

    [MOVE_WIRE_WEB] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_WIRE_WEB,
        .comboMoves = {0},
    },

    [MOVE_DARK_PULSE] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_LATER,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_DARK_PULSE,
        .comboMoves = {COMBO_STARTER_LAVA_PLUME, COMBO_STARTER_TAILWIND},
    },

    [MOVE_FIRE_SPIN] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_THUNDER_SHOCK] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CHARGE},
    },

    [MOVE_THUNDERBOLT] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CHARGE},
    },

    [MOVE_THUNDER_WAVE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CHARGE},
    },

    [MOVE_THUNDER] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CHARGE, COMBO_STARTER_RAIN_DANCE, COMBO_STARTER_LOCK_ON},
    },

    [MOVE_ROCK_SLIDE] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_ROCK_SLIDE,
        .comboMoves = {0},
    },

    [MOVE_EARTHQUAKE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_EARTHQUAKE,
        .comboMoves = {0},
    },

    [MOVE_FISSURE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_EARTHQUAKE},
    },

    [MOVE_DIG] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_TOXIC] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_PSYSHOT] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_CONFUSION,
        .comboMoves = {COMBO_STARTER_PSYCHIC, COMBO_STARTER_LUNA_DIAL, COMBO_STARTER_CALM_MIND},
    },

    [MOVE_MANA_BURST] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_PSYCHIC,
        .comboMoves = {COMBO_STARTER_LUNA_DIAL, COMBO_STARTER_CONFUSION, COMBO_STARTER_CALM_MIND},
    },

    [MOVE_HYPNOSIS] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_HYPNOSIS,
        .comboMoves = {0},
    },

    [MOVE_ZEN_HEADBUTT] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CALM_MIND},
    },

    [MOVE_AGILITY] =
    {
        .effect = CONTEST_EFFECT_NEXT_APPEAL_EARLIER,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SHADOW_HIT},
    },

    [MOVE_QUICK_ATTACK] =
    {
        .effect = CONTEST_EFFECT_NEXT_APPEAL_EARLIER,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SHADOW_HIT},
    },

    [MOVE_RAGE] =
    {
        .effect = CONTEST_EFFECT_REPETITION_NOT_BORING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_RAGE,
        .comboMoves = {0},
    },

    [MOVE_TELEPORT] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SHADOW_HIT, COMBO_STARTER_PSYCHIC, COMBO_STARTER_LUNA_DIAL, COMBO_STARTER_CONFUSION},
    },

    [MOVE_NIGHT_SHADE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_MIMIC] =
    {
        .effect = CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SCREECH] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SHADOW_HIT] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_SHADOW_HIT,
        .comboMoves = {0},
    },

    [MOVE_RECOVER] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_HARDEN] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_HARDEN,
        .comboMoves = {0},
    },

    [MOVE_MINIMIZE] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SMOKESCREEN] =
    {
        .effect = CONTEST_EFFECT_SHIFT_JUDGE_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_TOXIC_GAS},
    },

    [MOVE_CONFUSE_RAY] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_WITHDRAW] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_DEFENSE_CURL] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_DEFENSE_CURL,
        .comboMoves = {0},
    },

    [MOVE_BARRIER] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_LIGHT_SCREEN] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CALM_MIND},
    },

    [MOVE_HAZE] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_REFLECT] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CALM_MIND},
    },

    [MOVE_FOCUS_ENERGY] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_FOCUS_ENERGY,
        .comboMoves = {0},
    },

    [MOVE_GUARD] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_METRONOME] =
    {
        .effect = CONTEST_EFFECT_REPETITION_NOT_BORING,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FALSE_SWIPE] =
    {
        .effect = CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SELF_DESTRUCT] =
    {
        .effect = CONTEST_EFFECT_GREAT_APPEAL_BUT_NO_MORE_MOVES,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_MIND_BOMB] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SOFT_BOILED},
    },

    [MOVE_LICK] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_TOXIC_GAS] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_TOXIC_GAS,
        .comboMoves = {0},
    },

    [MOVE_POISON_BOMB] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_POISON_BOMB,
        .comboMoves = {COMBO_STARTER_GUNK_SHOT},
    },

    [MOVE_BONE_CLUB] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_BONE_CLUB,
        .comboMoves = {COMBO_STARTER_CHECKMAID, COMBO_STARTER_BONE_RUSH},
    },

    [MOVE_FIRE_BLAST] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_WATERFALL] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_MANA_SHIELD] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_SWIFT] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_FIRST,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SKULL_BASH] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FEINT] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_CONSTRICT] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_AMNESIA] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_LUNA_DIAL] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_LUNA_DIAL,
        .comboMoves = {COMBO_STARTER_PSYCHIC, COMBO_STARTER_CONFUSION},
    },

    [MOVE_SOFT_BOILED] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_SOFT_BOILED,
        .comboMoves = {0},
    },

    [MOVE_HI_JUMP_KICK] =
    {
        .effect = CONTEST_EFFECT_USER_MORE_EASILY_STARTLED,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_HEARTS_EYE},
    },

    [MOVE_COERCE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_LEER},
    },

    [MOVE_DREAM_EATER] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_HYPNOSIS, COMBO_STARTER_CALM_MIND},
    },

    [MOVE_OMINOUS_WIND] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BARRAGE] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_LEECH_LIFE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_LOVELY_KISS] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SKY_ATTACK] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_TRANSFORM] =
    {
        .effect = CONTEST_EFFECT_REPETITION_NOT_BORING,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BUBBLE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_DIZZY_PUNCH] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BURN_POWDER] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FLASH] =
    {
        .effect = CONTEST_EFFECT_SHIFT_JUDGE_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_PSYWAVE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CALM_MIND},
    },

    [MOVE_SPLASH] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DISPERSE] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_AQUA_JET] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE, COMBO_STARTER_SWORDS_DANCE},
    },

    [MOVE_EXPLOSION] =
    {
        .effect = CONTEST_EFFECT_GREAT_APPEAL_BUT_NO_MORE_MOVES,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FURY_SWIPES] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SCRATCH},
    },

    [MOVE_CHECKMAID] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_CHECKMAID,
        .comboMoves = {COMBO_STARTER_BONE_CLUB, COMBO_STARTER_BONE_RUSH},
    },

    [MOVE_REST] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_REST,
        .comboMoves = {COMBO_STARTER_BELLY_DRUM, COMBO_STARTER_SMILE, COMBO_STARTER_YAWN},
    },

    [MOVE_ROCK_WRECKER] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_ROCK_SLIDE},
    },

    [MOVE_KILLING_BITE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SHARPEN] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_CONVERSION] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_TRI_ATTACK] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_LOCK_ON},
    },

    [MOVE_HEAT_CLAW] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SCARY_FACE},
    },

    [MOVE_SLASH] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SWORDS_DANCE, COMBO_STARTER_SCRATCH},
    },

    [MOVE_SUBSTITUTE] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_STRUGGLE] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SKETCH] =
    {
        .effect = CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_TRIPLE_KICK] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY},
    },

    [MOVE_THIEF] =
    {
        .effect = CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONES,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SPIDER_WEB] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_WIRE_WEB},
    },

    [MOVE_HEARTS_EYE] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_HEARTS_EYE,
        .comboMoves = {0},
    },

    [MOVE_NIGHTMARE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_HYPNOSIS},
    },

    [MOVE_FLAME_WHEEL] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_SNORE] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_REST},
    },

    [MOVE_CURSE] =
    {
        .effect = CONTEST_EFFECT_NEXT_APPEAL_LATER,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_CURSE,
        .comboMoves = {0},
    },

    [MOVE_FLAIL] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_LATER,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_ENDURE},
    },

    [MOVE_CONVERSION_2] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_AEROBLAST] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_COTTON_SPORE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_REVERSAL] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_ENDURE},
    },

    [MOVE_SPITE] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_LATER,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CURSE},
    },

    [MOVE_POWDER_SNOW] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_POWDER_SNOW,
        .comboMoves = {COMBO_STARTER_HAIL},
    },

    [MOVE_PROTECT] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_HARDEN},
    },

    [MOVE_MACH_PUNCH] =
    {
        .effect = CONTEST_EFFECT_NEXT_APPEAL_EARLIER,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SCARY_FACE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_SCARY_FACE,
        .comboMoves = {COMBO_STARTER_RAGE, COMBO_STARTER_LEER},
    },

    [MOVE_FAINT_ATTACK] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_FIRST,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FAKE_OUT, COMBO_STARTER_LEER, COMBO_STARTER_POUND},
    },

    [MOVE_SWEET_KISS] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SMILE},
    },

    [MOVE_BELLY_DRUM] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_BELLY_DRUM,
        .comboMoves = {0},
    },

    [MOVE_GUNK_SHOT] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_GUNK_SHOT,
        .comboMoves = {COMBO_STARTER_POISON_BOMB},
    },

    [MOVE_MUD_SHOT] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_MUD_SHOT,
        .comboMoves = {COMBO_STARTER_SAND_ATTACK, COMBO_STARTER_MUD_SLAP, COMBO_STARTER_SANDSTORM},
    },

    [MOVE_BLACK_RIPPLE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE, COMBO_STARTER_LOCK_ON},
    },

    [MOVE_SPIKES] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_ENERGY_BALL] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_LOCK_ON},
    },

    [MOVE_FORESIGHT] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DESTINY_BOND] =
    {
        .effect = CONTEST_EFFECT_GREAT_APPEAL_BUT_NO_MORE_MOVES,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CHARMING_LOOK, COMBO_STARTER_CURSE, COMBO_STARTER_ENDURE},
    },

    [MOVE_PERISH_SONG] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CHARMING_LOOK, COMBO_STARTER_SING},
    },

    [MOVE_ICY_WIND] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DETECT] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_TAUNT},
    },

    [MOVE_BONE_RUSH] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_BONE_RUSH,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY, COMBO_STARTER_BONE_CLUB, COMBO_STARTER_CHECKMAID},
    },

    [MOVE_LOCK_ON] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_LOCK_ON,
        .comboMoves = {0},
    },

    [MOVE_OUTRAGE] =
    {
        .effect = CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SANDSTORM] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_SANDSTORM,
        .comboMoves = {0},
    },

    [MOVE_GIGA_DRAIN] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_GROWTH},
    },

    [MOVE_ENDURE] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_ENDURE,
        .comboMoves = {0},
    },

    [MOVE_SMILE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_SMILE,
        .comboMoves = {0},
    },

    [MOVE_TREMORS] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_DEFENSE_CURL, COMBO_STARTER_HARDEN},
    },

    [MOVE_DRAWN_LINE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SWORDS_DANCE},
    },

    [MOVE_SWAGGER] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_FIRST,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_MILK_DRINK] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DISCHARGE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CHARGE},
    },

    [MOVE_FURY_CUTTER] =
    {
        .effect = CONTEST_EFFECT_REPETITION_NOT_BORING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SWORDS_DANCE},
    },

    [MOVE_STEEL_WING] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_CHARMING_LOOK] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_CHARMING_LOOK,
        .comboMoves = {COMBO_STARTER_CURSE},
    },

    [MOVE_ATTRACT] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SLEEP_TALK] =
    {
        .effect = CONTEST_EFFECT_REPETITION_NOT_BORING,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_REST},
    },

    [MOVE_HEAL_BELL] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_RETURN] =
    {
        .effect = CONTEST_EFFECT_EXCITE_AUDIENCE_IN_ANY_CONTEST,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_PRANK] =
    {
        .effect = CONTEST_EFFECT_REPETITION_NOT_BORING,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FRUSTRATION] =
    {
        .effect = CONTEST_EFFECT_EXCITE_AUDIENCE_IN_ANY_CONTEST,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SAFEGUARD] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_PAIN_SPLIT] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_ENDURE},
    },

    [MOVE_SACRED_FIRE] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_MAGNITUDE] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_AUDIENCE_EXCITED,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DYNAMIC_PUNCH] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY, COMBO_STARTER_HEARTS_EYE},
    },

    [MOVE_BRAVE_BIRD] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_LAVA_PLUME] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_LAVA_PLUME,
        .comboMoves = {COMBO_STARTER_DARK_PULSE, COMBO_STARTER_TAILWIND},
    },

    [MOVE_BATON_PASS] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_ENCORE] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_PURSUIT] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_RAPID_SPIN] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_NATURE_POWER] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_NATURE_POWER,
        .comboMoves = {0},
    },

    [MOVE_STEEL_FIST] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_METAL_CLAW] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_BINDING_VOICE},
    },

    [MOVE_VITAL_THROW] =
    {
        .effect = CONTEST_EFFECT_NEXT_APPEAL_LATER,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FAKE_OUT},
    },

    [MOVE_ENERGY_LIGHT] =
    {
        .effect = CONTEST_EFFECT_QUALITY_DEPENDS_ON_TIMING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_SYNTHESIS] =
    {
        .effect = CONTEST_EFFECT_QUALITY_DEPENDS_ON_TIMING,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_LUNATIC] =
    {
        .effect = CONTEST_EFFECT_QUALITY_DEPENDS_ON_TIMING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_CHARGE_BEAM] =
    {
        .effect = CONTEST_EFFECT_REPETITION_NOT_BORING,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_CROSS_CHOP] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY},
    },

    [MOVE_TWISTER] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_RAIN_DANCE] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_AUDIENCE_EXCITED,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_RAIN_DANCE,
        .comboMoves = {0},
    },

    [MOVE_SUNNY_DAY] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_AUDIENCE_EXCITED,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_SUNNY_DAY,
        .comboMoves = {0},
    },

    [MOVE_CRUNCH] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SCARY_FACE},
    },

    [MOVE_MIRROR_COAT] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_TAUNT},
    },

    [MOVE_PSYCH_UP] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_EXTREME_SPEED] =
    {
        .effect = CONTEST_EFFECT_NEXT_APPEAL_EARLIER,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_ANCIENT_POWER] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SHADOW_BALL] =
    {
        .effect = CONTEST_EFFECT_SHIFT_JUDGE_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_PSYCHO_CUT] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_PSYCHIC, COMBO_STARTER_LUNA_DIAL, COMBO_STARTER_CONFUSION, COMBO_STARTER_CALM_MIND},
    },

    [MOVE_ROCK_SMASH] =
    {
        .effect = CONTEST_EFFECT_BETTER_WITH_GOOD_CONDITION,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_WHIRLPOOL] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_BEAT_UP] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FAKE_OUT] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_FAKE_OUT,
        .comboMoves = {0},
    },

    [MOVE_PERFORMANCE] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_NASTY_PLOT] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = COMBO_STARTER_NASTY_PLOT,
        .comboMoves = {0},
    },

    [MOVE_MIRROR_SHOT] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_NASTY_PLOT},
    },

    [MOVE_MYSTIC_WATER] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_NASTY_PLOT},
    },

    [MOVE_HEAT_WAVE] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_HAIL] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_HAIL,
        .comboMoves = {0},
    },

    [MOVE_TORMENT] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_LUCKY_CHANT] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SMILE},
    },

    [MOVE_WILL_O_WISP] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_MEMENTO] =
    {
        .effect = CONTEST_EFFECT_GREAT_APPEAL_BUT_NO_MORE_MOVES,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FACADE] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FOCUS_PUNCH] =
    {
        .effect = CONTEST_EFFECT_NEXT_APPEAL_LATER,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY},
    },

    [MOVE_SMELLING_SALT] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DISTURBANCE] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_ROCK_BULLET] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_AUDIENCE_EXCITED,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_CHARGE] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_CHARGE,
        .comboMoves = {0},
    },

    [MOVE_TAUNT] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_TAUNT,
        .comboMoves = {0},
    },

    [MOVE_HELPING_HAND] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_TRICK] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_RECOLLECTION] =
    {
        .effect = CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONES,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_WISH] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_ASSIST] =
    {
        .effect = CONTEST_EFFECT_QUALITY_DEPENDS_ON_TIMING,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_INGRAIN] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SUPERPOWER] =
    {
        .effect = CONTEST_EFFECT_USER_MORE_EASILY_STARTLED,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_LOCK_ON},
    },

    [MOVE_MAGIC_COAT] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_RECYCLE] =
    {
        .effect = CONTEST_EFFECT_REPETITION_NOT_BORING,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_REVENGE] =
    {
        .effect = CONTEST_EFFECT_NEXT_APPEAL_LATER,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BRICK_BREAK] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY},
    },

    [MOVE_YAWN] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_YAWN,
        .comboMoves = {0},
    },

    [MOVE_BRAVER] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FAKE_OUT},
    },

    [MOVE_ENDEAVOR] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_ENDURE},
    },

    [MOVE_ERUPTION] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_LATER,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_ENDURE, COMBO_STARTER_EARTHQUAKE, COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_SKILL_SWAP] =
    {
        .effect = CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONES,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_IMPRISON] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_REFRESH] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SPLASHING, COMBO_STARTER_SING},
    },

    [MOVE_SHADOW_DANCE] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_LATER,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CURSE},
    },

    [MOVE_SNATCH] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SECRET_POWER] =
    {
        .effect = CONTEST_EFFECT_BETTER_WITH_GOOD_CONDITION,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SHADOW_DIVE] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = COMBO_STARTER_SHADOW_DIVE,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE, COMBO_STARTER_SURF},
    },

    [MOVE_FORCE_PALM] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY, COMBO_STARTER_FAKE_OUT},
    },

    [MOVE_CAMOUFLAGE] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_MANA_CHARGE] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_LUSTER_PURGE] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CALM_MIND},
    },

    [MOVE_MIST_BALL] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CALM_MIND},
    },

    [MOVE_ROOST] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_TEETER_DANCE] =
    {
        .effect = CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BLAZE_KICK] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_MUD_SLAP] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_MUD_SLAP,
        .comboMoves = {COMBO_STARTER_MUD_SHOT, COMBO_STARTER_SPLASHING},
    },

    [MOVE_ICE_BALL] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_NEEDLE_ARM] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SLACK_OFF] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_LATER,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_YAWN},
    },

    [MOVE_HYPER_VOICE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_CROSS_POISON] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_CRUSH_CLAW] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SWORDS_DANCE},
    },

    [MOVE_BLAST_BURN] =
    {
        .effect = CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_HYDRO_CANNON] =
    {
        .effect = CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_METEOR_MASH] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_ASTONISH] =
    {
        .effect = CONTEST_EFFECT_STARTLE_PREV_MON,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_WEATHER_BALL] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE, COMBO_STARTER_SUNNY_DAY, COMBO_STARTER_HAIL, COMBO_STARTER_SANDSTORM},
    },

    [MOVE_AROMATHERAPY] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FAKE_TEARS] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_LAST,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_AIR_SLASH] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_FLARE_BLITZ] =
    {
        .effect = CONTEST_EFFECT_USER_MORE_EASILY_STARTLED,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SUNNY_DAY},
    },

    [MOVE_DOUBLE_TEAM] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_ROCK_TOMB] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_ROCK_SLIDE},
    },

    [MOVE_SILVER_WIND] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BINDING_VOICE] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_BINDING_VOICE,
        .comboMoves = {0},
    },

    [MOVE_NATURE_SOUND] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_TICKLE] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_DRACO_METEOR] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_AQUA_SHOWER] =
    {
        .effect = CONTEST_EFFECT_BETTER_WHEN_LATER,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_SIGNAL_BEAM] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SHADOW_PUNCH] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_FIRST,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_EXTRASENSORY] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SOAR] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_FOCUS_ENERGY},
    },

    [MOVE_SAND_TOMB] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_SANDSTORM},
    },

    [MOVE_SHEER_COLD] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_MUDDY_WATER] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_BULLET_SEED] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_GROWTH},
    },

    [MOVE_BLADE_FLASH] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_FIRST,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_ICE_SHARD] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_IRON_DEFENSE] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BLOCK] =
    {
        .effect = CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_HOWL] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_HEART_BREAK] =
    {
        .effect = CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_LAVA_PLUME, COMBO_STARTER_DARK_PULSE, COMBO_STARTER_TAILWIND},
    },

    [MOVE_FRENZY_PLANT] =
    {
        .effect = CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_GROWTH},
    },

    [MOVE_BULK_UP] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_BOUNCE] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_EARTH_POWER] =
    {
        .effect = CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_POISON_JAB] =
    {
        .effect = CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_COVET] =
    {
        .effect = CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONES,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_VOLT_TACKLE] =
    {
        .effect = CONTEST_EFFECT_USER_MORE_EASILY_STARTLED,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CHARGE},
    },

    [MOVE_MAGICAL_LEAF] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_FIRST,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_GROWTH},
    },

    [MOVE_SPLASHING] =
    {
        .effect = CONTEST_EFFECT_HIGHLY_APPEALING,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .comboStarterId = COMBO_STARTER_SPLASHING,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE, COMBO_STARTER_MUD_SLAP},
    },

    [MOVE_CALM_MIND] =
    {
        .effect = CONTEST_EFFECT_AVOID_STARTLE_ONCE,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = COMBO_STARTER_CALM_MIND,
        .comboMoves = {0},
    },

    [MOVE_LEAF_BLADE] =
    {
        .effect = CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_TAILWIND] =
    {
        .effect = CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = COMBO_STARTER_TAILWIND,
        .comboMoves = {COMBO_STARTER_DARK_PULSE, COMBO_STARTER_LAVA_PLUME},
    },

    [MOVE_ROCK_BLAST] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_SAME_TYPE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_SHOCK_WAVE] =
    {
        .effect = CONTEST_EFFECT_BETTER_IF_FIRST,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CHARGE},
    },

    [MOVE_WATER_PULSE] =
    {
        .effect = CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_RAIN_DANCE},
    },

    [MOVE_DECISION] =
    {
        .effect = CONTEST_EFFECT_DONT_EXCITE_AUDIENCE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .comboStarterId = 0,
        .comboMoves = {0},
    },

    [MOVE_PSYCHO_BOOST] =
    {
        .effect = CONTEST_EFFECT_USER_MORE_EASILY_STARTLED,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .comboStarterId = 0,
        .comboMoves = {COMBO_STARTER_CALM_MIND},
    },
};

const struct ContestEffect gContestEffects[] =
{
    [CONTEST_EFFECT_HIGHLY_APPEALING] =
    {
        .effectType = CONTEST_EFFECT_TYPE_APPEAL,
        .appeal = 40,
        .jam = 0,
    },
    [CONTEST_EFFECT_USER_MORE_EASILY_STARTLED] =
    {
        .effectType = CONTEST_EFFECT_TYPE_APPEAL,
        .appeal = 60,
        .jam = 0,
    },
    [CONTEST_EFFECT_GREAT_APPEAL_BUT_NO_MORE_MOVES] =
    {
        .effectType = CONTEST_EFFECT_TYPE_APPEAL,
        .appeal = 80,
        .jam = 0,
    },
    [CONTEST_EFFECT_REPETITION_NOT_BORING] =
    {
        .effectType = CONTEST_EFFECT_TYPE_APPEAL,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_AVOID_STARTLE_ONCE] =
    {
        .effectType = CONTEST_EFFECT_TYPE_AVOID_STARTLE,
        .appeal = 20,
        .jam = 0,
    },
    [CONTEST_EFFECT_AVOID_STARTLE] =
    {
        .effectType = CONTEST_EFFECT_TYPE_AVOID_STARTLE,
        .appeal = 10,
        .jam = 0,
    },
    [CONTEST_EFFECT_AVOID_STARTLE_SLIGHTLY] =
    {
        .effectType = CONTEST_EFFECT_TYPE_AVOID_STARTLE,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_USER_LESS_EASILY_STARTLED] =
    {
        .effectType = CONTEST_EFFECT_TYPE_AVOID_STARTLE,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_STARTLE_FRONT_MON] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MON,
        .appeal = 30,
        .jam = 20,
    },
    [CONTEST_EFFECT_SLIGHTLY_STARTLE_PREV_MONS] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 30,
        .jam = 10,
    },
    [CONTEST_EFFECT_STARTLE_PREV_MON] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MON,
        .appeal = 20,
        .jam = 30,
    },
    [CONTEST_EFFECT_STARTLE_PREV_MONS] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 20,
    },
    [CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MON,
        .appeal = 10,
        .jam = 40,
    },
    [CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 10,
        .jam = 30,
    },
    [CONTEST_EFFECT_STARTLE_PREV_MON_2] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MON,
        .appeal = 30,
        .jam = 20,
    },
    [CONTEST_EFFECT_STARTLE_PREV_MONS_2] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 30,
        .jam = 10,
    },
    [CONTEST_EFFECT_SHIFT_JUDGE_ATTENTION] =
    {
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
    },
    [CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 40,
        .jam = 40,
    },
    [CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
    },
    [CONTEST_EFFECT_STARTLE_MONS_COOL_APPEAL] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
    },
    [CONTEST_EFFECT_STARTLE_MONS_BEAUTY_APPEAL] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
    },
    [CONTEST_EFFECT_STARTLE_MONS_CUTE_APPEAL] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
    },
    [CONTEST_EFFECT_STARTLE_MONS_SMART_APPEAL] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
    },
    [CONTEST_EFFECT_STARTLE_MONS_TOUGH_APPEAL] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
    },
    [CONTEST_EFFECT_MAKE_FOLLOWING_MON_NERVOUS] =
    {
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 20,
        .jam = 0,
    },
    [CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS] =
    {
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 20,
        .jam = 0,
    },
    [CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS] =
    {
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_BADLY_STARTLES_MONS_IN_GOOD_CONDITION] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 30,
        .jam = 10,
    },
    [CONTEST_EFFECT_BETTER_IF_FIRST] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 20,
        .jam = 0,
    },
    [CONTEST_EFFECT_BETTER_IF_LAST] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 20,
        .jam = 0,
    },
    [CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONES] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
    },
    [CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONE] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
    },
    [CONTEST_EFFECT_BETTER_WHEN_LATER] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
    },
    [CONTEST_EFFECT_QUALITY_DEPENDS_ON_TIMING] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
    },
    [CONTEST_EFFECT_BETTER_IF_SAME_TYPE] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 20,
        .jam = 0,
    },
    [CONTEST_EFFECT_BETTER_IF_DIFF_TYPE] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 20,
        .jam = 0,
    },
    [CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
    },
    [CONTEST_EFFECT_BETTER_WITH_GOOD_CONDITION] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
    },
    [CONTEST_EFFECT_NEXT_APPEAL_EARLIER] =
    {
        .effectType = CONTEST_EFFECT_TYPE_TURN_ORDER,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_NEXT_APPEAL_LATER] =
    {
        .effectType = CONTEST_EFFECT_TYPE_TURN_ORDER,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_MAKE_SCRAMBLING_TURN_ORDER_EASIER] =
    {
        .effectType = CONTEST_EFFECT_TYPE_TURN_ORDER,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER] =
    {
        .effectType = CONTEST_EFFECT_TYPE_TURN_ORDER,
        .appeal = 30,
        .jam = 0,
    },
    [CONTEST_EFFECT_EXCITE_AUDIENCE_IN_ANY_CONTEST] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
    },
    [CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS] =
    {
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
    },
    [CONTEST_EFFECT_BETTER_WHEN_AUDIENCE_EXCITED] =
    {
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
    },
    [CONTEST_EFFECT_DONT_EXCITE_AUDIENCE] =
    {
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 30,
        .jam = 0,
    },
};

// A lookup table with TRUE for each combo starter ID and FALSE for ID 0,
// which means "not a combo starter move".
const bool8 gComboStarterLookupTable[] =
{
    FALSE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE,
    TRUE
};

void (*const gContestEffectFuncs[])(void) =
{
    ContestEffect_HighlyAppealing,
    ContestEffect_UserMoreEasilyStartled,
    ContestEffect_GreatAppealButNoMoreMoves,
    ContestEffect_RepetitionNotBoring,
    ContestEffect_AvoidStartleOnce,
    ContestEffect_AvoidStartle,
    ContestEffect_AvoidStartleSlightly,
    ContestEffect_UserLessEasilyStartled,
    ContestEffect_StartleFrontMon,
    ContestEffect_StartlePrevMons,
    ContestEffect_StartleFrontMon,
    ContestEffect_StartlePrevMons,
    ContestEffect_StartleFrontMon,
    ContestEffect_StartlePrevMons,
    ContestEffect_StartlePrevMon2,
    ContestEffect_StartlePrevMons2,
    ContestEffect_ShiftJudgeAttention,
    ContestEffect_StartleMonWithJudgesAttention,
    ContestEffect_JamsOthersButMissOneTurn,
    ContestEffect_StartleMonsSameTypeAppeal,
    ContestEffect_StartleMonsCoolAppeal,
    ContestEffect_StartleMonsBeautyAppeal,
    ContestEffect_StartleMonsCuteAppeal,
    ContestEffect_StartleMonsSmartAppeal,
    ContestEffect_StartleMonsToughAppeal,
    ContestEffect_MakeFollowingMonNervous,
    ContestEffect_MakeFollowingMonsNervous,
    ContestEffect_WorsenConditionOfPrevMons,
    ContestEffect_BadlyStartlesMonsInGoodCondition,
    ContestEffect_BetterIfFirst,
    ContestEffect_BetterIfLast,
    ContestEffect_AppealAsGoodAsPrevOnes,
    ContestEffect_AppealAsGoodAsPrevOne,
    ContestEffect_BetterWhenLater,
    ContestEffect_QualityDependsOnTiming,
    ContestEffect_BetterIfSameType,
    ContestEffect_BetterIfDiffType,
    ContestEffect_AffectedByPrevAppeal,
    ContestEffect_ImproveConditionPreventNervousness,
    ContestEffect_BetterWithGoodCondition,
    ContestEffect_NextAppealEarlier,
    ContestEffect_NextAppealLater,
    ContestEffect_MakeScramblingTurnOrderEasier,
    ContestEffect_ScrambleNextTurnOrder,
    ContestEffect_ExciteAudienceInAnyContest,
    ContestEffect_BadlyStartleMonsWithGoodAppeals,
    ContestEffect_BetterWhenAudienceExcited,
    ContestEffect_DontExciteAudience,
};

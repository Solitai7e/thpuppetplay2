const u32 *const gDecorIconTable[][2] =
{
    [DECOR_NONE]            = {gItemIcon_QuestionMark, gItemIconPalette_QuestionMark},
    [DECOR_SMALL_DESK]      = {NULL, NULL},
    [DECOR_POKEMON_DESK]    = {NULL, NULL},
    [DECOR_HEAVY_DESK]      = {gDecorIcon_HeavyDesk, gDecorIconPalette_HeavyDesk},
    [DECOR_RAGGED_DESK]     = {gDecorIcon_RaggedDesk, gDecorIconPalette_RaggedDesk},
    [DECOR_COMFORT_DESK]    = {gDecorIcon_ComfortDesk, gDecorIconPalette_ComfortDesk},
    [DECOR_PRETTY_DESK]     = {gDecorIcon_PrettyDesk, gDecorIconPalette_PrettyDesk},
    [DECOR_BRICK_DESK]      = {gDecorIcon_BrickDesk, gDecorIconPalette_BrickDesk},
    [DECOR_CAMP_DESK]       = {gDecorIcon_CampDesk, gDecorIconPalette_CampDesk},
    [DECOR_HARD_DESK]       = {gDecorIcon_HardDesk, gDecorIconPalette_HardDesk},
    [DECOR_SMALL_CHAIR]     = {NULL, NULL},
    [DECOR_POKEMON_CHAIR]   = {NULL, NULL},
    [DECOR_HEAVY_CHAIR]     = {NULL, NULL},
    [DECOR_PRETTY_CHAIR]    = {NULL, NULL},
    [DECOR_COMFORT_CHAIR]   = {NULL, NULL},
    [DECOR_RAGGED_CHAIR]    = {NULL, NULL},
    [DECOR_BRICK_CHAIR]     = {NULL, NULL},
    [DECOR_CAMP_CHAIR]      = {NULL, NULL},
    [DECOR_HARD_CHAIR]      = {NULL, NULL},
    [DECOR_RED_PLANT]       = {gDecorIcon_RedPlant, gDecorIconPalette_RedPlant},
    [DECOR_TROPICAL_PLANT]  = {gDecorIcon_TropicalPlant, gDecorIconPalette_TropicalPlant},
    [DECOR_PRETTY_FLOWERS]  = {gDecorIcon_PrettyFlowers, gDecorIconPalette_PrettyFlowers},
    [DECOR_COLORFUL_PLANT]  = {gDecorIcon_ColorfulPlant, gDecorIconPalette_ColorfulPlant},
    [DECOR_BIG_PLANT]       = {gDecorIcon_BigPlant, gDecorIconPalette_BigPlant},
    [DECOR_GORGEOUS_PLANT]  = {gDecorIcon_GorgeousPlant, gDecorIconPalette_GorgeousPlant},
    [DECOR_RED_BRICK]       = {gDecorIcon_RedBrick, gDecorIconPalette_RedBrick},
    [DECOR_YELLOW_BRICK]    = {gDecorIcon_YellowBrick, gDecorIconPalette_YellowBrick},
    [DECOR_BLUE_BRICK]      = {gDecorIcon_BlueBrick, gDecorIconPalette_BlueBrick},
    [DECOR_RED_BALLOON]     = {NULL, NULL},
    [DECOR_BLUE_BALLOON]    = {NULL, NULL},
    [DECOR_YELLOW_BALLOON]  = {NULL, NULL},
    [DECOR_RED_TENT]        = {gDecorIcon_RedTent, gDecorIconPalette_RedTent},
    [DECOR_BLUE_TENT]       = {gDecorIcon_BlueTent, gDecorIconPalette_BlueTent},
    [DECOR_SOLID_BOARD]     = {gDecorIcon_SolidBoard, gDecorIconPalette_SolidBoard},
    [DECOR_SLIDE]           = {gDecorIcon_Slide, gDecorIconPalette_Slide},
    [DECOR_FENCE_LENGTH]    = {NULL, NULL},
    [DECOR_FENCE_WIDTH]     = {NULL, NULL},
    [DECOR_TIRE]            = {gDecorIcon_Tire, gDecorIconPalette_Tire},
    [DECOR_STAND]           = {gDecorIcon_Stand, gDecorIconPalette_Stand},
    [DECOR_MUD_BALL]        = {NULL, NULL},
    [DECOR_BREAKABLE_DOOR]  = {gDecorIcon_BreakableDoor, gDecorIconPalette_BreakableDoor},
    [DECOR_SAND_ORNAMENT]   = {gDecorIcon_SandOrnament, gDecorIconPalette_SandOrnament},
    [DECOR_SILVER_SHIELD]   = {NULL, NULL},
    [DECOR_GOLD_SHIELD]     = {NULL, NULL},
    [DECOR_GLASS_ORNAMENT]  = {gDecorIcon_GlassOrnament, gDecorIconPalette_GlassOrnament},
    [DECOR_TV]              = {NULL, NULL},
    [DECOR_ROUND_TV]        = {NULL, NULL},
    [DECOR_CUTE_TV]         = {NULL, NULL},
    [DECOR_GLITTER_MAT]     = {NULL, NULL},
    [DECOR_JUMP_MAT]        = {NULL, NULL},
    [DECOR_SPIN_MAT]        = {NULL, NULL},
    [DECOR_C_LOW_NOTE_MAT]  = {NULL, NULL},
    [DECOR_D_NOTE_MAT]      = {NULL, NULL},
    [DECOR_E_NOTE_MAT]      = {NULL, NULL},
    [DECOR_F_NOTE_MAT]      = {NULL, NULL},
    [DECOR_G_NOTE_MAT]      = {NULL, NULL},
    [DECOR_A_NOTE_MAT]      = {NULL, NULL},
    [DECOR_B_NOTE_MAT]      = {NULL, NULL},
    [DECOR_C_HIGH_NOTE_MAT] = {NULL, NULL},
    [DECOR_SURF_MAT]        = {gDecorIcon_SurfMat, gDecorIconPalette_SurfMat},
    [DECOR_THUNDER_MAT]     = {gDecorIcon_ThunderMat, gDecorIconPalette_ThunderMat},
    [DECOR_FIRE_BLAST_MAT]  = {gDecorIcon_FireBlastMat, gDecorIconPalette_FireBlastMat},
    [DECOR_POWDER_SNOW_MAT] = {gDecorIcon_PowderSnowMat, gDecorIconPalette_PowderSnowMat},
    [DECOR_ATTRACT_MAT]     = {gDecorIcon_AttractMat, gDecorIconPalette_AttractMat},
    [DECOR_FISSURE_MAT]     = {gDecorIcon_FissureMat, gDecorIconPalette_FissureMat},
    [DECOR_SPIKES_MAT]      = {gDecorIcon_SpikesMat, gDecorIconPalette_SpikesMat},
    [DECOR_BALL_POSTER]     = {NULL, NULL},
    [DECOR_GREEN_POSTER]    = {NULL, NULL},
    [DECOR_RED_POSTER]      = {NULL, NULL},
    [DECOR_BLUE_POSTER]     = {NULL, NULL},
    [DECOR_CUTE_POSTER]     = {NULL, NULL},
    [DECOR_PIKA_POSTER]     = {NULL, NULL},
    [DECOR_LONG_POSTER]     = {NULL, NULL},
    [DECOR_SEA_POSTER]      = {NULL, NULL},
    [DECOR_SKY_POSTER]      = {NULL, NULL},
    [DECOR_KISS_POSTER]     = {NULL, NULL},
    [DECOR_CLUIZE_DOLL]      = {NULL, NULL},
    [DECOR_CCIRNO_DOLL]    = {NULL, NULL},
    [DECOR_KOTOHIME_DOLL]     = {NULL, NULL},
    [DECOR_MARGATROID_DOLL]     = {NULL, NULL},
    [DECOR_CELLY_DOLL]  = {NULL, NULL},
    [DECOR_GENJII_DOLL]  = {NULL, NULL},
    [DECOR_ORANGE_DOLL]   = {NULL, NULL},
    [DECOR_CMYSTIA_DOLL] = {NULL, NULL},
    [DECOR_CCHEN_DOLL]     = {NULL, NULL},
    [DECOR_CYUKARI_DOLL]   = {NULL, NULL},
    [DECOR_KEDAMA_DOLL]      = {NULL, NULL},
    [DECOR_DKANAKO_DOLL]   = {NULL, NULL},
    [DECOR_HEIRIN_DOLL]    = {NULL, NULL},
    [DECOR_AALICE_DOLL]    = {NULL, NULL},
    [DECOR_DREIMU_DOLL]     = {NULL, NULL},
    [DECOR_RINNOSUKE_DOLL]    = {NULL, NULL},
    [DECOR_AMINORIKO_DOLL]     = {NULL, NULL},
    [DECOR_HKOAKUMA_DOLL]     = {NULL, NULL},
    [DECOR_SWRIGGLE_DOLL]    = {NULL, NULL},
    [DECOR_CSHINGYOKU_DOLL]    = {NULL, NULL},
    [DECOR_ASUNNYMILK_DOLL]     = {NULL, NULL},
    [DECOR_DIKU_DOLL]     = {NULL, NULL},
    [DECOR_CKIKURI_DOLL]     = {NULL, NULL},
    [DECOR_AHINA_DOLL]      = {NULL, NULL},
    [DECOR_SRIN_DOLL]     = {NULL, NULL},
    [DECOR_PIKA_CUSHION]    = {NULL, NULL},
    [DECOR_ROUND_CUSHION]   = {NULL, NULL},
    [DECOR_KISS_CUSHION]    = {NULL, NULL},
    [DECOR_ZIGZAG_CUSHION]  = {NULL, NULL},
    [DECOR_SPIN_CUSHION]    = {NULL, NULL},
    [DECOR_DIAMOND_CUSHION] = {NULL, NULL},
    [DECOR_BALL_CUSHION]    = {NULL, NULL},
    [DECOR_GRASS_CUSHION]   = {NULL, NULL},
    [DECOR_FIRE_CUSHION]    = {NULL, NULL},
    [DECOR_WATER_CUSHION]   = {NULL, NULL},
    [DECOR_BYAKUREN_DOLL]    = {gDecorIcon_ByakurenDoll, gDecorIconPalette_ByakurenDoll},
    [DECOR_CICHIRIN_DOLL]     = {gDecorIcon_CIchirinDoll, gDecorIconPalette_CIchirinDoll},
    [DECOR_TEWI_DOLL]     = {gDecorIcon_TewiDoll, gDecorIconPalette_TewiDoll},
    [DECOR_CALICE_DOLL]   = {gDecorIcon_CAliceDoll, gDecorIconPalette_CAliceDoll},
    [DECOR_REISEN_DOLL]  = {gDecorIcon_ReisenDoll, gDecorIconPalette_ReisenDoll},
    [DECOR_CLILYBLACK_DOLL]  = {gDecorIcon_CLilyBlackDoll, gDecorIconPalette_CLilyBlackDoll},
    [DECOR_DMEILING_DOLL]    = {gDecorIcon_DMeilingDoll, gDecorIconPalette_DMeilingDoll},
    [DECOR_TOJIKO_DOLL]   = {gDecorIcon_TojikoDoll, gDecorIconPalette_TojikoDoll},
    [DECOR_CFUTO_DOLL]     = {gDecorIcon_CFutoDoll, gDecorIconPalette_CFutoDoll},
    [DECOR_FUTO_DOLL]  = {gDecorIcon_FutoDoll, gDecorIconPalette_FutoDoll}
};

// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonFrontPicCoords[] =
{
    [SPECIES_NONE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CSANAE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_SANAE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_CALICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ALICE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_CREISEN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_REISEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CLILYWHITE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_LILYWHITE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_CLILYBLACK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LILYBLACK] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_CMOMIJI] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_MOMIJI] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_CSHIZUHA] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_SHIZUHA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_CMEDICINE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_MEDICINE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_CKOAKUMA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_KOAKUMA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CNAZRIN] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 0,
    },
    [SPECIES_NAZRIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_CTOKIKO] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_TOKIKO] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CREMILIA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_REMILIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CCIRNO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CIRNO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CRUMIA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_RUMIA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_SHANGHAI] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_CFLANDRE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_FLANDRE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_HOURAI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_CYOUMU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_YOUMU] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CYUKARI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_YUKARI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_CSUIKA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_SUIKA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CMYSTIA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_MYSTIA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CMINORIKO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_MINORIKO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CKEINE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_KEINE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_AKEINE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CIKU] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_IKU] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_CKOISHI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_KOISHI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CYAMAME] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_YAMAME] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 0,
    },
    [SPECIES_CCHEN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_CHEN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CYORIHIME] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_YORIHIME] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CKAGUYA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_KAGUYA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CMOKOU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_MOKOU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHATATE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 0,
    },
    [SPECIES_HATATE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_CLETTY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_LETTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_CPATCHOULI] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_PATCHOULI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_CYUUGI] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_YUUGI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CTENSHI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TENSHI] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_CPARSEE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_PARSEE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CMURASA] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 0,
    },
    [SPECIES_MURASA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_CKISUME] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_KISUME] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_CKOGASA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_KOGASA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_CSATORI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SATORI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_CEIRIN] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_EIRIN] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 0,
    },
    [SPECIES_CRAN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_RAN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_CDAIYOUSEI] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 0,
    },
    [SPECIES_DAIYOUSEI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CNITORI] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_NITORI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_CHINA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_HINA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_CKOMACHI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_KOMACHI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_CYUYUKO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_YUYUKO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CMEILING] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_MEILING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CSAKUYA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_SAKUYA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CLUNASA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_LUNASA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CMERLIN] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 0,
    },
    [SPECIES_MERLIN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_CLYRICA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_LYRICA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CLAYLA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_LAYLA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_CKANAKO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_KANAKO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CRIN] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_RIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_CUTSUHO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_UTSUHO] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_CICHIRIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ICHIRIN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_CSUNNYMILK] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_SUNNYMILK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CLUNACHILD] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_LUNACHILD] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CSTARSAPPHIRE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_STARSAPPHIRE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CYUUKA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_YUUKA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CAYA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_AYA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CSHIKIEIKI] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_SHIKIEIKI] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CSHOU] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_SHOU] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CWRIGGLE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_WRIGGLE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CTEWI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TEWI] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 0,
    },
    [SPECIES_KEDAMA] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_CNUE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_NUE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CSUWAKO] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_SUWAKO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_REISENII] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_CMARISA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_MARISA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CREIMU] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_REIMU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CBYAKUREN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BYAKUREN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_KONNGARA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KIKURI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_YUUGENMAGAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CTOYOHIME] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 0,
    },
    [SPECIES_TOYOHIME] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_GOLIATH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SARIEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AKYUU] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_GENJII] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 0,
    },
    [SPECIES_TORI] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_NAMAZU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CELLY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_ELLY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_CORANGE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_ORANGE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_YOUKI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CCHIYURI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHIYURI] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 0,
    },
    [SPECIES_CYUMEMI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_YUMEMI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_CELLEN] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 0,
    },
    [SPECIES_ELLEN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_CKAZAMI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_KAZAMI] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_CMEIRA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_MEIRA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CSARA] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 0,
    },
    [SPECIES_SARA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_CLUIZE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_LUIZE] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 0,
    },
    [SPECIES_CMARGATROID] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 0,
    },
    [SPECIES_MARGATROID] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 0,
    },
    [SPECIES_CKANA] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 0,
    },
    [SPECIES_KANA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 0,
    },
    [SPECIES_CHAKUREI] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 0,
    },
    [SPECIES_HAKUREI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_CKIRISAME] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_KIRISAME] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CKOTOHIME] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_KOTOHIME] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_CYUMEKO] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_YUMEKO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CSHINKI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_SHINKI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_MIMICHAN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_RUUKOTO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CRIKA] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 0,
    },
    [SPECIES_RIKA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 0,
    },
    [SPECIES_CMUGETSU] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_MUGETSU] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_CGENGETSU] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_GENGETSU] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_CKURUMI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_KURUMI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CRIKAKO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_RIKAKO] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 0,
    },
    [SPECIES_CYUKI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_CMAI] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_MAI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DSUNNYMILK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_TLUNACHILD] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_HSTARSAPPHIRE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 0,
    },
    [SPECIES_ANITORI] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_TNITORI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AMOKOU] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_DMOKOU] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 0,
    },
    [SPECIES_DREISEN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_TREISEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TSAKUYA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_HSAKUYA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ARUMIA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_SRUMIA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_HMYSTIA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_AMYSTIA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_ACHEN] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 0,
    },
    [SPECIES_TCHEN] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 0,
    },
    [SPECIES_DYOUMU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_SYOUMU] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_AYUUKA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_TYUUKA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_SAYA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_TAYA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ATENSHI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DTENSHI] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_DPARSEE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_TPARSEE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_AKOISHI] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_SKOISHI] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_DBYAKUREN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_TBYAKUREN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DICHIRIN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_TICHIRIN] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 0,
    },
    [SPECIES_AKANAKO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_DKANAKO] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 0,
    },
    [SPECIES_AKAGUYA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_DKAGUYA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_SHINGYOKUO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_SHINGYOKUM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_SHINGYOKUF] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AUTSUHO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SUTSUHO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DMOMIJI] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 0,
    },
    [SPECIES_ELIS] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_MIMA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SKOMACHI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AKOMACHI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AEIRIN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_HEIRIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_DYUKARI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_TYUKARI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AALICE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_TALICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AREIMU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DREIMU] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_SCIRNO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_TCIRNO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DYUYUKO] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_AYUYUKO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_HLUNASA] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 0,
    },
    [SPECIES_HMERLIN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_HLYRICA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 0,
    },
    [SPECIES_ARAN] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 0,
    },
    [SPECIES_HRAN] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_AMEDICINE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 0,
    },
    [SPECIES_TMEDICINE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_AHINA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_DHINA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_SSHIZUHA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SRIN] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 0,
    },
    [SPECIES_ARIN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_ZOMBIEFAIRY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HSHIZUHA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 0,
    },
    [SPECIES_ASUWAKO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_ASHOU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_TSHOU] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 0,
    },
    [SPECIES_ATOKIKO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_DSUWAKO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_SYAMAME] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_SKOGASA] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_TKOGASA] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 0,
    },
    [SPECIES_DREMILIA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_SFLANDRE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_DWRIGGLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DMEILING] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 0,
    },
    [SPECIES_TENSOKU] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_ASUNNYMILK] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_ALUNACHILD] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_SWRIGGLE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_HKOAKUMA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_SMEILING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CELIS] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_CSARIEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ADMYSTIA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_THATATE] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 0,
    },
    [SPECIES_DHATATE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_AKISISTERS] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 0,
    },
    [SPECIES_DLAYLA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_DKEINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AREMILIA] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 0,
    },
    [SPECIES_DTEWI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ATEWI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_DSHIKIEIKI] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_DMINORIKO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 0,
    },
    [SPECIES_TSUIKA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_ASANAE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AFLANDRE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_ADAIYOUSEI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ASHIKIEIKI] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 0,
    },
    [SPECIES_TTOYOHIME] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_CKONNGARA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_CYUUGENMAGAN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_ASUIKA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_HLILYWHITE] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_SLILYBLACK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ANUE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 0,
    },
    [SPECIES_TNUE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DPATCHOULI] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_DLETTY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_HLETTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_SYORIHIME] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CSHINGYOKU] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_ALILYBLACK] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 0,
    },
    [SPECIES_DYUUGI] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_TNAZRIN] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_HNAZRIN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_TKISUME] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_AYUUGI] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 0,
    },
    [SPECIES_HKEINE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_DIKU] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_TIKU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AMINORIKO] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_RINNOSUKE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_ADCIRNO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_ADREISEN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 0,
    },
    [SPECIES_SSARIEL] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 0,
    },
    [SPECIES_ALILYWHITE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CMIMA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_CKIKURI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_ADMEILING] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_APATCHOULI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SMARISA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_AMARISA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_DMURASA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_AMURASA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_ASTARSAPPHIRE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_AKAZAMI] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 0,
    },
    [SPECIES_SMEDICINE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_DDAIYOUSEI] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_TYAMAME] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_TSATORI] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_DSATORI] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_ADLETTY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 0,
    },
    [SPECIES_ADTEWI] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 0,
    },
    [SPECIES_ADMARISA] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 0,
    },
    [SPECIES_ADALICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TSANAE] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 0,
    },
    [SPECIES_YUKI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_ADMOKOU] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_ADYUKARI] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 0,
    },
    [SPECIES_ADRAN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_ADCHEN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_DARKALICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TENMA] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 0,
    },
    [SPECIES_SENDAI] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 0,
    },
    [SPECIES_CKYOUKO] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_KYOUKO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 0,
    },
    [SPECIES_CYOSHIKA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_YOSHIKA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_CSEIGA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 0,
    },
    [SPECIES_SEIGA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_CTOJIKO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_TOJIKO] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_CFUTO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FUTO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CMIKO] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 0,
    },
    [SPECIES_MIKO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CMAMIZOU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MAMIZOU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CKASEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_KASEN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 0,
    },
    [SPECIES_GOMASEKI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CWAKASAGI] =
    {
        .size = MON_COORDS_SIZE(24, 56),
        .y_offset = 0,
    },
//PUPPETPY
    [SPECIES_EGG] =
    {
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 0,
    },
};

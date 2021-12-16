#include "global.h"
#include "graphics.h"
#include "mail.h"
#include "palette.h"
#include "pokemon_icon.h"
#include "sprite.h"

#define POKE_ICON_BASE_PAL_TAG 56000

struct MonIconSpriteTemplate
{
    const struct OamData *oam;
    const u8 *image;
    const union AnimCmd *const *anims;
    const union AffineAnimCmd *const *affineAnims;
    void (*callback)(struct Sprite *);
    u16 paletteTag;
};

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *, s16, s16, u8);
static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite);

const u8 *const gMonIconTable[] =
{
    [SPECIES_NONE] = gMonIcon_CSanae,
    [SPECIES_CSANAE] = gMonIcon_CSanae,
    [SPECIES_SANAE] = gMonIcon_Sanae,
    [SPECIES_CALICE] = gMonIcon_CAlice,
    [SPECIES_ALICE] = gMonIcon_Alice,
    [SPECIES_CREISEN] = gMonIcon_CReisen,
    [SPECIES_REISEN] = gMonIcon_Reisen,
    [SPECIES_CLILYWHITE] = gMonIcon_CLilyWhite,
    [SPECIES_LILYWHITE] = gMonIcon_LilyWhite,
    [SPECIES_CLILYBLACK] = gMonIcon_CLilyBlack,
    [SPECIES_LILYBLACK] = gMonIcon_LilyBlack,
    [SPECIES_CMOMIJI] = gMonIcon_CMomiji,
    [SPECIES_MOMIJI] = gMonIcon_Momiji,
    [SPECIES_CSHIZUHA] = gMonIcon_CShizuha,
    [SPECIES_SHIZUHA] = gMonIcon_Shizuha,
    [SPECIES_CMEDICINE] = gMonIcon_CMedicine,
    [SPECIES_MEDICINE] = gMonIcon_Medicine,
    [SPECIES_CKOAKUMA] = gMonIcon_CKoakuma,
    [SPECIES_KOAKUMA] = gMonIcon_Koakuma,
    [SPECIES_CNAZRIN] = gMonIcon_CNazrin,
    [SPECIES_NAZRIN] = gMonIcon_Nazrin,
    [SPECIES_CTOKIKO] = gMonIcon_CTokiko,
    [SPECIES_TOKIKO] = gMonIcon_Tokiko,
    [SPECIES_CREMILIA] = gMonIcon_CRemilia,
    [SPECIES_REMILIA] = gMonIcon_Remilia,
    [SPECIES_CCIRNO] = gMonIcon_CCirno,
    [SPECIES_CIRNO] = gMonIcon_Cirno,
    [SPECIES_CRUMIA] = gMonIcon_CRumia,
    [SPECIES_RUMIA] = gMonIcon_Rumia,
    [SPECIES_SHANGHAI] = gMonIcon_Shanghai,
    [SPECIES_CFLANDRE] = gMonIcon_CFlandre,
    [SPECIES_FLANDRE] = gMonIcon_Flandre,
    [SPECIES_HOURAI] = gMonIcon_Hourai,
    [SPECIES_CYOUMU] = gMonIcon_CYoumu,
    [SPECIES_YOUMU] = gMonIcon_Youmu,
    [SPECIES_CYUKARI] = gMonIcon_CYukari,
    [SPECIES_YUKARI] = gMonIcon_Yukari,
    [SPECIES_CSUIKA] = gMonIcon_CSuika,
    [SPECIES_SUIKA] = gMonIcon_Suika,
    [SPECIES_CMYSTIA] = gMonIcon_CMystia,
    [SPECIES_MYSTIA] = gMonIcon_Mystia,
    [SPECIES_CMINORIKO] = gMonIcon_CMinoriko,
    [SPECIES_MINORIKO] = gMonIcon_Minoriko,
    [SPECIES_CKEINE] = gMonIcon_CKeine,
    [SPECIES_KEINE] = gMonIcon_Keine,
    [SPECIES_AKEINE] = gMonIcon_AKeine,
    [SPECIES_CIKU] = gMonIcon_CIku,
    [SPECIES_IKU] = gMonIcon_Iku,
    [SPECIES_CKOISHI] = gMonIcon_CKoishi,
    [SPECIES_KOISHI] = gMonIcon_Koishi,
    [SPECIES_CYAMAME] = gMonIcon_CYamame,
    [SPECIES_YAMAME] = gMonIcon_Yamame,
    [SPECIES_CCHEN] = gMonIcon_CChen,
    [SPECIES_CHEN] = gMonIcon_Chen,
    [SPECIES_CYORIHIME] = gMonIcon_CYorihime,
    [SPECIES_YORIHIME] = gMonIcon_Yorihime,
    [SPECIES_CKAGUYA] = gMonIcon_CKaguya,
    [SPECIES_KAGUYA] = gMonIcon_Kaguya,
    [SPECIES_CMOKOU] = gMonIcon_CMokou,
    [SPECIES_MOKOU] = gMonIcon_Mokou,
    [SPECIES_CHATATE] = gMonIcon_CHatate,
    [SPECIES_HATATE] = gMonIcon_Hatate,
    [SPECIES_CLETTY] = gMonIcon_CLetty,
    [SPECIES_LETTY] = gMonIcon_Letty,
    [SPECIES_CPATCHOULI] = gMonIcon_CPatchouli,
    [SPECIES_PATCHOULI] = gMonIcon_Patchouli,
    [SPECIES_CYUUGI] = gMonIcon_CYuugi,
    [SPECIES_YUUGI] = gMonIcon_Yuugi,
    [SPECIES_CTENSHI] = gMonIcon_CTenshi,
    [SPECIES_TENSHI] = gMonIcon_Tenshi,
    [SPECIES_CPARSEE] = gMonIcon_CParsee,
    [SPECIES_PARSEE] = gMonIcon_Parsee,
    [SPECIES_CMURASA] = gMonIcon_CMurasa,
    [SPECIES_MURASA] = gMonIcon_Murasa,
    [SPECIES_CKISUME] = gMonIcon_CKisume,
    [SPECIES_KISUME] = gMonIcon_Kisume,
    [SPECIES_CKOGASA] = gMonIcon_CKogasa,
    [SPECIES_KOGASA] = gMonIcon_Kogasa,
    [SPECIES_CSATORI] = gMonIcon_CSatori,
    [SPECIES_SATORI] = gMonIcon_Satori,
    [SPECIES_CEIRIN] = gMonIcon_CEirin,
    [SPECIES_EIRIN] = gMonIcon_Eirin,
    [SPECIES_CRAN] = gMonIcon_CRan,
    [SPECIES_RAN] = gMonIcon_Ran,
    [SPECIES_CDAIYOUSEI] = gMonIcon_CDaiyousei,
    [SPECIES_DAIYOUSEI] = gMonIcon_Daiyousei,
    [SPECIES_CNITORI] = gMonIcon_CNitori,
    [SPECIES_NITORI] = gMonIcon_Nitori,
    [SPECIES_CHINA] = gMonIcon_CHina,
    [SPECIES_HINA] = gMonIcon_Hina,
    [SPECIES_CKOMACHI] = gMonIcon_CKomachi,
    [SPECIES_KOMACHI] = gMonIcon_Komachi,
    [SPECIES_CYUYUKO] = gMonIcon_CYuyuko,
    [SPECIES_YUYUKO] = gMonIcon_Yuyuko,
    [SPECIES_CMEILING] = gMonIcon_CMeiling,
    [SPECIES_MEILING] = gMonIcon_Meiling,
    [SPECIES_CSAKUYA] = gMonIcon_CSakuya,
    [SPECIES_SAKUYA] = gMonIcon_Sakuya,
    [SPECIES_CLUNASA] = gMonIcon_CLunasa,
    [SPECIES_LUNASA] = gMonIcon_Lunasa,
    [SPECIES_CMERLIN] = gMonIcon_CMerlin,
    [SPECIES_MERLIN] = gMonIcon_Merlin,
    [SPECIES_CLYRICA] = gMonIcon_CLyrica,
    [SPECIES_LYRICA] = gMonIcon_Lyrica,
    [SPECIES_CLAYLA] = gMonIcon_CLayla,
    [SPECIES_LAYLA] = gMonIcon_Layla,
    [SPECIES_CKANAKO] = gMonIcon_CKanako,
    [SPECIES_KANAKO] = gMonIcon_Kanako,
    [SPECIES_CRIN] = gMonIcon_CRin,
    [SPECIES_RIN] = gMonIcon_Rin,
    [SPECIES_CUTSUHO] = gMonIcon_CUtsuho,
    [SPECIES_UTSUHO] = gMonIcon_Utsuho,
    [SPECIES_CICHIRIN] = gMonIcon_CIchirin,
    [SPECIES_ICHIRIN] = gMonIcon_Ichirin,
    [SPECIES_CSUNNYMILK] = gMonIcon_CSunnyMilk,
    [SPECIES_SUNNYMILK] = gMonIcon_SunnyMilk,
    [SPECIES_CLUNACHILD] = gMonIcon_CLunaChild,
    [SPECIES_LUNACHILD] = gMonIcon_LunaChild,
    [SPECIES_CSTARSAPPHIRE] = gMonIcon_CStarSapphire,
    [SPECIES_STARSAPPHIRE] = gMonIcon_StarSapphire,
    [SPECIES_CYUUKA] = gMonIcon_CYuuka,
    [SPECIES_YUUKA] = gMonIcon_Yuuka,
    [SPECIES_CAYA] = gMonIcon_Mrmime,
    [SPECIES_AYA] = gMonIcon_Aya,
    [SPECIES_CSHIKIEIKI] = gMonIcon_CShikieiki,
    [SPECIES_SHIKIEIKI] = gMonIcon_Shikieiki,
    [SPECIES_CSHOU] = gMonIcon_CShou,
    [SPECIES_SHOU] = gMonIcon_Shou,
    [SPECIES_CWRIGGLE] = gMonIcon_CWriggle,
    [SPECIES_WRIGGLE] = gMonIcon_Wriggle,
    [SPECIES_CTEWI] = gMonIcon_CTewi,
    [SPECIES_TEWI] = gMonIcon_Tewi,
    [SPECIES_KEDAMA] = gMonIcon_Kedama,
    [SPECIES_CNUE] = gMonIcon_CNue,
    [SPECIES_NUE] = gMonIcon_Nue,
    [SPECIES_CSUWAKO] = gMonIcon_CSuwako,
    [SPECIES_SUWAKO] = gMonIcon_Suwako,
    [SPECIES_REISENII] = gMonIcon_ReisenII,
    [SPECIES_CMARISA] = gMonIcon_CMarisa,
    [SPECIES_MARISA] = gMonIcon_Marisa,
    [SPECIES_CREIMU] = gMonIcon_CReimu,
    [SPECIES_REIMU] = gMonIcon_Reimu,
    [SPECIES_CBYAKUREN] = gMonIcon_CByakuren,
    [SPECIES_BYAKUREN] = gMonIcon_Byakuren,
    [SPECIES_KONNGARA] = gMonIcon_Konngara,
    [SPECIES_KIKURI] = gMonIcon_Kikuri,
    [SPECIES_YUUGENMAGAN] = gMonIcon_YuugenMagan,
    [SPECIES_CTOYOHIME] = gMonIcon_CToyohime,
    [SPECIES_TOYOHIME] = gMonIcon_Toyohime,
    [SPECIES_GOLIATH] = gMonIcon_Goliath,
    [SPECIES_SARIEL] = gMonIcon_Sariel,
    [SPECIES_AKYUU] = gMonIcon_Akyuu,
    [SPECIES_GENJII] = gMonIcon_Genjii,
    [SPECIES_TORI] = gMonIcon_Tori,
    [SPECIES_NAMAZU] = gMonIcon_Namazu,
    [SPECIES_CELLY] = gMonIcon_CElly,
    [SPECIES_ELLY] = gMonIcon_Elly,
    [SPECIES_CORANGE] = gMonIcon_COrange,
    [SPECIES_ORANGE] = gMonIcon_Orange,
    [SPECIES_YOUKI] = gMonIcon_Youki,
    [SPECIES_CCHIYURI] = gMonIcon_CChiyuri,
    [SPECIES_CHIYURI] = gMonIcon_Chiyuri,
    [SPECIES_CYUMEMI] = gMonIcon_CYumemi,
    [SPECIES_YUMEMI] = gMonIcon_Yumemi,
    [SPECIES_CELLEN] = gMonIcon_CEllen,
    [SPECIES_ELLEN] = gMonIcon_Ellen,
    [SPECIES_CKAZAMI] = gMonIcon_CKazami,
    [SPECIES_KAZAMI] = gMonIcon_Kazami,
    [SPECIES_CMEIRA] = gMonIcon_CMeira,
    [SPECIES_MEIRA] = gMonIcon_Meira,
    [SPECIES_CSARA] = gMonIcon_CSara,
    [SPECIES_SARA] = gMonIcon_Sara,
    [SPECIES_CLUIZE] = gMonIcon_CLuize,
    [SPECIES_LUIZE] = gMonIcon_Luize,
    [SPECIES_CMARGATROID] = gMonIcon_CMargatroid,
    [SPECIES_MARGATROID] = gMonIcon_Margatroid,
    [SPECIES_CKANA] = gMonIcon_CKana,
    [SPECIES_KANA] = gMonIcon_Kana,
    [SPECIES_CHAKUREI] = gMonIcon_CHakurei,
    [SPECIES_HAKUREI] = gMonIcon_Hakurei,
    [SPECIES_CKIRISAME] = gMonIcon_CKirisame,
    [SPECIES_KIRISAME] = gMonIcon_Kirisame,
    [SPECIES_CKOTOHIME] = gMonIcon_CKotohime,
    [SPECIES_KOTOHIME] = gMonIcon_Kotohime,
    [SPECIES_CYUMEKO] = gMonIcon_CYumeko,
    [SPECIES_YUMEKO] = gMonIcon_Yumeko,
    [SPECIES_CSHINKI] = gMonIcon_CShinki,
    [SPECIES_SHINKI] = gMonIcon_Shinki,
    [SPECIES_MIMICHAN] = gMonIcon_MimiChan,
    [SPECIES_RUUKOTO] = gMonIcon_Ruukoto,
    [SPECIES_CRIKA] = gMonIcon_CRika,
    [SPECIES_RIKA] = gMonIcon_Rika,
    [SPECIES_CMUGETSU] = gMonIcon_CMugetsu,
    [SPECIES_MUGETSU] = gMonIcon_Mugetsu,
    [SPECIES_CGENGETSU] = gMonIcon_CGengetsu,
    [SPECIES_GENGETSU] = gMonIcon_Gengetsu,
    [SPECIES_CKURUMI] = gMonIcon_CKurumi,
    [SPECIES_KURUMI] = gMonIcon_Kurumi,
    [SPECIES_CRIKAKO] = gMonIcon_CRikako,
    [SPECIES_RIKAKO] = gMonIcon_Rikako,
    [SPECIES_CYUKI] = gMonIcon_CYuki,
    [SPECIES_CMAI] = gMonIcon_CMai,
    [SPECIES_MAI] = gMonIcon_Mai,
    [SPECIES_DSUNNYMILK] = gMonIcon_DSunnyMilk,
    [SPECIES_TLUNACHILD] = gMonIcon_TLunaChild,
    [SPECIES_HSTARSAPPHIRE] = gMonIcon_HStarSapphire,
    [SPECIES_ANITORI] = gMonIcon_ANitori,
    [SPECIES_TNITORI] = gMonIcon_TNitori,
    [SPECIES_AMOKOU] = gMonIcon_AMokou,
    [SPECIES_DMOKOU] = gMonIcon_DMokou,
    [SPECIES_DREISEN] = gMonIcon_DReisen,
    [SPECIES_TREISEN] = gMonIcon_TReisen,
    [SPECIES_TSAKUYA] = gMonIcon_TSakuya,
    [SPECIES_HSAKUYA] = gMonIcon_HSakuya,
    [SPECIES_ARUMIA] = gMonIcon_ARumia,
    [SPECIES_SRUMIA] = gMonIcon_SRumia,
    [SPECIES_HMYSTIA] = gMonIcon_HMystia,
    [SPECIES_AMYSTIA] = gMonIcon_AMystia,
    [SPECIES_ACHEN] = gMonIcon_AChen,
    [SPECIES_TCHEN] = gMonIcon_TChen,
    [SPECIES_DYOUMU] = gMonIcon_DYoumu,
    [SPECIES_SYOUMU] = gMonIcon_SYoumu,
    [SPECIES_AYUUKA] = gMonIcon_AYuuka,
    [SPECIES_TYUUKA] = gMonIcon_TYuuka,
    [SPECIES_SAYA] = gMonIcon_SAya,
    [SPECIES_TAYA] = gMonIcon_TAya,
    [SPECIES_ATENSHI] = gMonIcon_ATenshi,
    [SPECIES_DTENSHI] = gMonIcon_DTenshi,
    [SPECIES_DPARSEE] = gMonIcon_DParsee,
    [SPECIES_TPARSEE] = gMonIcon_TParsee,
    [SPECIES_AKOISHI] = gMonIcon_AKoishi,
    [SPECIES_SKOISHI] = gMonIcon_SKoishi,
    [SPECIES_DBYAKUREN] = gMonIcon_DByakuren,
    [SPECIES_TBYAKUREN] = gMonIcon_TByakuren,
    [SPECIES_DICHIRIN] = gMonIcon_DIchirin,
    [SPECIES_TICHIRIN] = gMonIcon_TIchirin,
    [SPECIES_AKANAKO] = gMonIcon_AKanako,
    [SPECIES_DKANAKO] = gMonIcon_DKanako,
    [SPECIES_AKAGUYA] = gMonIcon_AKaguya,
    [SPECIES_DKAGUYA] = gMonIcon_DKaguya,
    [SPECIES_SHINGYOKUO] = gMonIcon_ShinGyokuO,
    [SPECIES_SHINGYOKUM] = gMonIcon_ShinGyokuM,
    [SPECIES_SHINGYOKUF] = gMonIcon_ShinGyokuF,
    [SPECIES_AUTSUHO] = gMonIcon_AUtsuho,
    [SPECIES_SUTSUHO] = gMonIcon_SUtsuho,
    [SPECIES_DMOMIJI] = gMonIcon_DMomiji,
    [SPECIES_ELIS] = gMonIcon_Elis,
    [SPECIES_MIMA] = gMonIcon_Mima,
    [SPECIES_SKOMACHI] = gMonIcon_SKomachi,
    [SPECIES_AKOMACHI] = gMonIcon_AKomachi,
    [SPECIES_AEIRIN] = gMonIcon_AEirin,
    [SPECIES_HEIRIN] = gMonIcon_HEirin,
    [SPECIES_DYUKARI] = gMonIcon_DYukari,
    [SPECIES_TYUKARI] = gMonIcon_TYukari,
    [SPECIES_AALICE] = gMonIcon_AAlice,
    [SPECIES_TALICE] = gMonIcon_TAlice,
    [SPECIES_AREIMU] = gMonIcon_AReimu,
    [SPECIES_DREIMU] = gMonIcon_DReimu,
    [SPECIES_SCIRNO] = gMonIcon_SCirno,
    [SPECIES_TCIRNO] = gMonIcon_TCirno,
    [SPECIES_DYUYUKO] = gMonIcon_DYuyuko,
    [SPECIES_AYUYUKO] = gMonIcon_AYuyuko,
    [SPECIES_HLUNASA] = gMonIcon_HLunasa,
    [SPECIES_HMERLIN] = gMonIcon_HMerlin,
    [SPECIES_HLYRICA] = gMonIcon_HLyrica,
    [SPECIES_ARAN] = gMonIcon_ARan,
    [SPECIES_HRAN] = gMonIcon_HRan,
    [SPECIES_AMEDICINE] = gMonIcon_AMedicine,
    [SPECIES_TMEDICINE] = gMonIcon_TMedicine,
    [SPECIES_AHINA] = gMonIcon_AHina,
    [SPECIES_DHINA] = gMonIcon_DHina,
    [SPECIES_SSHIZUHA] = gMonIcon_SShizuha,
    [SPECIES_SRIN] = gMonIcon_SRin,
    [SPECIES_ARIN] = gMonIcon_ARin,
    [SPECIES_ZOMBIEFAIRY] = gMonIcon_ZombieFairy,
    [SPECIES_HSHIZUHA] = gMonIcon_HShizuha,
    [SPECIES_ASUWAKO] = gMonIcon_ASuwako,
    [SPECIES_ASHOU] = gMonIcon_AShou,
    [SPECIES_TSHOU] = gMonIcon_TShou,
    [SPECIES_ATOKIKO] = gMonIcon_ATokiko,
    [SPECIES_DSUWAKO] = gMonIcon_DSuwako,
    [SPECIES_SYAMAME] = gMonIcon_SYamame,
    [SPECIES_SKOGASA] = gMonIcon_SKogasa,
    [SPECIES_TKOGASA] = gMonIcon_TKogasa,
    [SPECIES_DREMILIA] = gMonIcon_DRemilia,
    [SPECIES_SFLANDRE] = gMonIcon_SFlandre,
    [SPECIES_DWRIGGLE] = gMonIcon_DWriggle,
    [SPECIES_DMEILING] = gMonIcon_DMeiling,
    [SPECIES_TENSOKU] = gMonIcon_Tensoku,
    [SPECIES_ASUNNYMILK] = gMonIcon_ASunnyMilk,
    [SPECIES_ALUNACHILD] = gMonIcon_ALunaChild,
    [SPECIES_SWRIGGLE] = gMonIcon_SWriggle,
    [SPECIES_HKOAKUMA] = gMonIcon_HKoakuma,
    [SPECIES_SMEILING] = gMonIcon_SMeiling,
    [SPECIES_CELIS] = gMonIcon_CElis,
    [SPECIES_CSARIEL] = gMonIcon_CSariel,
    [SPECIES_ADMYSTIA] = gMonIcon_AdMystia,
    [SPECIES_THATATE] = gMonIcon_THatate,
    [SPECIES_DHATATE] = gMonIcon_DHatate,
    [SPECIES_AKISISTERS] = gMonIcon_AkiSisters,
    [SPECIES_DLAYLA] = gMonIcon_DLayla,
    [SPECIES_DKEINE] = gMonIcon_DKeine,
    [SPECIES_AREMILIA] = gMonIcon_ARemilia,
    [SPECIES_DTEWI] = gMonIcon_DTewi,
    [SPECIES_ATEWI] = gMonIcon_ATewi,
    [SPECIES_DSHIKIEIKI] = gMonIcon_DShikieiki,
    [SPECIES_DMINORIKO] = gMonIcon_DMinoriko,
    [SPECIES_TSUIKA] = gMonIcon_TSuika,
    [SPECIES_ASANAE] = gMonIcon_ASanae,
    [SPECIES_AFLANDRE] = gMonIcon_AFlandre,
    [SPECIES_ADAIYOUSEI] = gMonIcon_ADaiyousei,
    [SPECIES_ASHIKIEIKI] = gMonIcon_AShikieiki,
    [SPECIES_TTOYOHIME] = gMonIcon_TToyohime,
    [SPECIES_CKONNGARA] = gMonIcon_CKonngara,
    [SPECIES_CYUUGENMAGAN] = gMonIcon_CYuugenMagan,
    [SPECIES_ASUIKA] = gMonIcon_ASuika,
    [SPECIES_HLILYWHITE] = gMonIcon_HLilyWhite,
    [SPECIES_SLILYBLACK] = gMonIcon_SLilyBlack,
    [SPECIES_ANUE] = gMonIcon_ANue,
    [SPECIES_TNUE] = gMonIcon_TNue,
    [SPECIES_DPATCHOULI] = gMonIcon_DPatchouli,
    [SPECIES_DLETTY] = gMonIcon_DLetty,
    [SPECIES_HLETTY] = gMonIcon_HLetty,
    [SPECIES_SYORIHIME] = gMonIcon_SYorihime,
    [SPECIES_CSHINGYOKU] = gMonIcon_CShinGyoku,
    [SPECIES_ALILYBLACK] = gMonIcon_ALilyBlack,
    [SPECIES_DYUUGI] = gMonIcon_DYuugi,
    [SPECIES_TNAZRIN] = gMonIcon_TNazrin,
    [SPECIES_HNAZRIN] = gMonIcon_HNazrin,
    [SPECIES_TKISUME] = gMonIcon_TKisume,
    [SPECIES_AYUUGI] = gMonIcon_AYuugi,
    [SPECIES_HKEINE] = gMonIcon_HKeine,
    [SPECIES_DIKU] = gMonIcon_DIku,
    [SPECIES_TIKU] = gMonIcon_TIku,
    [SPECIES_AMINORIKO] = gMonIcon_AMinoriko,
    [SPECIES_RINNOSUKE] = gMonIcon_Rinnosuke,
    [SPECIES_ADCIRNO] = gMonIcon_AdCirno,
    [SPECIES_ADREISEN] = gMonIcon_AdReisen,
    [SPECIES_SSARIEL] = gMonIcon_SSariel,
    [SPECIES_ALILYWHITE] = gMonIcon_ALilyWhite,
    [SPECIES_CMIMA] = gMonIcon_CMima,
    [SPECIES_CKIKURI] = gMonIcon_CKikuri,
    [SPECIES_ADMEILING] = gMonIcon_AdMeiling,
    [SPECIES_APATCHOULI] = gMonIcon_APatchouli,
    [SPECIES_SMARISA] = gMonIcon_SMarisa,
    [SPECIES_AMARISA] = gMonIcon_AMarisa,
    [SPECIES_DMURASA] = gMonIcon_DMurasa,
    [SPECIES_AMURASA] = gMonIcon_AMurasa,
    [SPECIES_ASTARSAPPHIRE] = gMonIcon_AStarSapphire,
    [SPECIES_AKAZAMI] = gMonIcon_AKazami,
    [SPECIES_SMEDICINE] = gMonIcon_SMedicine,
    [SPECIES_DDAIYOUSEI] = gMonIcon_DDaiyousei,
    [SPECIES_TYAMAME] = gMonIcon_TYamame,
    [SPECIES_TSATORI] = gMonIcon_TSatori,
    [SPECIES_DSATORI] = gMonIcon_DSatori,
    [SPECIES_ADLETTY] = gMonIcon_AdLetty,
    [SPECIES_ADTEWI] = gMonIcon_AdTewi,
    [SPECIES_ADMARISA] = gMonIcon_AdMarisa,
    [SPECIES_ADALICE] = gMonIcon_AdAlice,
    [SPECIES_TSANAE] = gMonIcon_TSanae,
    [SPECIES_YUKI] = gMonIcon_Yuki,
    [SPECIES_ADMOKOU] = gMonIcon_AdMokou,
    [SPECIES_ADYUKARI] = gMonIcon_AdYukari,
    [SPECIES_ADRAN] = gMonIcon_AdRan,
    [SPECIES_ADCHEN] = gMonIcon_AdChen,
    [SPECIES_DARKALICE] = gMonIcon_DarkAlice,
    [SPECIES_TENMA] = gMonIcon_Tenma,
    [SPECIES_SENDAI] = gMonIcon_Sendai,
    [SPECIES_CKYOUKO] = gMonIcon_CKyouko,
    [SPECIES_KYOUKO] = gMonIcon_Kyouko,
    [SPECIES_CYOSHIKA] = gMonIcon_CYoshika,
    [SPECIES_YOSHIKA] = gMonIcon_Yoshika,
    [SPECIES_CSEIGA] = gMonIcon_CSeiga,
    [SPECIES_SEIGA] = gMonIcon_Seiga,
    [SPECIES_CTOJIKO] = gMonIcon_CTojiko,
    [SPECIES_TOJIKO] = gMonIcon_Tojiko,
    [SPECIES_CFUTO] = gMonIcon_CFuto,
    [SPECIES_FUTO] = gMonIcon_Futo,
    [SPECIES_CMIKO] = gMonIcon_CMiko,
    [SPECIES_MIKO] = gMonIcon_Miko,
    [SPECIES_CMAMIZOU] = gMonIcon_CMamizou,
    [SPECIES_MAMIZOU] = gMonIcon_Mamizou,
    [SPECIES_CKASEN] = gMonIcon_CKasen,
    [SPECIES_KASEN] = gMonIcon_Kasen,
    [SPECIES_GOMASEKI] = gMonIcon_Gomaseki,
    [SPECIES_CWAKASAGI] = gMonIcon_CWakasagi,
//PUPPETPY
    [SPECIES_EGG] = gMonIcon_Egg,
};

const u8 gMonIconPaletteIndices[] =
{
    [SPECIES_NONE] = 0,
    [SPECIES_CSANAE] = 0,
    [SPECIES_SANAE] = 0,
    [SPECIES_CALICE] = 1,
    [SPECIES_ALICE] = 1,
    [SPECIES_CREISEN] = 1,
    [SPECIES_REISEN] = 1,
    [SPECIES_CLILYWHITE] = 2,
    [SPECIES_LILYWHITE] = 2,
    [SPECIES_CLILYBLACK] = 2,
    [SPECIES_LILYBLACK] = 2,
    [SPECIES_CMOMIJI] = 1,
    [SPECIES_MOMIJI] = 1,
    [SPECIES_CSHIZUHA] = 2,
    [SPECIES_SHIZUHA] = 2,
    [SPECIES_CMEDICINE] = 1,
    [SPECIES_MEDICINE] = 1,
    [SPECIES_CKOAKUMA] = 1,
    [SPECIES_KOAKUMA] = 1,
    [SPECIES_CNAZRIN] = 1,
    [SPECIES_NAZRIN] = 1,
    [SPECIES_CTOKIKO] = 1,
    [SPECIES_TOKIKO] = 1,
    [SPECIES_CREMILIA] = 0,
    [SPECIES_REMILIA] = 0,
    [SPECIES_CCIRNO] = 1,
    [SPECIES_CIRNO] = 1,
    [SPECIES_CRUMIA] = 1,
    [SPECIES_RUMIA] = 1,
    [SPECIES_SHANGHAI] = 1,
    [SPECIES_CFLANDRE] = 1,
    [SPECIES_FLANDRE] = 1,
    [SPECIES_HOURAI] = 1,
    [SPECIES_CYOUMU] = 0,
    [SPECIES_YOUMU] = 0,
    [SPECIES_CYUKARI] = 1,
    [SPECIES_YUKARI] = 1,
    [SPECIES_CSUIKA] = 1,
    [SPECIES_SUIKA] = 1,
    [SPECIES_CMYSTIA] = 0,
    [SPECIES_MYSTIA] = 0,
    [SPECIES_CMINORIKO] = 2,
    [SPECIES_MINORIKO] = 2,
    [SPECIES_CKEINE] = 0,
    [SPECIES_KEINE] = 0,
    [SPECIES_AKEINE] = 0,
    [SPECIES_CIKU] = 0,
    [SPECIES_IKU] = 0,
    [SPECIES_CKOISHI] = 2,
    [SPECIES_KOISHI] = 2,
    [SPECIES_CYAMAME] = 2,
    [SPECIES_YAMAME] = 2,
    [SPECIES_CCHEN] = 2,
    [SPECIES_CHEN] = 2,
    [SPECIES_CYORIHIME] = 1,
    [SPECIES_YORIHIME] = 1,
    [SPECIES_CKAGUYA] = 0,
    [SPECIES_KAGUYA] = 0,
    [SPECIES_CMOKOU] = 1,
    [SPECIES_MOKOU] = 1,
    [SPECIES_CHATATE] = 1,
    [SPECIES_HATATE] = 1,
    [SPECIES_CLETTY] = 0,
    [SPECIES_LETTY] = 0,
    [SPECIES_CPATCHOULI] = 1,
    [SPECIES_PATCHOULI] = 1,
    [SPECIES_CYUUGI] = 1,
    [SPECIES_YUUGI] = 1,
    [SPECIES_CTENSHI] = 0,
    [SPECIES_TENSHI] = 0,
    [SPECIES_CPARSEE] = 1,
    [SPECIES_PARSEE] = 1,
    [SPECIES_CMURASA] = 0,
    [SPECIES_MURASA] = 0,
    [SPECIES_CKISUME] = 0,
    [SPECIES_KISUME] = 0,
    [SPECIES_CKOGASA] = 1,
    [SPECIES_KOGASA] = 1,
    [SPECIES_CSATORI] = 1,
    [SPECIES_SATORI] = 1,
    [SPECIES_CEIRIN] = 1,
    [SPECIES_EIRIN] = 1,
    [SPECIES_CRAN] = 1,
    [SPECIES_RAN] = 1,
    [SPECIES_CDAIYOUSEI] = 0,
    [SPECIES_DAIYOUSEI] = 0,
    [SPECIES_CNITORI] = 0,
    [SPECIES_NITORI] = 0,
    [SPECIES_CHINA] = 0,
    [SPECIES_HINA] = 0,
    [SPECIES_CKOMACHI] = 0,
    [SPECIES_KOMACHI] = 0,
    [SPECIES_CYUYUKO] = 0,
    [SPECIES_YUYUKO] = 0,
    [SPECIES_CMEILING] = 0,
    [SPECIES_MEILING] = 0,
    [SPECIES_CSAKUYA] = 1,
    [SPECIES_SAKUYA] = 1,
    [SPECIES_CLUNASA] = 1,
    [SPECIES_LUNASA] = 1,
    [SPECIES_CMERLIN] = 0,
    [SPECIES_MERLIN] = 0,
    [SPECIES_CLYRICA] = 0,
    [SPECIES_LYRICA] = 0,
    [SPECIES_CLAYLA] = 0,
    [SPECIES_LAYLA] = 0,
    [SPECIES_CKANAKO] = 1,
    [SPECIES_KANAKO] = 1,
    [SPECIES_CRIN] = 0,
    [SPECIES_RIN] = 0,
    [SPECIES_CUTSUHO] = 0,
    [SPECIES_UTSUHO] = 0,
    [SPECIES_CICHIRIN] = 1,
    [SPECIES_ICHIRIN] = 1,
    [SPECIES_CSUNNYMILK] = 2,
    [SPECIES_SUNNYMILK] = 2,
    [SPECIES_CLUNACHILD] = 1,
    [SPECIES_LUNACHILD] = 1,
    [SPECIES_CSTARSAPPHIRE] = 0,
    [SPECIES_STARSAPPHIRE] = 0,
    [SPECIES_CYUUKA] = 2,
    [SPECIES_YUUKA] = 2,
    [SPECIES_CAYA] = 1,
    [SPECIES_AYA] = 1,
    [SPECIES_CSHIKIEIKI] = 0,
    [SPECIES_SHIKIEIKI] = 0,
    [SPECIES_CSHOU] = 1,
    [SPECIES_SHOU] = 1,
    [SPECIES_CWRIGGLE] = 0,
    [SPECIES_WRIGGLE] = 0,
    [SPECIES_CTEWI] = 0,
    [SPECIES_TEWI] = 0,
    [SPECIES_KEDAMA] = 0,
    [SPECIES_CNUE] = 1,
    [SPECIES_NUE] = 1,
    [SPECIES_CSUWAKO] = 1,
    [SPECIES_SUWAKO] = 1,
    [SPECIES_REISENII] = 1,
    [SPECIES_CMARISA] = 1,
    [SPECIES_MARISA] = 1,
    [SPECIES_CREIMU] = 1,
    [SPECIES_REIMU] = 1,
    [SPECIES_CBYAKUREN] = 1,
    [SPECIES_BYAKUREN] = 1,
    [SPECIES_KONNGARA] = 1,
    [SPECIES_KIKURI] = 1,
    [SPECIES_YUUGENMAGAN] = 1,
    [SPECIES_CTOYOHIME] = 1,
    [SPECIES_TOYOHIME] = 1,
    [SPECIES_GOLIATH] = 1,
    [SPECIES_SARIEL] = 1,
    [SPECIES_AKYUU] = 1,
    [SPECIES_GENJII] = 0,
    [SPECIES_TORI] = 0,
    [SPECIES_NAMAZU] = 1,
    [SPECIES_CELLY] = 1,
    [SPECIES_ELLY] = 1,
    [SPECIES_CORANGE] = 2,
    [SPECIES_ORANGE] = 2,
    [SPECIES_YOUKI] = 0,
    [SPECIES_CCHIYURI] = 1,
    [SPECIES_CHIYURI] = 1,
    [SPECIES_CYUMEMI] = 1,
    [SPECIES_YUMEMI] = 1,
    [SPECIES_CELLEN] = 1,
    [SPECIES_ELLEN] = 1,
    [SPECIES_CKAZAMI] = 2,
    [SPECIES_KAZAMI] = 2,
    [SPECIES_CMEIRA] = 1,
    [SPECIES_MEIRA] = 1,
    [SPECIES_CSARA] = 0,
    [SPECIES_SARA] = 0,
    [SPECIES_CLUIZE] = 1,
    [SPECIES_LUIZE] = 1,
    [SPECIES_CMARGATROID] = 1,
    [SPECIES_MARGATROID] = 1,
    [SPECIES_CKANA] = 1,
    [SPECIES_KANA] = 1,
    [SPECIES_CHAKUREI] = 1,
    [SPECIES_HAKUREI] = 1,
    [SPECIES_CKIRISAME] = 1,
    [SPECIES_KIRISAME] = 1,
    [SPECIES_CKOTOHIME] = 1,
    [SPECIES_KOTOHIME] = 1,
    [SPECIES_CYUMEKO] = 1,
    [SPECIES_YUMEKO] = 1,
    [SPECIES_CSHINKI] = 1,
    [SPECIES_SHINKI] = 1,
    [SPECIES_MIMICHAN] = 1,
    [SPECIES_RUUKOTO] = 0,
    [SPECIES_CRIKA] = 1,
    [SPECIES_RIKA] = 0,
    [SPECIES_CMUGETSU] = 1,
    [SPECIES_MUGETSU] = 1,
    [SPECIES_CGENGETSU] = 1,
    [SPECIES_GENGETSU] = 1,
    [SPECIES_CKURUMI] = 1,
    [SPECIES_KURUMI] = 1,
    [SPECIES_CRIKAKO] = 1,
    [SPECIES_RIKAKO] = 1,
    [SPECIES_CYUKI] = 1,
    [SPECIES_CMAI] = 1,
    [SPECIES_MAI] = 1,
    [SPECIES_DSUNNYMILK] = 2,
    [SPECIES_TLUNACHILD] = 1,
    [SPECIES_HSTARSAPPHIRE] = 0,
    [SPECIES_ANITORI] = 0,
    [SPECIES_TNITORI] = 0,
    [SPECIES_AMOKOU] = 1,
    [SPECIES_DMOKOU] = 1,
    [SPECIES_DREISEN] = 1,
    [SPECIES_TREISEN] = 1,
    [SPECIES_TSAKUYA] = 1,
    [SPECIES_HSAKUYA] = 1,
    [SPECIES_ARUMIA] = 1,
    [SPECIES_SRUMIA] = 1,
    [SPECIES_HMYSTIA] = 0,
    [SPECIES_AMYSTIA] = 0,
    [SPECIES_ACHEN] = 2,
    [SPECIES_TCHEN] = 2,
    [SPECIES_DYOUMU] = 0,
    [SPECIES_SYOUMU] = 0,
    [SPECIES_AYUUKA] = 2,
    [SPECIES_TYUUKA] = 2,
    [SPECIES_SAYA] = 1,
    [SPECIES_TAYA] = 1,
    [SPECIES_ATENSHI] = 0,
    [SPECIES_DTENSHI] = 0,
    [SPECIES_DPARSEE] = 1,
    [SPECIES_TPARSEE] = 1,
    [SPECIES_AKOISHI] = 2,
    [SPECIES_SKOISHI] = 2,
    [SPECIES_DBYAKUREN] = 1,
    [SPECIES_TBYAKUREN] = 1,
    [SPECIES_DICHIRIN] = 1,
    [SPECIES_TICHIRIN] = 1,
    [SPECIES_AKANAKO] = 1,
    [SPECIES_DKANAKO] = 1,
    [SPECIES_AKAGUYA] = 0,
    [SPECIES_DKAGUYA] = 0,
    [SPECIES_SHINGYOKUO] = 0,
    [SPECIES_SHINGYOKUM] = 0,
    [SPECIES_SHINGYOKUF] = 0,
    [SPECIES_AUTSUHO] = 0,
    [SPECIES_SUTSUHO] = 0,
    [SPECIES_DMOMIJI] = 1,
    [SPECIES_ELIS] = 1,
    [SPECIES_MIMA] = 0,
    [SPECIES_SKOMACHI] = 0,
    [SPECIES_AKOMACHI] = 0,
    [SPECIES_AEIRIN] = 1,
    [SPECIES_HEIRIN] = 1,
    [SPECIES_DYUKARI] = 1,
    [SPECIES_TYUKARI] = 1,
    [SPECIES_AALICE] = 1,
    [SPECIES_TALICE] = 1,
    [SPECIES_AREIMU] = 1,
    [SPECIES_DREIMU] = 1,
    [SPECIES_SCIRNO] = 1,
    [SPECIES_TCIRNO] = 1,
    [SPECIES_DYUYUKO] = 0,
    [SPECIES_AYUYUKO] = 0,
    [SPECIES_HLUNASA] = 1,
    [SPECIES_HMERLIN] = 0,
    [SPECIES_HLYRICA] = 0,
    [SPECIES_ARAN] = 1,
    [SPECIES_HRAN] = 1,
    [SPECIES_AMEDICINE] = 1,
    [SPECIES_TMEDICINE] = 1,
    [SPECIES_AHINA] = 0,
    [SPECIES_DHINA] = 0,
    [SPECIES_SSHIZUHA] = 2,
    [SPECIES_SRIN] = 0,
    [SPECIES_ARIN] = 0,
    [SPECIES_ZOMBIEFAIRY] = 1,
    [SPECIES_HSHIZUHA] = 2,
    [SPECIES_ASUWAKO] = 1,
    [SPECIES_ASHOU] = 1,
    [SPECIES_TSHOU] = 1,
    [SPECIES_ATOKIKO] = 1,
    [SPECIES_DSUWAKO] = 1,
    [SPECIES_SYAMAME] = 2,
    [SPECIES_SKOGASA] = 1,
    [SPECIES_TKOGASA] = 1,
    [SPECIES_DREMILIA] = 0,
    [SPECIES_SFLANDRE] = 1,
    [SPECIES_DWRIGGLE] = 0,
    [SPECIES_DMEILING] = 0,
    [SPECIES_TENSOKU] = 0,
    [SPECIES_ASUNNYMILK] = 2,
    [SPECIES_ALUNACHILD] = 1,
    [SPECIES_SWRIGGLE] = 0,
    [SPECIES_HKOAKUMA] = 1,
    [SPECIES_SMEILING] = 0,
    [SPECIES_CELIS] = 1,
    [SPECIES_CSARIEL] = 1,
    [SPECIES_ADMYSTIA] = 0,
    [SPECIES_THATATE] = 1,
    [SPECIES_DHATATE] = 1,
    [SPECIES_AKISISTERS] = 2,
    [SPECIES_DLAYLA] = 0,
    [SPECIES_DKEINE] = 0,
    [SPECIES_AREMILIA] = 0,
    [SPECIES_DTEWI] = 0,
    [SPECIES_ATEWI] = 0,
    [SPECIES_DSHIKIEIKI] = 0,
    [SPECIES_DMINORIKO] = 2,
    [SPECIES_TSUIKA] = 1,
    [SPECIES_ASANAE] = 0,
    [SPECIES_AFLANDRE] = 1,
    [SPECIES_ADAIYOUSEI] = 0,
    [SPECIES_ASHIKIEIKI] = 0,
    [SPECIES_TTOYOHIME] = 1,
    [SPECIES_CKONNGARA] = 1,
    [SPECIES_CYUUGENMAGAN] = 1,
    [SPECIES_ASUIKA] = 1,
    [SPECIES_HLILYWHITE] = 2,
    [SPECIES_SLILYBLACK] = 2,
    [SPECIES_ANUE] = 1,
    [SPECIES_TNUE] = 1,
    [SPECIES_DPATCHOULI] = 1,
    [SPECIES_DLETTY] = 0,
    [SPECIES_HLETTY] = 0,
    [SPECIES_SYORIHIME] = 1,
    [SPECIES_CSHINGYOKU] = 0,
    [SPECIES_ALILYBLACK] = 2,
    [SPECIES_DYUUGI] = 1,
    [SPECIES_TNAZRIN] = 1,
    [SPECIES_HNAZRIN] = 1,
    [SPECIES_TKISUME] = 0,
    [SPECIES_AYUUGI] = 1,
    [SPECIES_HKEINE] = 0,
    [SPECIES_DIKU] = 0,
    [SPECIES_TIKU] = 0,
    [SPECIES_AMINORIKO] = 2,
    [SPECIES_RINNOSUKE] = 0,
    [SPECIES_ADCIRNO] = 1,
    [SPECIES_ADREISEN] = 1,
    [SPECIES_SSARIEL] = 1,
    [SPECIES_ALILYWHITE] = 2,
    [SPECIES_CMIMA] = 0,
    [SPECIES_CKIKURI] = 1,
    [SPECIES_ADMEILING] = 0,
    [SPECIES_APATCHOULI] = 1,
    [SPECIES_SMARISA] = 1,
    [SPECIES_AMARISA] = 1,
    [SPECIES_DMURASA] = 0,
    [SPECIES_AMURASA] = 0,
    [SPECIES_ASTARSAPPHIRE] = 0,
    [SPECIES_AKAZAMI] = 2,
    [SPECIES_SMEDICINE] = 1,
    [SPECIES_DDAIYOUSEI] = 0,
    [SPECIES_TYAMAME] = 2,
    [SPECIES_TSATORI] = 1,
    [SPECIES_DSATORI] = 1,
    [SPECIES_ADLETTY] = 1,
    [SPECIES_ADTEWI] = 0,
    [SPECIES_ADMARISA] = 1,
    [SPECIES_ADALICE] = 1,
    [SPECIES_TSANAE] = 0,
    [SPECIES_YUKI] = 1,
    [SPECIES_ADMOKOU] = 1,
    [SPECIES_ADYUKARI] = 1,
    [SPECIES_ADRAN] = 1,
    [SPECIES_ADCHEN] = 2,
    [SPECIES_DARKALICE] = 0,
    [SPECIES_TENMA] = 1,
    [SPECIES_SENDAI] = 1,
    [SPECIES_CKYOUKO] = 2,
    [SPECIES_KYOUKO] = 2,
    [SPECIES_CYOSHIKA] = 1,
    [SPECIES_YOSHIKA] = 1,
    [SPECIES_CSEIGA] = 0,
    [SPECIES_SEIGA] = 0,
    [SPECIES_CTOJIKO] = 0,
    [SPECIES_TOJIKO] = 0,
    [SPECIES_CFUTO] = 0,
    [SPECIES_FUTO] = 0,
    [SPECIES_CMIKO] = 1,
    [SPECIES_MIKO] = 1,
    [SPECIES_CMAMIZOU] = 2,
    [SPECIES_MAMIZOU] = 2,
    [SPECIES_CKASEN] = 0,
    [SPECIES_KASEN] = 0,
    [SPECIES_GOMASEKI] = 0,
    [SPECIES_CWAKASAGI] = 0,
};//2PUPPETPY

const struct SpritePalette gMonIconPaletteTable[] =
{
    { gMonIconPalettes[0], POKE_ICON_BASE_PAL_TAG + 0 },
    { gMonIconPalettes[1], POKE_ICON_BASE_PAL_TAG + 1 },
    { gMonIconPalettes[2], POKE_ICON_BASE_PAL_TAG + 2 },

// There are only 3 actual palettes. The following are unused
// and don't point to valid data.
    { gMonIconPalettes[3], POKE_ICON_BASE_PAL_TAG + 3 },
    { gMonIconPalettes[4], POKE_ICON_BASE_PAL_TAG + 4 },
    { gMonIconPalettes[5], POKE_ICON_BASE_PAL_TAG + 5 },
};

static const struct OamData sMonIconOamData =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

// fastest to slowest

static const union AnimCmd sAnim_0[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_2[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_3[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_4[] =
{
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(0, 29), // frame 0 is repeated
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sMonIconAnims[] =
{
    sAnim_0,
    sAnim_1,
    sAnim_2,
    sAnim_3,
    sAnim_4,
};

static const union AffineAnimCmd sAffineAnim_0[] =
{
    AFFINEANIMCMD_FRAME(0, 0, 0, 10),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_1[] =
{
    AFFINEANIMCMD_FRAME(-2, -2, 0, 122),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sMonIconAffineAnims[] =
{
    sAffineAnim_0,
    sAffineAnim_1,
};

static const u16 sSpriteImageSizes[3][4] =
{
    [ST_OAM_SQUARE] =
    {
        [SPRITE_SIZE(8x8)]   =  8 * 8  / 2,
        [SPRITE_SIZE(16x16)] = 16 * 16 / 2,
        [SPRITE_SIZE(32x32)] = 32 * 32 / 2,
        [SPRITE_SIZE(64x64)] = 64 * 64 / 2,
    },
    [ST_OAM_H_RECTANGLE] =
    {
        [SPRITE_SIZE(16x8)]  = 16 * 8  / 2,
        [SPRITE_SIZE(32x8)]  = 32 * 8  / 2,
        [SPRITE_SIZE(32x16)] = 32 * 16 / 2,
        [SPRITE_SIZE(64x32)] = 64 * 32 / 2,
    },
    [ST_OAM_V_RECTANGLE] =
    {
        [SPRITE_SIZE(8x16)]  =  8 * 16 / 2,
        [SPRITE_SIZE(8x32)]  =  8 * 32 / 2,
        [SPRITE_SIZE(16x32)] = 16 * 32 / 2,
        [SPRITE_SIZE(32x64)] = 32 * 64 / 2,
    },
};

u8 CreateMonIcon(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = GetMonIconPtr(species, personality),
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    if (species > NUM_SPECIES)
        iconTemplate.paletteTag = POKE_ICON_BASE_PAL_TAG;

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u8 CreateMonIconNoPersonality(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = NULL,
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    iconTemplate.image = GetMonIconTiles(species);
    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u16 GetIconSpecies(u16 species, u32 personality)
{
    u16 result;
    result = species;
    return result;
}

u16 GetIconSpeciesNoPersonality(u16 species)
{
    u16 value;
    return GetIconSpecies(species, 0);

}

const u8 *GetMonIconPtr(u16 species, u32 personality)
{
    return GetMonIconTiles(GetIconSpecies(species, personality));
}

void FreeAndDestroyMonIconSprite(struct Sprite *sprite)
{
    FreeAndDestroyMonIconSprite_(sprite);
}

void LoadMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        LoadSpritePalette(&gMonIconPaletteTable[i]);
}

// unused
void SafeLoadMonIconPalette(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void LoadMonIconPalette(u16 species)
{
    u8 palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void FreeMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        FreeSpritePaletteByTag(gMonIconPaletteTable[i].tag);
}

// unused
void SafeFreeMonIconPalette(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void FreeMonIconPalette(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void SpriteCB_MonIcon(struct Sprite *sprite)
{
    UpdateMonIconFrame(sprite);
}

const u8* GetMonIconTiles(u16 species)
{
    const u8* iconSprite = gMonIconTable[species];
    return iconSprite;
}

void TryLoadAllMonIconPalettesAtOffset(u16 offset)
{
    s32 i;
    const struct SpritePalette* monIconPalettePtr;

    if (offset <= 0xA0)
    {
        monIconPalettePtr = gMonIconPaletteTable;
        for(i = ARRAY_COUNT(gMonIconPaletteTable) - 1; i >= 0; i--)
        {
            LoadPalette(monIconPalettePtr->data, offset, 0x20);
            offset += 0x10;
            monIconPalettePtr++;
        }
    }
}

u8 GetValidMonIconPalIndex(u16 species)
{
    return gMonIconPaletteIndices[species];
}

u8 GetMonIconPaletteIndexFromSpecies(u16 species)
{
    return gMonIconPaletteIndices[species];
}

const u16* GetValidMonIconPalettePtr(u16 species)
{
    return gMonIconPaletteTable[gMonIconPaletteIndices[species]].data;
}

u8 UpdateMonIconFrame(struct Sprite *sprite)
{
    u8 result = 0;

    if (sprite->animDelayCounter == 0)
    {
        s16 frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;

        switch (frame)
        {
        case -1:
            break;
        case -2:
            sprite->animCmdIndex = 0;
            break;
        default:
            RequestSpriteCopy(
                // pointer arithmetic is needed to get the correct pointer to perform the sprite copy on.
                // because sprite->images is a struct def, it has to be casted to (u8 *) before any
                // arithmetic can be performed.
                (u8 *)sprite->images + (sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] * frame),
                (u8 *)(OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP),
                sSpriteImageSizes[sprite->oam.shape][sprite->oam.size]);
            sprite->animDelayCounter = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration & 0xFF;
            sprite->animCmdIndex++;
            result = sprite->animCmdIndex;
            break;
        }
    }
    else
    {
        sprite->animDelayCounter--;
    }
    return result;
}

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *iconTemplate, s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;

    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[iconTemplate->oam->shape][iconTemplate->oam->size] };

    struct SpriteTemplate spriteTemplate =
    {
        .tileTag = TAG_NONE,
        .paletteTag = iconTemplate->paletteTag,
        .oam = iconTemplate->oam,
        .anims = iconTemplate->anims,
        .images = &image,
        .affineAnims = iconTemplate->affineAnims,
        .callback = iconTemplate->callback,
    };

    spriteId = CreateSprite(&spriteTemplate, x, y, subpriority);
    gSprites[spriteId].animPaused = TRUE;
    gSprites[spriteId].animBeginning = FALSE;
    gSprites[spriteId].images = (const struct SpriteFrameImage *)iconTemplate->image;
    return spriteId;
}

static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite)
{
    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] };
    sprite->images = &image;
    DestroySprite(sprite);
}

void SetPartyHPBarSprite(struct Sprite *sprite, u8 animNum)
{
    sprite->animNum = animNum;
    sprite->animDelayCounter = 0;
    sprite->animCmdIndex = 0;
}

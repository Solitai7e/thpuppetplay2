const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("Outsider"), //"T(?![[:lower:]]) was used
    [SPECIES_CSANAE] = _("{CHIBI}Sanae"),
    [SPECIES_SANAE] = _("Sanae"),
    [SPECIES_CALICE] = _("{CHIBI}Alice"),
    [SPECIES_ALICE] = _("Alice"),
    [SPECIES_CREISEN] = _("{CHIBI}Reisen"),
    [SPECIES_REISEN] = _("Reisen"),
    [SPECIES_CLILYWHITE] = _("{CHIBI}LilyWhite"),
    [SPECIES_LILYWHITE] = _("LilyWhite"),
    [SPECIES_CLILYBLACK] = _("{CHIBI}LilyBlack"),
    [SPECIES_LILYBLACK] = _("LilyBlack"),
    [SPECIES_CMOMIJI] = _("{CHIBI}Momiji"),
    [SPECIES_MOMIJI] = _("Momiji"),
    [SPECIES_CSHIZUHA] = _("{CHIBI}Shizuha"),
    [SPECIES_SHIZUHA] = _("Shizuha"),
    [SPECIES_CMEDICINE] = _("{CHIBI}Medicine"),
    [SPECIES_MEDICINE] = _("Medicine"),
    [SPECIES_CKOAKUMA] = _("{CHIBI}Koakuma"),
    [SPECIES_KOAKUMA] = _("Koakuma"),
    [SPECIES_CNAZRIN] = _("{CHIBI}Nazrin"),
    [SPECIES_NAZRIN] = _("Nazrin"),
    [SPECIES_CTOKIKO] = _("{CHIBI}Tokiko"),
    [SPECIES_TOKIKO] = _("Tokiko"),
    [SPECIES_CREMILIA] = _("{CHIBI}Remilia"),
    [SPECIES_REMILIA] = _("Remilia"),
    [SPECIES_CCIRNO] = _("{CHIBI}Cirno"),
    [SPECIES_CIRNO] = _("Cirno"),
    [SPECIES_CRUMIA] = _("{CHIBI}Rumia"),
    [SPECIES_RUMIA] = _("Rumia"),
    [SPECIES_SHANGHAI] = _("Shanghai"),
    [SPECIES_CFLANDRE] = _("{CHIBI}Flandre"),
    [SPECIES_FLANDRE] = _("Flandre"),
    [SPECIES_HOURAI] = _("Hourai"),
    [SPECIES_CYOUMU] = _("{CHIBI}Youmu"),
    [SPECIES_YOUMU] = _("Youmu"),
    [SPECIES_CYUKARI] = _("{CHIBI}Yukari"),
    [SPECIES_YUKARI] = _("Yukari"),
    [SPECIES_CSUIKA] = _("{CHIBI}Suika"),
    [SPECIES_SUIKA] = _("Suika"),
    [SPECIES_CMYSTIA] = _("{CHIBI}Mystia"),
    [SPECIES_MYSTIA] = _("Mystia"),
    [SPECIES_CMINORIKO] = _("{CHIBI}Minoriko"),
    [SPECIES_MINORIKO] = _("Minoriko"),
    [SPECIES_CKEINE] = _("{CHIBI}Keine"),
    [SPECIES_KEINE] = _("Keine"),
    [SPECIES_AKEINE] = _("{ATTACK}Keine"),
    [SPECIES_CIKU] = _("{CHIBI}Iku"),
    [SPECIES_IKU] = _("Iku"),
    [SPECIES_CKOISHI] = _("{CHIBI}Koishi"),
    [SPECIES_KOISHI] = _("Koishi"),
    [SPECIES_CYAMAME] = _("{CHIBI}Yamame"),
    [SPECIES_YAMAME] = _("Yamame"),
    [SPECIES_CCHEN] = _("{CHIBI}Chen"),
    [SPECIES_CHEN] = _("Chen"),
    [SPECIES_CYORIHIME] = _("{CHIBI}Yorihime"),
    [SPECIES_YORIHIME] = _("Yorihime"),
    [SPECIES_CKAGUYA] = _("{CHIBI}Kaguya"),
    [SPECIES_KAGUYA] = _("Kaguya"),
    [SPECIES_CMOKOU] = _("{CHIBI}Mokou"),
    [SPECIES_MOKOU] = _("Mokou"),
    [SPECIES_CHATATE] = _("{CHIBI}Hatate"),
    [SPECIES_HATATE] = _("Hatate"),
    [SPECIES_CLETTY] = _("{CHIBI}Letty"),
    [SPECIES_LETTY] = _("Letty"),
    [SPECIES_CPATCHOULI] = _("{CHIBI}Patchouli"),
    [SPECIES_PATCHOULI] = _("Patchouli"),
    [SPECIES_CYUUGI] = _("{CHIBI}Yuugi"),
    [SPECIES_YUUGI] = _("Yuugi"),
    [SPECIES_CTENSHI] = _("{CHIBI}Tenshi"),
    [SPECIES_TENSHI] = _("Tenshi"),
    [SPECIES_CPARSEE] = _("{CHIBI}Parsee"),
    [SPECIES_PARSEE] = _("Parsee"),
    [SPECIES_CMURASA] = _("{CHIBI}Murasa"),
    [SPECIES_MURASA] = _("Murasa"),
    [SPECIES_CKISUME] = _("{CHIBI}Kisume"),
    [SPECIES_KISUME] = _("Kisume"),
    [SPECIES_CKOGASA] = _("{CHIBI}Kogasa"),
    [SPECIES_KOGASA] = _("Kogasa"),
    [SPECIES_CSATORI] = _("{CHIBI}Satori"),
    [SPECIES_SATORI] = _("Satori"),
    [SPECIES_CEIRIN] = _("{CHIBI}Eirin"),
    [SPECIES_EIRIN] = _("Eirin"),
    [SPECIES_CRAN] = _("{CHIBI}Ran"),
    [SPECIES_RAN] = _("Ran"),
    [SPECIES_CDAIYOUSEI] = _("{CHIBI}Daiyousei"),
    [SPECIES_DAIYOUSEI] = _("Daiyousei"),
    [SPECIES_CNITORI] = _("{CHIBI}Nitori"),
    [SPECIES_NITORI] = _("Nitori"),
    [SPECIES_CHINA] = _("{CHIBI}Hina"),
    [SPECIES_HINA] = _("Hina"),
    [SPECIES_CKOMACHI] = _("{CHIBI}Komachi"),
    [SPECIES_KOMACHI] = _("Komachi"),
    [SPECIES_CYUYUKO] = _("{CHIBI}Yuyuko"),
    [SPECIES_YUYUKO] = _("Yuyuko"),
    [SPECIES_CMEILING] = _("{CHIBI}Meiling"),
    [SPECIES_MEILING] = _("Meiling"),
    [SPECIES_CSAKUYA] = _("{CHIBI}Sakuya"),
    [SPECIES_SAKUYA] = _("Sakuya"),
    [SPECIES_CLUNASA] = _("{CHIBI}Lunasa"),
    [SPECIES_LUNASA] = _("Lunasa"),
    [SPECIES_CMERLIN] = _("{CHIBI}Merlin"),
    [SPECIES_MERLIN] = _("Merlin"),
    [SPECIES_CLYRICA] = _("{CHIBI}Lyrica"),
    [SPECIES_LYRICA] = _("Lyrica"),
    [SPECIES_CLAYLA] = _("{CHIBI}Layla"),
    [SPECIES_LAYLA] = _("Layla"),
    [SPECIES_CKANAKO] = _("{CHIBI}Kanako"),
    [SPECIES_KANAKO] = _("Kanako"),
    [SPECIES_CRIN] = _("{CHIBI}Rin"),
    [SPECIES_RIN] = _("Rin"),
    [SPECIES_CUTSUHO] = _("{CHIBI}Utsuho"),
    [SPECIES_UTSUHO] = _("Utsuho"),
    [SPECIES_CICHIRIN] = _("{CHIBI}Ichirin"),
    [SPECIES_ICHIRIN] = _("Ichirin"),
    [SPECIES_CSUNNYMILK] = _("{CHIBI}SunnyMilk"),
    [SPECIES_SUNNYMILK] = _("SunnyMilk"),
    [SPECIES_CLUNACHILD] = _("{CHIBI}LunaChild"),
    [SPECIES_LUNACHILD] = _("LunaChild"),
    [SPECIES_CSTARSAPPHIRE] = _("{CHIBI}StarSapp"), //
    [SPECIES_STARSAPPHIRE] = _("StarSapp"), //
    [SPECIES_CYUUKA] = _("{CHIBI}Yuuka"),
    [SPECIES_YUUKA] = _("Yuuka"),
    [SPECIES_CAYA] = _("{CHIBI}Aya"),
    [SPECIES_AYA] = _("Aya"),
    [SPECIES_CSHIKIEIKI] = _("{CHIBI}Shikieiki"),
    [SPECIES_SHIKIEIKI] = _("Shikieiki"),
    [SPECIES_CSHOU] = _("{CHIBI}Shou"),
    [SPECIES_SHOU] = _("Shou"),
    [SPECIES_CWRIGGLE] = _("{CHIBI}Wriggle"),
    [SPECIES_WRIGGLE] = _("Wriggle"),
    [SPECIES_CTEWI] = _("{CHIBI}Tewi"),
    [SPECIES_TEWI] = _("Tewi"),
    [SPECIES_KEDAMA] = _("Kedama"),
    [SPECIES_CNUE] = _("{CHIBI}Nue"),
    [SPECIES_NUE] = _("Nue"),
    [SPECIES_CSUWAKO] = _("{CHIBI}Suwako"),
    [SPECIES_SUWAKO] = _("Suwako"),
    [SPECIES_REISENII] = _("Reisen II"),
    [SPECIES_CMARISA] = _("{CHIBI}Marisa"),
    [SPECIES_MARISA] = _("Marisa"),
    [SPECIES_CREIMU] = _("{CHIBI}Reimu"),
    [SPECIES_REIMU] = _("Reimu"),
    [SPECIES_CBYAKUREN] = _("{CHIBI}Byakuren"),
    [SPECIES_BYAKUREN] = _("Byakuren"),
    [SPECIES_KONNGARA] = _("Konngara"),
    [SPECIES_KIKURI] = _("Kikuri"),
    [SPECIES_YUUGENMAGAN] = _("YugenMagan"), //
    [SPECIES_CTOYOHIME] = _("{CHIBI}Toyohime"),
    [SPECIES_TOYOHIME] = _("Toyohime"),
    [SPECIES_GOLIATH] = _("Goliath"),
    [SPECIES_SARIEL] = _("Sariel"),
    [SPECIES_AKYUU] = _("Akyuu"),
    [SPECIES_GENJII] = _("Genjii"),
    [SPECIES_TORI] = _("Tori"),
    [SPECIES_NAMAZU] = _("Namazu"),
    [SPECIES_CELLY] = _("{CHIBI}Elly"),
    [SPECIES_ELLY] = _("Elly"),
    [SPECIES_CORANGE] = _("{CHIBI}Orange"),
    [SPECIES_ORANGE] = _("Orange"),
    [SPECIES_YOUKI] = _("Youki"),
    [SPECIES_CCHIYURI] = _("{CHIBI}Chiyuri"),
    [SPECIES_CHIYURI] = _("Chiyuri"),
    [SPECIES_CYUMEMI] = _("{CHIBI}Yumemi"),
    [SPECIES_YUMEMI] = _("Yumemi"),
    [SPECIES_CELLEN] = _("{CHIBI}Ellen"),
    [SPECIES_ELLEN] = _("Ellen"),
    [SPECIES_CKAZAMI] = _("{CHIBI}Kazami"),
    [SPECIES_KAZAMI] = _("Kazami"),
    [SPECIES_CMEIRA] = _("{CHIBI}Meira"),
    [SPECIES_MEIRA] = _("Meira"),
    [SPECIES_CSARA] = _("{CHIBI}Sara"),
    [SPECIES_SARA] = _("Sara"),
    [SPECIES_CLUIZE] = _("{CHIBI}Luize"),
    [SPECIES_LUIZE] = _("Luize"),
    [SPECIES_CMARGATROID] = _("{CHIBI}Marga"), //
    [SPECIES_MARGATROID] = _("Margatroid"),
    [SPECIES_CKANA] = _("{CHIBI}Kana"),
    [SPECIES_KANA] = _("Kana"),
    [SPECIES_CHAKUREI] = _("{CHIBI}Hakurei"),
    [SPECIES_HAKUREI] = _("Hakurei"),
    [SPECIES_CKIRISAME] = _("{CHIBI}Kirisame"),
    [SPECIES_KIRISAME] = _("Kirisame"),
    [SPECIES_CKOTOHIME] = _("{CHIBI}Kotohime"),
    [SPECIES_KOTOHIME] = _("Kotohime"),
    [SPECIES_CYUMEKO] = _("{CHIBI}Yumeko"),
    [SPECIES_YUMEKO] = _("Yumeko"),
    [SPECIES_CSHINKI] = _("{CHIBI}Shinki"),
    [SPECIES_SHINKI] = _("Shinki"),
    [SPECIES_MIMICHAN] = _("Mimi-chan"),
    [SPECIES_RUUKOTO] = _("Ruukoto"),
    [SPECIES_CRIKA] = _("{CHIBI}Rika"),
    [SPECIES_RIKA] = _("Rika"),
    [SPECIES_CMUGETSU] = _("{CHIBI}Mugetsu"),
    [SPECIES_MUGETSU] = _("Mugetsu"),
    [SPECIES_CGENGETSU] = _("{CHIBI}Gengetsu"),
    [SPECIES_GENGETSU] = _("Gengetsu"),
    [SPECIES_CKURUMI] = _("{CHIBI}Kurumi"),
    [SPECIES_KURUMI] = _("Kurumi"),
    [SPECIES_CRIKAKO] = _("{CHIBI}Rikako"),
    [SPECIES_RIKAKO] = _("Rikako"),
    [SPECIES_CYUKI] = _("{CHIBI}Yuki"),
    [SPECIES_CMAI] = _("{CHIBI}Mai"),
    [SPECIES_MAI] = _("Mai"),
    [SPECIES_DSUNNYMILK] = _("{DEFENSE}SunnyMilk"),
    [SPECIES_TLUNACHILD] = _("{TECHNICAL}LunaChild"),
    [SPECIES_HSTARSAPPHIRE] = _("{HELPER}StarSapp"), //
    [SPECIES_ANITORI] = _("{ATTACK}Nitori"),
    [SPECIES_TNITORI] = _("{TECHNICAL}Nitori"),
    [SPECIES_AMOKOU] = _("{ATTACK}Mokou"),
    [SPECIES_DMOKOU] = _("{DEFENSE}Mokou"),
    [SPECIES_DREISEN] = _("{DEFENSE}Reisen"),
    [SPECIES_TREISEN] = _("{TECHNICAL}Reisen"),
    [SPECIES_TSAKUYA] = _("{TECHNICAL}Sakuya"),
    [SPECIES_HSAKUYA] = _("{HELPER}Sakuya"),
    [SPECIES_ARUMIA] = _("{ATTACK}Rumia"),
    [SPECIES_SRUMIA] = _("{SPEED}Rumia"),
    [SPECIES_HMYSTIA] = _("{HELPER}Mystia"),
    [SPECIES_AMYSTIA] = _("{ATTACK}Mystia"),
    [SPECIES_ACHEN] = _("{ATTACK}Chen"),
    [SPECIES_TCHEN] = _("{TECHNICAL}Chen"),
    [SPECIES_DYOUMU] = _("{DEFENSE}Youmu"),
    [SPECIES_SYOUMU] = _("{SPEED}Youmu"),
    [SPECIES_AYUUKA] = _("{ATTACK}Yuuka"),
    [SPECIES_TYUUKA] = _("{TECHNICAL}Yuuka"),
    [SPECIES_SAYA] = _("{SPEED}Aya"),
    [SPECIES_TAYA] = _("{TECHNICAL}Aya"),
    [SPECIES_ATENSHI] = _("{ATTACK}Tenshi"),
    [SPECIES_DTENSHI] = _("{DEFENSE}Tenshi"),
    [SPECIES_DPARSEE] = _("{DEFENSE}Parsee"),
    [SPECIES_TPARSEE] = _("{TECHNICAL}Parsee"),
    [SPECIES_AKOISHI] = _("{ATTACK}Koishi"),
    [SPECIES_SKOISHI] = _("{SPEED}Koishi"),
    [SPECIES_DBYAKUREN] = _("{DEFENSE}Byakuren"),
    [SPECIES_TBYAKUREN] = _("{TECHNICAL}Byakuren"),
    [SPECIES_DICHIRIN] = _("{DEFENSE}Ichirin"),
    [SPECIES_TICHIRIN] = _("{TECHNICAL}Ichirin"),
    [SPECIES_AKANAKO] = _("{ATTACK}Kanako"),
    [SPECIES_DKANAKO] = _("{DEFENSE}Kanako"),
    [SPECIES_AKAGUYA] = _("{ATTACK}Kaguya"),
    [SPECIES_DKAGUYA] = _("{DEFENSE}Kaguya"),
    [SPECIES_SHINGYOKUO] = _("ShinGyokuO"),
    [SPECIES_SHINGYOKUM] = _("ShinGyokuM"),
    [SPECIES_SHINGYOKUF] = _("ShinGyokuF"),
    [SPECIES_AUTSUHO] = _("{ATTACK}Utsuho"),
    [SPECIES_SUTSUHO] = _("{SPEED}Utsuho"),
    [SPECIES_DMOMIJI] = _("{DEFENSE}Momiji"),
    [SPECIES_ELIS] = _("Elis"),
    [SPECIES_MIMA] = _("Mima"),
    [SPECIES_SKOMACHI] = _("{SPEED}Komachi"),
    [SPECIES_AKOMACHI] = _("{ATTACK}Komachi"),
    [SPECIES_AEIRIN] = _("{ATTACK}Eirin"),
    [SPECIES_HEIRIN] = _("{HELPER}Eirin"),
    [SPECIES_DYUKARI] = _("{DEFENSE}Yukari"),
    [SPECIES_TYUKARI] = _("{TECHNICAL}Yukari"),
    [SPECIES_AALICE] = _("{ATTACK}Alice"),
    [SPECIES_TALICE] = _("{TECHNICAL}Alice"),
    [SPECIES_AREIMU] = _("{ATTACK}Reimu"),
    [SPECIES_DREIMU] = _("{DEFENSE}Reimu"),
    [SPECIES_SCIRNO] = _("{SPEED}Cirno"),
    [SPECIES_TCIRNO] = _("{TECHNICAL}Cirno"),
    [SPECIES_DYUYUKO] = _("{DEFENSE}Yuyuko"),
    [SPECIES_AYUYUKO] = _("{ATTACK}Yuyuko"),
    [SPECIES_HLUNASA] = _("{HELPER}Lunasa"),
    [SPECIES_HMERLIN] = _("{HELPER}Merlin"),
    [SPECIES_HLYRICA] = _("{HELPER}Lyrica"),
    [SPECIES_ARAN] = _("{ATTACK}Ran"),
    [SPECIES_HRAN] = _("{HELPER}Ran"),
    [SPECIES_AMEDICINE] = _("{ATTACK}Medicine"),
    [SPECIES_TMEDICINE] = _("{TECHNICAL}Medicine"),
    [SPECIES_AHINA] = _("{ATTACK}Hina"),
    [SPECIES_DHINA] = _("{DEFENSE}Hina"),
    [SPECIES_SSHIZUHA] = _("{SPEED}Shizuha"),
    [SPECIES_SRIN] = _("{SPEED}Rin"),
    [SPECIES_ARIN] = _("{ATTACK}Rin"),
    [SPECIES_ZOMBIEFAIRY] = _("ZombieF"), //
    [SPECIES_HSHIZUHA] = _("{HELPER}Shizuha"),
    [SPECIES_ASUWAKO] = _("{ATTACK}Suwako"),
    [SPECIES_ASHOU] = _("{ATTACK}Shou"),
    [SPECIES_TSHOU] = _("{TECHNICAL}Shou"),
    [SPECIES_ATOKIKO] = _("{ATTACK}Tokiko"),
    [SPECIES_DSUWAKO] = _("{DEFENSE}Suwako"),
    [SPECIES_SYAMAME] = _("{SPEED}Yamame"),
    [SPECIES_SKOGASA] = _("{SPEED}Kogasa"),
    [SPECIES_TKOGASA] = _("{TECHNICAL}Kogasa"),
    [SPECIES_DREMILIA] = _("{DEFENSE}Remilia"),
    [SPECIES_SFLANDRE] = _("{SPEED}Flandre"),
    [SPECIES_DWRIGGLE] = _("{DEFENSE}Wriggle"),
    [SPECIES_DMEILING] = _("{DEFENSE}Meiling"),
    [SPECIES_TENSOKU] = _("Tensoku"),
    [SPECIES_ASUNNYMILK] = _("{ATTACK}SunnyMilk"),
    [SPECIES_ALUNACHILD] = _("{ATTACK}LunaChild"),
    [SPECIES_SWRIGGLE] = _("{SPEED}Wriggle"),
    [SPECIES_HKOAKUMA] = _("{HELPER}Koakuma"),
    [SPECIES_SMEILING] = _("{SPEED}Meiling"),
    [SPECIES_CELIS] = _("{CHIBI}Elis"),
    [SPECIES_CSARIEL] = _("{CHIBI}Sariel"),
    [SPECIES_ADMYSTIA] = _("{ADVENT}Mystia"),
    [SPECIES_THATATE] = _("{TECHNICAL}Hatate"),
    [SPECIES_DHATATE] = _("{DEFENSE}Hatate"),
    [SPECIES_AKISISTERS] = _("AkiSisters"),
    [SPECIES_DLAYLA] = _("{DEFENSE}Layla"),
    [SPECIES_DKEINE] = _("{DEFENSE}Keine"),
    [SPECIES_AREMILIA] = _("{ATTACK}Remilia"),
    [SPECIES_DTEWI] = _("{DEFENSE}Tewi"),
    [SPECIES_ATEWI] = _("{ATTACK}Tewi"),
    [SPECIES_DSHIKIEIKI] = _("{DEFENSE}Shikieiki"),
    [SPECIES_DMINORIKO] = _("{DEFENSE}Minoriko"),
    [SPECIES_TSUIKA] = _("{TECHNICAL}Suika"),
    [SPECIES_ASANAE] = _("{ATTACK}Sanae"),
    [SPECIES_AFLANDRE] = _("{ATTACK}Flandre"),
    [SPECIES_ADAIYOUSEI] = _("{ATTACK}Daiyousei"),
    [SPECIES_ASHIKIEIKI] = _("{ATTACK}Shikieiki"),
    [SPECIES_TTOYOHIME] = _("{TECHNICAL}Toyohime"),
    [SPECIES_CKONNGARA] = _("{CHIBI}Konngara"),
    [SPECIES_CYUUGENMAGAN] = _("Magan"), //
    [SPECIES_ASUIKA] = _("{ATTACK}Suika"),
    [SPECIES_HLILYWHITE] = _("{HELPER}LilyWhite"),
    [SPECIES_SLILYBLACK] = _("{SPEED}LilyBlack"),
    [SPECIES_ANUE] = _("{ATTACK}Nue"),
    [SPECIES_TNUE] = _("{TECHNICAL}Nue"),
    [SPECIES_DPATCHOULI] = _("{DEFENSE}Patchouli"),
    [SPECIES_DLETTY] = _("{DEFENSE}Letty"),
    [SPECIES_HLETTY] = _("{HELPER}Letty"),
    [SPECIES_SYORIHIME] = _("{SPEED}Yorihime"),
    [SPECIES_CSHINGYOKU] = _("{CHIBI}ShinGyoku"),
    [SPECIES_ALILYBLACK] = _("{ATTACK}LilyBlack"),
    [SPECIES_DYUUGI] = _("{DEFENSE}Yuugi"),
    [SPECIES_TNAZRIN] = _("{TECHNICAL}Nazrin"),
    [SPECIES_HNAZRIN] = _("{HELPER}Nazrin"),
    [SPECIES_TKISUME] = _("{TECHNICAL}Kisume"),
    [SPECIES_AYUUGI] = _("{ATTACK}Yuugi"),
    [SPECIES_HKEINE] = _("{HELPER}Keine"),
    [SPECIES_DIKU] = _("{DEFENSE}Iku"),
    [SPECIES_TIKU] = _("{TECHNICAL}Iku"),
    [SPECIES_AMINORIKO] = _("{ATTACK}Minoriko"),
    [SPECIES_RINNOSUKE] = _("Rinnosuke"),
    [SPECIES_ADCIRNO] = _("{ADVENT}Cirno"),
    [SPECIES_ADREISEN] = _("{ADVENT}Reisen"),
    [SPECIES_SSARIEL] = _("{SPEED}Sariel"),
    [SPECIES_ALILYWHITE] = _("{ATTACK}LilyWhite"),
    [SPECIES_CMIMA] = _("{CHIBI}Mima"),
    [SPECIES_CKIKURI] = _("{CHIBI}Kikuri"),
    [SPECIES_ADMEILING] = _("{ADVENT}Meiling"),
    [SPECIES_APATCHOULI] = _("{ATTACK}Patchouli"),
    [SPECIES_SMARISA] = _("{SPEED}Marisa"),
    [SPECIES_AMARISA] = _("{ATTACK}Marisa"),
    [SPECIES_DMURASA] = _("{DEFENSE}Murasa"),
    [SPECIES_AMURASA] = _("{ATTACK}Murasa"),
    [SPECIES_ASTARSAPPHIRE] = _("{ATTACK}StarSapp"), //
    [SPECIES_AKAZAMI] = _("{ATTACK}Kazami"),
    [SPECIES_SMEDICINE] = _("{SPEED}Medicine"),
    [SPECIES_DDAIYOUSEI] = _("{DEFENSE}Daiyousei"),
    [SPECIES_TYAMAME] = _("{TECHNICAL}Yamame"),
    [SPECIES_TSATORI] = _("{TECHNICAL}Satori"),
    [SPECIES_DSATORI] = _("{DEFENSE}Satori"),
    [SPECIES_ADLETTY] = _("{ADVENT}Letty"),
    [SPECIES_ADTEWI] = _("{ADVENT}Tewi"),
    [SPECIES_ADMARISA] = _("{ADVENT}Marisa"),
    [SPECIES_ADALICE] = _("{ADVENT}Alice"),
    [SPECIES_TSANAE] = _("{TECHNICAL}Sanae"),
    [SPECIES_YUKI] = _("Yuki"),
    [SPECIES_ADMOKOU] = _("{ADVENT}Mokou"),
    [SPECIES_ADYUKARI] = _("{ADVENT}Yukari"),
    [SPECIES_ADRAN] = _("{ADVENT}Ran"),
    [SPECIES_ADCHEN] = _("{ADVENT}Chen"),
    [SPECIES_DARKALICE] = _("DarkAlice"),
    [SPECIES_TENMA] = _("Tenma"),
    [SPECIES_SENDAI] = _("Sendai"),
    [SPECIES_CKYOUKO] = _("{CHIBI}Kyouko"),
    [SPECIES_KYOUKO] = _("Kyouko"),
    [SPECIES_CYOSHIKA] = _("{CHIBI}Yoshika"),
    [SPECIES_YOSHIKA] = _("Yoshika"),
    [SPECIES_CSEIGA] = _("{CHIBI}Seiga"),
    [SPECIES_SEIGA] = _("Seiga"),
    [SPECIES_CTOJIKO] = _("{CHIBI}Tojiko"),
    [SPECIES_TOJIKO] = _("Tojiko"),
    [SPECIES_CFUTO] = _("{CHIBI}Futo"),
    [SPECIES_FUTO] = _("Futo"),
    [SPECIES_CMIKO] = _("{CHIBI}Miko"),
    [SPECIES_MIKO] = _("Miko"),
    [SPECIES_CMAMIZOU] = _("{CHIBI}Mamizou"),
    [SPECIES_MAMIZOU] = _("Mamizou"),
    [SPECIES_CKASEN] = _("{CHIBI}Kasen"),
    [SPECIES_KASEN] = _("Kasen"),
    [SPECIES_GOMASEKI] = _("Gomaseki"), //better name?
    [SPECIES_CWAKASAGI] = _("{CHIBI}Wakasagi"),
};//PUPPETPY

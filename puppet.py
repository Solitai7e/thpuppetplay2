#DISCLAIMER!!!!
#read this """""code""""" to INSTANTLY DIE

#USAGE: puppet.py puppet <form>
#use in root dir
#where puppet is the puppet name (ie "reimu")
#and form is the type/evolution/whatever by the abbrev. (ie "c", "ad")
#form can be empty to imply the base evolution after c
#caps don't matter, this script converts cases for you, just make sure you run it in thpuppetplay2

import os
import sys
import shutil

mommy = "graphics/pokemon/nue/"
u32 = "const u32 gMon"
u8 = "const u8 gMon"
gp = "graphics/pokemon/"
incbin32 = '[] = INCBIN_U32("' + gp
incbin8 = '[] = INCBIN_U8("' + gp

def kill(puppet,form = ""):

  gc = (form + puppet).upper()
  gl = (form + puppet).lower()
  gh = (form.title() + puppet.title())

  if (form.title() == 'C'):
      ff = 'CHIBI'
  elif (form.title() == 'A'):
      ff = 'ATTACK'
  elif (form.title() == 'D'):
      ff = 'DEFENSE'
  elif (form.title() == 'H'):
      ff = 'HELPER'
  elif (form.title() == 'S'):
      ff = 'SPEED'
  elif (form.title() == 'T'):
      ff = 'TECHNICAL'
  elif (form.upper() == 'AD'):
      ff = 'ADVENT'
  else:
      ff = ''
#Lazy way of copying over sprites
  os.mkdir(gp+gl)
  shutil.copy(mommy + "back.png", gp+gl)
  shutil.copy(mommy + "front.png", gp+gl)
  shutil.copy(mommy + "footprint.png", gp+gl)
  shutil.copy(mommy + "icon.png", gp+gl)
  shutil.copy(mommy + "normal.pal", gp+gl)
  shutil.copy(mommy + "shiny.pal", gp+gl)

  print("\ngraphics/pokemon/" + gl + " is prepared!")

  with open("include/graphics.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "extern " + u32 + "Palette_" + gh + "[];\nextern " + u32 + "BackPic_" + gh + "[];\nextern " + u32 + "ShinyPalette_" + gh + "[];\nextern " + u32 + "StillFrontPic_" + gh + "[];\nextern " + u8 + "Icon_" + gh + "[];\nextern " + u8 + "Footprint" + gh + "[];")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/graphics/pokemon.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "\n" + u32 + "StillFrontPic_" + gh + incbin32 + gl + '/front.4bpp.lz");\n' + u32 + "Palette_" + gh + incbin32 + gl + '/normal.gbapal.lz");\n' + u32 + "BackPic_" + gh + incbin32 + gl + '/back.4bpp.lz");\n' + u32 + "ShinyPalette_" + gh + incbin32 + gl + '/shiny.gbapal.lz");\n' + u8 + "Icon_" + gh + incbin8 + gl + '/icon.4bpp.lz");\n' + u8 + "Footprint_" + gh + incbin8 + gl + '/footprint.1bpp");')
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
        
  with open("src/pokemon.c", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + " - 1]    = ANIM_TWIST, //REPLACEME, need sMonAnimationDelayTable?")
            print("src/pokemon.c: Set the animation type! Will you add sMonAnimationDelayTable?")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
#no longer 1am but i still think this is funny
  with open("src/pokemon.c", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//2PUPPETPY"):
            a.insert(index, "    SPECIES_TO_NATIONAL(" + gc + "),")
            print("src/pokemon.c: Please write to hoenn dex too ill fix this later")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/pokemon_animation.c", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + "]    = BACK_ANIM_H_VIBRATE, //REPLACEME")
            print("src/pokemon_animation.c: Set the animation type!")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon_graphics/enemy_mon_elevation.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + "] = 0,//REPLACEME")
            print("src/data/pokemon_graphics/enemy_mon_elevation.h: Does the puppet levitate?")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon_graphics/front_pic_table.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "    SPECIES_SPRITE(" + gc + ", gMonStillFrontPic_" + gh + "),")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon_graphics/still_front_pic_table.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "    SPECIES_SPRITE(" + gc + ",      gMonStillFrontPic_" + gh + "),")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon_graphics/front_pic_coordinates.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + "] =\n    {\n        .size = MON_COORDS_SIZE(64, 64),\n        .y_offset = 0,\n    },//REPLACEME")
            print("src/data/pokemon_graphics/front_pic_coordinates.h: Does the puppet vertically offset?")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon_graphics/back_pic_table.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "    SPECIES_SPRITE(" + gc + ", gMonBackPic_" + gh + "),")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon_graphics/footprint_table.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + "] = gMonFootprint_" + gh + ",")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon_graphics/palette_table.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "    SPECIES_PAL(" + gc + ", gMonPalette_" + gh + "),")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
        
  with open("src/data/pokemon_graphics/shiny_palette_table.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "    SPECIES_SHINY_PAL(" + gc + ", gMonShinyPalette_" + gh + "),")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
        
  with open("src/pokemon_icon.c", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + "] = gMonIcon_" + gh + ",")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
#im literally too tired to merge with the last one. its 1 am
  with open("src/pokemon_icon.c", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//2PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + "] = 0,//REPLACEME")
            print("src/pokemon_icon.c: Which palette ID does it use?")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon/pokedex_text.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "const u8 g" + gh + "PokedexText[] = _(" + "\n" + r'    "A never-before seen puppet.\n"' + "\n" + r'    "It just made its way into the world,\n"' + "\n" + r'    "so it does not look like there will\n"' + "\n" + '    "be info on it right now. Add some?");//REPLACEME\n')
            print("src/data/pokemon/pokedex_text.h: Add a puppet description!")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/text/species_names.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + '] = _("{' + ff + "}" + puppet.title() + '"),')
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
        
  with open("src/data/pokemon/level_up_learnsets.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PUPPETPY"):
            a.insert(index, "static const u16 s" + gh + "LevelUpLearnset[] = {\n    LEVEL_UP_MOVE( 1, MOVE_POUND),\n    LEVEL_UP_END\n};//REPLACEME\n")
            print("src/data/pokemon/level_up_learnsets.h: Level-Up Moveset")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon/level_up_learnset_pointers.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + "] = s" + gh + "LevelUpLearnset,")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
        
  with open("src/data/pokemon/tmhm_learnsets.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + "]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)\n                                        | TMHM(TM06_TOXIC)),//REPLACEME\n")
            print("src/data/pokemon/tmhm_learnsets.h: TM/HM Moveset")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon/tutor_learnsets.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//PUPPETPY"):
            a.insert(index, "    [SPECIES_" + gc + "]         = (TUTOR(MOVE_POUND)\n                                | TUTOR(MOVE_SUBSTITUTE)),//REPLACEME\n")
            print("src/data/pokemon/tutor_learnsets.h: Tutor Moveset")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon/pokedex_entries.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//PUPPETPY"):
            a.insert(index, "\n    [NATIONAL_DEX_" + gc + '] =\n    {\n        .categoryName = _("NEW"),\n        .height = 10,\n        .weight = 100,\n        .description = g' + gh + "PokedexText,\n        .pokemonScale = 256,\n        .pokemonOffset = 0,\n        .trainerScale = 256,\n        .trainerOffset = 2,\n    },//REPLACEME\n")
            print("src/data/pokemon/pokedex_entries.h: Replace the Tohodex data!")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  with open("src/data/pokemon/base_stats.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("};//PUPPETPY"):
            a.insert(index, "\n    [SPECIES_" + gc + "] =\n    {\n        .baseHP        = 40,\n        .baseAttack    = 40,\n        .baseDefense   = 40,\n        .baseSpeed     = 40,\n        .baseSpAttack  = 40,\n        .baseSpDefense = 40,\n        .type1 = TYPE_ILLUSION,\n        .type2 = TYPE_ILLUSION,\n        .catchRate = 255,\n        .expYield = 100,\n        .evYield_HP        = 0,\n        .evYield_Attack    = 0,\n        .evYield_Defense   = 0,\n        .evYield_Speed     = 0,\n        .evYield_SpAttack  = 0,\n        .evYield_SpDefense = 0,\n        .item1 = ITEM_NONE,\n        .item2 = ITEM_NONE,\n        .genderRatio = PERCENT_FEMALE(50),\n        .eggCycles = 25,\n        .friendship = 70,\n        .growthRate = GROWTH_FAST,\n        .eggGroup1 = EGG_GROUP_AMORPHOUS,\n        .eggGroup2 = EGG_GROUP_AMORPHOUS,\n        .abilities = {ABILITY_NONE, ABILITY_NONE},\n        .safariZoneFleeRate = 0,\n        .sourceGame = SOURCE_HRTP,\n        .noFlip = FALSE,\n    },//REPLACEME")
            print("src/data/pokemon/base_stats: Replace the Puppet data!")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")



#Fairly assuming that base forms are always done first
  basechk = "data/graphics/pokemon/" + puppet.lower()
  if (os.path.exists(basechk) == 0):
    with open("src/data/easy_chat/easy_chat_words_by_letter.h", "r+") as f:
      a = [x.rstrip() for x in f]
      index = 0
      for item in a:
          if item.startswith("};//PUPPETPY"):
              a.insert(index, "    EC_POKEMON(" + puppet.upper() + "),")
              break
          index += 1
      f.seek(0)
      f.truncate()
      for line in a:
          f.write(line + "\n")

#Only Chibis evolve
  if (form.lower() == 'c'):
    with open("src/data/pokemon/evolution.h", "r+") as f:
      a = [x.rstrip() for x in f]
      index = 0
      for item in a:
          if item.startswith("};//PUPPETPY"):
              a.insert(index, "    [SPECIES_" + gc + "]     = {{EVO_LEVEL, 45, SPECIES_" + puppet.upper() + "}},//REPLACEME")
              print("src/data/pokemon/evolution.h: Edit Chibi evolution!")
              break
          index += 1
      f.seek(0)
      f.truncate()
      for line in a:
          f.write(line + "\n")
          
  with open("sound/cry_tables.inc", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("@PUPPETPY"):
            a.insert(index, "	cry Cry_" + gh)
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
        
  with open("sound/cry_tables.inc", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("@2PUPPETPY"):
            a.insert(index, "	cry_reverse Cry_" + gh)
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
        
  with open("sound/direct_sound_data.inc", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("@PUPPETPY"):
            a.insert(index, "	.align 2\nCry_" + gh + '::\n	.incbin "sound/direct_sound_samples/cries/"' + gl + ".bin\n")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  print("You will need to add /sound/direct_sound_samples/cries/" + gl + ".aif by yourself!")

  with open("include/constants/species.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//PPY"):
            a.insert(index, "#define SPECIES_" + gc + " XXX")
            print("include/constants/species.h: You'll have to manually increment the value along with SPECIES_EGG! (until we figure things out)")
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")
        
  with open("include/constants/pokedex.h", "r+") as f:
    a = [x.rstrip() for x in f]
    index = 0
    for item in a:
        if item.startswith("//2PPY"):
            a.insert(index, "#define NATIONAL_DEX_" + gc)
            break
        index += 1
    f.seek(0)
    f.truncate()
    for line in a:
        f.write(line + "\n")

  print("include/constants/pokedex.h: Do this manually until we kill hoenn")
  print("Added new puppet " + gh + ". Copy this output for reference, be sure to grep for //REPLACEME and fix any file issues.")

kill(*sys.argv[1:])
.set LOCALID_GOMASEKI, 2

@ Note: LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK is a local id for this map used elsewhere. It's defined in event_objects.h

BirthIsland_Exterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_OnResume
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_OnReturnToField
	.byte 0

BirthIsland_Exterior_OnReturnToField:
	special SetGomasekiRockPalette
	end

BirthIsland_Exterior_OnTransition:
	setflag FLAG_MAP_SCRIPT_CHECKED_GOMASEKI
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	setvar VAR_GOMASEKI_ROCK_STEP_COUNT, 0
	setvar VAR_GOMASEKI_ROCK_LEVEL, 0
	call_if_set FLAG_BATTLED_GOMASEKI, BirthIsland_Exterior_EventScript_HideGomasekiAndPuzzle
	call_if_unset FLAG_BATTLED_GOMASEKI, BirthIsland_Exterior_EventScript_TryShowGomasekiPuzzle
	end

BirthIsland_Exterior_EventScript_HideGomasekiAndPuzzle::
	setflag FLAG_HIDE_GOMASEKI
	setflag FLAG_HIDE_BIRTH_ISLAND_GOMASEKI_TRIANGLE
	return

BirthIsland_Exterior_EventScript_TryShowGomasekiPuzzle::
	goto_if_set FLAG_DEFEATED_GOMASEKI, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_BIRTH_ISLAND_GOMASEKI_TRIANGLE
	clearflag FLAG_GOMASEKI_ROCK_COMPLETE
	return

BirthIsland_Exterior_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BirthIsland_Exterior_EventScript_TryRemoveGomaseki
	end

BirthIsland_Exterior_EventScript_TryRemoveGomaseki::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne Common_EventScript_NopReturn
	removeobject LOCALID_GOMASEKI
	return

BirthIsland_Exterior_EventScript_Triangle::
	lock
	faceplayer
	special DoGomasekiRockInteraction
	waitstate
	switch VAR_RESULT
	case 0, BirthIsland_Exterior_EventScript_NotSolved1
	case 1, BirthIsland_Exterior_EventScript_NotSolved2
	case 2, BirthIsland_Exterior_EventScript_Gomaseki
	case 3, BirthIsland_Exterior_EventScript_NotSolved3
	end

BirthIsland_Exterior_EventScript_NotSolved1::
	release
	end

BirthIsland_Exterior_EventScript_NotSolved2::
	release
	end

BirthIsland_Exterior_EventScript_NotSolved3::
	release
	end

BirthIsland_Exterior_EventScript_Gomaseki::
	waitse
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
	setfieldeffectargument 1, MAP_NUM(BIRTH_ISLAND_EXTERIOR)
	setfieldeffectargument 2, MAP_GROUP(BIRTH_ISLAND_EXTERIOR)
	dofieldeffect FLDEFF_DESTROY_GOMASEKI_ROCK
	playbgm MUS_RG_ENCOUNTER_GOMASEKI, FALSE
	waitfieldeffect FLDEFF_DESTROY_GOMASEKI_ROCK
	addobject LOCALID_GOMASEKI
	applymovement LOCALID_GOMASEKI, BirthIsland_Exterior_Movement_GomasekiApproach
	waitmovement 0
	waitse
	playmoncry SPECIES_GOMASEKI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_GOMASEKI
	setvar VAR_0x8004, SPECIES_GOMASEKI
	setvar VAR_0x8005, 30 @ level
	setvar VAR_0x8006, ITEM_NONE
	special CreateEventLegalEnemyMon
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BirthIsland_Exterior_EventScript_DefeatedGomaseki
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BirthIsland_Exterior_EventScript_RanFromGomaseki
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BirthIsland_Exterior_EventScript_RanFromGomaseki
	setflag FLAG_BATTLED_GOMASEKI
	release
	end

BirthIsland_Exterior_EventScript_DefeatedGomaseki::
	setflag FLAG_DEFEATED_GOMASEKI
	setvar VAR_0x8004, SPECIES_GOMASEKI
	goto Common_EventScript_LegendaryFlewAway
	end

BirthIsland_Exterior_EventScript_RanFromGomaseki::
	setvar VAR_0x8004, SPECIES_GOMASEKI
	goto Common_EventScript_LegendaryFlewAway
	end

BirthIsland_Exterior_Movement_GomasekiApproach:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

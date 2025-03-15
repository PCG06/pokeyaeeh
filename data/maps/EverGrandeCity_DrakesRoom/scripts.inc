
EverGrandeCity_DrakesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_DrakesRoom_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_DrakesRoom_OnTransition
	.byte 0

EverGrandeCity_DrakesRoom_OnTransition:
	setvar VAR_UNUSED_0x40B8, 1
	end

EverGrandeCity_DrakesRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakesRoom_EventScript_Drake::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
	goto_if_not_defeated TRAINER_DRAKE_1, EverGrandeCity_DrakesRoom_EventScript_DrakeBattle
	shouldtryrematchbattle TRAINER_DRAKE_1, EverGrandeCity_DrakesRoom_EventScript_DrakeRematch
	end

EverGrandeCity_DrakesRoom_EventScript_DrakeBattle::
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	trainerbattle_single TRAINER_DRAKE_1, EverGrandeCity_DrakesRoom_Text_IntroSpeech, EverGrandeCity_DrakesRoom_Text_Defeat
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end

EverGrandeCity_DrakesRoom_EventScript_DrakeRematch::
	trainerbattle_rematch TRAINER_DRAKE_1, EverGrandeCity_DrakesRoom_Text_IntroSpeech, EverGrandeCity_DrakesRoom_Text_Defeat
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end

EverGrandeCity_DrakesRoom_EventScript_Defeated::
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
	special Script_TryGainNewFanFromCounter
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	addvar VAR_ELITE_4_STATE, 1
	goto_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_EliteFourDefeated
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
	goto_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_EliteFourDefeated
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_EventScript_EliteFourDefeated::
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_Text_IntroSpeech:
	.string "I am the last of the Pokémon League\n"
	.string "Elite Four, Drake the Dragon master!\p"
	.string "In their natural state, Pokémon are\n"
	.string "wild living things. They are free.\p"
	.string "At times, they hinder us.\n"
	.string "At times, they help us.\p"
	.string "For us to battle with Pokémon as\n"
	.string "partners, do you know what it takes?\p"
	.string "Do you know what is needed?\p"
	.string "If you don't, then you will never\n"
	.string "prevail over me!$"

EverGrandeCity_DrakesRoom_Text_Defeat:
	.string "Superb, it should be said.$"

EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
	.string "You deserve every credit for coming\n"
	.string "this far as a Trainer of Pokémon.\p"
	.string "You do seem to know what is needed.\p"
	.string "Yes, what a Trainer needs is a\n"
	.string "virtuous heart.\p"
	.string "Pokémon touch the good hearts of\n"
	.string "Trainers and learn good from wrong.\p"
	.string "They touch the good hearts of\n"
	.string "Trainers and grow strong.\p"
	.string "Go! Go onwards!\n"
	.string "The Champion is waiting!$"

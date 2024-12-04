.if DEBUG_OVERWORLD_MENU == TRUE
Debug_MessageEnd:
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_ShowFieldMessageStringVar4::
	special ShowFieldMessageStringVar4
	goto Debug_MessageEnd

Debug_CheatStart::
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	setflag FLAG_ADVENTURE_STARTED
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	givemon SPECIES_TREECKO, 20, ITEM_NONE
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_SYS_ENABLE_EGG_AND_TUTOR_MOVES
    setflag FLAG_SYS_POKENAV_GET
    setflag FLAG_SYS_DEXNAV_GET
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	setvar VAR_LITTLEROOT_TOWN_STATE, 4 @ 4: Received Running Shoes
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
	setflag FLAG_RECEIVED_BIKE
	additem ITEM_MACH_BIKE
	additem ITEM_POKEMON_BOX_LINK
	setvar VAR_BRINEY_HOUSE_STATE, 1
	setvar VAR_ROUTE116_STATE, 2
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	setflag FLAG_VISITED_OLDALE_TOWN
	setflag FLAG_VISITED_DEWFORD_TOWN
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	setflag FLAG_VISITED_PETALBURG_CITY
	setflag FLAG_VISITED_SLATEPORT_CITY
	setflag FLAG_VISITED_MAUVILLE_CITY
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_VISITED_FORTREE_CITY
	setflag FLAG_VISITED_LILYCOVE_CITY
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_SYS_GAME_CLEAR
	special InitRoamer
	release
	end

Debug_FlagsNotSetOverworldConfigMessage::
	message Debug_FlagsNotSetOverworldConfigMessage_Text
	goto Debug_MessageEnd

Debug_FlagsNotSetOverworldConfigMessage_Text:
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/overworld.h'!$"

Debug_FlagsNotSetBattleConfigMessage::
	message Debug_FlagsNotSetBattleConfigMessage_Text
	goto Debug_MessageEnd

Debug_FlagsNotSetBattleConfigMessage_Text:
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/battle.h'!$"

Debug_BoxFilledMessage::
	message Debug_BoxFilledMessage_Text
	goto Debug_MessageEnd

Debug_BoxFilledMessage_Text:
	.string "Storage boxes filled!$"

Debug_FlagsAndVarNotSetBattleConfigMessage::
	lockall
	message Debug_FlagsAndVarNotSetBattleConfigMessage_Text
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_FlagsAndVarNotSetBattleConfigMessage_Text:
	.string "Feature unavailable! Please define a\n"
	.string "usable flag and a usable var in:\l"
	.string "'include/config/battle.h'!$"


Text_TestIntro:
	.string "Test battle!$"

Text_TestDefeat:
    .string "Victorious!$"

Text_Route114TrainersCleared:
	.string "Route 114 Trainers cleared!$"

Debug_EventScript_Script_1:: @ testing scripts and stuff
	end

Debug_EventScript_Script_2:: @ regular single battle
    cleartrainerflag TRAINER_BRENDAN_PLACEHOLDER
	trainerbattle_single TRAINER_BRENDAN_PLACEHOLDER, Text_TestIntro, Text_TestDefeat
	end

Debug_EventScript_Script_3:: @ both have Mega Evolution
	cleartrainerflag TRAINER_JOHN_AND_JAY_4
	trainerbattle_single TRAINER_JOHN_AND_JAY_4, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat
    end

Debug_EventScript_Script_4:: @ Rillaboom sets Grassy Terrain
	cleartrainerflag TRAINER_JOHN_AND_JAY_2
	trainerbattle_single TRAINER_JOHN_AND_JAY_2, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat
	end

Debug_EventScript_Script_5:: @ Honchkrow sets Tailwind
	cleartrainerflag TRAINER_JOHN_AND_JAY_3
	trainerbattle_single TRAINER_JOHN_AND_JAY_3, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat
    end

Debug_EventScript_Script_6:: @ Sky Battle
	lock
    goto Route123_EventScript_Alberto_Battle_Event_Script
	release
    end

Debug_EventScript_Script_7::
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, EventScript_StartMultiBattle
	special LoadPlayerParty
EventScript_StartMultiBattle::
	setvar B_VAR_STARTING_STATUS, STARTING_STATUS_TRICK_ROOM
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_TABITHA_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_WALLY, TRAINER_BACK_PIC_WALLY
    setvar B_VAR_STARTING_STATUS, 0
	end

Debug_EventScript_Script_8::
	end

Debug_EventScript_CHEAT_Script_1::
	message Text_Candies
	playfanfare MUS_OBTAIN_ITEM
    additem ITEM_RARE_CANDY, 999
	additem ITEM_EXP_CANDY_XS, 999
	additem ITEM_EXP_CANDY_S, 999
	additem ITEM_EXP_CANDY_M, 999
	additem ITEM_EXP_CANDY_L, 999
	additem ITEM_EXP_CANDY_XL, 999
	waitfanfare
	closemessage
	end

Text_Candies:
	.string "Here's your candies!$"

Debug_EventScript_CHEAT_Script_2::
Debug_EventScript_CHEAT_Script_3::
Debug_EventScript_CHEAT_Script_4::
Debug_EventScript_CHEAT_Script_5::
Debug_EventScript_CHEAT_Script_6::
Debug_EventScript_CHEAT_Script_7::
Debug_EventScript_CHEAT_Script_8::
    end

Debug_CheckSaveBlock::
	callnative CheckSaveBlock1Size
	msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
	callnative CheckSaveBlock2Size
	msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
	callnative CheckPokemonStorageSize
	msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
	release
	end

Debug_SaveBlock1Size::
	.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_SaveBlock2Size::
	.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_PokemonStorageSize::
	.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckROMSpace::
	callnative CheckROMSize
	msgbox Debug_ROMSize, MSGBOX_DEFAULT
	release
	end

Debug_ROMSize::
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
	.string "Free space: {STR_VAR_2}MB.$"

Debug_HatchAnEgg::
	lockall
	getpartysize
	goto_if_eq VAR_RESULT, 0, Debug_HatchAnEgg_NoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
	special EggHatch
	waitstate
Debug_HatchAnEgg_End::
	releaseall
	end

Debug_HatchAnEgg_NoPokemon::
	msgbox DebugScript_HatchAnEgg_Text_EmptyParty, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_HatchAnEgg_CantForceHatch::
	msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_HatchAnEgg_Text_EmptyParty::
	.string "You have no Pokémon nor Eggs.$"

DebugScript_HatchAnEgg_Text_NotAnEgg::
	.string "That's not a Pokémon Egg.$"

DebugScript_ZeroDaycareMons::
	msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_OneDaycareMons::
	msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_DaycareMonsNotCompatible::
	msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
	releaseall
	end

DebugText_DaycareNoPokemon:
	.string "You have no Pokémon at Daycare.$"

DebugText_DaycareOnePokemon:
	.string "You have only one Pokémon at Daycare.$"

DebugText_DaycarePokemonNotCompatible:
	.string "Your Pokémon at Daycare can't\nhave babies together!$"

Debug_EventScript_SetTestFlag::
    msgbox Debug_Text_SetTestFlag, MSGBOX_AUTOCLOSE
    setflag FLAG_SYS_GAME_CLEAR
	end

Debug_EventScript_UnsetTestFlag::
    msgbox Debug_Text_UnsetTestFlag, MSGBOX_AUTOCLOSE
    clearflag FLAG_SYS_GAME_CLEAR
	end

Debug_Text_SetTestFlag::
    .string "Flag set.$"

Debug_Text_UnsetTestFlag::
    .string "Flag unset.$"

Route123_EventScript_Alberto_Battle_Event_Script::
    msgbox Route123_EventScript_Alberto_Text_AskSkyBattle, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq Route123_EventScript_Alberto_DenySkyBattle
    special TrySkyBattle
    compare VAR_RESULT, TRUE
    goto_if_eq Route123_EventScript_Alberto_StartBattle
    msgbox Route123_EventScript_Alberto_Text_No_Flying_Pokemon
    closemessage
    release
    end

Route123_EventScript_Alberto_DenySkyBattle::
    msgbox Route123_EventScript_Alberto_Text_DenySkyBattle
    closemessage
    release
    end

Route123_EventScript_Alberto_StartBattle::
    msgbox Route123_EventScript_Alberto_Text_StartBattle
    trainerbattle_no_intro TRAINER_ALBERTO, Route123_Text_AlbertoDefeat
    release
    end

Route123_EventScript_Alberto_Text_AskSkyBattle:
    .string "Care for a Sky Battle with a Sky\n"
    .string "Trainer?$"

Route123_EventScript_Alberto_Text_DenySkyBattle:
    .string "Well, this is a bit disappointing for a\n"
    .string "Sky Trainer like me...$"

Route123_EventScript_Alberto_Text_StartBattle:
    .string "Woo hoo! I'm a Sky Trainer! Look at me\n"
    .string "go! Wooooo!$"

Route123_EventScript_Alberto_Text_No_Flying_Pokemon:
    .string "Well, well, isn't this a shame. You don't\n"
    .string "have any flying Pokémon. We Sky\l"
    .string "Trainers only battle with Pokémon that\l"
    .string "can fly in the sky.$"

Debug_ShowExpansionVersion::
	callnative BufferExpansionVersion
	msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
	release
	end

Debug_ExpansionVersion:
	.string "pokeemerald-expansion {STR_VAR_1}$"

.endif

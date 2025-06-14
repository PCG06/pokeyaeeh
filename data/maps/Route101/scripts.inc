
.set LOCALID_BIRCH, 2
.set LOCALID_ZIGZAGOON, 4

Route101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
	.byte 0

Route101_OnTransition:
	call ProfBirch_EventScript_UpdateLocation
	end

Route101_OnFrame:
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
	.2byte 0

Route101_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_ROUTE101_STATE, 1
	end

Route101_EventScript_StartBirchRescue::
	lockall
	playbgm MUS_HELP, TRUE
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
	closemessage
	setobjectxy LOCALID_BIRCH, 0, 15
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
	waitmovement 0
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
	closemessage
	setvar VAR_ROUTE101_STATE, 2
	releaseall
	end

Route101_EventScript_PreventExitSouth::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitWest::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitNorth::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
	waitmovement 0
	releaseall
	end

Route101_Movement_PreventExitSouth:
	walk_up
	step_end

Route101_Movement_PreventExitWest:
	walk_right
	step_end

Route101_Movement_PreventExitNorth:
	walk_down
	step_end

Route101_Movement_ZigzagoonChaseInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_ZigzagoonChase1:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_ZigzagoonFaceBirch:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

Route101_Movement_EnterScene:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_faster_left
	step_end

Route101_Movement_BirchRunInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_BirchRunAway1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_BirchFaceZigzagoon:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

Route101_Movement_Unused1:
	walk_up
	walk_up
	step_end

Route101_Movement_Unused2:
	walk_up
	walk_left
	walk_up
	step_end

Route101_EventScript_Youngster::
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end

Route101_EventScript_Boy::
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end

Route101_EventScript_RouteSign::
	msgbox Route101_Text_RouteSign, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route101_EventScript_RouteSignJoke
	msgbox Text_Dumbass MSGBOX_AUTOCLOSE
	end

Route101_EventScript_RouteSignJoke::
    lock
	msgbox Text_YouShould, MSGBOX_DEFAULT
    msgbox Text_space, MSGBOX_DEFAULT
    setweather WEATHER_RAIN_THUNDERSTORM
    doweather
    msgbox Text_FaintYourself, MSGBOX_DEFAULT
    msgbox Text_NOW, MSGBOX_AUTOCLOSE
    setweather WEATHER_SUNNY
    doweather
	waitmessage
	release
    end

Route101_EventScript_BirchsBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ZIGZAGOON
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	copyvar VAR_0x800A, VAR_STARTER_GEN
	special ChooseStarter
	waitstate
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
	waitmovement 0
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
	special HealPlayerParty
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	release
	end

Route101_EventScript_HideMayInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	return

Route101_EventScript_HideBrendanInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return

Route101_Movement_BirchApproachPlayer:
	walk_right
	step_end

Route101_Text_HelpMe:
	.string "H-help me!$"

Route101_Text_PleaseHelp:
	.string "Hello! You over there!\n"
	.string "Please! Help!\p"
	.string "In my Bag!\n"
	.string "There's a Poké Ball!$"

Route101_Text_DontLeaveMe:
	.string "Wh-Where are you going?!\n"
	.string "Don't leave me like this!$"

Route101_Text_YouSavedMe:
	.string "Prof. Birch: Whew…\p"
	.string "I was in the tall grass studying wild\n"
	.string "Pokémon when I was jumped.\p"
	.string "You saved me.\n"
	.string "Thanks a lot!\p"
	.string "Oh?\p"
	.string "Hi, you're {PLAYER}{KUN}!\p"
	.string "This is not the place to chat, so come\n"
	.string "by my Pokémon Lab later, okay?$"

Route101_Text_TakeTiredPokemonToPokeCenter:
	.string "If Pokémon get tired, take them to\n"
	.string "a Pokémon Center.\p"
	.string "There's a Pokémon Center in Oldale\n"
	.string "Town right close by.$"

Route101_Text_WildPokemonInTallGrass:
	.string "Wild Pokémon will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch Pokémon, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_RouteSign:
	.string "Route 101\n"
	.string "{UP_ARROW} Oldale Town\p"
	.string "It says something else too!\n"
	.string "Read it?$"

Text_Dumbass:
	.string "Dumbass…$"

Text_YouShould:
    .string "You should…$"

Text_space:
    .string " $"

Text_FaintYourself:
    .string "FAINT YOURSELF…$"

Text_NOW:
    .string "NOW!$"

EventScript_GetCurrentTime::
	lock
	special GetCurrentTime
	msgbox EventScript_GetCurrentTime_Text_0, MSGBOX_DEFAULT
	compare VAR_RESULT, 0
	goto_if_eq EventScript_GetCurrentTime_1
	compare VAR_RESULT, 1
	goto_if_eq EventScript_GetCurrentTime_2
	compare VAR_RESULT, 2
	goto_if_eq EventScript_GetCurrentTime_3
	compare VAR_RESULT, 3
	goto_if_eq EventScript_GetCurrentTime_4
	msgbox EventScript_GetCurrentTime_Text_5, MSGBOX_NPC
	end

EventScript_GetCurrentTime_1:
	msgbox EventScript_GetCurrentTime_Text_1, MSGBOX_NPC
	end

EventScript_GetCurrentTime_2:
	msgbox EventScript_GetCurrentTime_Text_2, MSGBOX_NPC
	end

EventScript_GetCurrentTime_3:
	msgbox EventScript_GetCurrentTime_Text_3, MSGBOX_NPC
	end

EventScript_GetCurrentTime_4:
	msgbox EventScript_GetCurrentTime_Text_4, MSGBOX_NPC
	end


EventScript_PartyHasGogoat::
	lock
	faceplayer
	msgbox EventScript_PartyHasGogoat_Text_0, MSGBOX_DEFAULT
	checkpartyspecies SPECIES_GOGOAT
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_PartyHasGogoat_1
	msgbox EventScript_PartyHasGogoat_Text_2, MSGBOX_NPC
	return

EventScript_PartyHasGogoat_1:
	msgbox EventScript_PartyHasGogoat_Text_1, MSGBOX_NPC
	return


EventScript_GetDayFromTime::
	lock
	faceplayer
	gettime
	switch VAR_0x8003
	case DAY_SUNDAY, EventScript_GetDayFromTime_2
	case DAY_MONDAY, EventScript_GetDayFromTime_3
	case DAY_TUESDAY, EventScript_GetDayFromTime_4
	case DAY_WEDNESDAY, EventScript_GetDayFromTime_5
	case DAY_THURSDAY, EventScript_GetDayFromTime_6
	case DAY_FRIDAY, EventScript_GetDayFromTime_7
	case DAY_SATURDAY, EventScript_GetDayFromTime_8
	msgbox EventScript_GetDayFromTime_Text_7, MSGBOX_NPC
	return

EventScript_GetDayFromTime_2:
	msgbox EventScript_GetDayFromTime_Text_0, MSGBOX_NPC
	return

EventScript_GetDayFromTime_3:
	msgbox EventScript_GetDayFromTime_Text_1, MSGBOX_NPC
	return

EventScript_GetDayFromTime_4:
	msgbox EventScript_GetDayFromTime_Text_2, MSGBOX_NPC
	return

EventScript_GetDayFromTime_5:
	msgbox EventScript_GetDayFromTime_Text_3, MSGBOX_NPC
	return

EventScript_GetDayFromTime_6:
	msgbox EventScript_GetDayFromTime_Text_4, MSGBOX_NPC
	return

EventScript_GetDayFromTime_7:
	msgbox EventScript_GetDayFromTime_Text_5, MSGBOX_NPC
	return

EventScript_GetDayFromTime_8:
	msgbox EventScript_GetDayFromTime_Text_6, MSGBOX_NPC
	return


EventScript_TryEmoting::
	lock
	random 3
	switch VAR_RESULT
	case 1, EventScript_TryEmoting_3
	case 2, EventScript_TryEmoting_4
	case 3, EventScript_TryEmoting_5
EventScript_TryEmoting_5:
	emoteplayer EMOTE_HEART
EventScript_TryEmoting_1:
	release
	end

EventScript_TryEmoting_3:
	emoteplayer EMOTE_EXCLAM
	goto EventScript_TryEmoting_1

EventScript_TryEmoting_4:
	emoteplayer EMOTE_QUESTION
	goto EventScript_TryEmoting_1


EventScript_GetCurrentTime_Text_0:
	.string "The time…\n$"

EventScript_GetCurrentTime_Text_1:
	.string "It's morning!$"

EventScript_GetCurrentTime_Text_2:
	.string "It's day!$"

EventScript_GetCurrentTime_Text_3:
	.string "It's dusk!$"

EventScript_GetCurrentTime_Text_4:
	.string "It's night!$"

EventScript_GetCurrentTime_Text_5:
	.string "I forgot…$"

EventScript_PartyHasGogoat_Text_0:
	.string "Hmm.$"

EventScript_PartyHasGogoat_Text_1:
	.string "You are the goat!$"

EventScript_PartyHasGogoat_Text_2:
	.string "You are not the goat.$"

EventScript_GetDayFromTime_Text_0:
	.string "It's Sunday!$"

EventScript_GetDayFromTime_Text_1:
	.string "It's Monday!$"

EventScript_GetDayFromTime_Text_2:
	.string "It's Tuesday!$"

EventScript_GetDayFromTime_Text_3:
	.string "It's Wednesday!$"

EventScript_GetDayFromTime_Text_4:
	.string "It's Thursday!$"

EventScript_GetDayFromTime_Text_5:
	.string "It's Friday!$"

EventScript_GetDayFromTime_Text_6:
	.string "It's Saturday!$"

EventScript_GetDayFromTime_Text_7:
	.string "I forgor!$"

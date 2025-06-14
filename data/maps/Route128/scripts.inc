
.set LOCALID_ARCHIE, 3
.set LOCALID_MAXIE, 4

Route128_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
	.byte 0

Route128_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

Route128_OnFrame:
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
	.2byte 0

Route128_EventScript_KyogreAwakenedScene::
	lockall
	delay 20
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieLookAround
	waitmovement 0
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieBackUp
	waitmovement 0
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachArchie
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieRunLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieWalkLeft
	waitmovement 0
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
	closemessage
	delay 40
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieExit
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieExit
	waitmovement 0
	removeobject LOCALID_MAXIE
	removeobject LOCALID_ARCHIE
	delay 10
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_ROUTE128_STATE, 2
	releaseall
	end

Route128_Movement_Unused1:
	walk_fast_left
	step_end

Route128_Movement_Unused2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route128_Movement_ArchieLookAround:
	walk_fast_down
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

Route128_Movement_ArchieBackUp:
	lock_facing_direction
	walk_slow_up
	delay_16
	unlock_facing_direction
	step_end

Route128_Movement_ArchieRunLeft:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_in_place_faster_right
	step_end

Route128_Movement_ArchieExit:
	delay_16
	delay_16
	walk_fast_up
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Route128_Movement_MaxieWalkLeft:
	walk_left
	walk_left
	delay_8
	delay_4
	step_end

Route128_Movement_MaxieApproachArchie:
	walk_left
	walk_in_place_faster_down
	step_end

Route128_Movement_MaxieExit:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Route128_Movement_MaxieApproachPlayer:
	walk_right
	walk_in_place_faster_down
	step_end

Route128_EventScript_Isaiah::
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route128_EventScript_Katelyn::
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route128_EventScript_Alexa::
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
	end

Route128_EventScript_Wayne::
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
	end

Route128_EventScript_Harrison::
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
	end

Route128_EventScript_Carlee::
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
	end

Route128_Text_ArchieWhatHappened:
	.string "Archie: What happened…\n"
	.string "What is this wretched scene…\p"
	.string "Did I…make a horrible mistake?$"

Route128_Text_ArchieIOnlyWanted:
	.string "I…\n"
	.string "I only wanted…$"

Route128_Text_MaxieDoYouUnderstandNow:
	.string "Maxie: Do you understand now,\n"
	.string "Archie?\p"
	.string "Do you finally see how disastrous\n"
	.string "your dream turned out to be?\p"
	.string "We have to hurry! We have to do\n"
	.string "something before the situation goes\l"
	.string "completely out of control!$"

Route128_Text_MaxieResposibilityFallsToArchieAndMe:
	.string "Maxie: {PLAYER}, don't say anything.\p"
	.string "I know that I have no right to be\n"
	.string "critical of Archie…\p"
	.string "But the way things are now, I doubt\n"
	.string "that we humans will be capable of\l"
	.string "doing anything about it.\p"
	.string "But neither can we stand by and\n"
	.string "just watch helplessly.\p"
	.string "The responsibility for putting an end\n"
	.string "to this falls to Archie and me…\p"
	.string "{PLAYER}, we'll leave to Sootopolis,\n"
	.string "in hopes of finding answers to this!$"

Route128_Text_MaxieThisDefiesBelief:
	.string "Maxie: This defies belief…\p"
	.string "Those super-ancient Pokémon…\p"
	.string "Their power is unbelievable.\n"
	.string "They've upset the balance of nature…$"

Route128_EventScript_Ruben2::
	msgbox Route128_EventScript_Ruben2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_COPPERAJAH, 0, ITEM_METAL_SEED, ITEM_CHERISH_BALL, 3, 1, MON_MALE, 252, 4, 252, 0, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_BODY_PRESS, MOVE_HARD_PRESS, MOVE_HIGH_HORSEPOWER, MOVE_IRON_DEFENSE, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_COPPERAJAH
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_COPPERAJAH
	playfanfare MUS_OBTAIN_ITEM
	message Route128_EventScript_Ruben2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route128_EventScript_Ruben2_Text_2, MSGBOX_AUTOCLOSE
	giveitem ITEM_COPPERAJAHITE, 1
	setflag FLAG_ROUTE_127_BOSS_DEFEATED
	msgbox Route128_EventScript_Ruben2_Text_3, MSGBOX_AUTOCLOSE
	return


Route128_EventScript_Ruben::
	lock
	faceplayer
	checktrainerflag TRAINER_ISAIAH_1
	goto_if 1, Route128_EventScript_Ruben_5
Route128_EventScript_Ruben_3:
	msgbox Route128_EventScript_Ruben_Text_0, MSGBOX_NPC
Route128_EventScript_Ruben_1:
	release
	end

Route128_EventScript_Ruben_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_ATHENA, Route128_Text_RubenIntro, Route128_Text_RubenDefeat, Route128_EventScript_Ruben2
	msgbox Route128_EventScript_Ruben2_Text_3, MSGBOX_AUTOCLOSE
	goto Route128_EventScript_Ruben_1

Route128_EventScript_Ruben_4:
	checktrainerflag TRAINER_ALEXA
	goto_if 1, Route128_EventScript_Ruben_9
	goto Route128_EventScript_Ruben_3

Route128_EventScript_Ruben_5:
	checktrainerflag TRAINER_KATELYN_1
	goto_if 1, Route128_EventScript_Ruben_4
	goto Route128_EventScript_Ruben_3

Route128_EventScript_Ruben_8:
	checktrainerflag TRAINER_HARRISON
	goto_if 1, Route128_EventScript_Ruben_12
	goto Route128_EventScript_Ruben_3

Route128_EventScript_Ruben_9:
	checktrainerflag TRAINER_WAYNE
	goto_if 1, Route128_EventScript_Ruben_8
	goto Route128_EventScript_Ruben_3

Route128_EventScript_Ruben_12:
	checktrainerflag TRAINER_CARLEE
	goto_if 1, Route128_EventScript_Ruben_2
	goto Route128_EventScript_Ruben_3


Route128_EventScript_Ruben2_Text_0:
	.string "That was brutal, yet elegant!\pI have some gifts for you.$"

Route128_EventScript_Ruben2_Text_1:
	.string "{PLAYER} received a Copperajah!$"

Route128_EventScript_Ruben2_Text_2:
	.string "Holding this would make it better.$"

Route128_EventScript_Ruben2_Text_3:
	.string "Holding a Copperajahite,\nyour Copperajah can slam harder!$"

Route128_EventScript_Ruben_Text_0:
	.string "Hello, Trainer.\pIf you want to battle me,\nyou'll have to beat all 6 Trainers here,\lfirst. Then I'll accept your challenge.$"

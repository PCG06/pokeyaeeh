
Route124_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_OnTransition
	.byte 0

Route124_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

Route124_EventScript_HuntersHouseSign::
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
	end

Route124_EventScript_Spencer::
	trainerbattle_single TRAINER_SPENCER, Route124_Text_SpencerIntro, Route124_Text_SpencerDefeat
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Roland::
	trainerbattle_single TRAINER_ROLAND, Route124_Text_RolandIntro, Route124_Text_RolandDefeat
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Jenny::
	trainerbattle_single TRAINER_JENNY_1, Route124_Text_JennyIntro, Route124_Text_JennyDefeat
	msgbox Route124_Text_JennyPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route124_EventScript_Grace::
	trainerbattle_single TRAINER_GRACE, Route124_Text_GraceIntro, Route124_Text_GraceDefeat
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Lila::
	trainerbattle_single TRAINER_LILA_AND_ROY_1, Route124_Text_LilaIntro, Route124_Text_LilaDefeat
	msgbox Route124_Text_LilaPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route124_EventScript_Roy::
	trainerbattle_single TRAINER_LILA_AND_ROY_1, Route124_Text_RoyIntro, Route124_Text_RoyDefeat
	msgbox Route124_Text_RoyPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route124_EventScript_Declan::
	trainerbattle_single TRAINER_DECLAN, Route124_Text_DeclanIntro, Route124_Text_DeclanDefeat
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Isabella::
	trainerbattle_single TRAINER_ISABELLA, Route124_Text_IsabellaIntro, Route124_Text_IsabellaDefeat
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_Text_HuntersHouse:
	.string "Hunter's House$"

Route124_EventScript_Chad2::
	msgbox Route124_EventScript_Chad2_Text_0
	givemon SPECIES_DREDNAW, 0, ITEM_WHITE_HERB, ITEM_CHERISH_BALL, 3, 0, MON_MALE, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_AQUA_FANGS, MOVE_SHELL_SMASH, MOVE_ROCK_SLIDE, MOVE_JAW_LOCK, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_DREDNAW
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DREDNAW
	playfanfare MUS_OBTAIN_ITEM
	message Route124_EventScript_Chad2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route124_EventScript_Chad2_Text_2, MSGBOX_AUTOCLOSE
	msgbox Route124_EventScript_Chad2_Text_3
	giveitem ITEM_DREDNITE, 1
	setflag FLAG_ROUTE_124_BOSS_DEFEATED
	msgbox Route124_EventScript_Chad2_Text_4, MSGBOX_AUTOCLOSE
	return


Route124_EventScript_Chad::
	lock
	faceplayer
	checktrainerflag TRAINER_SPENCER
	goto_if 1, Route124_EventScript_Chad_5
Route124_EventScript_Chad_3:
	msgbox Route124_EventScript_Chad_Text_0, MSGBOX_NPC
Route124_EventScript_Chad_1:
	release
	end

Route124_EventScript_Chad_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_CHAD, Route124_Text_ChadIntro, Route124_Text_ChadDefeat, Route124_EventScript_Chad2
	msgbox Route124_EventScript_Chad2_Text_4, MSGBOX_AUTOCLOSE
	goto Route124_EventScript_Chad_1

Route124_EventScript_Chad_4:
	checktrainerflag TRAINER_JENNY_1
	goto_if 1, Route124_EventScript_Chad_9
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_5:
	checktrainerflag TRAINER_ROLAND
	goto_if 1, Route124_EventScript_Chad_4
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_8:
	checktrainerflag TRAINER_LILA_AND_ROY_1
	goto_if 1, Route124_EventScript_Chad_13
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_9:
	checktrainerflag TRAINER_GRACE
	goto_if 1, Route124_EventScript_Chad_8
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_12:
	checktrainerflag TRAINER_ISABELLA
	goto_if 1, Route124_EventScript_Chad_2
	goto Route124_EventScript_Chad_3

Route124_EventScript_Chad_13:
	checktrainerflag TRAINER_DECLAN
	goto_if 1, Route124_EventScript_Chad_12
	goto Route124_EventScript_Chad_3


Route124_EventScript_Chad2_Text_0:
	.string "You look like someone who could handle\nthis little guy!$"

Route124_EventScript_Chad2_Text_1:
	.string "{PLAYER} received an Drednaw!$"

Route124_EventScript_Chad2_Text_2:
	.string "Drednaw's bites are really powerful.\pSo, be careful if you wanna pet it.$"

Route124_EventScript_Chad2_Text_3:
	.string "And this, too!$"

Route124_EventScript_Chad2_Text_4:
	.string "Holding Drednite,\nyour Drednaw will Mega Evolve!\pIt's bites will be even more powerful!$"

Route124_EventScript_Chad_Text_0:
	.string "Fufufufu… I dive deep underwater!\pWho're you?\nYou want a battle?\pYou should beat everyone here then\ntry to challenge me!$"

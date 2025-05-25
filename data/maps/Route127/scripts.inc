
Route127_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route127_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route127_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route127_OnFrame
	.byte 0

Route127_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_StartKyogreWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_StartKyogreWeather
	end

Route127_OnLoad:
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute127North
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute127South
	end

Route127_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route127_EventScript_Camden::
	trainerbattle_single TRAINER_CAMDEN, Route127_Text_CamdenIntro, Route127_Text_CamdenDefeat
	msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
	end

Route127_EventScript_Donny::
	trainerbattle_single TRAINER_DONNY, Route127_Text_DonnyIntro, Route127_Text_DonnyDefeat
	msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
	end

Route127_EventScript_Jonah::
	trainerbattle_single TRAINER_JONAH, Route127_Text_JonahIntro, Route127_Text_JonahDefeat
	msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
	end

Route127_EventScript_Henry::
	trainerbattle_single TRAINER_HENRY, Route127_Text_HenryIntro, Route127_Text_HenryDefeat
	msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
	end

Route127_EventScript_Roger::
	trainerbattle_single TRAINER_ROGER, Route127_Text_RogerIntro, Route127_Text_RogerDefeat
	msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
	end

Route127_EventScript_Aidan::
	trainerbattle_single TRAINER_AIDAN, Route127_Text_AidanIntro, Route127_Text_AidanDefeat
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
	end

Route127_EventScript_Koji::
	trainerbattle_single TRAINER_KOJI_1, Route127_Text_KojiIntro, Route127_Text_KojiDefeat
	msgbox Route127_Text_KojiPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route127_EventScript_Athena2::
	msgbox Route127_EventScript_Athena2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_GARDEVOIR, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, 3, 1, MON_FEMALE, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_ENCORE, MOVE_PSYSHOCK, MOVE_HYPER_VOICE, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_GARDEVOIR
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GARDEVOIR
	playfanfare MUS_OBTAIN_ITEM
	message Route127_EventScript_Athena2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route127_EventScript_Athena2_Text_2, MSGBOX_AUTOCLOSE
	giveitem ITEM_GARDEVOIRITE, 1
	setflag FLAG_ROUTE_127_BOSS_DEFEATED
	msgbox Route127_EventScript_Athena2_Text_3, MSGBOX_AUTOCLOSE
	return


Route127_EventScript_Athena::
	lock
	faceplayer
	checktrainerflag TRAINER_CAMDEN
	goto_if 1, Route127_EventScript_Athena_5
Route127_EventScript_Athena_3:
	msgbox Route127_EventScript_Athena_Text_0, MSGBOX_NPC
Route127_EventScript_Athena_1:
	release
	end

Route127_EventScript_Athena_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_ATHENA, Route127_Text_AthenaIntro, Route127_Text_AthenaDefeat, Route127_EventScript_Athena2
	msgbox Route127_EventScript_Athena2_Text_3, MSGBOX_AUTOCLOSE
	goto Route127_EventScript_Athena_1

Route127_EventScript_Athena_4:
	checktrainerflag TRAINER_JONAH
	goto_if 1, Route127_EventScript_Athena_9
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_5:
	checktrainerflag TRAINER_DONNY
	goto_if 1, Route127_EventScript_Athena_4
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_8:
	checktrainerflag TRAINER_ROGER
	goto_if 1, Route127_EventScript_Athena_13
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_9:
	checktrainerflag TRAINER_HENRY
	goto_if 1, Route127_EventScript_Athena_8
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_12:
	checktrainerflag TRAINER_KOJI_1
	goto_if 1, Route127_EventScript_Athena_2
	goto Route127_EventScript_Athena_3

Route127_EventScript_Athena_13:
	checktrainerflag TRAINER_AIDAN
	goto_if 1, Route127_EventScript_Athena_12
	goto Route127_EventScript_Athena_3


Route127_EventScript_Athena2_Text_0:
	.string "Haha, that was a great match.\pSince you beat me,\nI should give you a gift.$"

Route127_EventScript_Athena2_Text_1:
	.string "{PLAYER} received a Gardevoir!$"

Route127_EventScript_Athena2_Text_2:
	.string "You can also have this.$"

Route127_EventScript_Athena2_Text_3:
	.string "Holding a Gardevoirite,\nyour Gardevoir can wreak havoc,\ljust like mine!$"

Route127_EventScript_Athena_Text_0:
	.string "Hello, Trainer.\pI see you are here to challenge me.\pYou'll have to beat all 7 Trainers here,\nfirst. Then I'll accept your challenge.$"

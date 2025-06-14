
.set LOCALID_BRIDGE_KECLEON, 30
.set LOCALID_STEVEN, 31
.set LOCALID_BRIDGE_KECLEON_SHADOW, 36  @ They use a second object which is identical to Kecleon but has a reflection palette tag for the bridge shadow

Route120_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
	.byte 0

Route120_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
	end

Route120_EventScript_RemoveKecleonObject::
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
	return

Route120_EventScript_RemoveBridgeKecleon::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_BRIDGE_KECLEON
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
	return

Route120_EventScript_RemoveKecleon::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

Route120_OnLoad:
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
	end

Route120_EventScript_CloseAncientTomb::
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
	return

Route120_EventScript_SetBridgeClearMetatiles::
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
	return

Route120_EventScript_SetBridgeKecleonMovement::
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
	return

Route120_OnTransition:
	call GabbyAndTy_EventScript_UpdateLocation
	call Route120_EventScript_SetWeather
	end

Route120_EventScript_SetWeather::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
	return

Route120_EventScript_SetCloudyWeather::
	setweather WEATHER_SUNNY_CLOUDS
	return

Route120_EventScript_SetSunnyWeather::
	setweather WEATHER_SUNNY
	return

Route120_EventScript_TrySetRainyWeather::
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
	goto Route120_EventScript_SetRainyWeather
	end

Route120_EventScript_SetRainyWeather::
	setweather WEATHER_RAIN
	return

Route120_EventScript_BerryBeauty::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
	switch VAR_RESULT
	case 0, Route120_EventScript_GiveFigyBerry
	case 5, Route120_EventScript_GiveFigyBerry
	case 1, Route120_EventScript_GiveWikiBerry
	case 6, Route120_EventScript_GiveWikiBerry
	case 2, Route120_EventScript_GiveMagoBerry
	case 7, Route120_EventScript_GiveMagoBerry
	case 3, Route120_EventScript_GiveAguavBerry
	case 8, Route120_EventScript_GiveAguavBerry
	case 4, Route120_EventScript_GiveIapapaBerry
	case 9, Route120_EventScript_GiveIapapaBerry
	end

Route120_EventScript_GiveFigyBerry::
	setvar VAR_0x8004, ITEM_FIGY_BERRY
	goto Route120_EventScript_GiveBerry
	end

Route120_EventScript_GiveWikiBerry::
	setvar VAR_0x8004, ITEM_WIKI_BERRY
	goto Route120_EventScript_GiveBerry
	end

Route120_EventScript_GiveMagoBerry::
	setvar VAR_0x8004, ITEM_MAGO_BERRY
	goto Route120_EventScript_GiveBerry
	end

Route120_EventScript_GiveAguavBerry::
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
	goto Route120_EventScript_GiveBerry
	end

Route120_EventScript_GiveIapapaBerry::
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
	goto Route120_EventScript_GiveBerry
	end

Route120_EventScript_GiveBerry::
	giveitem VAR_0x8004
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
	release
	end

Route120_EventScript_ReceivedBerry::
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
	release
	end

Route120_EventScript_BerryLove::
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
	return

Route120_EventScript_BerryNotLove::
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
	return

Route120_EventScript_RouteSignFortree::
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
	end

Route120_EventScript_RouteSign121::
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
	end

Route120_EventScript_Colin::
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
	end

Route120_EventScript_Robert::
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat
	msgbox Route120_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route120_EventScript_Lorenzo::
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
	end

Route120_EventScript_Jenna::
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
	end

Route120_EventScript_Jeffrey::
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route120_EventScript_Jennifer::
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
	end

Route120_EventScript_Clarissa::
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
	end

Route120_EventScript_Angelica::
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
	end

Route120_EventScript_Keigo::
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
	end

Route120_EventScript_Riley::
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
	end

Route120_EventScript_Leonel::
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
	end

Route120_EventScript_Callie::
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
	end

Route120_Text_RouteSignFortree:
	.string "Route 120\n"
	.string "{LEFT_ARROW} Fortree City$"

Route120_Text_RouteSign121:
	.string "{RIGHT_ARROW} Route 121\n"
	.string "{LEFT_ARROW} Route 120$"

Route120_EventScript_Ydarissep2::
	msgbox Route120_EventScript_Ydarissep2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_SCIZOR, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, 3, 1, MON_MALE, 248, 0, 12, 0, 0, 248, 31, 31, 31, 31, 31, 31, MOVE_BULLET_PUNCH, MOVE_CRABHAMMER, MOVE_ROOST, MOVE_SWORDS_DANCE, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_SCIZOR
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SCIZOR
	playfanfare MUS_OBTAIN_ITEM
	message Route120_EventScript_Ydarissep2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route120_EventScript_Ydarissep2_Text_2, MSGBOX_AUTOCLOSE
	giveitem ITEM_SCIZORITE, 1
	setflag FLAG_ROUTE_120_BOSS_DEFEATED
	msgbox Route120_EventScript_Ydarissep2_Text_3, MSGBOX_AUTOCLOSE
	return


Route120_EventScript_Ydarissep::
	lock
	faceplayer
	checktrainerflag TRAINER_COLIN
	goto_if 1, Route120_EventScript_Ydarissep_5
Route120_EventScript_Ydarissep_3:
	msgbox Route120_EventScript_Ydarissep_Text_0, MSGBOX_NPC
Route120_EventScript_Ydarissep_1:
	release
	end

Route120_EventScript_Ydarissep_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_YDARISSEP, Route120_Text_YdarissepIntro, Route120_Text_YdarissepDefeat, Route120_EventScript_Ydarissep2
	msgbox Route120_EventScript_Ydarissep2_Text_3, MSGBOX_AUTOCLOSE
	goto Route120_EventScript_Ydarissep_1

Route120_EventScript_Ydarissep_4:
	checktrainerflag TRAINER_LORENZO
	goto_if 1, Route120_EventScript_Ydarissep_9
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_5:
	checktrainerflag TRAINER_ROBERT_1
	goto_if 1, Route120_EventScript_Ydarissep_4
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_8:
	checktrainerflag TRAINER_JEFFREY_1
	goto_if 1, Route120_EventScript_Ydarissep_13
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_9:
	checktrainerflag TRAINER_JENNA
	goto_if 1, Route120_EventScript_Ydarissep_8
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_12:
	checktrainerflag TRAINER_CLARISSA
	goto_if 1, Route120_EventScript_Ydarissep_17
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_13:
	checktrainerflag TRAINER_JENNIFER
	goto_if 1, Route120_EventScript_Ydarissep_12
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_16:
	checktrainerflag TRAINER_KEIGO
	goto_if 1, Route120_EventScript_Ydarissep_21
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_17:
	checktrainerflag TRAINER_ANGELICA
	goto_if 1, Route120_EventScript_Ydarissep_16
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_20:
	checktrainerflag TRAINER_LEONEL
	goto_if 1, Route120_EventScript_Ydarissep_24
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_21:
	checktrainerflag TRAINER_RILEY
	goto_if 1, Route120_EventScript_Ydarissep_20
	goto Route120_EventScript_Ydarissep_3

Route120_EventScript_Ydarissep_24:
	checktrainerflag TRAINER_CALLIE
	goto_if 1, Route120_EventScript_Ydarissep_2
	goto Route120_EventScript_Ydarissep_3


Route120_EventScript_Ydarissep2_Text_0:
	.string "You know what?\nI'm fed up with this team.\pIt seems to attract the rain wherever\nI go.\pI'm starting fresh.\nHere, take my Scizor.$"

Route120_EventScript_Ydarissep2_Text_1:
	.string "{PLAYER} received a Scizor!$"

Route120_EventScript_Ydarissep2_Text_2:
	.string "If you really want to do it justice,\ngive it a Scizorite.\pYou can have mine.$"

Route120_EventScript_Ydarissep2_Text_3:
	.string "Holding a Scizorite,\nyour Scizor can get it's Justice!$"

Route120_EventScript_Ydarissep_Text_0:
	.string "What are you doing at my training\nspot?\pHiding from the rain?\pUnfortunately for you,\nI'm not in the mood to share.\pIf you want to stay,\nget in line and defeat everyone who\lwere here before you.\pNo skipping!$"

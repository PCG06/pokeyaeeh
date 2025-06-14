
Route105_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_OnFrame
	.byte 0

Route105_OnLoad:
	call_if_unset FLAG_REGI_DOORS_OPENED, Route105_CloseRegiEntrance
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute105North
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute105South
	end

Route105_CloseRegiEntrance::
	setmetatile 9, 19, METATILE_General_RockWall_RockBase, TRUE
	setmetatile 9, 20, METATILE_General_RockWall_SandBase, TRUE
	return

Route105_OnTransition:
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
	end

Route105_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route105_EventScript_Luis::
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
	end

Route105_EventScript_Dominik::
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
	end

Route105_EventScript_Beverly::
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
	end

Route105_EventScript_Imani::
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
	end

Route105_EventScript_Josue::
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
	end

Route105_EventScript_Andres::
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated
	msgbox Route105_Text_AndresPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route104_Text_DadPokenavCall:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Dad: Oh, {PLAYER}?\p"
	.string "… … … … … …\n"
	.string "Where are you now?\l"
	.string "It sounds windy wherever you are.\p"
	.string "I just heard from Devon's Mr. Stone\n"
	.string "about your PokéNav, so I decided\l"
	.string "to give you a call.\p"
	.string "It sounds like you're doing fine,\n"
	.string "so that's fine with me.\p"
	.string "You take care now.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

Route104_Text_RegisteredDadInPokenav:
	.string "Registered Gym Leader Chrizz\n"
	.string "in the PokéNav.$"

Route105_EventScript_Foster2::
	msgbox Route105_EventScript_Foster2_Text_0
	giveitem ITEM_STEELIXITE, 1
	playfanfare MUS_OBTAIN_ITEM
	waitmessage
	waitfanfare
	msgbox Route105_EventScript_Foster2_Text_1
	giveitem ITEM_TM_EARTHQUAKE, 1
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route105_EventScript_Foster2_Text_2, MSGBOX_NPC
	return


Route105_EventScript_Foster::
	lock
	faceplayer
	checktrainerflag TRAINER_IMANI
	goto_if 1, Route105_EventScript_Foster_5
Route105_EventScript_Foster_3:
	msgbox Route105_EventScript_Foster_Text_0, MSGBOX_NPC
Route105_EventScript_Foster_1:
	release
	end

Route105_EventScript_Foster_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated, Route105_EventScript_Foster2
	msgbox Route105_EventScript_Foster2_Text_2, MSGBOX_NPC
	goto Route105_EventScript_Foster_1

Route105_EventScript_Foster_4:
	checktrainerflag TRAINER_JOSUE
	goto_if 1, Route105_EventScript_Foster_9
	goto Route105_EventScript_Foster_3

Route105_EventScript_Foster_5:
	checktrainerflag TRAINER_BEVERLY
	goto_if 1, Route105_EventScript_Foster_4
	goto Route105_EventScript_Foster_3

Route105_EventScript_Foster_8:
	checktrainerflag TRAINER_LUIS
	goto_if 1, Route105_EventScript_Foster_2
	goto Route105_EventScript_Foster_3

Route105_EventScript_Foster_9:
	checktrainerflag TRAINER_ANDRES_1
	goto_if 1, Route105_EventScript_Foster_8
	goto Route105_EventScript_Foster_3


Route105_EventScript_Foster2_Text_0:
	.string "Now that's what I call an awesome\nbattle!\pHere!\nYou can have this!$"

Route105_EventScript_Foster2_Text_1:
	.string "And this, too!$"

Route105_EventScript_Foster2_Text_2:
	.string "Earthquake is an excellent move!\pIt also hurts your partner in battle\nthough.\pUnless its Flying-type or is floating,\nhehe.$"

Route105_EventScript_Foster_Text_0:
	.string "I'm searching for a mystical rock\naround here!\pDon't bother me til you beat everyon\nelse!$"

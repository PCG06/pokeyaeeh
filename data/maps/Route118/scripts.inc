
.set LOCALID_FATMAN, 21

Route118_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
	.byte 0

Route118_OnTransition:
	call GabbyAndTy_EventScript_UpdateLocation
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
	end

Route118_OnLoad:
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
	end

Route118_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route118_EventScript_GoodRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SUPER_ROD, Route118_EventScript_ReceivedGoodRod
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route118_EventScript_ReceiveGoodRod
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineGoodRod
	end

Route118_EventScript_ReceiveGoodRod::
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_ROD
	setflag FLAG_RECEIVED_SUPER_ROD
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_DeclineGoodRod::
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_ReceivedGoodRod::
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_Girl::
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
	end

Route118_EventScript_RouteSignMauville::
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
	end

Route118_EventScript_RouteSign119::
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
	end

Route118_EventScript_Rose::
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat
	msgbox Route118_Text_RosePostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route118_EventScript_Barny::
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Wade::
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Dalton::
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route118_EventScript_Perry::
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Deandre::
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
	end

Route118_Text_StevenQuestions:
	.string "Mystic: Hi, {PLAYER}{KUN}!\p"
	.string "It's me, Mystic!\n"
	.string "We met in the cave near Dewford.\p"
	.string "Have you met many kinds of Pokémon\n"
	.string "since I last saw you?\p"
	.string "There are many, many kinds of Pokémon\n"
	.string "in this wide world of ours.\p"
	.string "If you wanted to raise only your\n"
	.string "favorites, that's fine.\p"
	.string "Perhaps you find it more fun to raise\n"
	.string "all sorts of Pokémon.\p"
	.string "As a Trainer of Pokémon,\n"
	.string "what do you think?\p"
	.string "Of course, it's not any of my business.\p"
	.string "It would be nice if we were to meet\n"
	.string "again somewhere.$"

Route118_Text_YouAgreeGoodRodIsGood:
	.string "Hmm!\n"
	.string "A Super Rod is really super!\p"
	.string "Wouldn't you agree?$"

Route118_Text_IdenticalMindsTakeThis:
	.string "Hmm!\n"
	.string "We're of identical minds!\p"
	.string "Hmm!\n"
	.string "Take this Super Rod!$"

Route118_Text_TryYourLuckFishing:
	.string "Wherever there's water, try your luck\n"
	.string "at fishing.$"

Route118_Text_DontYouLikeToFish:
	.string "Don't you like to fish?$"

Route118_Text_TryCatchingMonWithGoodRod:
	.string "Try catching all sorts of Pokémon\n"
	.string "with your Super Rod.$"

Route118_Text_CanCrossRiversWithSurf:
	.string "Even if there isn't a boat, you can\n"
	.string "cross rivers and the sea if you have\l"
	.string "a Pokémon that knows Surf.\p"
	.string "Pokémon can be counted on to do so\n"
	.string "much!$"

Route118_Text_RouteSignMauville:
	.string "Route 118\n"
	.string "{LEFT_ARROW} Mauville City$"

Route118_Text_RouteSign119:
	.string "Route 118\n"
	.string "{UP_ARROW} Route 119$"

Route118_Text_Hmm:
	.string "Hmm…\p"
	.string "… … … … …\p"
	.string "… … … … …$"

Route118_EventScript_Chester2::
	msgbox Route118_EventScript_Chester2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_PIDGEOT, 0, ITEM_FOCUS_SASH, ITEM_CHERISH_BALL, NATURE_MODEST, 2, MON_MALE, 0, 0, 0, 252, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_JETSTREAM, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_FOCUS_BLAST, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_PIDGEOT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PIDGEOT
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route118_EventScript_Chester2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route118_EventScript_Chester2_Text_2, MSGBOX_NPC
	giveitem ITEM_PIDGEOTITE, 1
	setflag FLAG_ROUTE_118_BOSS_DEFEATED
	msgbox Route118_EventScript_Chester2_Text_3, MSGBOX_NPC
	return


Route118_EventScript_Chester::
	lock
	faceplayer
	checktrainerflag TRAINER_ROSE_1
	goto_if 1, Route118_EventScript_Chester_5
Route118_EventScript_Chester_3:
	msgbox Route118_EventScript_Chester_Text_1, MSGBOX_NPC
Route118_EventScript_Chester_1:
	release
	end

Route118_EventScript_Chester_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat, Route118_EventScript_Chester2
	clearflag B_FLAG_NO_BAG_USE
	msgbox Route118_EventScript_Chester_Text_0, MSGBOX_NPC
	goto Route118_EventScript_Chester_1

Route118_EventScript_Chester_4:
	checktrainerflag TRAINER_WADE
	goto_if 1, Route118_EventScript_Chester_9
	goto Route118_EventScript_Chester_3

Route118_EventScript_Chester_5:
	checktrainerflag TRAINER_BARNY
	goto_if 1, Route118_EventScript_Chester_4
	goto Route118_EventScript_Chester_3

Route118_EventScript_Chester_8:
	checktrainerflag TRAINER_PERRY
	goto_if 1, Route118_EventScript_Chester_12
	goto Route118_EventScript_Chester_3

Route118_EventScript_Chester_9:
	checktrainerflag TRAINER_DALTON_1
	goto_if 1, Route118_EventScript_Chester_8
	goto Route118_EventScript_Chester_3

Route118_EventScript_Chester_12:
	checktrainerflag TRAINER_DEANDRE
	goto_if 1, Route118_EventScript_Chester_2
	goto Route118_EventScript_Chester_3


Route118_EventScript_Chester2_Text_0:
	.string "That was a heck of a battle!\pAs promised…$"

Route118_EventScript_Chester2_Text_1:
	.string "{PLAYER} received a Pidgeot!$"

Route118_EventScript_Chester2_Text_2:
	.string "You shall soar the skies with this!$"

Route118_EventScript_Chester2_Text_3:
	.string "You should give it to Pidgoet.\pYou'll unlock it's full potential.$"

Route118_EventScript_Chester_Text_0:
	.string "I suggest you give that item to Pidgoet.\pYou'll unlock it's full potential.$"

Route118_EventScript_Chester_Text_1:
	.string "I am a strong Bird Keeper.\pYou want to challenge me?\nHow about beating everyone here and you come\lto me?\pI'll give you a good reward if you beat\nme.$"

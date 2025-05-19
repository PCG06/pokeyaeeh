
Route123_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
	.byte 0

Route123_OnTransition:
	special SetRoute123Weather
	end

Route123_EventScript_GrassGemGirl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GRASS_GEM, Route123_EventScript_ReceivedGigaDrain
	msgbox Route123_Text_LoveGrassMonsHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_GRASS_GEM
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_GRASS_GEM
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
	release
	end

Route123_EventScript_ReceivedGigaDrain::
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
	release
	end

Route123_EventScript_RouteSign::
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
	end

Route123_EventScript_RouteSignMtPyre::
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
	end

Route123_EventScript_BerryMastersHouseSign::
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
	end

Route123_EventScript_Wendy::
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Braxton::
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Cameron::
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat
	msgbox Route123_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route123_EventScript_Jacki::
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat
	msgbox Route123_Text_JackiPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route123_EventScript_Miu::
	trainerbattle_single TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Yuki::
	trainerbattle_single TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Kindra::
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Frederick::
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Alberto::
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Ed::
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Kayley::
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Jonas::
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Jazmyn::
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Davis::
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Fernando::
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat,
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route123_Text_LoveGrassMonsHaveThis:
	.string "I love Grass-type Pokémon!\p"
	.string "Here, you can have this!$"

Route123_Text_CheckTreesWithMyGrassMon:
	.string "I check trees with my Grass-type\n"
	.string "Pokémon. I'm like a tree doctor.$"

Route123_Text_RouteSign:
	.string "{RIGHT_ARROW} Route 123\n"
	.string "{LEFT_ARROW} Route 118$"

Route123_Text_RouteSignMtPyre:
	.string "{UP_ARROW} Mt. Pyre\n"
	.string "“Forbidden to the faint of heart.”$"

Route123_Text_BerryMastersHouse:
	.string "Berry Master's House$"

Route123_EventScript_Violet2::
	msgbox Route123_EventScript_Violet2_Text_0
	givemon SPECIES_TROPIUS, 0, ITEM_SITRUS_BERRY, ITEM_CHERISH_BALL, 15, 2, MON_FEMALE, 252, 0, 0, 0, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_ENERGY_BALL, MOVE_LEAF_STORM, MOVE_JETSTREAM, MOVE_GROWTH, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_TROPIUS
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TROPIUS
	playfanfare MUS_OBTAIN_ITEM
	message Route123_EventScript_Violet2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route123_EventScript_Violet2_Text_2, MSGBOX_AUTOCLOSE
	msgbox Route123_EventScript_Violet2_Text_3
	giveitem ITEM_TROPIUSITE, 1
	setflag FLAG_ROUTE_123_BOSS_DEFEATED
	msgbox Route123_EventScript_Violet2_Text_4, MSGBOX_AUTOCLOSE
	return


Route123_EventScript_Violet::
	lock
	faceplayer
	checktrainerflag TRAINER_WENDY
	goto_if 1, Route123_EventScript_Violet_5
Route123_EventScript_Violet_3:
	msgbox Route123_EventScript_Violet_Text_0, MSGBOX_NPC
Route123_EventScript_Violet_1:
	release
	end

Route123_EventScript_Violet_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat, Route123_EventScript_Violet2
	clearflag B_FLAG_NO_BAG_USE
	msgbox Route123_EventScript_Violet2_Text_4, MSGBOX_AUTOCLOSE
	goto Route123_EventScript_Violet_1

Route123_EventScript_Violet_4:
	checktrainerflag TRAINER_CAMERON_1
	goto_if 1, Route123_EventScript_Violet_9
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_5:
	checktrainerflag TRAINER_BRAXTON
	goto_if 1, Route123_EventScript_Violet_4
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_8:
	checktrainerflag TRAINER_MIU_AND_YUKI
	goto_if 1, Route123_EventScript_Violet_13
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_9:
	checktrainerflag TRAINER_JACKI_1
	goto_if 1, Route123_EventScript_Violet_8
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_12:
	checktrainerflag TRAINER_FREDRICK
	goto_if 1, Route123_EventScript_Violet_17
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_13:
	checktrainerflag TRAINER_KINDRA
	goto_if 1, Route123_EventScript_Violet_12
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_16:
	checktrainerflag TRAINER_ED
	goto_if 1, Route123_EventScript_Violet_21
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_17:
	checktrainerflag TRAINER_ALBERTO
	goto_if 1, Route123_EventScript_Violet_16
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_20:
	checktrainerflag TRAINER_JONAS
	goto_if 1, Route123_EventScript_Violet_25
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_21:
	checktrainerflag TRAINER_KAYLEY
	goto_if 1, Route123_EventScript_Violet_20
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_24:
	checktrainerflag TRAINER_DAVIS
	goto_if 1, Route123_EventScript_Violet_28
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_25:
	checktrainerflag TRAINER_JAZMYN
	goto_if 1, Route123_EventScript_Violet_24
	goto Route123_EventScript_Violet_3

Route123_EventScript_Violet_28:
	checktrainerflag TRAINER_FERNANDO_1
	goto_if 1, Route123_EventScript_Violet_2
	goto Route123_EventScript_Violet_3


Route123_EventScript_Violet2_Text_0:
	.string "Speaking of Berries…$"

Route123_EventScript_Violet2_Text_1:
	.string "{PLAYER} received an Tropius!$"

Route123_EventScript_Violet2_Text_2:
	.string "Tropius is one of my favorite Pokémon.\pI hope you will cherish it.$"

Route123_EventScript_Violet2_Text_3:
	.string "And this, too!$"

Route123_EventScript_Violet2_Text_4:
	.string "Holding Tropiusite,\nyour Tropius will Mega Evolve!\pIt'll be much stronger and bulkier!$"

Route123_EventScript_Violet_Text_0:
	.string "Good times are good aromas!\pOh. You want a battle?\pI accept your challenge,\njust not now.$"

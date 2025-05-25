
Route113_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
	.byte 0

Route113_OnResume:
	setstepcallback STEP_CB_ASH
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route113_EventScript_TryRemoveLandorus
	end

Route113_OnTransition:
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	call Route113_EventScript_CheckSetAshWeather
	call Route113_EventScript_ShowLandorus
	end

Route113_EventScript_CheckSetAshWeather::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
	setweather WEATHER_VOLCANIC_ASH
	return

Route113_EventScript_DontSetAshWeather::
	return

Route113_EventScript_Gentleman::
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
	end

Route113_EventScript_NinjaBoy::
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
	end

Route113_EventScript_RouteSign111::
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
	end

Route113_EventScript_RouteSignFallarbor::
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
	end

Route113_EventScript_GlassWorkshopSign::
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
	end

Route113_EventScript_TrainerTipsRegisterKeyItems::
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
	end

Route113_EventScript_Jaylen::
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Dillon::
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Lao::
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat
	msgbox Route113_Text_LaoPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route113_EventScript_Lung::
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Tori::
	trainerbattle_single TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Tia::
	trainerbattle_single TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Sophie::
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Coby::
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Lawrence::
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Wyatt::
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_Text_AshCanBeFashionedIntoGlass:
	.string "Wahahaha! Today's technology is a\n"
	.string "wondrous thing!\p"
	.string "Take this volcanic ash here.\n"
	.string "It can be fashioned into glass.$"

Route113_Text_FunWalkingThroughAsh:
	.string "It's fun walking through the volcano's\n"
	.string "ashes on the ground and grass.\p"
	.string "You can see where you walked--it's\n"
	.string "really neat!$"

Route113_Text_RouteSign111:
	.string "Route 113\n"
	.string "{RIGHT_ARROW} Route 111$"

Route113_Text_RouteSignFallarbor:
	.string "Route 113\n"
	.string "{LEFT_ARROW} Fallarbor Town$"

Route113_Text_TrainerTipsRegisterKeyItems:
	.string "Trainer Tips\p"
	.string "You may register up to four Key Items\n"
	.string "in your Bag as Select.\p"
	.string "Simply press Select to use\n"
	.string "the registered items conveniently.$"

Route113_Text_GlassWorkshopSign:
	.string "Glass Workshop\n"
	.string "“Turning Volcanic Ash into Glass Items”$"

Route113_EventScript_Madeline2::
	msgbox Route113_EventScript_Madeline2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_HATTERENE, 0, ITEM_LIFE_ORB, ITEM_CHERISH_BALL, NATURE_JOLLY, 2, MON_FEMALE, 252, 0, 0, 0, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL, MOVE_PSYCHIC, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_HATTERENE
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HATTERENE
	playfanfare MUS_OBTAIN_ITEM
	message Route113_EventScript_Madeline2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route113_EventScript_Madeline2_Text_2, MSGBOX_NPC
	msgbox Route113_EventScript_Madeline2_Text_3, MSGBOX_NPC
	giveitem ITEM_TM_DAZZLING_GLEAM, 1
	setflag FLAG_ROUTE_113_BOSS_DEFEATED
	msgbox Route113_EventScript_Madeline2_Text_4, MSGBOX_NPC
	return


Route113_EventScript_Madeline::
	lock
	faceplayer
	checktrainerflag TRAINER_JAYLEN
	goto_if 1, Route113_EventScript_Madeline_5
Route113_EventScript_Madeline_3:
	msgbox Route113_EventScript_Madeline_Text_0, MSGBOX_NPC
Route113_EventScript_Madeline_1:
	release
	end

Route113_EventScript_Madeline_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_Madeline2
	msgbox Route113_EventScript_Madeline2_Text_4, MSGBOX_NPC
	goto Route113_EventScript_Madeline_1

Route113_EventScript_Madeline_4:
	checktrainerflag TRAINER_LAO_1
	goto_if 1, Route113_EventScript_Madeline_9
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_5:
	checktrainerflag TRAINER_DILLON
	goto_if 1, Route113_EventScript_Madeline_4
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_8:
	checktrainerflag TRAINER_TORI_AND_TIA
	goto_if 1, Route113_EventScript_Madeline_13
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_9:
	checktrainerflag TRAINER_LUNG
	goto_if 1, Route113_EventScript_Madeline_8
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_12:
	checktrainerflag TRAINER_COBY
	goto_if 1, Route113_EventScript_Madeline_17
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_13:
	checktrainerflag TRAINER_SOPHIE
	goto_if 1, Route113_EventScript_Madeline_12
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_16:
	checktrainerflag TRAINER_WYATT
	goto_if 1, Route113_EventScript_Madeline_2
	goto Route113_EventScript_Madeline_3

Route113_EventScript_Madeline_17:
	checktrainerflag TRAINER_LAWRENCE
	goto_if 1, Route113_EventScript_Madeline_16
	goto Route113_EventScript_Madeline_3


Route113_EventScript_ShowLandorus::
	goto_if_set FLAG_SYS_GAME_CLEAR, Route113_EventScript_ShowLandorus_5
Route113_EventScript_ShowLandorus_3:
	setflag FLAG_HIDE_LANDORUS
Route113_EventScript_ShowLandorus_1:
	return

Route113_EventScript_ShowLandorus_2:
	clearflag FLAG_HIDE_LANDORUS
	goto Route113_EventScript_ShowLandorus_1

Route113_EventScript_ShowLandorus_4:
	checkpartyspecies SPECIES_TORNADUS
	compare VAR_RESULT, TRUE
	goto_if_eq Route113_EventScript_ShowLandorus_8
	goto Route113_EventScript_ShowLandorus_3

Route113_EventScript_ShowLandorus_5:
	goto_if_unset FLAG_DEFEATED_LANDORUS, Route113_EventScript_ShowLandorus_4
	goto Route113_EventScript_ShowLandorus_3

Route113_EventScript_ShowLandorus_8:
	checkpartyspecies SPECIES_THUNDURUS
	compare VAR_RESULT, TRUE
	goto_if_eq Route113_EventScript_ShowLandorus_2
	goto Route113_EventScript_ShowLandorus_3


Route113_EventScript_TryRemoveLandorus::
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route113_EventScript_TryRemoveLandorus_1
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route113_EventScript_TryRemoveLandorus_1
	return

Route113_EventScript_TryRemoveLandorus_1:
	removeobject VAR_LAST_TALKED
	return


Route113_EventScript_Landorus::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	settotemboost 1, 0, 2, 2, 2, 2, 0, 0
	setwildbattle SPECIES_LANDORUS_INCARNATE, 0, ITEM_LIFE_ORB, NATURE_TIMID, 2, 0, 0, 4, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_SANDSEAR_STORM, MOVE_HURRICANE, MOVE_SLUDGE_BOMB, MOVE_PSYCHIC
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag FLAG_DEFEATED_LANDORUS
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, Route113_EventScript_DefeatedLandorus
	goto Route113_EventScript_RanFromLandorus
	release
	end


Route113_EventScript_DefeatedLandorus::
	goto Common_EventScript_RemoveStaticPokemon
	end


Route113_EventScript_RanFromLandorus::
	setvar VAR_0x8004, SPECIES_LANDORUS
	goto Common_EventScript_LegendaryFlewAway
	end


Route113_EventScript_Madeline2_Text_0:
	.string "Wow. That was a fantastic battle!\pYou truly are a strong Trainer!\pHere, take this.$"

Route113_EventScript_Madeline2_Text_1:
	.string "{PLAYER} received a Hatterene!$"

Route113_EventScript_Madeline2_Text_2:
	.string "Please raise it with care,\nhaha!$"

Route113_EventScript_Madeline2_Text_3:
	.string "Oh! Also this!$"

Route113_EventScript_Madeline2_Text_4:
	.string "Dazzling Gleam is a pretty strong move.\pEspecially in double battles,\nwhere hitting both your enemies is\lcrucial.$"

Route113_EventScript_Madeline_Text_0:
	.string "Hello, there.\pIf you'd like to challenge me,\nthe Route Boss,\lyou need to beat everyone here.\pGot it?$"


.set LOCALID_DAYCARE_MAN, 3

Route117_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
	.byte 0

Route117_OnTransition:
	call Route117_EventScript_TryMoveDayCareMan
	end

Route117_EventScript_TryMoveDayCareMan::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
Route117_EventScript_StopMoveDayCareMan::
	return

Route117_EventScript_Woman::
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
	end

Route117_EventScript_LittleBoy::
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
	end

Route117_EventScript_Girl::
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
	end

Route117_EventScript_RouteSignVerdanturf::
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
	end

Route117_EventScript_RouteSignMauville::
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
	end

Route117_EventScript_DayCareSign::
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
	end

Route117_EventScript_Lydia::
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route117_EventScript_Dylan::
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat
	msgbox Route117_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route117_EventScript_Maria::
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat
	msgbox Route117_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route117_EventScript_Derek::
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Anna::
	trainerbattle_single TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route117_EventScript_Meg::
	trainerbattle_single TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat
	msgbox Route117_Text_MegPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route117_EventScript_Melina::
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Brandi::
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Aisha::
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_Text_DayCarePokemonHadNewMove:
	.string "I left my Pokémon at the Day Care.\p"
	.string "When I got it back, it had a new move\n"
	.string "that I didn't teach it.\l"
	.string "I was really, really surprised.$"

Route117_Text_ArentTheseFlowersPretty:
	.string "What do you think?\n"
	.string "Aren't these flowers pretty?\p"
	.string "I planted them all!$"

Route117_Text_AirIsTastyHere:
	.string "The air is tasty here!$"

Route117_Text_RouteSignVerdanturf:
	.string "Route 117\n"
	.string "{LEFT_ARROW} Verdanturf Town$"

Route117_Text_RouteSignMauville:
	.string "Route 117\n"
	.string "{RIGHT_ARROW} Mauville City$"

Route117_Text_DayCareSign:
	.string "Pokémon Day Care\n"
	.string "“Let us raise your Pokémon.”$"

Route117_EventScript_Isaac2::
	msgbox Route117_EventScript_Isaac2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_SNORLAX, 0, ITEM_LEFTOVERS, ITEM_CHERISH_BALL, 3, 2, MON_MALE, 252, 252, 0, 0, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FACADE, MOVE_SLACK_OFF, MOVE_SLEEP_TALK, MOVE_CRUNCH, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_SNORLAX
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SNORLAX
	playfanfare MUS_OBTAIN_ITEM
	message Route117_EventScript_Isaac2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route117_EventScript_Isaac2_Text_2, MSGBOX_AUTOCLOSE
	msgbox Route117_EventScript_Isaac2_Text_3
	giveitem ITEM_TM_FACADE, 1
	setflag FLAG_ROUTE_117_BOSS_DEFEATED
	msgbox Route117_EventScript_Isaac2_Text_4, MSGBOX_AUTOCLOSE
	return


Route117_EventScript_Isaac::
	lock
	faceplayer
	checktrainerflag TRAINER_LYDIA_1
	goto_if 1, Route117_EventScript_Isaac_5
Route117_EventScript_Isaac_3:
	msgbox Route117_EventScript_Isaac_Text_0, MSGBOX_NPC
Route117_EventScript_Isaac_1:
	release
	end

Route117_EventScript_Isaac_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_Isaac2
	msgbox Route117_EventScript_Isaac2_Text_4, MSGBOX_AUTOCLOSE
	goto Route117_EventScript_Isaac_1

Route117_EventScript_Isaac_4:
	checktrainerflag TRAINER_MARIA_1
	goto_if 1, Route117_EventScript_Isaac_9
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_5:
	checktrainerflag TRAINER_DYLAN_1
	goto_if 1, Route117_EventScript_Isaac_4
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_8:
	checktrainerflag TRAINER_ANNA_AND_MEG_1
	goto_if 1, Route117_EventScript_Isaac_13
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_9:
	checktrainerflag TRAINER_DEREK
	goto_if 1, Route117_EventScript_Isaac_8
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_12:
	checktrainerflag TRAINER_BRANDI
	goto_if 1, Route117_EventScript_Isaac_16
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_13:
	checktrainerflag TRAINER_MELINA
	goto_if 1, Route117_EventScript_Isaac_12
	goto Route117_EventScript_Isaac_3

Route117_EventScript_Isaac_16:
	checktrainerflag TRAINER_AISHA
	goto_if 1, Route117_EventScript_Isaac_2
	goto Route117_EventScript_Isaac_3


Route117_EventScript_Isaac2_Text_0:
	.string "Hey! That was nice!\pNow for your reward.$"

Route117_EventScript_Isaac2_Text_1:
	.string "{PLAYER} received a Snorlax!$"

Route117_EventScript_Isaac2_Text_2:
	.string "Snorlax is a beast!\pI hope you and he can win many battles\nin the future!$"

Route117_EventScript_Isaac2_Text_3:
	.string "And this, too!$"

Route117_EventScript_Isaac2_Text_4:
	.string "Facade is a move that doubles in damage\nif the Pokémon using it is suffering\lfrom status. Pretty neat, eh?\pPair with a Pokémon who has Guts,\nand you get massive damage!$"

Route117_EventScript_Isaac_Text_0:
	.string "Hello, there!\pHere for a battle, huh?\pHow about this? You beat everybody else\nhere and then face me?\pIf you beat me, I'll give you a\nlnice big reward?$"

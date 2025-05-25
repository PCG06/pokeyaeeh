
.set LOCALID_GRUNT_1, 12
.set LOCALID_GRUNT_2, 13
.set LOCALID_GRUNT_3, 14

Route121_MapScripts::
	.byte 0

Route121_EventScript_Woman::
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
	end

Route121_EventScript_MtPyrePierSign::
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
	end

Route121_EventScript_SafariZoneSign::
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
	end

Route121_EventScript_AquaGruntsMoveOut::
	lockall
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	setvar VAR_ROUTE121_STATE, 1
	releaseall
	end

Route121_Movement_Grunt1Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route121_Movement_Grunt2Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route121_Movement_Grunt3Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route121_EventScript_Vanessa::
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Walter::
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat
	msgbox Route121_Text_WalterPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route121_EventScript_Tammy::
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Jessica::
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route121_EventScript_Cale::
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Myles::
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Pat::
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Marcel::
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Cristin::
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat
	msgbox Route121_Text_CristinPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route121_Text_OkayMoveOutToMtPyre:
	.string "Okay!\n"
	.string "We're to move out to Mt. Pyre!$"

Route121_Text_AheadLoomsMtPyre:
	.string "Ahead looms Mt. Pyre…\p"
	.string "It is a natural monument to the spirits \n"
	.string "of departed Pokémon…$"

Route121_Text_MtPyrePierSign:
	.string "Mt. Pyre Pier\p"
	.string "…The sign is old and worn out.\n"
	.string "The words are barely legible…$"

Route121_Text_SafariZoneSign:
	.string "“Filled with rare Pokémon!”\n"
	.string "Safari Zone$"

Route121_EventScript_RouteBossCouple2::
	msgbox Route121_EventScript_RouteBossCouple2_Text_0
	giveitem ITEM_NIDOQUEENITE, 1
	msgbox Route121_EventScript_RouteBossCouple2_Text_1
	giveitem ITEM_NIDOKINGITE, 1
	setflag FLAG_ROUTE_121_BOSS_DEFEATED
	msgbox Route121_EventScript_RouteBossCouple2_Text_2, MSGBOX_NPC
	return


Route121_EventScript_RouteBossCouple::
	lock
	faceplayer
	checktrainerflag TRAINER_VANESSA
	goto_if 1, Route121_EventScript_RouteBossCouple_5
Route121_EventScript_RouteBossCouple_3:
	msgbox Route121_EventScript_RouteBossCouple_Text_1, MSGBOX_NPC
Route121_EventScript_RouteBossCouple_1:
	release
	end

Route121_EventScript_RouteBossCouple_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_KATE_AND_JOY, Route121_Text_RouteBossCoupleIntro, Route121_Text_RouteBossCoupleDefeat, Route121_EventScript_RouteBossCouple2
	msgbox Route121_EventScript_RouteBossCouple_Text_0, MSGBOX_AUTOCLOSE
	goto Route121_EventScript_RouteBossCouple_1

Route121_EventScript_RouteBossCouple_4:
	checktrainerflag TRAINER_TAMMY
	goto_if 1, Route121_EventScript_RouteBossCouple_9
	goto Route121_EventScript_RouteBossCouple_3

Route121_EventScript_RouteBossCouple_5:
	checktrainerflag TRAINER_WALTER_1
	goto_if 1, Route121_EventScript_RouteBossCouple_4
	goto Route121_EventScript_RouteBossCouple_3

Route121_EventScript_RouteBossCouple_8:
	checktrainerflag TRAINER_CALE
	goto_if 1, Route121_EventScript_RouteBossCouple_13
	goto Route121_EventScript_RouteBossCouple_3

Route121_EventScript_RouteBossCouple_9:
	checktrainerflag TRAINER_JESSICA_1
	goto_if 1, Route121_EventScript_RouteBossCouple_8
	goto Route121_EventScript_RouteBossCouple_3

Route121_EventScript_RouteBossCouple_12:
	checktrainerflag TRAINER_PAT
	goto_if 1, Route121_EventScript_RouteBossCouple_17
	goto Route121_EventScript_RouteBossCouple_3

Route121_EventScript_RouteBossCouple_13:
	checktrainerflag TRAINER_MYLES
	goto_if 1, Route121_EventScript_RouteBossCouple_12
	goto Route121_EventScript_RouteBossCouple_3

Route121_EventScript_RouteBossCouple_16:
	checktrainerflag TRAINER_CRISTIN_1
	goto_if 1, Route121_EventScript_RouteBossCouple_2
	goto Route121_EventScript_RouteBossCouple_3

Route121_EventScript_RouteBossCouple_17:
	checktrainerflag TRAINER_MARCEL
	goto_if 1, Route121_EventScript_RouteBossCouple_16
	goto Route121_EventScript_RouteBossCouple_3


Route121_EventScript_RouteBossCouple2_Text_0:
	.string "Yuuki: We got defeated!\pHimari: Here's a gift from us to you!$"

Route121_EventScript_RouteBossCouple2_Text_1:
	.string "Himari: Holding Nidoqueenite,\nyour Nidoqueen becomes mighty and\lstrong!\pYuuki: And from me.$"

Route121_EventScript_RouteBossCouple2_Text_2:
	.string "Yuuki: Holding Nidokingite,\nyour Nidoking becomes a badass\lwarrior! Undefeatable!$"

Route121_EventScript_RouteBossCouple_Text_0:
	.string "That was an amazing battle!\pMega Power rocks!$"

Route121_EventScript_RouteBossCouple_Text_1:
	.string "Yuuki: You're single!\pHimari: How embarrassing…\pYuuki: We're always together,\nand you're alone.\pHimari: Talk to us after you beat\neverybody else here!$"

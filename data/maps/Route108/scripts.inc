
Route108_MapScripts::
	.byte 0

Route108_EventScript_Matthew::
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Tara::
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Missy::
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Carolina::
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Cory::
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated
	msgbox Route108_Text_CoryPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route108_EventScript_Jerome2::
	msgbox Route108_EventScript_Jerome2_Text_0, MSGBOX_AUTOCLOSE
	giveitem ITEM_GYARADOSITE, 1
	playfanfare MUS_OBTAIN_ITEM
	waitmessage
	waitfanfare
	msgbox Route108_EventScript_Jerome2_Text_1
	giveitem ITEM_TM_BUBBLE_BEAM, 1
	setflag FLAG_ROUTE_108_BOSS_DEFEATED
	msgbox Route108_EventScript_Jerome2_Text_2, MSGBOX_NPC
	return


Route108_EventScript_Jerome::
	lock
	faceplayer
	checktrainerflag TRAINER_DARRIN
	goto_if 1, Route108_EventScript_Jerome_5
Route108_EventScript_Jerome_3:
	msgbox Route108_EventScript_Jerome_Text_0, MSGBOX_NPC
Route108_EventScript_Jerome_1:
	release
	end

Route108_EventScript_Jerome_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated, Route108_EventScript_Jerome2
	msgbox Route108_EventScript_Jerome2_Text_2, MSGBOX_AUTOCLOSE
	goto Route108_EventScript_Jerome_1

Route108_EventScript_Jerome_4:
	checktrainerflag TRAINER_DENISE
	goto_if 1, Route108_EventScript_Jerome_9
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_5:
	checktrainerflag TRAINER_TONY_1
	goto_if 1, Route108_EventScript_Jerome_4
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_8:
	checktrainerflag TRAINER_LISA_AND_RAY
	goto_if 1, Route108_EventScript_Jerome_13
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_9:
	checktrainerflag TRAINER_BETH
	goto_if 1, Route108_EventScript_Jerome_8
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_12:
	checktrainerflag TRAINER_MISSY
	goto_if 1, Route108_EventScript_Jerome_17
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_13:
	checktrainerflag TRAINER_CAMRON
	goto_if 1, Route108_EventScript_Jerome_12
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_16:
	checktrainerflag TRAINER_TARA
	goto_if 1, Route108_EventScript_Jerome_21
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_17:
	checktrainerflag TRAINER_MATTHEW
	goto_if 1, Route108_EventScript_Jerome_16
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_20:
	checktrainerflag TRAINER_CORY_1
	goto_if 1, Route108_EventScript_Jerome_2
	goto Route108_EventScript_Jerome_3

Route108_EventScript_Jerome_21:
	checktrainerflag TRAINER_CAROLINA
	goto_if 1, Route108_EventScript_Jerome_20
	goto Route108_EventScript_Jerome_3


Route108_EventScript_Jerome2_Text_0:
	.string "Ah yes!\pPeak battle!\pHere, I have an extra!$"

Route108_EventScript_Jerome2_Text_1:
	.string "And this, too!$"

Route108_EventScript_Jerome2_Text_2:
	.string "Bubble Beam is an excellent move!\pIt can also lower the foe's speed.$"

Route108_EventScript_Jerome_Text_0:
	.string "I'm gonna swim the entire region!\p… …\pShoo! Meet me when you are strong!$"

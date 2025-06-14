
.set LOCALID_HEX_MANIAC, 1

MtPyre_6F_MapScripts::
	.byte 0

MtPyre_6F_EventScript_Cedric::
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_EventScript_SignPost::
	msgbox MtPyre_6F_Text_Coco, MSGBOX_SIGN
	end

MtPyre_6F_Text_ValerieIntro:
	.string "When I'm here…\n"
	.string "A curious power flows into me…$"

MtPyre_6F_Text_ValerieDefeat:
	.string "The power is ebbing away…\p"
	.string "Perhaps the power is from the spirits\n"
	.string "of Pokémon in fitful sleep here…$"

MtPyre_6F_Text_ValerieRegister:
	.string "Fufufu… I lost the match, but…\n"
	.string "I have this little ability…\p"
	.string "Without ever laying my hands on\n"
	.string "your PokéNav Hiyah!$"

MtPyre_6F_Text_ValerieRematchIntro:
	.string "Behind you…\n"
	.string "What is it…$"

MtPyre_6F_Text_ValerieRematchDefeat:
	.string "Something faded away…$"

MtPyre_6F_Text_ValeriePostBattle:
	.string "The Pokémon at rest here…\n"
	.string "Sometimes, they play…$"

MtPyre_6F_Text_CedricIntro:
	.string "Have you lost your bearings?\n"
	.string "Have no fear for I am here!$"

MtPyre_6F_Text_CedricDefeat:
	.string "Weren't you lost?$"

MtPyre_6F_Text_CedricPostBattle:
	.string "I had this feeling that a lost Trainer\n"
	.string "would be panicked and easy to beat.\p"
	.string "It's dirty and I won't try it again…$"

MtPyre_6F_Text_Coco:
	.string "Here lies Coco.\p"
	.string "The beloved 18 year old cat of\n"
	.string "ViralStarfish.\p"
	.string "Please pay your respects, here.$"

MtPyre_6F_EventScript_Valerie2::
	msgbox MtPyre_6F_EventScript_Valerie2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_BANETTE, 0, ITEM_LEFTOVERS, ITEM_CHERISH_BALL, 3, 1, MON_MALE, 252, 252, 0, 0, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_WILL_O_WISP, MOVE_POLTERGEIST, MOVE_RETURN, MOVE_SUCKER_PUNCH, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_BANETTE
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BANETTE
	playfanfare MUS_OBTAIN_ITEM
	message MtPyre_6F_EventScript_Valerie2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox MtPyre_6F_EventScript_Valerie2_Text_2, MSGBOX_AUTOCLOSE
	giveitem ITEM_BANETTITE, 1
	setflag FLAG_MT_PYRE_BOSS_DEFEATED
	msgbox MtPyre_6F_EventScript_Valerie2_Text_3, MSGBOX_AUTOCLOSE
	return


MtPyre_6F_EventScript_Valerie::
	lock
	faceplayer
	checktrainerflag TRAINER_MARK
	goto_if 1, MtPyre_6F_EventScript_Valerie_5
MtPyre_6F_EventScript_Valerie_3:
	msgbox MtPyre_6F_EventScript_Valerie_Text_0, MSGBOX_NPC
	delay 4
	applymovement LOCALID_HEX_MANIAC, Common_Movement_FaceOriginalDirection
	waitmovement 0
MtPyre_6F_EventScript_Valerie_1:
	release
	end

MtPyre_6F_EventScript_Valerie_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_Valerie2
	msgbox MtPyre_6F_EventScript_Valerie2_Text_3, MSGBOX_AUTOCLOSE
	goto MtPyre_6F_EventScript_Valerie_1

MtPyre_6F_EventScript_Valerie_4:
	checktrainerflag TRAINER_LEAH
	goto_if 1, MtPyre_6F_EventScript_Valerie_9
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_5:
	checktrainerflag TRAINER_DEZ_AND_LUKE
	goto_if 1, MtPyre_6F_EventScript_Valerie_4
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_8:
	checktrainerflag TRAINER_WILLIAM
	goto_if 1, MtPyre_6F_EventScript_Valerie_13
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_9:
	checktrainerflag TRAINER_ZANDER
	goto_if 1, MtPyre_6F_EventScript_Valerie_8
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_12:
	checktrainerflag TRAINER_GABRIELLE_1
	goto_if 1, MtPyre_6F_EventScript_Valerie_17
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_13:
	checktrainerflag TRAINER_KAYLA
	goto_if 1, MtPyre_6F_EventScript_Valerie_12
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_16:
	checktrainerflag TRAINER_ATSUSHI
	goto_if 1, MtPyre_6F_EventScript_Valerie_2
	goto MtPyre_6F_EventScript_Valerie_3

MtPyre_6F_EventScript_Valerie_17:
	checktrainerflag TRAINER_TASHA
	goto_if 1, MtPyre_6F_EventScript_Valerie_16
	goto MtPyre_6F_EventScript_Valerie_3


MtPyre_6F_EventScript_Valerie2_Text_0:
	.string "My Banette.\nYou can have him.$"

MtPyre_6F_EventScript_Valerie2_Text_1:
	.string "{PLAYER} received a Banette!$"

MtPyre_6F_EventScript_Valerie2_Text_2:
	.string "You can make good use of this with\nBanette.$"

MtPyre_6F_EventScript_Valerie2_Text_3:
	.string "Holding a Banettite,\nyour Banette can become just as\lstrong as mine!$"

MtPyre_6F_EventScript_Valerie_Text_0:
	.string "…\nI'll be…\lwaiting for…\lyour challenge…$"

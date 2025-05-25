
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
@  These are labeled in DewfordTown/scripts.inc

Route109_MapScripts::
	.byte 0

Route109_EventScript_StartDepartForDewford::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_R109
	switch VAR_FACING
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
	case DIR_WEST, Route109_EventScript_EnterBoatWest
	case DIR_EAST, Route109_EventScript_EnterBoatEast
	end

Route109_EventScript_EnterBoatSouth::
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
	waitmovement 0
	goto Route109_EventScript_DoSailToDewford
	end

Route109_EventScript_EnterBoatEast::
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
	waitmovement 0
	goto Route109_EventScript_DoSailToDewford
	end

Route109_EventScript_EnterBoatWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
	waitmovement 0
	goto Route109_EventScript_DoSailToDewford
	end

Route109_EventScript_DoSailToDewford::
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
	waitmovement 0
	delay 50
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
	waitmovement 0
	addobject LOCALID_BOAT_DEWFORD
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
	addobject LOCALID_BRINEY_DEWFORD
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
	waitmovement 0
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
	release
	end

Route109_Movement_SailToDewford:
	walk_in_place_faster_down
	walk_down
	walk_down
	walk_fast_down
	walk_fast_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

Route109_Movement_PlayerEnterBoatSouth:
	walk_down
	walk_down
	step_end

Route109_Movement_PlayerExitBoat:
	walk_down
	walk_down
	walk_left
	walk_in_place_faster_right
	step_end

Route109_Movement_PlayerEnterBoatEast:
	walk_right
	walk_down
	step_end

Route109_Movement_PlayerEnterBoatWest:
	walk_left
	walk_down
	step_end

Route109_Movement_BrineyEnterBoat:
	walk_down
	step_end

Route109_Movement_BrineyExitBoat:
	walk_down
	walk_in_place_faster_left
	step_end

Route109_EventScript_MrBriney::
	lock
	faceplayer
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
	goto Route109_EventScript_DeliveredDevonGoods
	end

Route109_EventScript_HaveNotDeliveredDevonGood::
	message Route109_Text_BrineySailToDewfordQuestion
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
	goto Route109_EventScript_SailToDewford
	end

Route109_EventScript_DeliveredDevonGoods::
	message Route109_Text_BrineyWhereAreWeBound
	waitmessage
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
	switch VAR_RESULT
	case 0, Route109_EventScript_SailToDewford
	case 1, Route109_EventScript_ChoseNotToSail
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
	end

Route109_EventScript_SailToDewford::
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
	closemessage
	goto Route109_EventScript_StartDepartForDewford
	end

Route109_EventScript_StayHere::
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
	release
	end

Route109_EventScript_ChoseNotToSail::
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
	release
	end

Route109_EventScript_SeashoreHouseGirl::
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
	end

Route109_EventScript_SandCastleBoy::
	lock
	faceplayer
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route109_EventScript_SoftSandGirl::
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_SOFT_SAND
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_RECEIVED_SOFT_SAND
	release
	end

Route109_EventScript_AlreadyReceivedSoftSand::
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route109_EventScript_Woman::
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
	end

Route109_EventScript_OldMan::
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
	end

Route109_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route109_EventScript_SeashoreHouseSign::
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
	end

Route109_EventScript_TrainerTipsSign::
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
	end

Route109_EventScript_David::
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Alice::
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Edmond::
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Ricky::
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated
	msgbox Route109_Text_RickyPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route109_EventScript_Lola::
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated
	msgbox Route109_Text_LolaPostBattle, MSGBOX_AUTOCLOSE
	release
	end

Route109_EventScript_Austina::
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Gwen::
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Carter::
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Paul::
	trainerbattle_single TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Mel::
	trainerbattle_single TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Chandler::
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Hailey::
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Elijah::
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
	.string "Mr. Briney: Ahoy!\n"
	.string "We've made land in Slateport!\p"
	.string "I suppose you're going to visit Capt.\n"
	.string "Stern and deliver the Devon Goods?$"

Route109_Text_BrineySailToDewfordQuestion:
	.string "Mr. Briney: I thought you're supposed\n"
	.string "to deliver the Devon Goods.\p"
	.string "Would you like to sail back to\n"
	.string "Dewford, then?$"

Route109_Text_BrineyDewfordItIs:
	.string "Mr. Briney: Dewford it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "Peeko, we're setting sail, my darling!$"

Route109_Text_BrineyDeliverDevonGoods:
	.string "Mr. Briney: Then you go on and deliver\n"
	.string "the Devon Goods. I'll be waiting.$"

DewfordTown_Text_BrineyLandedInSlateport:
	.string "Mr. Briney: Ahoy! We've made land in\n"
	.string "Slateport!\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail again!$"

Route109_Text_BrineyWhereAreWeBound:
	.string "Mr. Briney: Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

Route109_Text_BrineyTellMeWhenYouNeedToSail:
	.string "Mr. Briney: You just tell me whenever\n"
	.string "you need to set sail again!$"

Route109_Text_ChillAtMyPapasSpot:
	.string "Yo, Trainers!\n"
	.string "Whether you're hot to trot,\l"
	.string "or cool cat not,\l"
	.string "chill at my papa's spot!$"

Route109_Text_LittleKidsDartAround:
	.string "Little kids can dart around so quickly…\p"
	.string "You don't dare take your eyes off them\n"
	.string "for an instant. It's very taxing.\p"
	.string "Mine are with my Pokémon, so they\n"
	.string "should be okay, but…$"

Route109_Text_SandCastleTakingLongTime:
	.string "Our sand castle's taking a long time\n"
	.string "to make.$"

Route109_Text_YouCanHaveThis:
	.string "You can have this!$"

Route109_Text_WereGoingToMakeBigCastle:
	.string "We're going to get all the sand from\n"
	.string "the beach and make a big castle!\p"
	.string "And then we're going to be a king and\n"
	.string "queen.\p"
	.string "We'll let you be a servant.$"

Route109_Text_ZigzagoonPicksUpLitter:
	.string "The water around these parts is clean.\p"
	.string "But, I get my Zigzagoon to pick up\n"
	.string "litter from the shoreline at times.\p"
	.string "Dirty water becomes rain and joins our\n"
	.string "rivers, which we drink from…\p"
	.string "If we pollute the sea, it all comes\n"
	.string "back to haunt us eventually.$"

Route109_Text_ZigzagoonCry:
	.string "Zigzagoon: Guguu?$"

Route109_Text_SeashoreHouseSign:
	.string "Seashore House\p"
	.string "“May hot battles rage on hot sands!\n"
	.string "The place for hot Trainers!”$"

Route109_Text_TrainerTipsSign:
	.string "Trainer Tips\p"
	.string "Pokémon at the same level may not\n"
	.string "always have identical stats.\p"
	.string "Pokémon raised by Trainers are said\n"
	.string "to grow stronger than wild Pokémon.$"

Route109_EventScript_Huey2::
	msgbox Route109_EventScript_Huey2_Text_0, MSGBOX_AUTOCLOSE
	givemon SPECIES_ABSOL, 0, ITEM_CHOICE_BAND, ITEM_CHERISH_BALL, NATURE_JOLLY, 0, MON_MALE, 0, 252, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_AQUA_CUTTER, MOVE_LEAF_BLADE, TRUE
	bufferspeciesname STR_VAR_1, SPECIES_ABSOL
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ABSOL
	playfanfare MUS_OBTAIN_ITEM
	message Route109_EventScript_Huey2_Text_1
	waitmessage
	waitfanfare
	call Common_EventScript_Nickname
	msgbox Route109_EventScript_Huey2_Text_2, MSGBOX_NPC
	giveitem ITEM_ABSOLITE, 1
	setflag FLAG_ROUTE_109_BOSS_DEFEATED
	msgbox Route109_EventScript_Huey2_Text_3, MSGBOX_NPC
	return


Route109_EventScript_Huey::
	lock
	faceplayer
	checktrainerflag TRAINER_MAY_ROUTE_103_TORCHIC
	goto_if 1, Route109_EventScript_Huey_5
Route109_EventScript_Huey_3:
	msgbox Route109_EventScript_Huey_Text_1, MSGBOX_NPC
Route109_EventScript_Huey_1:
	release
	end

Route109_EventScript_Huey_2:
	setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated, Route109_EventScript_Huey2
	msgbox Route109_EventScript_Huey_Text_0, MSGBOX_NPC
	goto Route109_EventScript_Huey_1

Route109_EventScript_Huey_4:
	checktrainerflag TRAINER_EDMOND
	goto_if 1, Route109_EventScript_Huey_9
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_5:
	checktrainerflag TRAINER_ALICE
	goto_if 1, Route109_EventScript_Huey_4
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_8:
	checktrainerflag TRAINER_LOLA_1
	goto_if 1, Route109_EventScript_Huey_13
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_9:
	checktrainerflag TRAINER_RICKY_1
	goto_if 1, Route109_EventScript_Huey_8
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_12:
	checktrainerflag TRAINER_GWEN
	goto_if 1, Route109_EventScript_Huey_17
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_13:
	checktrainerflag TRAINER_AUSTINA
	goto_if 1, Route109_EventScript_Huey_12
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_16:
	checktrainerflag TRAINER_MEL_AND_PAUL
	goto_if 1, Route109_EventScript_Huey_21
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_17:
	checktrainerflag TRAINER_CARTER
	goto_if 1, Route109_EventScript_Huey_16
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_20:
	checktrainerflag TRAINER_HAILEY
	goto_if 1, Route109_EventScript_Huey_24
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_21:
	checktrainerflag TRAINER_CHANDLER
	goto_if 1, Route109_EventScript_Huey_20
	goto Route109_EventScript_Huey_3

Route109_EventScript_Huey_24:
	checktrainerflag TRAINER_ELIJAH
	goto_if 1, Route109_EventScript_Huey_2
	goto Route109_EventScript_Huey_3


Route109_EventScript_Huey2_Text_0:
	.string "Wowza! I'm pumped!\pHere kiddo! Have this from me!$"

Route109_EventScript_Huey2_Text_1:
	.string "{PLAYER} received an Absol!$"

Route109_EventScript_Huey2_Text_2:
	.string "That's one heck of a beast to raise,\nhaha!$"

Route109_EventScript_Huey2_Text_3:
	.string "Holding that item,\nAbsol can Mega Evolve in a battle\pPretty cool, eh?$"

Route109_EventScript_Huey_Text_0:
	.string "I suggest you give that item to Absol.\pYou saw mine, were you disappointed\nin what you had seen?$"

Route109_EventScript_Huey_Text_1:
	.string "Don't bother me now, kid!\nI'm sleeping over here…\pYou can bother me after you beat\neveryone here.\pI mean\nE-V-E-R-Y-O-N-E\lH-E-R-E.\pGot it?$"

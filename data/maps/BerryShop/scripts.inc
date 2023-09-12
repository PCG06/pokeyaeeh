BerryShop_MapScripts::
	.byte 0

BerryShop_EventScript_Lady::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, BerryShop_ExpandedItems
	pokemart BerryShop_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
BerryShop_Basic:
	.2byte ITEM_TM11
	.2byte ITEM_TM12
	.2byte ITEM_TM15
	.2byte ITEM_NONE
	release
	end

BerryShop_ExpandedItems::
	pokemart BerryShop_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
BerryShop_Expanded:
	.2byte ITEM_TM11
	.2byte ITEM_TM12
	.2byte ITEM_TM13
	.2byte ITEM_TM14
	.2byte ITEM_TM15
	.2byte ITEM_TM16
	.2byte ITEM_TM17
	.2byte ITEM_TM18
	.2byte ITEM_TM19
	.2byte ITEM_TM20
	.2byte ITEM_NONE
	release
	end

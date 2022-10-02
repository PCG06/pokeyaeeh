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
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
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
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_RAWST_BERRY
    .2byte ITEM_ASPEAR_BERRY
    .2byte ITEM_SITRUS_BERRY
	.2byte ITEM_NONE
	release
	end

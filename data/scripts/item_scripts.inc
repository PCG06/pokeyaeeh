ItemScript_RotomCatalog::
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq ItemScript_RotomCatalog_End
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq ItemScript_RotomCatalog_NoEffect
	special GetBaseSpecies
	compare VAR_RESULT, SPECIES_ROTOM
	goto_if_eq ItemScript_RotomCatalog_OpenCatalog
	msgbox ItemScript_RotomCatalog_Text_NoEffect, MSGBOX_DEFAULT
	closemessage
ItemScript_RotomCatalog_End:
	releaseall
	end

ItemScript_RotomCatalog_OpenCatalog:
	lockall
	multichoice 14, 1, MULTI_ROTOM_CATALOG, 0
	switch VAR_RESULT
	case 0, ItemScript_RotomCatalog_LightBulb
	case 1, ItemScript_RotomCatalog_MicrowaveOven
	case 2, ItemScript_RotomCatalog_WashingMachine
	case 3, ItemScript_RotomCatalog_Refrigerator
	case 4, ItemScript_RotomCatalog_ElectricFan
	case 5, ItemScript_RotomCatalog_LawnMower
	case 6, ItemScript_RotomCatalog_End

ItemScript_RotomCatalog_LightBulb:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_ROTOM
	goto_if_eq ItemScript_RotomCatalog_NoEffect
	setvar VAR_0x8005, SPECIES_ROTOM
	goto ItemScript_RotomCatalog_ChangeForm
ItemScript_RotomCatalog_MicrowaveOven:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_ROTOM_HEAT
	goto_if_eq ItemScript_RotomCatalog_NoEffect
	setvar VAR_0x8005, SPECIES_ROTOM_HEAT
	goto ItemScript_RotomCatalog_ChangeForm
ItemScript_RotomCatalog_WashingMachine:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_ROTOM_WASH
	goto_if_eq ItemScript_RotomCatalog_NoEffect
	setvar VAR_0x8005, SPECIES_ROTOM_WASH
	goto ItemScript_RotomCatalog_ChangeForm
ItemScript_RotomCatalog_Refrigerator:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_ROTOM_FROST
	goto_if_eq ItemScript_RotomCatalog_NoEffect
	setvar VAR_0x8005, SPECIES_ROTOM_FROST
	goto ItemScript_RotomCatalog_ChangeForm
ItemScript_RotomCatalog_ElectricFan:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_ROTOM_FAN
	goto_if_eq ItemScript_RotomCatalog_NoEffect
	setvar VAR_0x8005, SPECIES_ROTOM_FAN
	goto ItemScript_RotomCatalog_ChangeForm
ItemScript_RotomCatalog_LawnMower:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_ROTOM_MOW
	goto_if_eq ItemScript_RotomCatalog_NoEffect
	setvar VAR_0x8005, SPECIES_ROTOM_MOW
	goto ItemScript_RotomCatalog_ChangeForm

ItemScript_RotomCatalog_ChangeForm:
	bufferpartymonnick 0, VAR_0x8004
	special SetCurrentSpecies
	playmoncry VAR_0x8005, 0
	msgbox ItemScript_RotomCatalog_Text_Success, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	goto ItemScript_RotomCatalog_End

ItemScript_RotomCatalog_NoEffect:
	msgbox ItemScript_RotomCatalog_Text_NoEffect, MSGBOX_DEFAULT
	closemessage
	goto ItemScript_RotomCatalog_End

ItemScript_RotomCatalog_Text_NoEffect:
	.string "It had no effect.$"

ItemScript_RotomCatalog_Text_Success:
	.string "{STR_VAR_1} transformed!$"

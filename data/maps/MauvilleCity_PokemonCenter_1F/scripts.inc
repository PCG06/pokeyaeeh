.set LOCALID_NURSE, 1

MauvilleCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MauvilleCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
	call Common_EventScript_UpdateBrineyLocation
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx:: @@ this does nothing now. I hate you old man!
	special SetMauvilleOldManObjEventGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_MauvilleOldManCrying::
    msgbox MauvilleCity_PokemonCenter_1F_Text_MauvilleOldManCrying, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_Text_MauvilleOldManCrying:
    .string "I used to tell stories to\n"
	.string "young adventurers.\p"
	.string "But now…\p"
	.string "I'm nothing.\p"
	.string "Just a crazy old man waiting\n"
	.string "for his time to come.$"

MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
	.string "That man over there, he used to say\n"
	.string "some weird things!\p"
	.string "He's funny in a weird way.\n"
	.string "I doubt I'll forget about him!$"

MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
	.string "When I accessed the Record Corner,\n"
	.string "the data for what's hot in Dewford\l"
	.string "got updated.\p"
	.string "Now that bit of data is the same\n"
	.string "as my friend's!$"

MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
	.string "A Record Corner opened upstairs in\n"
	.string "the Pokémon Center.\p"
	.string "I don't know what it's about, but it\n"
	.string "sounds fun. I'll go check it out!$"

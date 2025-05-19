
FortreeCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_Gym_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
	.byte 0

FortreeCity_Gym_OnResume:
    setvar B_VAR_STARTING_STATUS, STARTING_STATUS_METAL_TERRAIN
	return

FortreeCity_Gym_OnTransition:
    setvar B_VAR_STARTING_STATUS, STARTING_STATUS_METAL_TERRAIN
	end

FortreeCity_Gym_EventScript_Winona::
	dotimebasedevents
    setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
	shouldtryrematchbattle TRAINER_WINONA_1, FortreeCity_Gym_EventScript_WinonaRematch
	goto_if_unset FLAG_RECEIVED_TM_FLASH_CANNON, FortreeCity_Gym_EventScript_GiveFlashCannon2
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_WinonaDefeated::
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_AUTOCLOSE
	giveitem ITEM_MAWILITE
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	call FortreeCity_Gym_EventScript_GiveFlashCannon
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
	setvar B_VAR_STARTING_STATUS, 0
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
	setflag FLAG_REGI_DOORS_OPENED
	clearflag FLAG_HIDE_ARTICUNO
	clearflag FLAG_HIDE_ZAPDOS
	setvar VAR_EMBER_RIDGE_STATE, 1
	release
	end

FortreeCity_Gym_EventScript_GiveFlashCannon2::
	msgbox FortreeCity_Gym_Text_GiveFlashCannon, MSGBOX_AUTOCLOSE
	buffertrainername STR_VAR_1, TRAINER_WINONA_1
	giveplayertms 5
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox FortreeCity_Gym_Text_ExplainFlashCannon, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_FLASH_CANNON
	release
	end

FortreeCity_Gym_EventScript_GiveFlashCannon::
	msgbox FortreeCity_Gym_Text_GiveFlashCannon, MSGBOX_AUTOCLOSE
	buffertrainername STR_VAR_1, TRAINER_WINONA_1
	giveplayertms 5
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox FortreeCity_Gym_Text_ExplainFlashCannon, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_FLASH_CANNON
	return

FortreeCity_Gym_EventScript_WinonaRematch::
	trainerbattle_rematch TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Jared::
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Flint::
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Ashley::
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Humberto::
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Darius::
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Acheron::
	trainerbattle_single TRAINER_KEEGAN, FortreeCity_Gym_Text_AcheronIntro, FortreeCity_Gym_Text_AcheronDefeat
	msgbox FortreeCity_Gym_Text_AcheronPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_GymGuidePostVictory::
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
	goto FortreeCity_Gym_EventScript_GymStatue
	end

FortreeCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
	goto FortreeCity_Gym_EventScript_GymStatue
	end

FortreeCity_Gym_EventScript_GymStatueCertified::
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_Gym_EventScript_GymStatue::
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Fortree Gym Leader Krypto is\n"
	.string "a master of Steel-type Pokémon.\p"
	.string "He's waiting for new challengers\n"
	.string "who are trying to take wing!\p"
	.string "Okay, go for it!$"

FortreeCity_Gym_Text_GymGuidePostVictory:
	.string "You did it!\n"
	.string "You've beaten Krypto at his own game!$"

FortreeCity_Gym_Text_JaredIntro:
	.string "Behold the powerful battle style of\n"
	.string "my Steel-type Pokémon!$"

FortreeCity_Gym_Text_JaredDefeat:
	.string "You…\n"
	.string "You're strong…$"

FortreeCity_Gym_Text_JaredPostBattle:
	.string "A Trainer has to be smart to keep\n"
	.string "up with unexpected turns of events.\p"
	.string "Do you have the smarts to get to\n"
	.string "our Leader?$"

FortreeCity_Gym_Text_EdwardoIntro:
	.string "Steel-type fanatics all around Hoenn.\n"
	.string "want to join this Gym.\p"
	.string "As a member of the Fortree Gym,\n"
	.string "I'm not allowed to lose!$"

FortreeCity_Gym_Text_EdwardoDefeat:
	.string "It was too much of a load for me\n"
	.string "to bear…$"

FortreeCity_Gym_Text_EdwardoPostBattle:
	.string "The world is huge, and there are\n"
	.string "countless tough Trainers.\p"
	.string "I'm going to keep training and make\n"
	.string "myself even stronger.$"

FortreeCity_Gym_Text_FlintIntro:
	.string "There's no need for Krypto, our Gym\n"
	.string "Leader, to deal with you!\p"
	.string "I'm plenty good enough for you!$"

FortreeCity_Gym_Text_FlintDefeat:
	.string "Krypto, I…\n"
	.string "I lost!$"

FortreeCity_Gym_Text_FlintPostBattle:
	.string "Krypto is the greatest!\p"
	.string "…\p"
	.string "Krypgoat!$"

FortreeCity_Gym_Text_AshleyIntro:
	.string "Krypto taught me personally!\n"
	.string "You can't beat me easily!$"

FortreeCity_Gym_Text_AshleyDefeat:
	.string "I was beaten…$"

FortreeCity_Gym_Text_AshleyPostBattle:
	.string "Thanks to Krypto, the people of\n"
	.string "Fortree can live without fear.$"

FortreeCity_Gym_Text_HumbertoIntro:
	.string "When Krypto takes to battle, he\n"
	.string "destroys everything in his way!\p"
	.string "I'm not letting you witness that!$"

FortreeCity_Gym_Text_HumbertoDefeat:
	.string "Urk!\n"
	.string "I couldn't stop you.$"

FortreeCity_Gym_Text_HumbertoPostBattle:
	.string "You'd better watch it!\n"
	.string "Krypto is an insane Trainer!$"

FortreeCity_Gym_Text_DariusIntro:
	.string "You'd better know that there are all\n"
	.string "sorts of Steel-type Pokémon.\p"
	.string "You do know that, right?$"

FortreeCity_Gym_Text_DariusDefeat:
	.string "You seem to know your stuff!$"

FortreeCity_Gym_Text_DariusPostBattle:
	.string "Sure, you beat me all right.\n"
	.string "But you'd better watch it! Our Leader\l"
	.string "Krypto's Pokémon are all business.$"

FortreeCity_Gym_Text_AcheronIntro:
	.string "The metals shall be in your face!$"

FortreeCity_Gym_Text_AcheronDefeat:
	.string "Ow, dang it!$"

FortreeCity_Gym_Text_AcheronPostBattle:
	.string "I may have lost, but Krypto won't go\n"
	.string "down that easily!$"

FortreeCity_Gym_Text_WinonaIntro:
	.string "Welcome, challenger.\p"
	.string "Great job on getting past my Gym\n"
	.string "Trainers.\p"
	.string "They are push-overs anyway…\p"
	.string "But now!\n"
	.string "You must face my Steel-type Pokémon\l"
	.string "and their overwhelming intensity!$"

FortreeCity_Gym_Text_WinonaDefeat:
	.string "What?!\n"
	.string "No way…!\p"
	.string "After all of that strategizing just to\n"
	.string "be melted to nothing but a puddle of\l"
	.string "metal!$"

FortreeCity_Gym_Text_ReceivedFeatherBadge:
	.string "{PLAYER} received the Hexnut Badge\n"
	.string "from Krypto.$"

FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
	.string "With the Hexnut Badge, all Pokémon up\n"
	.string "to Lv 65, even those received through\l"
	.string "trades, will obey your every command.\p"
	.string "For my first gift, take this Mega Stone,\n"
	.string "for one of my favorite Pokémon… Mawile.\n"
	.string "I pray she does you well.$"

FortreeCity_Gym_Text_GiveFlashCannon:
	.string "And this is another gift from me.$"

FortreeCity_Gym_Text_ExplainFlashCannon:
    .string "You've earned this.\n"
    .string "Steel yourself for what's next.\p"
    .string "No one said the path forward was easy.\p"
    .string "… … … … … …$"

FortreeCity_Gym_Text_RegisteredWinona:
	.string "Registered Gym Leader Krypto\n"
	.string "in the PokéNav.$"

FortreeCity_Gym_Text_WinonaPostBattle:
	.string "Go on, challenger,\n"
	.string "that is all I have for you.\p"
	.string "Good luck!$"

FortreeCity_Gym_Text_GymStatue:
	.string "Fortree City Pokémon Gym\p"
	.string "Krypto's certified Trainers:\n"
	.string "Wally$"

FortreeCity_Gym_Text_GymStatueCertified:
	.string "Fortree City Pokémon Gym\p"
	.string "Krypto's certified Trainers:\n"
	.string "Wally and {PLAYER}$"

FortreeCity_Gym_Text_WinonaPreRematch:
	.string "Krypto: We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "You have scaled the pinnacle as\n"
	.string "the reigning Champion.\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!$"

FortreeCity_Gym_Text_WinonaRematchDefeat:
	.string "I failed to reach your height again…$"

FortreeCity_Gym_Text_WinonaPostRematch:
	.string "Krypto: Even though I have lost,\n"
	.string "the wings of my heart remain unbroken.\p"
	.string "I can rise and soar again and\n"
	.string "yet again.\p"
	.string "I am convinced of it!$"

FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
	.string "Krypto: We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "You have scaled the pinnacle as\n"
	.string "the reigning Champion.\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!\p"
	.string "Oh, no… Do you have but one\n"
	.string "Pokémon with you?\p"
	.string "Please return with two Pokémon\n"
	.string "at the very least.$"

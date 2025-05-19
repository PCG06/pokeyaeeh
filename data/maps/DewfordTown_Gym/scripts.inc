
DewfordTown_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DewfordTown_Gym_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
	.byte 0

DewfordTown_Gym_OnResume:
    setvar B_VAR_STARTING_STATUS, STARTING_STATUS_GRASSY_TERRAIN
	return

DewfordTown_Gym_OnTransition:
    setvar B_VAR_STARTING_STATUS, STARTING_STATUS_GRASSY_TERRAIN
	end

DewfordTown_Gym_EventScript_Brawly::
	dotimebasedevents
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	shouldtryrematchbattle TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_BrawlyRematch
	goto_if_unset FLAG_RECEIVED_TM_SEED_BOMB, DewfordTown_Gym_EventScript_GiveBulkUp2
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated::
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	call DewfordTown_Gym_EventScript_GiveBulkUp
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
	setvar B_VAR_STARTING_STATUS, 0
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	release
	end

DewfordTown_Gym_EventScript_GiveBulkUp::
	buffertrainername STR_VAR_1, TRAINER_BRAWLY_1
	giveplayertms 1
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_SEED_BOMB
	return

DewfordTown_Gym_EventScript_GiveBulkUp2:
	buffertrainername STR_VAR_1, TRAINER_BRAWLY_1
	giveplayertms 1
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_SEED_BOMB
	release
	end

DewfordTown_Gym_EventScript_BrawlyRematch::
	trainerbattle_rematch TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Takao::
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Jocelyn::
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Cristian::
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_GymGuidePostVictory::
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified::
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue::
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice:
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Dewford's Gym Leader, Oisin, commands\n"
	.string "Grass-type Pokémon.\p"
	.string "Going against him with Water-type\n"
	.string "Pokémon is asking for trouble.\p"
	.string "Grass Pokémon will lay a serious\n"
	.string "smack down on Water and Ground\l"
	.string "Pokémon, so be careful!\p"
	.string "There'll be Grassy Terrain everywhere.\n"
	.string "It'll reduce damage of earthquakes\l"
	.string "and heals a little every turn.\p"
	.string "Bring a Fire-type or two.\p"
	.string "Hey, go for it, Champ!\n"
	.string "I believe in you!$"

DewfordTown_Gym_Text_GymGuidePostVictory:
	.string "Whoah! You're a real one, {PLAYER}!\n"
	.string "Onward to Mauville, now!\p"
	.string "Good luck in your future battles!$"

DewfordTown_Gym_Text_TakaoIntro:
	.string "Flower power!\n"
	.string "Let's go!$"

DewfordTown_Gym_Text_TakaoDefeat:
	.string "Not enough power…$"

DewfordTown_Gym_Text_TakaoPostBattle:
	.string "Your skill overcame my power!\n"
	.string "You are powerful!$"

DewfordTown_Gym_Text_JocelynIntro:
	.string "There's no need for Oisin to be\n"
	.string "involved!\p"
	.string "I'll beat you!$"

DewfordTown_Gym_Text_JocelynDefeat:
	.string "But… How?\n"
	.string "How could I lose so easily?$"

DewfordTown_Gym_Text_JocelynPostBattle:
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a gardener…\p"
	.string "No, I'm too silly for that.$"

DewfordTown_Gym_Text_LauraIntro:
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

DewfordTown_Gym_Text_LauraDefeat:
	.string "Waaaaaaah!\n"
	.string "I lost!$"

DewfordTown_Gym_Text_LauraPostBattle:
	.string "I battle in the sun to make my heart\n"
	.string "stronger.\p"
	.string "But because it's so dark, I can never\n"
	.string "see your face…$"

DewfordTown_Gym_Text_LilithIntro:
	.string "Ufufu…\n"
	.string "Scared yet, little one?$"

DewfordTown_Gym_Text_LilithDefeat:
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

DewfordTown_Gym_Text_LilithPostBattle:
	.string "You deserve to be scared and alone!\n"
	.string "Go back home, dumbass!$"

DewfordTown_Gym_Text_BrendenIntro:
	.string "I'll show you the gumption of\n"
	.string "a good loving father!$"

DewfordTown_Gym_Text_BrendenDefeat:
	.string "Ah-ha! I lied.\n"
	.string "I got divorced two years ago.$"

DewfordTown_Gym_Text_BrendenPostBattle:
	.string "Marriage and Pokémon battles\n"
	.string "are quite similar.\p"
	.string "You can ran away if you things\n"
	.string "get hard.$"

DewfordTown_Gym_Text_CristianIntro:
	.string "Time to take care of the vines!$"

DewfordTown_Gym_Text_CristianDefeat:
	.string "Ah, fungus$"

DewfordTown_Gym_Text_CristianPostBattle:
	.string "You win!\n"
	.string "Go get that Badge!$"

DewfordTown_Gym_Text_BrawlyIntro:
	.string "They say to get rid of a weed you have\n"
	.string "to pull it up from its roots.\p"
	.string "I hope you have the drive to beat me!$"

DewfordTown_Gym_Text_BrawlyDefeat:
	.string "Excellent!\p"
	.string "So young and yet already a\n"
	.string "brilliant Trainer,\l"
	.string "go on with your journey.\p"
	.string "Here you go, the Verdant Badge.$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge:
	.string "{PLAYER} received the Verdant Badge\n"
	.string "from Oisin.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
	.string "The Verdant Badge makes all Pokémon\n"
	.string "up to Level 36, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use the HM move\n"
	.string "Flash outside of battle.\p"
	.string "Here's some TMs for you to try.$"

DewfordTown_Gym_Text_ExplainBulkUp:
    .string "Don't expect them to do all the work.\n"
    .string "Use them as you desire.\l"
	.string "TMs are reliable and don't break,\l"
	.string "after all!\p"
    .string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly:
	.string "Registered Gym Leader Oisin\n"
	.string "in the PokéNav.$"

DewfordTown_Gym_Text_BrawlyPostBattle:
	.string "By the way, if the whole “Champion”\n"
	.string "thing doesn't work out,\l"
	.string "I'd love to have you here as a\l"
	.string "gardener.\p"
	.string "The pay is great, and you get to learn\n"
	.string "about the beauty of plant life.$"

DewfordTown_Gym_Text_GymStatue:
	.string "Dewford Town Pokémon Gym\p"
	.string "Oisin's certified Trainers:\n"
	.string "Wally$"

DewfordTown_Gym_Text_GymStatueCertified:
	.string "Dewford Town Pokémon Gym\p"
	.string "Oisin's certified Trainers:\n"
	.string "Wally and {PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch:
	.string "Oisin: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat:
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostRematch:
	.string "Oisin: Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of Hoenn!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
	.string "Oisin: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one Pokémon\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two Pokémon.$"

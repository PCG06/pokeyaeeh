
.set LOCALID_NORMAN, 1

PetalburgCity_Gym_MapScripts::
	.byte 0

PetalburgCity_Gym_EventScript_Norman::
	dotimebasedevents
    setflag B_FLAG_NO_BAG_USE
	trainerbattle_single TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanIntro, PetalburgCity_Gym_Text_NormanDefeat, PetalburgCity_Gym_EventScript_NormanDefeated, NO_MUSIC
	shouldtryrematchbattle TRAINER_NORMAN_1, PetalburgCity_Gym_EventScript_NormanRematch
	goto_if_unset FLAG_RECEIVED_TM_DRAIN_PUNCH, PetalburgCity_Gym_EventScript_GiveDrainPunch
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_NormanDefeated::
	msgbox PetalburgCity_Gym_Text_NormanAfterDefeat, MSGBOX_DEFAULT
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_PETALBURG_GYM
	setvar VAR_PETALBURG_GYM_STATE, 7
	setflag FLAG_BADGE05_GET
	setvar VAR_PETALBURG_CITY_STATE, 1
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	special ResetHealLocationFromDewford
	call EventScript_HideMrBriney
	setvar VAR_0x8008, 5
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
	@clearflag FLAG_HIDE_PETALBURG_CITY_BIRCH
	special DrawWholeMapView
	call PetalburgCity_Gym_EventScript_GiveDrainPunch
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
	end

PetalburgCity_Gym_EventScript_GiveDrainPunch::
	buffertrainername STR_VAR_1, TRAINER_NORMAN_1
	giveplayertms 4
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_RECEIVED_TM_DRAIN_PUNCH
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
	giveitem ITEM_GALLADITE
	msgbox PetalburgCity_Gym_Text_ExplainGalladite, MSGBOX_DEFAULT
	return

PetalburgCity_Gym_EventScript_NormanRematch::
	trainerbattle_rematch TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Randall::
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Parker::
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_George::
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Berke::
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Mary::
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Alexia::
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Jody::
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_GymGuidePostVictory::
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
	goto PetalburgCity_Gym_EventScript_GymStatue
	end

PetalburgCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
	goto PetalburgCity_Gym_EventScript_GymStatue
	end

PetalburgCity_Gym_EventScript_GymStatueCertified::
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

PetalburgCity_Gym_EventScript_GymStatue::
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
	.string "Chrizz: Skeddadle kiddo!$"

PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
	.string "Um… I…\n"
	.string "I'd like to get a Pokémon, please…$"

PetalburgCity_Gym_Text_DadOhYoureWallyRight:
	.string "Dad: Hm? You're… Uh… Oh, right.\n"
	.string "You're Wally, right?$"

PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
	.string "Wally: I'm going to go stay with my\n"
	.string "relatives in Verdanturf Town.\p"
	.string "I thought I would be lonely by myself,\n"
	.string "so I wanted to take a Pokémon along.\p"
	.string "But I've never caught a Pokémon before.\n"
	.string "I don't know how…$"

PetalburgCity_Gym_Text_DadHmISee:
	.string "Dad: Hm. I see.$"

PetalburgCity_Gym_Text_DadPlayerGoWithWally:
	.string "Dad: {PLAYER}, you heard that,\n"
	.string "right?\p"
	.string "Go with Wally and make sure that he\n"
	.string "safely catches a Pokémon.$"

PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
	.string "Wally, here, I'll loan you my Pokémon.\p"
	.string "Wally received a Zigzagoon!$"

PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
	.string "Wally: Oh, wow!\n"
	.string "A Pokémon!\p"
	.string "Dad: Hm. I'll give you a Poké Ball, too.\n"
	.string "Go for it!\p"
	.string "Wally received a Poké Ball!$"

PetalburgCity_Gym_Text_WallyOhWowThankYou:
	.string "Wally: Oh, wow!\n"
	.string "Thank you!$"

PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
	.string "{PLAYER}… Would you really come\n"
	.string "with me?$"

PetalburgCity_Gym_Text_DadSoDidItWorkOut:
	.string "Dad: So, did it work out?$"

PetalburgCity_Gym_Text_WallyThankYouBye:
	.string "Wally: Thank you, yes, it did.\n"
	.string "Here's your Pokémon back.\p"
	.string "{PLAYER}, thank you for coming along\n"
	.string "with me.\p"
	.string "You two are why I was able to catch\n"
	.string "my Pokémon.\p"
	.string "I promise I'll take really good\n"
	.string "care of it.\p"
	.string "Oh! My mom's waiting for me,\n"
	.string "so I have to go!\p"
	.string "Bye, {PLAYER}!$"

PetalburgCity_Gym_Text_DadGoCollectBadges:
	.string "Dad: Now…\p"
	.string "{PLAYER}, if you want to become a\n"
	.string "strong Trainer, here's my advice.\p"
	.string "Head for Rustboro City beyond this\n"
	.string "town.\p"
	.string "There, you should challenge\n"
	.string "the Gym Leader, Dor.\p"
	.string "After her, go on to other Pokémon\n"
	.string "Gyms and defeat their Leaders.\p"
	.string "Collect Badges from them,\n"
	.string "understood?\p"
	.string "Of course, I'm a Gym Leader, too.\n"
	.string "We'll battle one day, {PLAYER}.\p"
	.string "But that's only after you become\n"
	.string "stronger.$"

PetalburgCity_Gym_Text_NormanGoToRustboro:
	.string "Dad: Hm? Aren't you going to the\n"
	.string "Pokémon Gym in Rustboro City?\p"
	.string "There's no challenge for me to\n"
	.string "battle a greenhorn Trainer.\p"
	.string "{PLAYER}, I want you to challenge me\n"
	.string "when you become a lot stronger.\p"
	.string "I'll battle you, {PLAYER}, when you\n"
	.string "can show me four Gym Badges, okay?$"

PetalburgCity_Gym_Text_NormanGoToDewford:
	.string "Chrizz: I see… So, you've beaten\n"
	.string "the Gym Leader in Rustboro City.\p"
	.string "But there are many more Trainers\n"
	.string "who are stronger than you, {PLAYER}.\p"
	.string "Across the sea in Dewford Town is a\n"
	.string "Gym Leader named Oisin.\p"
	.string "You should go challenge him.$"

PetalburgCity_Gym_Text_YouHaveGottenStronger:
	.string "Chrizz: Hm… {PLAYER}, you have gotten\n"
	.string "stronger.\p"
	.string "I can tell by the number of Badges\n"
	.string "that you've earned.$"

PetalburgCity_Gym_Text_NormanIntro:
	.string "Welcome to the Petalburg City Gym!\p"
	.string "I am Chrizz, the Fighting-type Gym\n"
	.string "Leader!\p"
	.string "Now, let's not waste our time in\n"
	.string "exchanging pleasantries.\p"
	.string "I shall send you back home!$"

PetalburgCity_Gym_Text_NormanDefeat:
	.string "Well, looks like still I'm in need of\n"
	.string "more training.$"

PetalburgCity_Gym_Text_NormanAfterDefeat:
	.string "Chrizz: You fought honorably, {PLAYER}!\p"
	.string "For that I give you this.$"

PetalburgCity_Gym_Text_ReceivedBalanceBadge:
	.string "{PLAYER} received the Fist Badge\n"
	.string "from Chrizz!$"

PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
	.string "Chrizz: With the Fist Badge, all\n"
	.string "Pokémon upto Lv 55 will obey your\l"
	.string "command, even the ones you get from\l"
	.string "trades.\p"
    .string "It is customary for a Gym Leader to\n"
    .string "give a TM to the victor.\p"
    .string "Here's a few.\n"
	.string "Put them to good use.$"

PetalburgCity_Gym_Text_ExplainFacade:
	.string "Chrizz: Take them and sharpen your\n"
	.string "edge.\l"
    .string "The real tests are still ahead.\p"
    .string "Push harder. Fight smarter.\n"
    .string "No room for hesitation.\p"
	.string "Chrizz: Oh!\p"
	.string "Here, a souvenir from Kalos.$"

PetalburgCity_Gym_Text_ExplainGalladite:
	.string "Chrizz: That…\n"
	.string "…is a Mega Stone.\p"
	.string "When held by Gallade, it'll allow you\n"
	.string "to Mega Evolve it in battle!\p"
	.string "Oh……\p"
	.string "You don't have a Key stone.\p"
	.string "Hm…\n"
	.string "I don't have a spare with me, {PLAYER}.\p"
	.string "I'm really sorry about that!\p"
	.string "You deserve the power of Mega\n"
	.string "Evolution!\p"
	.string "… … … … … …$"

PetalburgCity_Gym_Text_DadHappyAndSad:
	.string "Chrizz: That was an amazing battle,\n"
	.string "{PLAYER}.\p"
	.string "We should fight again, sometimes.$"

PetalburgCity_Gym_Text_GymGuideAdvice:
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "This Gym isn't something to laugh at.\p"
	.string "Chrizz, the Gym Leader has mastered\n"
	.string "the art of Mega Evolution!\p"
	.string "… … …\p"
	.string "What is it, you ask?\p"
	.string "It's a special sort of evolution that\n"
	.string "happens when there is a strong bond\l"
	.string "between the Trainer and the Pokémon.\p"
	.string "In order to Mega Evolve, one must have\n"
	.string "have a Mega Bracelet with a Key stone\l"
	.string "and a Pokémon capable of Mega Evolving,\l"
	.string "holding its Mega Stone.\p"
	.string "You'll be amazed by its beauty and power,\n"
	.string "{PLAYER}.$"

PetalburgCity_Gym_Text_GymGuidePostVictory:
	.string "{PLAYER}! Whoa! What a fantastic battle!\p"
	.string "A young, talented Trainer such as yourself\n"
	.string "deserves the power of Mega Evolution!\p"
	.string "What a stunning turn of events!$"

PetalburgCity_Gym_Text_RandallIntro:
	.string "The ability to attack before the\n"
	.string "opponent…\p"
	.string "Just that alone puts me at a great\n"
	.string "advantage, don't you agree?$"

PetalburgCity_Gym_Text_RandallDefeat:
	.string "That was a magnificent battle!$"

PetalburgCity_Gym_Text_RandallPostBattle:
	.string "Whomever you beat, and whomever you\n"
	.string "may lose to, you never shirk from\l"
	.string "training yourself and your Pokémon.\p"
	.string "That's what I think being a\n"
	.string "Gym Leader is all about.$"

PetalburgCity_Gym_Text_ParkerIntro:
	.string "This is the Confusion Room.\p"
	.string "Let me see how well bonded you are\n"
	.string "with your Pokémon!$"

PetalburgCity_Gym_Text_ParkerDefeat:
	.string "I couldn't confuse your team enough…\n"
	.string "You share a strong bond together.$"

PetalburgCity_Gym_Text_ParkerPostBattle:
	.string "After you beat our Leader, the\n"
	.string "training has become a lot tougher.$"

PetalburgCity_Gym_Text_GeorgeIntro:
	.string "Just when you think you're going to\n"
	.string "win, your opponent restores HP…\p"
	.string "Can you just imagine how awful that\n"
	.string "must feel?\p"
	.string "I'll show you exactly how awful it\n"
	.string "feels!$"

PetalburgCity_Gym_Text_GeorgeDefeat:
	.string "I couldn't restore HP enough…\n"
	.string "What Attack power…$"

PetalburgCity_Gym_Text_GeorgePostBattle:
	.string "I'm going to keep training at Gyms.\n"
	.string "One day, I'll become a Leader.$"

PetalburgCity_Gym_Text_BerkeIntro:
	.string "I'm not going to take it easy just\n"
	.string "because you're our Leader's kid.\p"
	.string "I'll show you how horrid it is for\n"
	.string "a Pokémon to take a critical hit!$"

PetalburgCity_Gym_Text_BerkeDefeat:
	.string "Your power…\n"
	.string "You're the real deal.$"

PetalburgCity_Gym_Text_BerkePostBattle:
	.string "Since Chrizz became the Leader,\n"
	.string "the Trainers of Petalburg City have\l"
	.string "become a lot tougher.$"

PetalburgCity_Gym_Text_MaryIntro:
	.string "Giggle…\n"
	.string "This is the Accuracy Room.\p"
	.string "It's pretty nasty when every attack\n"
	.string "lands without fail.$"

PetalburgCity_Gym_Text_MaryDefeat:
	.string "You were a cut above me…$"

PetalburgCity_Gym_Text_MaryPostBattle:
	.string "Do you know what we're trying to\n"
	.string "achieve as Trainers?\p"
	.string "We're striving to become soul mates\n"
	.string "with our Pokémon.$"

PetalburgCity_Gym_Text_AlexiaIntro:
	.string "The higher the Defense, the more\n"
	.string "reckless I can be in attack.$"

PetalburgCity_Gym_Text_AlexiaDefeat:
	.string "Our defenses weren't enough…$"

PetalburgCity_Gym_Text_AlexiaPostBattle:
	.string "I think you've taught me a valuable\n"
	.string "lesson here.\p"
	.string "I shall train further.$"

PetalburgCity_Gym_Text_JodyIntro:
	.string "Our Gym Leader told us to go all out\n"
	.string "and beat you.\p"
	.string "Even if you happen to be the\n"
	.string "Leader's kid!$"

PetalburgCity_Gym_Text_JodyDefeat:
	.string "But… I went all out!$"

PetalburgCity_Gym_Text_JodyPostBattle:
	.string "Sure, it's fine to make your Pokémon\n"
	.string "stronger.\p"
	.string "But what decides the winner?\p"
	.string "Why, it's the feelings Trainers have\n"
	.string "for their Pokémon.$"

PetalburgCity_Gym_Text_GymStatue:
	.string "Petalburg City Pokémon Gym\p"
	.string "Chrizz's certified Trainers:\n"
	.string "Wally$"

PetalburgCity_Gym_Text_GymStatueCertified:
	.string "Petalburg City Pokémon Gym\p"
	.string "Chrizz's certified Trainers:\n"
	.string "Wally and {PLAYER}$"

PetalburgCity_Gym_Text_NormanPreRematch:
	.string "Chrizz: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a Gym, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "…No, because we are parent and child,\n"
	.string "we owe it to each other to do the best\l"
	.string "we can. Isn't that right, {PLAYER}?$"

PetalburgCity_Gym_Text_NormanRematchDefeat:
	.string "Uh… Haha…\n"
	.string "Maybe that was going too hard…$"

PetalburgCity_Gym_Text_NormanPostRematch:
	.string "Chrizz: {PLAYER}…\n"
	.string "What is your dream?\p"
	.string "My dream…\n"
	.string "Hahaha…\l"
	.string "It has already come true, actually.$"

PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
	.string "Chrizz: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a Gym, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "Hm? Wait a second, {PLAYER}.\p"
	.string "Do you only have one Pokémon that is\n"
	.string "capable of battle?\p"
	.string "Sorry, but you'll have to come back\n"
	.string "with at least two Pokémon.$"

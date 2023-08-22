#define REGION_UNKNOWN	0
#define REGION_KANTO	1
#define REGION_HOENN	2
#define REGION_ORRE		3

//Battle Tower from Ruby/Sapphire
#define MAPSEC_BATTLE_TOWER					0xFC

#if CONFIG_DECAPITALIZE_MET_LOCATION_STRINGS
static const u8 sRegionString_Unknown[] = _("");
static const u8 sRegionString_Kanto[] = _(", Kanto");
static const u8 sRegionString_Hoenn[] = _("");
#else
static const u8 sRegionString_Unknown[] = _("");
static const u8 sRegionString_Kanto[] = _(", KANTO");
static const u8 sRegionString_Hoenn[] = _("");
#endif

const u8 *const gRegionStringPointers[] =
{
	[REGION_UNKNOWN] = sRegionString_Unknown,
	[REGION_KANTO]   = sRegionString_Kanto,
	[REGION_HOENN]   = sRegionString_Hoenn,
};

const u8 gText_TrainerMemo_Standard[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1} nature.\n\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 5}{DYNAMIC 1}\nMet at {LV_2}{DYNAMIC 3}.\n\n{DYNAMIC 6}\n{DYNAMIC 7}");
const u8 gText_TrainerMemo_Hatched[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1} nature.\n\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 5}{DYNAMIC 1}\nHatched at {LV_2}{DYNAMIC 3}.\n\n{DYNAMIC 6}\n{DYNAMIC 7}");
const u8 gText_TrainerMemo_Trade[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1} nature.\n\nObtained in {DYNAMIC 0}a trade{DYNAMIC 1}.\n\n\n{DYNAMIC 6}\n{DYNAMIC 7}");
const u8 gText_TrainerMemo_Fateful[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1} nature.\n\nObtained in a\n{DYNAMIC 0}fateful encounter{DYNAMIC 1} at {LV_2}{DYNAMIC 3}.\n{DYNAMIC 6}\n{DYNAMIC 7}");
const u8 gText_TrainerMemo_Untrusted[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1} nature.\n\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 5}{DYNAMIC 1}\nApparently met at {LV_2}{DYNAMIC 3}.\n\n{DYNAMIC 6}\n{DYNAMIC 7}");
const u8 gText_TrainerMemo_HatchedUntrusted[] = _("{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1} nature.\n\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 5}{DYNAMIC 1}\nApparently hatched at {LV_2}{DYNAMIC 3}.\n\n{DYNAMIC 6}\n{DYNAMIC 7}");
#if CONFIG_DECAPITALIZE_MET_LOCATION_STRINGS
const u8 gText_TrainerMemo_EggFromDayCare[] = _("An odd Pokémon Egg found\nby {DYNAMIC 0}the Day Care couple{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggTraded[] = _("An peculiar Pokémon Egg\nobtained in a trade.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFateful[] = _("A peculiar Pokémon Egg\nobtained at {DYNAMIC 0}a nice place{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFatefulTraded[] = _("A peculiar Pokémon Egg\nobtained in a trade.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFromHotSprings[] = _("A Pokémon Egg obtained\nat {DYNAMIC 0}the hot springs{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFromTraveler[] = _("An odd Pokémon Egg\nobtained from {DYNAMIC 0}a traveler{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFromKanto[] = _("An odd Pokémon Egg found\nby {DYNAMIC 0}the Day Care couple{DYNAMIC 1}\nin the {DYNAMIC 0}Kanto{DYNAMIC 1} region.\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFromBrigette[] = _("A Pokémon Egg obtained\nfrom {DYNAMIC 0}Brigette{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_BadEgg[] = _("A very mysterious\nPokémon Egg.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");

//Battle Tower from Ruby/Sapphire
const u8 gMapName_BattleTower[] = _("Battle Tower");
#else
const u8 gText_TrainerMemo_EggFromDayCare[] = _("An odd POKéMON EGG found\nby {DYNAMIC 0}the DAY CARE couple{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggTraded[] = _("An peculiar POKéMON EGG\nobtained in a trade.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFateful[] = _("A peculiar POKéMON EGG\nobtained at {DYNAMIC 0}a nice place{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFatefulTraded[] = _("A peculiar POKéMON EGG\nobtained in a trade.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFromHotSprings[] = _("A POKéMON EGG obtained\nat {DYNAMIC 0}the hot springs{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFromTraveler[] = _("An odd POKéMON EGG\nobtained from {DYNAMIC 0}a traveler{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFromKanto[] = _("An odd POKéMON EGG found\nby {DYNAMIC 0}the DAY CARE couple{DYNAMIC 1}\nin the {DYNAMIC 0}KANTO{DYNAMIC 1} region.\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_EggFromBrigette[] = _("A POKéMON EGG obtained\nfrom {DYNAMIC 0}BRIGETTE{DYNAMIC 1}.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");
const u8 gText_TrainerMemo_BadEgg[] = _("A very mysterious\nPOKéMON EGG.\n\n\n“The Egg Watch”\n{DYNAMIC 2}");

//Battle Tower from Ruby/Sapphire
const u8 gMapName_BattleTower[] = _("BATTLE TOWER");
#endif

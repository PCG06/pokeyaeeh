/*                 Hidden Power IVs
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31), // Fire
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31), // Ice
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31), // Grass
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30), // Ground 
        .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 30, 30), // Fighting
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 31), // Water
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 31), // Electric
        .iv = TRAINER_PARTY_IVS(31, 31, 30, 31, 30, 30), // Poison
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30), // Flying
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 31, 31), // Psychic
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 31, 30), // Bug
        .iv = TRAINER_PARTY_IVS(31, 30, 30, 30, 31, 30), // Rock
        .iv = TRAINER_PARTY_IVS(31, 31, 30, 31, 31, 30), // Ghost
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 31, 31), // Dragon
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 30), // Steel
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), // Dark 
*/

static const struct TrainerMon sParty_Sawyer1[] = {
    {
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 1,
    .species = SPECIES_LOTAD,
    },
    {
    .lvl = 1,
    .species = SPECIES_SEEDOT,
    },
    {
    .lvl = 1,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
        .species = SPECIES_MAREANIE,
        .ability = ABILITY_REGENERATOR,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 50, 100),
        .lvl = 1,
        .moves = {MOVE_VENOSHOCK, MOVE_CHILLING_WATER, MOVE_TOXIC, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD)
    },
    {
        .species = SPECIES_BAGON,
        .ability = ABILITY_SHEER_FORCE,
        .friendship = 200,
        .heldItem = ITEM_NONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 0, 0, 0),
        .lvl = 1,
        .moves = {MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_DRIFLOON,
        .ability = ABILITY_AFTERMATH,
        .friendship = 200,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 0, 0, 0),
        .lvl = 1,
        .moves = {MOVE_DESTINY_BOND, MOVE_PROTECT, MOVE_ACROBATICS, MOVE_PHANTOM_FORCE},
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY)
    },
    {
        .species = SPECIES_STUNKY,
        .ability = ABILITY_AFTERMATH,
        .friendship = 200,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_PLAY_ROUGH, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    }
};

static const struct TrainerMon sParty_Marcel[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Alberto[] = {
    {
        .species = SPECIES_LEDIAN,
        .heldItem = ITEM_CHARTI_BERRY,
        .ability = ABILITY_EARLY_BIRD,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_AIR_SLASH},
        .lvl = 1
    },
    {
        .species = SPECIES_SWANNA,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_KEEN_EYE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER},
        .lvl = 1
    },
    {
        .species = SPECIES_ROTOM_FAN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_AERILATE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_DISCHARGE, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Ed[] = {
    {
        .species = SPECIES_CORVIKNIGHT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_MIRROR_ARMOR,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_BULK_UP, MOVE_AGILITY, MOVE_ROOST, MOVE_POWER_TRIP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_TINKATON,
        .heldItem = ITEM_LEFTOVERS,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_MOLD_BREAKER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ENCORE, MOVE_PLAY_ROUGH, MOVE_ICE_HAMMER, MOVE_GIGATON_HAMMER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_HEATMOR,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_WHITE_SMOKE,
        .moves = {MOVE_FIRE_LASH, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_DURANT,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_HUSTLE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SHADOW_CLAW},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Declan[] = {
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
        .species = SPECIES_GHOLDENGO,
        .ability = ABILITY_GOOD_AS_GOLD,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 252, 0),
        .lvl = 1,
        .moves = {MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD)
    },
    {
        .species = SPECIES_YUNGOOS,
        .ability = ABILITY_STRONG_JAW,
        .friendship = 200,
        .heldItem = ITEM_CHOICE_BAND,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 110, 0, 100),
        .lvl = 1,
        .moves = {MOVE_HYPER_FANG, MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_ICE_FANG},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_GRAPPLOCT,
        .ability = ABILITY_TECHNICIAN,
        .friendship = 200,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .lvl = 1,
        .moves = {MOVE_CIRCLE_THROW, MOVE_WATERFALL, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH},
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY)
    },
    {
        .species = SPECIES_VELUZA,
        .ability = ABILITY_SHARPNESS,
        .friendship = 200,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(100, 252, 0, 156, 0, 0),
        .lvl = 1,
        .moves = {MOVE_FILLET_AWAY, MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_TATSUGIRI_DROOPY,
        .ability = ABILITY_STORM_DRAIN,
        .friendship = 200,
        .heldItem = ITEM_CHOICE_SPECS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 252, 0),
        .lvl = 1,
        .moves = {MOVE_DRACO_METEOR, MOVE_HYDRO_PUMP, MOVE_FLIP_TURN, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    }
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
        .species = SPECIES_CLODSIRE,
        .heldItem = ITEM_IAPAPA_BERRY,
        .ability = ABILITY_UNAWARE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TOXIC, MOVE_RECOVER, MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER}
    },
    {
        .species = SPECIES_BOMBIRDIER,
        .heldItem = ITEM_KINGS_ROCK,
        .ability = ABILITY_ROCKY_PAYLOAD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FLING, MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_JELLICENT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP, MOVE_HEX, MOVE_WATER_SPOUT}
    }
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
        .species = SPECIES_MUK,
        .heldItem = ITEM_KINGS_ROCK,
        .ability = ABILITY_STENCH,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHADOW_SNEAK, MOVE_ICE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MALAMAR,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_CONTRARY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SUPERPOWER, MOVE_PSYCHO_CUT, MOVE_THROAT_CHOP, MOVE_LUNGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_X_SCISSOR, MOVE_DRAGON_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
        .species = SPECIES_OVERQWIL,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BARB_BARRAGE, MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KROOKODILE,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_WICKED_BLOW, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_SHADOW_CLAW},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BASCULEGION,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_HEAD_SMASH, MOVE_WAVE_CRASH, MOVE_CRUNCH, MOVE_LAST_RESPECTS},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
        .species = SPECIES_CLAWITZER,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MEGA_LAUNCHER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_WATER_PULSE, MOVE_HIDDEN_POWER, MOVE_AURORA_BEAM, MOVE_FLIP_TURN},
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31)
    },
    {
        .species = SPECIES_MANDIBUZZ,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_BIG_PECKS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_SWAGGER, MOVE_FOUL_PLAY, MOVE_DEFOG, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
        .species = SPECIES_CLAWITZER,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_BIG_PECKS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_WATER_PULSE, MOVE_HIDDEN_POWER, MOVE_DARK_PULSE, MOVE_FLIP_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30)
    },
    {
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_NO_GUARD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_SUBMISSION, MOVE_HEAVY_SLAM, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
        .species = SPECIES_CORSOLA,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RECOVER, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_AQUA_RING}
    },
    {
        .species = SPECIES_BEEDRILL,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SNIPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CROSS_POISON, MOVE_DRILL_RUN, MOVE_X_SCISSOR, MOVE_FOCUS_ENERGY},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BISHARP,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_INNER_FOCUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
        .species = SPECIES_LUCARIO,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_INNER_FOCUS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_NASTY_PLOT, MOVE_VACUUM_WAVE, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON},
        .lvl = 1
    },
    {
        .species = SPECIES_MIENSHAO,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_INNER_FOCUS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_TRIPLE_AXEL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_ANNIHILAPE,
        .heldItem = ITEM_SALAC_BERRY,
        .ability = ABILITY_INNER_FOCUS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULK_UP, MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Matt[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Zander[] = {
    {
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_WACAN_BERRY,
        .ability = ABILITY_DRIZZLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .moves = {MOVE_HURRICANE, MOVE_U_TURN, MOVE_SCALD, MOVE_ROOST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BARRASKEWDA,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_SWIFT_SWIM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN, MOVE_WAVE_CRASH, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOXAPEX,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MERCILESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_TOXIC_SPIKES, MOVE_GUNK_SHOT, MOVE_BANEFUL_BUNKER, MOVE_LIQUIDATION},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_INTELEON,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SNIPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_FOCUS_ENERGY, MOVE_SNIPE_SHOT, MOVE_FLIP_TURN, MOVE_ICE_BEAM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MILOTIC,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_MARVEL_SCALE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 108, 0, 148, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RECOVER, MOVE_SCALD, MOVE_ATTRACT, MOVE_DRAINING_KISS}
    },
    {
        .species = SPECIES_DREDNAW,
        .heldItem = ITEM_DREDNITE,
        .ability = ABILITY_STRONG_JAW,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHELL_SMASH, MOVE_WATERFALL, MOVE_ROCK_SLIDE, MOVE_POISON_JAB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Archie[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leah[] = {
    {
    .lvl = 1,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Daisy[] = { // Route Boss
    {
        .species = SPECIES_LILLIGANT,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_OWN_TEMPO,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_ALLURING_VOICE}
    },
    {
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HARVEST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS}
    },
    {
        .species = SPECIES_LUDICOLO,
        .heldItem = ITEM_KEBIA_BERRY,
        .ability = ABILITY_SWIFT_SWIM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER}
    },
    {
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_EFFECT_SPORE,
        .lvl = 1,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_BULLET_SEED, MOVE_SPORE},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_ELECTRODE_HISUIAN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_AFTERMATH,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 244, 244, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH}
    },
    {
        .species = SPECIES_SCOVILLAIN,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_MOODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(244, 0, 0, 0, 20, 244),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Rose1[] = {
    {
        .species = SPECIES_AMOONGUSS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_EFFECT_SPORE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RAGE_POWDER, MOVE_PROTECT, MOVE_TOXIC, MOVE_SYNTHESIS}
    },
    {
        .species = SPECIES_ROSERADE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_BULLET_SEED, MOVE_POISON_JAB, MOVE_SLEEP_POWDER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Felix[] = {
    {
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 1,
    .species = SPECIES_CLAYDOL,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
        .species = SPECIES_DHELMISE,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_STEELWORKER,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ANCHOR_SHOT, MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_SHADOW_CLAW},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_CRADILY,
        .heldItem = ITEM_POWER_HERB,
        .ability = ABILITY_STORM_DRAIN,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_METEOR_BEAM, MOVE_ROCK_POLISH, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER},
        .lvl = 1
    },
    {
        .species = SPECIES_SAWSBUCK,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SERENE_GRACE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HEADBUTT, MOVE_ZEN_HEADBUTT, MOVE_JUMP_KICK, MOVE_HORN_LEECH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_LEAFEON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_LEAF_GUARD,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_LEAF_BLADE, MOVE_X_SCISSOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Dusty1[] = {
    {
        .species = SPECIES_DRACOZOLT,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_HUSTLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BOLT_BEAK, MOVE_OUTRAGE, MOVE_FIRE_FANG, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_CHOICE_BAND,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_ROCK_HEAD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BRAVE_BIRD, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CRADILY,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_STORM_DRAIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RECOVER, MOVE_STOCKPILE, MOVE_METEOR_BEAM, MOVE_GIGA_DRAIN}
    }
};

static const struct TrainerMon sParty_Chip[] = {
    {
        .species = SPECIES_VOLBEAT,
        .heldItem = ITEM_DAMP_ROCK,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 172, 0, 0, 84),
        .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
        .moves = {MOVE_RAIN_DANCE, MOVE_U_TURN, MOVE_ROOST, MOVE_THUNDER_WAVE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_SCIZORITE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 12, 0, 0, 248),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_POUNCE, MOVE_CRABHAMMER, MOVE_ROOST, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ARMALDO,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_AQUA_JET, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_DAMP_ROCK,
        .ability = ABILITY_DRIZZLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 68, 0, 0, 184),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .moves = {MOVE_HURRICANE, MOVE_SCALD, MOVE_ROOST, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RABSCA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SYNCHRONIZE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_REVIVAL_BLESSING, MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_Foster[] = { // Route Boss
    {
        .species = SPECIES_HIPPOPOTAS,
        .ability = ABILITY_SAND_STREAM,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ROCKY_HELMET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 100, 76, 0, 0, 80),
        .lvl = 1,
        .moves = {MOVE_PROTECT, MOVE_SHORE_UP, MOVE_ROCK_SLIDE, MOVE_SCORCHING_SANDS},
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL)
    },
    {
        .species = SPECIES_STEELIX,
        .ability = ABILITY_STURDY,
        .friendship = 200,
        .heldItem = ITEM_STEELIXITE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(56, 200, 100, 0, 152, 0),
        .lvl = 1,
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM},
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL)
    },
    {
        .species = SPECIES_SANDSLASH,
        .ability = ABILITY_SAND_RUSH,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_EXPERT_BELT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_EARTHQUAKE, MOVE_GUNK_SHOT, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_EXCADRILL,
        .ability = ABILITY_SAND_RUSH,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_PROBOPASS,
        .ability = ABILITY_SAND_FORCE,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 72, 0, 112, 72),
        .lvl = 1,
        .moves = {MOVE_FLASH_CANNON, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_SANDSTORM},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_GOLURK,
        .ability = ABILITY_NO_GUARD,
        .friendship = 200,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .lvl = 1,
        .moves = {MOVE_POLTERGEIST, MOVE_DYNAMIC_PUNCH, MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_ANALYTIC,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_TRI_ATTACK, MOVE_RECOVER}
    },
    {
        .species = SPECIES_MAGNEZONE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ANALYTIC,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TRI_ATTACK, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT}
    },
    {
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_POISON_HEAL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_SEED_BOMB, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BIBAREL,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SIMPLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_HYPER_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_WATCHOG,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ANALYTIC,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HYPER_FANG, MOVE_CRUNCH, MOVE_ZEN_HEADBUTT, MOVE_GUNK_SHOT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_SALAC_BERRY,
        .ability = ABILITY_GLUTTONY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BELLY_DRUM, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_SEED_BOMB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
        .species = SPECIES_CRABOMINABLE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
        .moves = {MOVE_ICE_HAMMER, MOVE_CRABHAMMER, MOVE_DRAIN_PUNCH, MOVE_BULK_UP}
    },
    {
        .species = SPECIES_ORANGURU,
        .heldItem = ITEM_AGUAV_BERRY,
        .ability = ABILITY_INNER_FOCUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
        .moves = {MOVE_LIGHT_SCREEN, MOVE_INSTRUCT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM}
    },
    {
        .species = SPECIES_PALOSSAND,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_COMPACTION,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
        .moves = {MOVE_SHORE_UP, MOVE_CURSE, MOVE_GIGA_DRAIN, MOVE_PROTECT}
    },
    {
        .species = SPECIES_SALAZZLE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_CORROSION,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_NASTY_PLOT, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_DRAGON_PULSE}
    },
    {
        .species = SPECIES_KOMMO_O,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_OVERCOAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BELLY_DRUM, MOVE_DRAIN_PUNCH, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SHIINOTIC,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_ILLUMINATE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
        .moves = {MOVE_SPORE, MOVE_DREAM_EATER, MOVE_ENERGY_BALL, MOVE_STRENGTH_SAP},
        .lvl = 1,
    }
};

static const struct TrainerMon sParty_Lola1[] = {
    {
        .species = SPECIES_CORPHISH,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CRABHAMMER, MOVE_REVERSAL, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_WUGTRIO,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_GOOEY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 244, 0, 252, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRIPLE_DIVE, MOVE_THROAT_CHOP, MOVE_STOMPING_TANTRUM, MOVE_AQUA_JET},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_OCTILLERY,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_BOMBASTIC,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(244, 0, 0, 0, 248, 12),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_ENERGY_BALL, MOVE_FLASH_CANNON, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB}
    }
};

static const struct TrainerMon sParty_Austina[] = {
    {
        .species = SPECIES_QWILFISH,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BARB_BARRAGE, MOVE_CRUNCH, MOVE_DESTINY_BOND, MOVE_TOXIC},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TORRENT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SHELL_SMASH, MOVE_FLASH_CANNON, MOVE_BUBBLE_BEAM, MOVE_DARK_PULSE}
    },
    {
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_CLEAR_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_SLUDGE_WAVE, MOVE_DAZZLING_GLEAM, MOVE_FLIP_TURN, MOVE_ACID_ARMOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Gwen[] = {
    {
        .species = SPECIES_WHISCASH,
        .heldItem = ITEM_RINDO_BERRY,
        .ability = ABILITY_ANTICIPATION,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LUMINEON,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_STORM_DRAIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_TAILWIND, MOVE_ICE_BEAM, MOVE_AIR_SLASH}
    },
    {
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_LEFTOVERS,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_VOLT_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM, MOVE_VOLT_SWITCH}
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ricky1[] = {
    {
        .species = SPECIES_MARSHTOMP,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_DAMP,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_WATERFALL, MOVE_ICE_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BARBARACLE,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_TOUGH_CLAWS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 248, 0, 0, 0, 12),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_POISON_JAB, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ARAQUANID,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_WATER_BUBBLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LEECH_LIFE, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_TRAILBLAZE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Simon[] = {
    {
        .species = SPECIES_SEISMITOAD,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 64, 0, 232, 208, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_ICY_WIND, MOVE_DRAIN_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PRIMARINA,
        .heldItem = ITEM_THROAT_SPRAY,
        .ability = ABILITY_LIQUID_VOICE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_FLIP_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_QUAGSIRE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RECOVER, MOVE_STOCKPILE, MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_Charlie[] = {
    {
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Randall[] = {
    {
        .species = SPECIES_CONKELDURR,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_FLAMIGO,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SCRAPPY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_LUNGE, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SIRFETCHD,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_RAMPAGE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_METEOR_ASSAULT, MOVE_FIRST_IMPRESSION, MOVE_BRAVE_BIRD, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LILLIGANT_HISUIAN,
        .heldItem = ITEM_WIDE_LENS,
        .ability = ABILITY_HUSTLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRIPLE_AXEL, MOVE_AXE_KICK, MOVE_BULLET_SEED, MOVE_VICTORY_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Parker[] = {
    {
        .species = SPECIES_PAWMOT,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_MACH_PUNCH, MOVE_DRAIN_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TAUROS_PALDEAN_AQUA_BREED,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_RAGING_BULL, MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_INFERNAPE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_RAGING_FURY},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_George[] = {
    {
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_UNBURDEN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BLAZE_KICK, MOVE_SWORDS_DANCE, MOVE_HIGH_JUMP_KICK, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_THROH,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_STORM_THROW, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_POISON_JAB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CRABOMINABLE,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAIN_PUNCH, MOVE_IRON_HEAD, MOVE_ICE_HAMMER, MOVE_BRUTAL_SWING},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ELECTIVIRE,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOTOR_DRIVE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_THUNDER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_DARKEST_LARIAT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Berke[] = {
    {
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_RAPID_SPIN, MOVE_FORESIGHT, MOVE_CLOSE_COMBAT, MOVE_TOXIC},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    },
    {
        .species = SPECIES_CHESNAUGHT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_BULLETPROOF,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(244, 0, 252, 12, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_SPIKES, MOVE_WOOD_HAMMER, MOVE_DRAIN_PUNCH, MOVE_SYNTHESIS},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    },
    {
        .species = SPECIES_HAWLUCHA,
        .heldItem = ITEM_FLYING_GEM,
        .ability = ABILITY_UNBURDEN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(96, 252, 0, 124, 0, 36),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_HIGH_JUMP_KICK, MOVE_ROOST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    }
};

static const struct TrainerMon sParty_Braxton[] = {
    {
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SAND_STREAM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_DANCE, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_MAGNEZONE,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_ANALYTIC,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_HIDDEN_POWER},
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_WEAVILE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_PRESSURE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_TRIPLE_AXEL, MOVE_NIGHT_SLASH, MOVE_ICE_SHARD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_MULTISCALE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_DANCE, MOVE_DUAL_WINGBEAT, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Vincent[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leroy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Wilton1[] = {
    {
        .species = SPECIES_CORVIKNIGHT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_MIRROR_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_BULK_UP, MOVE_ROOST, MOVE_AGILITY, MOVE_POWER_TRIP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_FERROTHORN,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_IRON_BARBS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
        .moves = {MOVE_IRON_DEFENSE, MOVE_LEECH_SEED, MOVE_BODY_PRESS, MOVE_GYRO_BALL}
    },
    {
        .species = SPECIES_GARCHOMP,
        .heldItem = ITEM_YACHE_BERRY,
        .ability = ABILITY_ROUGH_SKIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FIRE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SLOWKING_GALARIAN,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PROTECT, MOVE_PSYCHIC, MOVE_SLACK_OFF, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_DAMP_ROCK,
        .ability = ABILITY_DRIZZLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .moves = {MOVE_HURRICANE, MOVE_ROOST, MOVE_SCALD, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Edgar[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CACTURNE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Albert[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MUK,
    }
};

static const struct TrainerMon sParty_Samuel[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Vito[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DODRIO,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRODE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Owen[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Mary[] = {
    {
        .species = SPECIES_BLAZIKEN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SPEED_BOOST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_PROTECT, MOVE_BLAZE_KICK, MOVE_HIGH_JUMP_KICK, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOXICROAK,
        .heldItem = ITEM_PAYAPA_BERRY,
        .ability = ABILITY_DRY_SKIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT}
    },
    {
        .species = SPECIES_PASSIMIAN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_DEFIANT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BULK_UP, MOVE_TRAILBLAZE, MOVE_DRAIN_PUNCH, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SCRAFTY,
        .heldItem = ITEM_ROSELI_BERRY,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_IRON_HEAD, MOVE_DRAIN_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Alexia[] = {
    {
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_DARKEST_LARIAT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MIENSHAO,
        .heldItem = ITEM_LIECHI_BERRY,
        .ability = ABILITY_RECKLESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ENDURE, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_ACROBATICS},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GRAPPLOCT,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BRUTAL_SWING, MOVE_POWER_UP_PUNCH, MOVE_DRAIN_PUNCH, MOVE_WATERFALL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Jody[] = {
    {
        .species = SPECIES_BEWEAR,
        .heldItem = ITEM_CHOICE_BAND,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_FLUFFY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DOUBLE_EDGE, MOVE_HIGH_HORSEPOWER, MOVE_ICE_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FACADE, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DECIDUEYE_HISUIAN,
        .heldItem = ITEM_COBA_BERRY,
        .ability = ABILITY_SCRAPPY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRIPLE_ARROWS, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE, MOVE_TRAILBLAZE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Wendy[] = { // Route Boss
    {
        .species = SPECIES_FERROTHORN,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_IRON_BARBS,
        .ev = TRAINER_PARTY_EVS(248, 8, 156, 0, 0, 96),
        .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
        .moves = {MOVE_STEALTH_ROCK, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_SPIKES},
        .lvl = 1
    },
    {
        .species = SPECIES_GARDEVOIR,
        .heldItem = ITEM_GARDEVOIRITE,
        .ability = ABILITY_SYNCHRONIZE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_ENCORE},
        .lvl = 1
    },
    {
        .species = SPECIES_HAWLUCHA,
        .heldItem = ITEM_FLYING_GEM,
        .ability = ABILITY_UNBURDEN,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_ACROBATICS, MOVE_DRAIN_PUNCH, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_CHOICE_SCARF,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_SHEER_FORCE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_SLUDGE_WAVE, MOVE_THUNDERBOLT},
        .lvl = 1
    },
    {
        .species = SPECIES_HYDREIGON,
        .heldItem = ITEM_EJECT_PACK,
        .ability = ABILITY_LEVITATE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FLAMETHROWER},
        .lvl = 1
    },
    {
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SCALD, MOVE_DISCHARGE, MOVE_VOLT_SWITCH, MOVE_ICE_BEAM},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Keira[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Brooke1[] = {
    {
        .species = SPECIES_SERPERIOR,
        .heldItem = ITEM_MAGO_BERRY,
        .ability = ABILITY_CONTRARY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_LEAF_STORM, MOVE_DRAGON_PULSE, MOVE_GLARE, MOVE_GIGA_DRAIN}
    },
    {
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_OCCA_BERRY,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_BULLET_PUNCH, MOVE_DUAL_WINGBEAT, MOVE_BUG_BITE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOXAPEX,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 8, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_TOXIC, MOVE_RECOVER, MOVE_SCALD, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GLIMMORA,
        .heldItem = ITEM_POWER_HERB,
        .ability = ABILITY_TOXIC_DEBRIS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_METEOR_BEAM, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_SLUDGE_WAVE}
    },
    {
        .species = SPECIES_RILLABOOM,
        .heldItem = ITEM_GRASSY_SEED,
        .ability = ABILITY_GRASSY_SURGE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_GRASSY_GLIDE, MOVE_DRAIN_PUNCH, MOVE_ACROBATICS},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SNIPER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SNIPE_SHOT, MOVE_FLASH_CANNON, MOVE_DRAGON_DANCE, MOVE_DRAGON_PULSE},
        .lvl = 1
    },
    {
        .species = SPECIES_ROSERADE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 2, 30, 31, 30, 31),
        .moves = {MOVE_MEGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_EXTRASENSORY, MOVE_SHADOW_BALL},
        .lvl = 1
    },
    {
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_WISE_GLASSES,
        .ability = ABILITY_LEVITATE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_PSYCHIC},
        .lvl = 1
    },
    {
        .species = SPECIES_STARMIE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_NATURAL_CURE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_SCALD},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Hope[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Shannon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_Michelle[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Caroline[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Julie[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NINETALES,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Patricia[] = {
    {
    .lvl = 1,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Kindra[] = {
    {
        .species = SPECIES_CERULEDGE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHARPNESS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_BITTER_BLADE, MOVE_CLOSE_COMBAT, MOVE_SHADOW_CLAW},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_MAROWAK_ALOLAN,
        .heldItem = ITEM_THICK_CLUB,
        .ability = ABILITY_ROCK_HEAD,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_BONEMERANG, MOVE_THUNDER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_CHANDELURE,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_FLAME_BODY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_PSYCHIC},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Tammy[] = {
    {
    .lvl = 1,
    .species = SPECIES_DUSKULL,
    },
    {
    .lvl = 1,
    .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Valerie1[] = {
    {
    .lvl = 1,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Tasha[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Cindy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 100, 0, 0, 0, 0),
    .lvl = 1,
    .ability = ABILITY_POISON_POINT,
    .species = SPECIES_NIDORAN_F,
    .moves = {MOVE_POISON_FANG, MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 52, 100, 0),
    .lvl = 1,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_SHIELD_DUST,
    .species = SPECIES_CUTIEFLY,
    .moves = {MOVE_SILVER_WIND, MOVE_FAIRY_WIND, MOVE_GUST, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 100, 52),
    .lvl = 1,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_MOTOR_DRIVE,
    .species = SPECIES_EMOLGA,
    .moves = {MOVE_CHARGE_BEAM, MOVE_AIR_SLASH, MOVE_NUZZLE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .friendship = 0,
    .ability = ABILITY_KEEN_EYE,
    .species = SPECIES_GLAMEOW,
    .moves = {MOVE_FRUSTRATION, MOVE_AERIAL_ACE, MOVE_HONE_CLAWS, MOVE_HYPNOSIS}
    }
};

static const struct TrainerMon sParty_Daphne[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Brianna[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Naomi[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Melissa[] = {
    {
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Sheila[] = {
    {
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Shirley[] = {
    {
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jessica1[] = {
    {
    .lvl = 1,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .lvl = 1,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Connie[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Bridget[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Olivia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLAMPERL,
    .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CORPHISH,
    .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    .moves = {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Winston1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 200, 0, 100, 0, 0),
    .lvl = 1,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = ABILITY_UNNERVE,
    .species = SPECIES_LITLEO,
    .moves = {MOVE_FIRE_FANG, MOVE_HEADBUTT, MOVE_BULLDOZE, MOVE_TRAILBLAZE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 0, 0, 100, 100, 0),
    .lvl = 1,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_RATTLED,
    .species = SPECIES_GIMMIGHOUL_CHEST,
    .moves = {MOVE_PROTECT, MOVE_ENDURE, MOVE_HEX, MOVE_CONFUSE_RAY},
    .nickname = COMPOUND_STRING("Golden Boi")
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 100, 100, 0, 0, 0),
    .lvl = 1,
    .ability = ABILITY_TOUGH_CLAWS,
    .species = SPECIES_MEOWTH_GALARIAN,
    .moves = {MOVE_TAKE_DOWN, MOVE_METAL_CLAW, MOVE_DIG, MOVE_U_TURN}
    },
};

static const struct TrainerMon sParty_Mollie[] = {
    {
    .lvl = 1,
    .species = SPECIES_WHISCASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Garret[] = {
    {
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Steve1[] = {
    {
    .lvl = 1,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Thalia1[] = {
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 1,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Mark[] = {
    {
    .lvl = 1,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
        .species = SPECIES_MUDSDALE,
        .heldItem = ITEM_CHESTO_BERRY,
        .ability = ABILITY_STAMINA,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_PRESS, MOVE_TOXIC, MOVE_REST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SKELEDIRGE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(244, 0, 0, 0, 12, 248),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TORCH_SONG, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_SLACK_OFF}
    },
    {
        .species = SPECIES_ARCANINE_HISUIAN,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_ROCK_HEAD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_WILD_CHARGE, MOVE_HEAD_SMASH, MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Steve2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LAIRON,
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AGGRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Luis[] = {
    {
        .species = SPECIES_QUAGSIRE,
        .ability = ABILITY_UNAWARE,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 126, 0, 0, 126),
        .lvl = 1,
        .moves = {MOVE_SCALD, MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_GOLISOPOD,
        .ability = ABILITY_EMERGENCY_EXIT,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_EJECT_PACK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 4, 0),
        .lvl = 1,
        .moves = {MOVE_LIQUIDATION, MOVE_LUNGE, MOVE_POUNCE, MOVE_FIRST_IMPRESSION},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_SLOWKING,
        .ability = ABILITY_OWN_TEMPO,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_SCALD, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_LANTURN,
        .ability = ABILITY_VOLT_ABSORB,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_DAZZLING_GLEAM, MOVE_SCALD, MOVE_THUNDER_WAVE},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    }
};

static const struct TrainerMon sParty_Dominik[] = {
    {
        .species = SPECIES_POLIWRATH,
        .ability = ABILITY_WATER_ABSORB,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .lvl = 1,
        .moves = {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_DRAIN_PUNCH},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_ALOMOMOLA,
        .ability = ABILITY_REGENERATOR,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 126, 0, 0, 126),
        .lvl = 1,
        .moves = {MOVE_FLIP_TURN, MOVE_AQUA_RING, MOVE_PAIN_SPLIT, MOVE_PLAY_ROUGH},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_ARAQUANID,
        .ability = ABILITY_WATER_BUBBLE,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_CHOICE_BAND,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .lvl = 1,
        .moves = {MOVE_LIQUIDATION, MOVE_U_TURN, MOVE_LEECH_LIFE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_BUBBLE_BEAM, MOVE_DRAGON_PULSE}
    },
    {
        .species = SPECIES_GRENINJA,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_PROTEAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EXTRASENSORY, MOVE_ICE_BEAM, MOVE_BUBBLE_BEAM, MOVE_SLUDGE_WAVE}
    },
    {
        .species = SPECIES_CINCCINO,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_TAIL_SLAP, MOVE_TRIPLE_AXEL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};


static const struct TrainerMon sParty_Darrin[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Tony1[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Jerome[] = { // Route Boss
    {
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_INTIMIDATE,
        .friendship = 200,
        .heldItem = ITEM_GYARADOSITE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .lvl = 1,
        .moves = {MOVE_AQUA_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_POISON_FANG},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .friendship = 200,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HURRICANE, MOVE_TAILWIND, MOVE_PROTECT, MOVE_SCALD},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_GLACEON,
        .ability = ABILITY_SNOW_CLOAK,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_BLIZZARD, MOVE_PROTECT, MOVE_FROST_GLARE, MOVE_SUBSTITUTE},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_ROTOM_WASH,
        .ability = ABILITY_LEVITATE,
        .friendship = 200,
        .heldItem = ITEM_ROCKY_HELMET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PAIN_SPLIT},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_GASTRODON_WEST_SEA,
        .ability = ABILITY_STORM_DRAIN,
        .friendship = 200,
        .heldItem = ITEM_NONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_MUDDY_WATER},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_DREDNAW,
        .ability = ABILITY_SWIFT_SWIM,
        .friendship = 200,
        .heldItem = ITEM_WHITE_HERB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_SHELL_SMASH, MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    }
};

static const struct TrainerMon sParty_Matthew[] = {
    {
        .species = SPECIES_SIMIPOUR,
        .ability = ABILITY_OCEANATE,
        .friendship = 200,
        .heldItem = ITEM_ROCKY_HELMET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYPER_VOICE, MOVE_SCALD, MOVE_TACKLE, MOVE_ICE_BEAM},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_BARRASKEWDA,
        .ability = ABILITY_PROPELLER_TAIL,
        .friendship = 200,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_WAVE_CRASH, MOVE_SWORDS_DANCE, MOVE_AQUA_JET, MOVE_ICE_SPINNER},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_DELIBIRD,
        .ability = ABILITY_REFRIGERATE,
        .friendship = 200,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_SEED_BOMB},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    }
};

static const struct TrainerMon sParty_David[] = {
    {
        .species = SPECIES_QUAQUAVAL,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_TRIPLE_AXEL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TINKATON,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_GIGATON_HAMMER, MOVE_ICE_HAMMER, MOVE_ROCK_SLIDE, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_HYDREIGON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DARK_PULSE, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Nolen[] = {
    {
    .species = SPECIES_JELLICENT,
    .ability = ABILITY_CURSED_BODY,
    .gender = TRAINER_MON_FEMALE,
    .heldItem = ITEM_ASSAULT_VEST,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 126, 0, 126, 0),
    .lvl = 1,
    .moves = {MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_CALM_MIND},
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .nickname = COMPOUND_STRING("Jelly")
    }
};

static const struct TrainerMon sParty_Stan[] = {
    {
    .lvl = 1,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Barry[] = {
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dean[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Rodney[] = {
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Richard[] = {
    {
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Herman[] = {
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Franklin[] = {
    {
    .lvl = 1,
    .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Kevin[] = {
    {
    .lvl = 1,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Jack[] = {
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Takao[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 252, 0, 156, 0, 0),
    .lvl = 1,
    .species = SPECIES_GROOKEY,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_GRASSY_SURGE,
    .moves = {MOVE_RAZOR_LEAF, MOVE_KNOCK_OFF, MOVE_GROWL, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    .lvl = 1,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_WIND_RIDER,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_TRAILBLAZE, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(100, 252, 70, 0, 0, 86),
    .lvl = 1,
    .species = SPECIES_BONSLY,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_TRAILBLAZE, MOVE_FAKE_TEARS, MOVE_ROCK_SLIDE, MOVE_BLOCK}
    },
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Koichi[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_BLACK_BELT
    }
};

static const struct TrainerMon sParty_Yuji[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Daisuke[] = { // Route Boss
    {
        .species = SPECIES_CONKELDURR,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_BULK_UP, MOVE_MACH_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_FALINKS,
        .heldItem = ITEM_FIGHTING_GEM,
        .ability = ABILITY_DEFIANT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_NO_RETREAT, MOVE_CLOSE_COMBAT, MOVE_LUNGE, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SIRFETCHD,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SCRAPPY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Kirk[] = {
    {
        .species = SPECIES_DARMANITAN,
        .ability = ABILITY_GORILLA_TACTICS,
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_NONE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    },
    {
        .species = SPECIES_SIMISEAR,
        .ability = ABILITY_SCORCHATE,
        .heldItem = ITEM_FIRE_GEM,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_HYPER_BEAM, MOVE_SOLAR_BEAM, MOVE_PROTECT, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    },
    {
        .species = SPECIES_ORICORIO_BAILE,
        .ability = ABILITY_DANCER,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_REVELATION_DANCE, MOVE_HEAT_WAVE, MOVE_QUIVER_DANCE, MOVE_FEATHER_DANCE},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    }
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Shawn[] = {
    {
        .species = SPECIES_PYROAR,
        .ability = ABILITY_RIVALRY,
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, MOVE_OVERHEAT, MOVE_HYPER_VOICE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    },
    {
        .species = SPECIES_CARKOL,
        .ability = ABILITY_STEAM_ENGINE,
        .heldItem = ITEM_CUSTAP_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 156, 0, 100, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_HEAT_CRASH, MOVE_ROCK_BLAST, MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    },
    {
        .species = SPECIES_CENTISKORCH,
        .ability = ABILITY_WHITE_SMOKE,
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_X_SCISSOR, MOVE_POWER_WHIP},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    }
};

static const struct TrainerMon sParty_Fernando1[] = {
    {
        .species = SPECIES_KILOWATTREL,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_COMPETITIVE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_ROOST, MOVE_VOLT_SWITCH},
        .lvl = 1
    },
    {
        .species = SPECIES_ELECTIVIRE,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .ability = ABILITY_IRON_FIST,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_POWER_UP_PUNCH},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_VOLT_ABSORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SCALD, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
        .species = SPECIES_PAWMOT,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_MACH_PUNCH, MOVE_DRAIN_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_VOLT_SWITCH, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_AQUA_RING}
    },
    {
        .species = SPECIES_BELLIBOLT,
        .heldItem = ITEM_SHUCA_BERRY,
        .ability = ABILITY_ELECTROMORPHOSIS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_MUDDY_WATER, MOVE_SLACK_OFF, MOVE_THUNDER_WAVE}
    },
    {
        .species = SPECIES_VIKAVOLT,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AGILITY, MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_BUG_BUZZ}
    }
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Cole[] = {
    {
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_NORMAL_GEM,
        .ability = ABILITY_BIG_PECKS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_STEEL_WING, MOVE_BRAVE_BIRD, MOVE_QUICK_ATTACK, MOVE_DOUBLE_EDGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PROTECT, MOVE_FACADE, MOVE_CRUNCH, MOVE_ZEN_HEADBUTT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TRUANT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BODY_SLAM, MOVE_DRAIN_PUNCH, MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LINOONE,
        .heldItem = ITEM_SALAC_BERRY,
        .ability = ABILITY_GLUTTONY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BELLY_DRUM, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_SEED_BOMB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Jeff[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Axle[] = {
    {
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FURY_SWIPES, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_FAKE_OUT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_URSARING,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_STARAPTOR,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_RECKLESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOUCANNON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SKILL_LINK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FURY_ATTACK, MOVE_BULLET_SEED, MOVE_SWORDS_DANCE, MOVE_ROCK_BLAST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Jace[] = {
    {
        .species = SPECIES_NOCTOWL,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TINTED_LENS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EXTRASENSORY, MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_AIR_SLASH}
    },
    {
        .species = SPECIES_TAUROS,
        .heldItem = ITEM_NORMAL_GEM,
        .ability = ABILITY_ANGER_POINT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_IRON_HEAD, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_RAGING_BULL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BIBAREL,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_SIMPLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_FEAROW,
        .heldItem = ITEM_SCOPE_LENS,
        .ability = ABILITY_SNIPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_DRILL_RUN, MOVE_THROAT_CHOP, MOVE_DRILL_PECK, MOVE_FOCUS_ENERGY},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Keegan[] = {
    {
        .species = SPECIES_KLEFKI,
        .heldItem = ITEM_MIRROR_HERB,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_THUNDER_WAVE, MOVE_SWAGGER, MOVE_PLAY_ROUGH, MOVE_FOUL_PLAY},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_EXCADRILL,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MOLD_BREAKER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TINKATON,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_MOLD_BREAKER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_GIGATON_HAMMER, MOVE_ROCK_SLIDE, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGCARGO,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Drew[] = {
    {
        .species = SPECIES_ZEBSTRIKA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SAP_SIPPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_WILD_CHARGE, MOVE_HIGH_JUMP_KICK, MOVE_FLAME_CHARGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RAPIDASH,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_FLASH_FIRE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_WILD_CHARGE, MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MUDSDALE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_STAMINA,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Beau[] = {
    {
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PROTECT, MOVE_HYPER_FANG, MOVE_CRUNCH, MOVE_ZEN_HEADBUTT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MAUSHOLD_FAMILY_OF_FOUR,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_POPULATION_BOMB, MOVE_BULLET_SEED, MOVE_ENCORE, MOVE_TIDY_UP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CINCCINO,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ROCK_BLAST, MOVE_TRIPLE_AXEL, MOVE_TIDY_UP, MOVE_TAIL_SLAP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Larry[] = {
    {
        .species = SPECIES_MAMOSWINE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_THICK_FAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRAILBLAZE, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ELECTIVIRE,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_THUNDER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_YANMEGA,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TINTED_LENS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_BUG_BUZZ, MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MAGMORTAR,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MEGA_LAUNCHER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(8, 0, 0, 252, 248, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SEARING_SHOT, MOVE_SCORCHING_SANDS, MOVE_THUNDERBOLT, MOVE_AURA_SPHERE}
    }
};

static const struct TrainerMon sParty_Shane[] = {
    {
    .lvl = 1,
    .species = SPECIES_SANDSHREW,
    },
    {
    .lvl = 1,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Justin[] = {
    {
    .lvl = 1,
    .species = SPECIES_KECLEON,
    }
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
        .species = SPECIES_DARMANITAN_GALARIAN,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_GORILLA_TACTICS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_GLACIAL_SLAM, MOVE_FLARE_BLITZ, MOVE_ICE_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_VITAL_SPIRIT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_ICE_PUNCH, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_AMBIPOM,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TAIL_SLAP, MOVE_TRIPLE_AXEL, MOVE_SHADOW_CLAW, MOVE_FAKE_OUT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SIMISEAR,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SCORCHATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT, MOVE_WILL_O_WISP}
    }
};

static const struct TrainerMon sParty_Autumn[] = {
    {
        .species = SPECIES_TALONFLAME,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_GALE_WINGS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_BLAZE_KICK, MOVE_STEEL_WING, MOVE_FEATHER_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TAUROS_PALDEAN_BLAZE_BREED,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_RAGING_BULL, MOVE_CLOSE_COMBAT, MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SALAZZLE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_CORROSION,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_DRAGON_PULSE}
    },
    {
        .species = SPECIES_FLAREON,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_QUICK_ATTACK, MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_DOUBLE_EDGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Travis[] = {
    {
        .species = SPECIES_DIGGERSBY,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_HUGE_POWER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_BODY_SLAM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LOPUNNY,
        .heldItem = ITEM_LIFE_ORB,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_CUTE_CHARM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_TRIPLE_AXEL, MOVE_FAKE_OUT, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CINDERACE,
        .heldItem = ITEM_EXPERT_BELT,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_LIBERO,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Brent[] = {
    {
        .species = SPECIES_MASQUERAIN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_STICKY_WEB, MOVE_BUG_BUZZ, MOVE_HYDRO_PUMP},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_LOKIX,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TINTED_LENS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_AXE_KICK, MOVE_FIRST_IMPRESSION, MOVE_LUNGE, MOVE_LOW_KICK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ARMALDO,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_X_SCISSOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RIBOMBEE,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SHIELD_DUST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 30, 30),
        .moves = {MOVE_POLLEN_PUFF, MOVE_MOONBLAST, MOVE_DRAINING_KISS, MOVE_HIDDEN_POWER}
    }
};

static const struct TrainerMon sParty_Donald[] = { // Route Boss
    {
        .species = SPECIES_FORRETRESS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .moves = {MOVE_STICKY_WEB, MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN, MOVE_VOLT_SWITCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ARIADOS,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SNIPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FOCUS_ENERGY, MOVE_CROSS_POISON, MOVE_X_SCISSOR, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ARMALDO,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_BATTLE_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_ROCK_BLAST, MOVE_RAPID_SPIN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SPIDOPS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_STAKEOUT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LUNGE, MOVE_U_TURN, MOVE_BRICK_BREAK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PINSIR,
        .heldItem = ITEM_PINSIRITE,
        .ability = ABILITY_HYPER_CUTTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_EXTREME_SPEED, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_YANMEGA,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TINTED_LENS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_ANCIENT_POWER, MOVE_GIGA_DRAIN}
    }
};

static const struct TrainerMon sParty_Taylor[] = {
    {
        .species = SPECIES_ARIADOS,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SNIPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_STICKY_WEB, MOVE_SPITE, MOVE_TOXIC_SPIKES, MOVE_SHADOW_SNEAK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SHEDINJA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_WONDER_GUARD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK, MOVE_SUCKER_PUNCH, MOVE_X_SCISSOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PARASECT,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(40, 252, 20, 0, 0, 196),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_BULLET_SEED, MOVE_CROSS_POISON},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CRUSTLE,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 252, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_BLAST, MOVE_ROCK_WRECKER, MOVE_X_SCISSOR, MOVE_BODY_PRESS},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};


static const struct TrainerMon sParty_Jeffrey1[] = {
    {
        .species = SPECIES_MOTHIM,
        .heldItem = ITEM_FOCUS_SASH,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_TINTED_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN},
        .lvl = 1
    },
    {
        .species = SPECIES_SCYTHER,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_TECHNICIAN,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_DUAL_WINGBEAT, MOVE_BUG_BITE, MOVE_CLOSE_COMBAT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_MOXIE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ARM_THRUST, MOVE_PIN_MISSILE, MOVE_ROCK_BLAST, MOVE_BULLET_SEED},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_ARAQUANID,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_WATER_BUBBLE,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_TRAILBLAZE, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Derek[] = {
    {
        .species = SPECIES_KRICKETUNE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_BUG_BITE, MOVE_AERIAL_ACE, MOVE_TRAILBLAZE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CRUSTLE,
        .heldItem = ITEM_WHITE_HERB,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_BLAST, MOVE_X_SCISSOR, MOVE_SHADOW_CLAW},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RABSCA,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_SYNCHRONIZE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EXTRASENSORY, MOVE_SHADOW_BALL, MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM}
    },
    {
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ARM_THRUST, MOVE_PIN_MISSILE, MOVE_ROCK_BLAST, MOVE_BULLET_SEED},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
        .species = SPECIES_ESPEON,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MAGIC_BOUNCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DRAINING_KISS, MOVE_POWER_GEM, MOVE_SIGNAL_BEAM, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_PURE_POWER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FAKE_OUT, MOVE_BULLET_PUNCH, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BRAVIARY_HISUIAN,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_TINTED_LENS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, MOVE_HEAT_WAVE, MOVE_PSYCHIC}
    }
};

static const struct TrainerMon sParty_Preston[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Virgil[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Blake[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_William[] = {
    {
    .lvl = 1,
    .species = SPECIES_RALTS,
    },
    {
    .lvl = 1,
    .species = SPECIES_RALTS,
    },
    {
    .lvl = 1,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Joshua[] = {
    {
    .lvl = 1,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron1[] = {
    {
        .species = SPECIES_SLOWBRO_GALARIAN,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_OWN_TEMPO,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SLUDGE_WAVE, MOVE_SLACK_OFF, MOVE_SCALD, MOVE_PSYCHIC},
        .lvl = 1
    },
    {
        .species = SPECIES_SIGILYPH,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TINTED_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_SIGNAL_BEAM, MOVE_SHADOW_BALL, MOVE_ROOST},
        .lvl = 1
    },
    {
        .species = SPECIES_RAPIDASH_GALARIAN,
        .heldItem = ITEM_WIDE_LENS,
        .ability = ABILITY_ANTICIPATION,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PLAY_ROUGH, MOVE_HIGH_HORSEPOWER, MOVE_ZEN_HEADBUTT, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_RABSCA,
        .heldItem = ITEM_SILVER_POWDER,
        .ability = ABILITY_SYNCHRONIZE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BUG_BUZZ, MOVE_PSYSHOCK, MOVE_REVIVAL_BLESSING, MOVE_RECOVER},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .lvl = 1,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Hannah[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Maura[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Kayla[] = {
    {
    .lvl = 1,
    .species = SPECIES_WOBBUFFET,
    },
    {
    .lvl = 1,
    .species = SPECIES_NATU,
    },
    {
    .lvl = 1,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Alexis[] = {
    {
    .lvl = 1,
    .species = SPECIES_KIRLIA,
    },
    {
    .lvl = 1,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Jacki1[] = {
    {
        .species = SPECIES_REUNICLUS,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MAGIC_GUARD,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_RECOVER, MOVE_SHADOW_BALL, MOVE_PSYCHIC},
        .lvl = 1
    },
    {
        .species = SPECIES_XATU,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_MAGIC_BOUNCE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_PSYSHOCK, MOVE_TELEPORT, MOVE_TRICK_ROOM},
        .lvl = 1
    },
    {
        .species = SPECIES_SOLROCK,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_LEVITATE,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FLARE_BLITZ, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Walter1[] = {
    {
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Micah[] = {
    {
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLDUCK,
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Sidney[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Roxanne1[] = { // Dor
    {
        .species = SPECIES_MARILL,
        .ability = ABILITY_HUGE_POWER,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ASSAULT_VEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_AQUA_JET, MOVE_POWER_UP_PUNCH, MOVE_TRAILBLAZE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_MILCERY,
        .ability = ABILITY_AROMA_VEIL,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_PROTECT, MOVE_DRAINING_KISS, MOVE_RECOVER, MOVE_CHARM},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_COTTONEE,
        .ability = ABILITY_PRANKSTER,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MENTAL_HERB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_COMFEY,
        .ability = ABILITY_TRIAGE,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_BERRY_JUICE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_DRAINING_KISS, MOVE_GROWTH, MOVE_LEECH_SEED, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_FLOETTE_ORANGE_FLOWER,
        .ability = ABILITY_SYMBIOSIS,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_EVIOLITE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_DRAINING_KISS, MOVE_GRASS_KNOT, MOVE_GRASSY_TERRAIN, MOVE_SYNTHESIS},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_TOGEPI,
        .ability = ABILITY_TELEPATHY,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_CHOICE_SCARF,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_METRONOME, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    }
};

static const struct TrainerMon sParty_Brawly1[] = { // Scep
    {
        .species = SPECIES_THWACKEY,
        .ability = ABILITY_GRASSY_SURGE,
        .friendship = 200,
        .heldItem = ITEM_EVIOLITE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .lvl = 1,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, MOVE_PROTECT, MOVE_U_TURN},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_GROVYLE,
        .ability = ABILITY_UNBURDEN,
        .friendship = 200,
        .heldItem = ITEM_GRASSY_SEED,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .lvl = 1,
        .moves = {MOVE_SEED_BOMB, MOVE_DRAIN_PUNCH, MOVE_ACROBATICS, MOVE_SWORDS_DANCE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_BRELOOM,
        .ability = ABILITY_TECHNICIAN,
        .friendship = 200,
        .heldItem = ITEM_LOADED_DICE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .lvl = 1,
        .moves = {MOVE_MACH_PUNCH, MOVE_SWORDS_DANCE, MOVE_BULLET_SEED, MOVE_GRASSY_GLIDE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_LUDICOLO,
        .ability = ABILITY_SWIFT_SWIM,
        .friendship = 200,
        .heldItem = ITEM_EXPERT_BELT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .lvl = 1,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_ELECTRODE_HISUIAN,
        .ability = ABILITY_SOUNDPROOF,
        .friendship = 200,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .lvl = 1,
        .moves = {MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN, MOVE_PROTECT, MOVE_HIDDEN_POWER},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    },
    {
        .species = SPECIES_APPLETUN,
        .ability = ABILITY_THICK_FAT,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .lvl = 1,
        .moves = {MOVE_GIGA_DRAIN, MOVE_RECOVER, MOVE_LEECH_SEED, MOVE_DRAGON_PULSE},
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM)
    }
};

static const struct TrainerMon sParty_Wattson1[] = { // Tan
    {
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
        .lvl = 1,
        .moves = {MOVE_HEAT_WAVE, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_STEALTH_ROCK},
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD)
    },
    {
        .species = SPECIES_CINDERACE,
        .ability = ABILITY_LIBERO,
        .heldItem = ITEM_FIRE_GEM,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_PROTECT, MOVE_U_TURN},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_TALONFLAME,
        .ability = ABILITY_GALE_WINGS,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_SWORDS_DANCE, MOVE_FLARE_BLITZ, MOVE_BRAVE_BIRD, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_SCOVILLAIN,
        .ability = ABILITY_CHLOROPHYLL,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_GROWTH, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_NINETALES,
        .ability = ABILITY_DROUGHT,
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_PROTECT, MOVE_NASTY_PLOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    },
    {
        .species = SPECIES_ARCANINE,
        .ability = ABILITY_INTIMIDATE,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_SNARL, MOVE_EXTREME_SPEED, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL)
    }
};

static const struct TrainerMon sParty_Flannery1[] = { // Qanak
    {
        .species = SPECIES_STARAPTOR,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4), 
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31), 
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_RETURN, MOVE_U_TURN}
    },
    {
        .species = SPECIES_URSARING,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8), 
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_PROTECT, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK}
    },
    {
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_TRACE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252), 
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_ICE_BEAM, MOVE_PROTECT, MOVE_RECOVER, MOVE_TOXIC}
    },
    {
        .species = SPECIES_MAUSHOLD_FAMILY_OF_FOUR,
        .heldItem = ITEM_WIDE_LENS,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4), 
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_POPULATION_BOMB, MOVE_BITE, MOVE_TIDY_UP, MOVE_BEAT_UP}
    },
    {
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_TRUANT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4), 
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_GIGA_IMPACT, MOVE_RETURN, MOVE_NONE, MOVE_NONE}
    },
    {
        .species = SPECIES_DITTO,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_IMPOSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 8, 252, 0, 0, 0), 
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 31, 31), 
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Norman1[] = { // Chrizz
    {
        .species = SPECIES_LUCARIO,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_INNER_FOCUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_NASTY_PLOT, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE}
    },
    {
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_SPORE, MOVE_CLOSE_COMBAT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SNEASLER,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_UNBURDEN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_ACROBATICS, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ANNIHILAPE,
        .ability = ABILITY_DEFIANT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 196, 12, 20, 0, 28),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULK_UP, MOVE_RAGE_FIST, MOVE_DRAIN_PUNCH, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KOMMO_O,
        .heldItem = ITEM_THROAT_SPRAY,
        .ability = ABILITY_SOUNDPROOF,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CLANGING_SCALES, MOVE_CLANGOROUS_SOUL, MOVE_AURA_SPHERE, MOVE_DRACO_METEOR},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_GALLADE,
        .heldItem = ITEM_GALLADITE,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_SHARPNESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Winona1[] = { // Krypto
    {
        .species = SPECIES_AGGRON,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 92, 0, 0, 164),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_SLIDE, MOVE_STEEL_ROLLER, MOVE_IRON_DEFENSE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 232, 24, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_TAILWIND, MOVE_ROCK_SLIDE, MOVE_IRON_DEFENSE, MOVE_ROOST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MAWILE,
        .heldItem = ITEM_MAWILITE,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GHOLDENGO,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_GOOD_AS_GOLD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_NASTY_PLOT, MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_RECOVER}
    },
    {
        .species = SPECIES_GENESECT,
        .heldItem = ITEM_DOUSE_DRIVE,
        .ability = ABILITY_DOWNLOAD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TECHNO_BLAST, MOVE_BUG_BUZZ, MOVE_ICE_BEAM, MOVE_FLASH_CANNON}
    },
    {
        .species = SPECIES_EMPOLEON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_COMPETITIVE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_FLASH_CANNON, MOVE_SCALD, MOVE_FLIP_TURN, MOVE_ICE_BEAM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_TateAndLiza1[] = { // light
    {
        .species = SPECIES_OVERQWIL,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0,252,0,252,0,4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_SWORDS_DANCE, MOVE_BARB_BARRAGE, MOVE_AQUA_JET, MOVE_CRUNCH}
    },
    {
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_GENGARITE,
        .ability = ABILITY_CURSED_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0,0,0,252,252,4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31), 
        .moves = {MOVE_GIGA_DRAIN, MOVE_HEX, MOVE_VENOSHOCK, MOVE_DESTINY_BOND}
    },
    {
        .species = SPECIES_SNEASLER,
        .heldItem = ITEM_WHITE_HERB,
        .ability = ABILITY_UNBURDEN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0,252,0,252,0,4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_DIRE_CLAW, MOVE_NIGHT_SLASH}
    },
    {
        .species = SPECIES_AMOONGUSS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248,0,0,0,8,252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31,0,31,31,31,31),
        .moves = {MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_PROTECT, MOVE_SUBSTITUTE}
    },
    {
        .species = SPECIES_ETERNATUS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_PRESSURE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252,0,0,252,4,0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31,0,31,31,31,31),
        .moves = {MOVE_RECOVER, MOVE_VENOSHOCK, MOVE_DYNAMAX_CANNON, MOVE_FLAMETHROWER}
    },
    {
        .species = SPECIES_TOXAPEX,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_MERCILESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252,0,252,0,4,0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31,0,31,31,31,31),
        .moves = {MOVE_PROTECT, MOVE_SCALD, MOVE_HEX, MOVE_RECOVER}
    }
};

static const struct TrainerMon sParty_Juan1[] = { // Chal
    {
        .species = SPECIES_GRENINJA,
        .heldItem = ITEM_FLYING_GEM,
        .ability = ABILITY_BATTLE_BOND,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0,4,0,252,252,0),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_DARK_PULSE,MOVE_EXTRASENSORY,MOVE_ACROBATICS,MOVE_WATER_SHURIKEN}
    },
    {
        .species = SPECIES_SPIRITOMB,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_INFILTRATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248,8,0,0,0,252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_PROTECT,MOVE_TOXIC,MOVE_WILL_O_WISP,MOVE_SUCKER_PUNCH}
    },
    {
        .species = SPECIES_KINGAMBIT,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_SUPREME_OVERLORD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252,252,0,0,0,4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_SUCKER_PUNCH,MOVE_SWORDS_DANCE,MOVE_KOWTOW_CLEAVE,MOVE_IRON_DEFENSE}
    },
    {
        .species = SPECIES_HYDREIGON,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0,4,0,252,252,0),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_FOCUS_BLAST,MOVE_ZEN_HEADBUTT,MOVE_DARK_PULSE,MOVE_DRACO_METEOR}
    },
    {
        .species = SPECIES_URSHIFU,
        .heldItem = ITEM_BLACK_GLASSES,
        .ability = ABILITY_UNSEEN_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0,252,0,252,0,4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_CLOSE_COMBAT,MOVE_POISON_JAB,MOVE_SWORDS_DANCE,MOVE_WICKED_BLOW}
    },
    {
        .species = SPECIES_LOKIX,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_TINTED_LENS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0,252,0,252,0,4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), 
        .moves = {MOVE_AXE_KICK,MOVE_X_SCISSOR,MOVE_BRICK_BREAK,MOVE_SUCKER_PUNCH}
    }
};

static const struct TrainerMon sParty_Jerry1[] = {
    {
        .species = SPECIES_MEDITITE,
        .ability = ABILITY_PURE_POWER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 50, 0, 100, 0, 0),
        .lvl = 1,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_LOW_SWEEP, MOVE_TRAILBLAZE, MOVE_BULK_UP},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_PAWNIARD,
        .ability = ABILITY_DEFIANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 100, 0, 0),
        .lvl = 1,
        .moves = {MOVE_IRON_HEAD, MOVE_LASH_OUT, MOVE_LOW_KICK, MOVE_FURY_CUTTER},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_PAWMOT,
        .ability = ABILITY_IRON_FIST,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 0, 0, 0),
        .lvl = 1,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_MACH_PUNCH, MOVE_REVIVAL_BLESSING, MOVE_FAKE_OUT},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    }
};

static const struct TrainerMon sParty_Ted[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Paul[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RALTS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Karen1[] = {
    {
        .species = SPECIES_BRELOOM,
        .ability = ABILITY_TECHNICIAN,
        .gender = TRAINER_MON_FEMALE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 150, 0, 0),
        .lvl = 1,
        .moves = {MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_BULK_UP},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_WIGGLYTUFF,
        .ability = ABILITY_COMPETITIVE,
        .gender = TRAINER_MON_FEMALE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 150, 0),
        .lvl = 1,
        .moves = {MOVE_ECHOED_VOICE, MOVE_DISARMING_VOICE, MOVE_CHARGE_BEAM, MOVE_SING},
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET)
    },
    {
        .species = SPECIES_SIMISEAR,
        .ability = ABILITY_BLAZE,
        .gender = TRAINER_MON_FEMALE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 100, 0, 0),
        .lvl = 1,
        .moves = {MOVE_FLAME_BURST, MOVE_ACROBATICS, MOVE_BRICK_BREAK, MOVE_HONE_CLAWS},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_ESPURR,
        .ability = ABILITY_KEEN_EYE,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 252, 0),
        .lvl = 1,
        .moves = {MOVE_CONFUSION, MOVE_ECHOED_VOICE, MOVE_PROTECT, MOVE_SHOCK_WAVE},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_LUDICOLO,
        .ability = ABILITY_SWIFT_SWIM,
        .gender = TRAINER_MON_MALE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 252, 0),
        .lvl = 1,
        .moves = {MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_TEETER_DANCE, MOVE_RAIN_DANCE},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    }
};

static const struct TrainerMon sParty_Georgia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .lvl = 1,
    .species = SPECIES_SPINDA,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE}
    },
    {
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
        .species = SPECIES_WHIMSICOTT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 172, 0, 16, 68),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_LEECH_SEED, MOVE_TAUNT, MOVE_ENCORE, MOVE_GIGA_DRAIN}
    },
    {
        .species = SPECIES_AZUMARILL,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HUGE_POWER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BEWEAR,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_FLUFFY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_RETURN, MOVE_ICE_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LILLIGANT,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_OWN_TEMPO,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_SLEEP_POWDER}
    },
    {
        .species = SPECIES_LOPUNNY,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_KLUTZ,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FLING, MOVE_ACROBATICS, MOVE_DRAIN_PUNCH, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CINCCINO,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TAIL_SLAP, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_TRIPLE_AXEL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Victor[] = {
    {
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_EXPERT_BELT,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_MINUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RISING_VOLTAGE, MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}
    },
    {
        .species = SPECIES_TOXTRICITY_AMPED,
        .heldItem = ITEM_THROAT_SPRAY,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_PLUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_RISING_VOLTAGE, MOVE_NUZZLE, MOVE_SHIFT_GEAR, MOVE_SLUDGE_BOMB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BELLIBOLT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_ELECTROMORPHOSIS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 108, 0, 92, 56),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_WEATHER_BALL, MOVE_SUBSTITUTE, MOVE_SLACK_OFF}
    },
    {
        .species = SPECIES_CLAWITZER,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MEGA_LAUNCHER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_BUBBLE_BEAM, MOVE_ICE_BEAM, MOVE_FLIP_TURN, MOVE_TERRAIN_PULSE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_GROUNDSHOCK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(204, 0, 144, 8, 0, 152),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .moves = {MOVE_RISING_VOLTAGE, MOVE_KNOCK_OFF, MOVE_FOLLOW_ME, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ROTOM_HEAT,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(32, 0, 112, 0, 252, 112),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_RISING_VOLTAGE, MOVE_SHADOW_BALL},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    }
};

static const struct TrainerMon sParty_Miguel1[] = {
    {
        .species = SPECIES_UNFEZANT,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_BIG_PECKS,
        .lvl = 1,
        .friendship = 220,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FEINT_ATTACK, MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_RETURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GRANBULL,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_QUICK_FEET,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_FACADE, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TAUROS,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_RAGING_BULL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    }
};

static const struct TrainerMon sParty_Colton[] = {
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Victoria[] = {
    {
        .species = SPECIES_INDEEDEE_FEMALE,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_PSYCHIC_SURGE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_TRICK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GARDEVOIR,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SYNCHRONIZE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EXPANDING_FORCE, MOVE_WILL_O_WISP, MOVE_MYSTICAL_FIRE, MOVE_MOONBLAST}
    },
    {
        .species = SPECIES_FROSLASS,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SNOW_CLOAK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_DESTINY_BOND}
    },
    {
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_OBLIVIOUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SLACK_OFF, MOVE_SCALD, MOVE_SLEEP_TALK, MOVE_REST}
    },
    {
        .species = SPECIES_ARMAROUGE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_WEAK_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_ARMOR_CANNON, MOVE_CALM_MIND, MOVE_EXPANDING_FORCE, MOVE_ENERGY_BALL}
    },
    {
        .species = SPECIES_ZOROARK_HISUIAN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_ILLUSION,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SHADOW_BALL, MOVE_NASTY_PLOT, MOVE_HYPER_VOICE, MOVE_BURNING_JEALOUSY}
    }
};


static const struct TrainerMon sParty_Vanessa[] = {
    {
    .lvl = 1,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Bethany[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel1[] = {
    {
        .species = SPECIES_MAUSHOLD_FAMILY_OF_FOUR,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_POPULATION_BOMB, MOVE_TIDY_UP, MOVE_BULLET_SEED, MOVE_CHARM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KLEFKI,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SWAGGER, MOVE_FOUL_PLAY, MOVE_THUNDER_WAVE, MOVE_TOXIC}
    },
    {
        .species = SPECIES_GARDEVOIR,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_TRACE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Timothy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Vicky[] = {
    {
        .species = SPECIES_RILLABOOM,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_GRASSY_SURGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_HAWLUCHA,
        .heldItem = ITEM_GRASSY_SEED,
        .ability = ABILITY_UNBURDEN,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_ACROBATICS, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_TECHNICIAN,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_GRASSY_GLIDE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_WEAVILE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TOUGH_CLAWS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRIPLE_AXEL, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_ICE_SHARD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_MAGMORTAR,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MEGA_LAUNCHER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FLAME_BURST, MOVE_TERRAIN_PULSE, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .lvl = 1,
    },
    {
        .species = SPECIES_DONDOZO,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BODY_PRESS, MOVE_CURSE, MOVE_REST, MOVE_SLEEP_TALK},
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_Shelby1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Calvin1[] = {
    {
        .species = SPECIES_RATTATA_ALOLAN,
        .ability = ABILITY_HUSTLE,
        .lvl = 1,
            .moves = {MOVE_QUICK_ATTACK, MOVE_HEADBUTT, MOVE_NONE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    },
    {
        .species = SPECIES_VULPIX,
        .ability = ABILITY_DROUGHT,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ORAN_BERRY,
        .lvl = 1,
        .moves = {MOVE_EMBER, MOVE_HYPNOSIS, MOVE_TACKLE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIRKY),
    },
    {
        .species = SPECIES_NATU,
        .ability = ABILITY_EARLY_BIRD,
        .lvl = 1,
        .moves = {MOVE_PECK, MOVE_QUICK_ATTACK, MOVE_NIGHT_SHADE, MOVE_CONFUSION},
        .nature = TRAINER_PARTY_NATURE(NATURE_BASHFUL),
    }
};

static const struct TrainerMon sParty_Billy[] = {
    {
        .species = SPECIES_STARLY,
        .ability = ABILITY_INTIMIDATE,
        .friendship = 42,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_AERIAL_ACE, MOVE_PECK, MOVE_QUICK_ATTACK, MOVE_ACROBATICS},
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY)
    },
    {
        .species = SPECIES_STUFFUL,
        .ability = ABILITY_FLUFFY,
        .friendship = 0,
        .heldItem = ITEM_ORAN_BERRY,
        .gender = TRAINER_MON_FEMALE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(52, 52, 0, 52, 0, 0),
        .lvl = 1,
        .moves = {MOVE_BULLDOZE, MOVE_ICE_PUNCH, MOVE_FRUSTRATION, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_NUZLEAF,
        .ability = ABILITY_PICKPOCKET,
        .friendship = 42,
        .heldItem = ITEM_HARD_STONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 52, 0, 52, 4, 0),
        .lvl = 1,
        .moves = {MOVE_TRAILBLAZE, MOVE_MAGICAL_LEAF, MOVE_FLING, MOVE_ENDURE},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_SANDYGAST,
        .ability = ABILITY_WATER_COMPACTION,
        .friendship = 42,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ASSAULT_VEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(52, 0, 52, 52, 32, 0),
        .lvl = 1,
        .moves = {MOVE_MUD_SLAP, MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    }
};

static const struct TrainerMon sParty_Josh[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLEFFA,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_CHARM, MOVE_DRAINING_KISS, MOVE_TACKLE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLEFAIRY,
    .ability = ABILITY_CUTE_CHARM,
    .moves = {MOVE_CHARM, MOVE_DRAINING_KISS, MOVE_TACKLE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Tommy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLEFAIRY,
    .ability = ABILITY_FRIEND_GUARD,
    .moves = {MOVE_CHARM, MOVE_DRAINING_KISS, MOVE_METRONOME, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_JIGGLYPUFF,
    .ability = ABILITY_FRIEND_GUARD,
    .moves = {MOVE_CHARM, MOVE_DRAINING_KISS, MOVE_METRONOME, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Joey[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_RUN_AWAY,
    .lvl = 1,
    .species = SPECIES_RATTATA,
    .moves = {MOVE_ENDEAVOR, MOVE_QUICK_ATTACK, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_THICK_FAT,
    .lvl = 1,
    .species = SPECIES_RATTATA_ALOLAN,
    .moves = {MOVE_ENDEAVOR, MOVE_QUICK_ATTACK, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 1,
    .ability = ABILITY_MOODY,
    .species = SPECIES_BIDOOF,
    .moves = {MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TRAILBLAZE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 1,
    .heldItem = ITEM_LOADED_DICE,
    .species = SPECIES_LECHONK,
    .moves = {MOVE_BODY_SLAM, MOVE_BULLET_SEED, MOVE_TRAILBLAZE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Ben[] = {
    {
        .species = SPECIES_SALAZZLE,
        .ability = ABILITY_CORROSION,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_BURNING_JEALOUSY, MOVE_HEAT_WAVE, MOVE_SLUDGE_BOMB, MOVE_TOXIC},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    },
    {
        .species = SPECIES_TURTONATOR,
        .ability = ABILITY_SHELL_ARMOR,
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_SHELL_SMASH, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_DRACO_METEOR},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    },
    {
        .species = SPECIES_MAGCARGO,
        .ability = ABILITY_FLAME_BODY,
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_HEAT_WAVE, MOVE_ANCIENT_POWER, MOVE_EARTH_POWER, MOVE_CLEAR_SMOG},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    }
};

static const struct TrainerMon sParty_Quincy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DUSCLOPS,
    .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};

static const struct TrainerMon sParty_Jaylen[] = {
    {
        .species = SPECIES_DRAKLOAK,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_CLEAR_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_U_TURN, MOVE_DRAGON_DANCE, MOVE_PHANTOM_FORCE, MOVE_DRAGON_RUSH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GURDURR,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_MACH_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOGETIC,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SERENE_GRACE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER_WAVE, MOVE_ANCIENT_POWER, MOVE_DRAINING_KISS, MOVE_EXTRASENSORY}
    },
    {
        .species = SPECIES_COMBUSKEN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SPEED_BOOST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_PROTECT, MOVE_THUNDER_PUNCH, MOVE_BLAZE_KICK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Dillon[] = {
    {
        .species = SPECIES_SLIGGOO_HISUIAN,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SHELL_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_CURSE, MOVE_LIFE_DEW, MOVE_TOXIC, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TANGELA,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .moves = {MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_SYNTHESIS, MOVE_POWER_WHIP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_THICK_FAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CURSE, MOVE_ICE_FANG, MOVE_ICE_SHARD, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_FRAXURE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MOLD_BREAKER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_DANCE, MOVE_DUAL_CHOP, MOVE_X_SCISSOR, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Eddie[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    }
};

static const struct TrainerMon sParty_Allen[] = {
    {
        .species = SPECIES_PIKACHU,
        .ability = ABILITY_STATIC,
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(0,0,0,52,0,0),
        .lvl = 1,
        .moves = {MOVE_CHARM, MOVE_NUZZLE, MOVE_QUICK_ATTACK, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    },
    {
        .species = SPECIES_WHISMUR,
        .ability = ABILITY_SOUNDPROOF,
        .heldItem = ITEM_ORAN_BERRY,
        .lvl = 1,
            .moves = {MOVE_DISARMING_VOICE, MOVE_POUND, MOVE_ASTONISH, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    },
    {
        .species = SPECIES_WIGLETT,
        .ability = ABILITY_GOOEY,
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0,0,0,0,52,0), //needs special to do anything
        .lvl = 1,
        .moves = {MOVE_AQUA_JET, MOVE_MUD_SLAP, MOVE_WRAP, MOVE_WATER_GUN},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
        .species = SPECIES_BOLDORE,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_WEAK_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ZWEILOUS,
        .heldItem = ITEM_WIDE_LENS,
        .ability = ABILITY_HUSTLE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_CLAW, MOVE_FIRE_FANG, MOVE_ZEN_HEADBUTT, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_HAUNTER,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DESTINY_BOND, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM}
    }
};

static const struct TrainerMon sParty_Wallace[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Andrew[] = {
    {
        .species = SPECIES_CLAWITZER,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MEGA_LAUNCHER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DRAGON_PULSE, MOVE_WATER_PULSE, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_CRABOMINABLE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 244, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ICE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_POWER_UP_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KLAWF,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_ANGER_SHELL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 244, 0, 0, 0, 12),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_TRAILBLAZE, MOVE_X_SCISSOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Ivan[] = { // Route Boss
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 252),
    .lvl = 1,
    .ability = ABILITY_RATTLED,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 252),
    .lvl = 1,
    .ability = ABILITY_RATTLED,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 252),
    .lvl = 1,
    .ability = ABILITY_RATTLED,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 252),
    .lvl = 1,
    .ability = ABILITY_RATTLED,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 252),
    .lvl = 1,
    .ability = ABILITY_RATTLED,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_FLAIL, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 252),
    .lvl = 1,
    .ability = ABILITY_RATTLED,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_THUNDER, MOVE_BUBBLE_BEAM, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Claude[] = {
    {
        .species = SPECIES_BARRASKEWDA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_PROPELLER_TAIL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS, MOVE_LIQUIDATION, MOVE_FLIP_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_STARMIE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ANALYTIC,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SCALD, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_BASCULIN,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_LIQUIDATION, MOVE_PSYCHIC_FANGS, MOVE_SUPERPOWER, MOVE_FLIP_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DEWGONG,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(184, 136, 0, 0, 0, 188),
        .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
        .moves = {MOVE_AVALANCHE, MOVE_CURSE, MOVE_WHIRLPOOL, MOVE_TOXIC},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_OBLIVIOUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_SLACK_OFF, MOVE_CALM_MIND}
    },
    {
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_OBLIVIOUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_SLACK_OFF, MOVE_SHADOW_BALL, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_FLAREON,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DETECT, MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Ned[] = {
    {
        .species = SPECIES_VAPOREON,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BATON_PASS, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_WISH}
    },
    {
        .species = SPECIES_KRICKETUNE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_BUG_BITE, MOVE_POUNCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TENTACOOL,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYDRO_PUMP, MOVE_HAZE, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM}
    }
};

static const struct TrainerMon sParty_Dale[] = { // Route Boss
    {
        .species = SPECIES_CLAWITZER,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MEGA_LAUNCHER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AURA_SPHERE, MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_DRAGON_PULSE}
    },
    {
        .species = SPECIES_CARRACOSTA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SOLID_ROCK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHELL_SMASH, MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DEWGONG,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TOXIC, MOVE_CHILLING_WATER, MOVE_FROST_BREATH, MOVE_SIGNAL_BEAM}
    },
    {
        .species = SPECIES_DREDNAW,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_STRONG_JAW,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHELL_SMASH, MOVE_ICE_FANG, MOVE_WATERFALL, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ALOMOMOLA,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_FLIP_TURN, MOVE_WISH, MOVE_KNOCK_OFF, MOVE_SCALD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_INFILTRATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_X_SCISSOR, MOVE_LEECH_LIFE, MOVE_BRAVE_BIRD, MOVE_CROSS_POISON},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
        .species = SPECIES_DRAGALGE,
        .heldItem = ITEM_IAPAPA_BERRY,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES}
    },
    {
        .species = SPECIES_GOLISOPOD,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_EMERGENCY_EXIT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_LEECH_LIFE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_VELUZA,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SHARPNESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_PLUCK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_HUNTAIL,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_VEIL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CRUNCH, MOVE_WATERFALL, MOVE_BOUNCE, MOVE_COIL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
        .species = SPECIES_WISHIWASHI,
        .heldItem = ITEM_FIGY_BERRY,
        .ability = ABILITY_SCHOOLING,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_REST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CLAWITZER,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_MEGA_LAUNCHER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON}
    },
    {
        .species = SPECIES_AZUMARILL,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HUGE_POWER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SIMIPOUR,
        .heldItem = ITEM_SALAC_BERRY,
        .ability = ABILITY_GLUTTONY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .moves = {MOVE_ICE_BEAM, MOVE_SCALD, MOVE_NASTY_PLOT, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_WHITE_HERB,
        .ability = ABILITY_SKILL_LINK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_ICE_SHARD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GASTRODON,
        .heldItem = ITEM_RINDO_BERRY,
        .ability = ABILITY_STORM_DRAIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_RECOVER, MOVE_SURF}
    },
    {
        .species = SPECIES_VELUZA,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SHARPNESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FILLET_AWAY, MOVE_PSYCHO_CUT, MOVE_AQUA_CUTTER, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_CLEAR_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .moves = {MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB, MOVE_MIRROR_COAT, MOVE_SURF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Carter[] = {
    {
        .species = SPECIES_TORKOAL,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_DROUGHT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 80, 0, 172, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CLEAR_SMOG, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_BODY_PRESS}
    },
    {
        .species = SPECIES_SKELEDIRGE,
        .heldItem = ITEM_CHOICE_SPECS,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_UNAWARE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SLACK_OFF, MOVE_TORCH_SONG, MOVE_HYPER_VOICE, MOVE_SHADOW_BALL}
    },
    {
        .species = SPECIES_VOLCARONA,
        .heldItem = ITEM_CHARTI_BERRY,
        .ability = ABILITY_FLAME_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_ROOST}
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .lvl = 1,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
        .species = SPECIES_METANG,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_CLEAR_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_METEOR_MASH, MOVE_POWER_UP_PUNCH, MOVE_TRAILBLAZE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DOUBLADE,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_NO_GUARD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_IRON_HEAD, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_VITAL_SPIRIT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BULK_UP, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Anthony[] = {
    {
        .species = SPECIES_DUGTRIO_ALOLAN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TANGLING_HAIR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LUXRAY,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FACADE, MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_ICE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CORVIKNIGHT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_MIRROR_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_ROOST, MOVE_BODY_PRESS, MOVE_BULK_UP, MOVE_DRILL_PECK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_KEEN_EYE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 24, 0, 232),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROAR, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS}
    },
    {
        .species = SPECIES_VIKAVOLT,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_VOLT_SWITCH}
    },
    {
        .species = SPECIES_COPPERAJAH,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BRICK_BREAK, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_DRILL_RUN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
        .species = SPECIES_FORRETRESS,
        .heldItem = ITEM_CUSTAP_BERRY,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_RAPID_SPIN, MOVE_EXPLOSION},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ROTOM_WASH,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 72, 0, 144, 40),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_WILL_O_WISP, MOVE_VOLT_SWITCH, MOVE_HYPER_VOICE, MOVE_SHADOW_BALL}
    },
    {
        .species = SPECIES_ORICORIO_POM_POM,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_DANCER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_AIR_SLASH, MOVE_ROOST}
    }
};
static const struct TrainerMon sParty_Jasmine[] = {
    {
        .species = SPECIES_ROTOM_MOW,
        .heldItem = ITEM_MIRACLE_SEED,
        .ability = ABILITY_HERBIVATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_THUNDER_WAVE, MOVE_SHADOW_BALL, MOVE_DISCHARGE}
    },
    {
        .species = SPECIES_SANDSLASH_ALOLAN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SLUSH_RUSH,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SNOWSCAPE, MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_VOLT_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SCALD, MOVE_VOLT_SWITCH, MOVE_DISCHARGE, MOVE_DAZZLING_GLEAM}
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
        .species = SPECIES_ESCAVALIER,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_SHELL_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN, MOVE_MEGAHORN, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KLINKLANG,
        .heldItem = ITEM_COVERT_CLOAK,
        .ability = ABILITY_CLEAR_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
        .moves = {MOVE_GEAR_GRIND, MOVE_SHIFT_GEAR, MOVE_IRON_HEAD, MOVE_METAL_TERRAIN}
    },
    {
        .species = SPECIES_DUGTRIO_ALOLAN,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_SAND_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_HELIOLISK,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_DRY_SKIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_PARABOLIC_CHARGE, MOVE_HIDDEN_POWER, MOVE_DRAGON_PULSE}
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
        .species = SPECIES_DEDENNE,
        .heldItem = ITEM_SALAC_BERRY,
        .ability = ABILITY_CHEEK_POUCH,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .moves = {MOVE_ENDURE, MOVE_NUZZLE, MOVE_THUNDERBOLT, MOVE_DRAINING_KISS},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GOLEM_ALOLAN,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_GALVANIZE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_BLAST, MOVE_BRICK_BREAK, MOVE_HIGH_HORSEPOWER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ARCTOZOLT,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_VOLT_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BOLT_BEAK, MOVE_ICE_FANG, MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_JOLTEON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_VOLT_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_HIDDEN_POWER, MOVE_SIGNAL_BEAM}
    }
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Camden[] = {
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 1,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Chase[] = {
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BAGON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BAGON,
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_Perry[] = {
    {
        .species = SPECIES_MANDIBUZZ,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_OVERCOAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SWAGGER, MOVE_FOUL_PLAY, MOVE_ROOST, MOVE_TAUNT}
    },
    {
        .species = SPECIES_DODRIO,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_EARLY_BIRD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_DRILL_PECK, MOVE_RETURN, MOVE_QUICK_ATTACK, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SWELLOW,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FACADE, MOVE_STEEL_WING, MOVE_BRAVE_BIRD, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_NINJASK,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SPEED_BOOST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_DUAL_WINGBEAT, MOVE_LEECH_LIFE, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
        .species = SPECIES_BUTTERFREE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_COMPOUND_EYES,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE, MOVE_AIR_SLASH, MOVE_DREAM_EATER}
    },
    {
        .species = SPECIES_HAWLUCHA,
        .heldItem = ITEM_FOCUS_SASH,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_UNBURDEN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_FLYING_PRESS, MOVE_DUAL_WINGBEAT, MOVE_LUNGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SWOOBAT,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SIMPLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_GIGA_DRAIN}
    },
    {
        .species = SPECIES_MINIOR_METEOR_RED,
        .heldItem = ITEM_WHITE_HERB,
        .ability = ABILITY_SHIELDS_DOWN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHELL_SMASH, MOVE_ACROBATICS, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
        .species = SPECIES_STARAPTOR,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_RECKLESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_STEEL_WING},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOUCANNON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SKILL_LINK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FURY_ATTACK, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_FLAME_CHARGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DRIFBLIM,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_AFTERMATH,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_STRENGTH_SAP, MOVE_TOXIC, MOVE_PHANTOM_FORCE, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_MULTISCALE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_EXTREME_SPEED},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Jared[] = {
    {
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(8, 252, 0, 248, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ROOST, MOVE_SWORDS_DANCE, MOVE_BULLET_PUNCH, MOVE_DUAL_WINGBEAT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PERRSERKER,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_STEELY_SPIRIT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SEED_BOMB, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BRONZONG,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
        .moves = {MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD}
    }
};

static const struct TrainerMon sParty_Humberto[] = {
    {
        .species = SPECIES_REVAVROOM,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_FILTER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHIFT_GEAR, MOVE_IRON_HEAD, MOVE_POISON_JAB, MOVE_ZEN_HEADBUTT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 208, 44, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_DRILL_RUN, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_AEGISLASH,
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_STANCE_CHANGE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_IRON_HEAD, MOVE_SACRED_SWORD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Presley[] = {
    {
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    },
    {
    .lvl = 1,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_IMPIDIMP,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_THUNDER_WAVE, MOVE_FAKE_OUT, MOVE_FLATTER, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_CLEFAIRY,
    .ability = ABILITY_CUTE_CHARM,
    .moves = {MOVE_TOXIC, MOVE_DRAINING_KISS, MOVE_TACKLE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Colin[] = {
    {
        .species = SPECIES_SALAMENCE,
        .heldItem = ITEM_YACHE_BERRY,
        .ability = ABILITY_INTIMIDATE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_AIR_SLASH, MOVE_ROOST},
        .lvl = 1
    },
    {
        .species = SPECIES_STARAPTOR,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_RECKLESS,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_SKARMORY,
        .heldItem = ITEM_SALAC_BERRY,
        .ability = ABILITY_STURDY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_STEALTH_ROCK, MOVE_WHIRLWIND, MOVE_ROOST, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_MASQUERAIN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TINTED_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_AIR_SLASH, MOVE_SCALD, MOVE_BUG_BUZZ},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Robert1[] = {
    {
        .species = SPECIES_YANMEGA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TINTED_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER},
        .lvl = 1
    },
    {
        .species = SPECIES_DRIFBLIM,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_FLARE_BOOST,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_PROTECT},
        .lvl = 1
    },
    {
        .species = SPECIES_MANDIBUZZ,
        .heldItem = ITEM_MIRROR_HERB,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_WEAK_ARMOR,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWAGGER, MOVE_FOUL_PLAY, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_TOUCANNON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SKILL_LINK,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_DRILL_PECK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Benny[] = {
    {
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 1,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Chester[] = { // Route Boss
    {
        .species = SPECIES_HONCHKROW,
        .heldItem = ITEM_SCOPE_LENS,
        .ability = ABILITY_TAILSTREAM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_DUAL_WINGBEAT, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_DAMP_ROCK,
        .ability = ABILITY_DRIZZLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 8, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
        .moves = {MOVE_HURRICANE, MOVE_KNOCK_OFF, MOVE_ROOST, MOVE_SCALD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOGEKISS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SERENE_GRACE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_DAZZLING_GLEAM, MOVE_THUNDER_WAVE}
    },
    {
        .species = SPECIES_FEAROW,
        .heldItem = ITEM_SCOPE_LENS,
        .ability = ABILITY_SNIPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 248, 0, 248, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_THROAT_CHOP, MOVE_RETURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_PIDGEOTITE,
        .ability = ABILITY_BIG_PECKS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 248, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_FOCUS_BLAST}
    },
    {
        .species = SPECIES_KILOWATTREL,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_WIND_POWER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_ELECTRO_BALL, MOVE_HURRICANE, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_INNER_FOCUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_EXTREME_SPEED, MOVE_CROSS_POISON, MOVE_BRAVE_BIRD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_QWILFISH_HISUIAN,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_TOXIC, MOVE_DESTINY_BOND, MOVE_BARB_BARRAGE, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_OBSTAGOON,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_OBSTRUCT, MOVE_FACADE, MOVE_GUNK_SHOT, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_INCINEROAR,
        .heldItem = ITEM_FIGY_BERRY,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULK_UP, MOVE_BLAZE_KICK, MOVE_FAKE_OUT, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
        .species = SPECIES_GRAFAIAI,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_UNBURDEN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_POISON_JAB, MOVE_SHADOW_CLAW, MOVE_ACROBATICS},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_HYDREIGON,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_DARK_PULSE, MOVE_FLAMETHROWER}
    },
    {
        .species = SPECIES_THIEVUL,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_STAKEOUT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MAROWAK_ALOLAN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ROCK_HEAD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_U_TURN, MOVE_DOUBLE_EDGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Dianne[] = {
    {
    .lvl = 1,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 1,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jani[] = {
    {
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lao1[] = {
    {
        .species = SPECIES_ARIADOS,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SNIPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FOCUS_ENERGY, MOVE_LEECH_LIFE, MOVE_CROSS_POISON, MOVE_SHADOW_SNEAK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PROTECT, MOVE_DARK_PULSE, MOVE_SCALD, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_DECIDUEYE,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_LONG_REACH,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_STEEL_WING, MOVE_PSYCHO_CUT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_PAYAPA_BERRY,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_POISON_FANG, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_COIL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_WEAVILE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_PRESSURE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRIPLE_AXEL, MOVE_SWORDS_DANCE, MOVE_ICE_SHARD, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ZOROARK_HISUIAN,
        .heldItem = ITEM_COLBUR_BERRY,
        .ability = ABILITY_ILLUSION,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 1,
    .species = SPECIES_SKIDDO,
    .heldItem = ITEM_GRASS_GEM,
    .ability = ABILITY_GRASS_PELT,
    .moves = {MOVE_TRAILBLAZE, MOVE_RAZOR_LEAF, MOVE_SUNNY_DAY, MOVE_ZEN_HEADBUTT},
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 6, 0, 240, 6),
    .lvl = 1,
    .species = SPECIES_BAYLEEF,
    .heldItem = ITEM_BIG_ROOT,
    .ability = ABILITY_TRIAGE,
    .moves = {MOVE_MEGA_DRAIN, MOVE_DRAINING_KISS, MOVE_SYNTHESIS, MOVE_PROTECT},
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 1,
    .species = SPECIES_STEENEE,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_LEAF_GUARD,
    .moves = {MOVE_TRAILBLAZE, MOVE_SEED_BOMB, MOVE_GRASSY_GLIDE, MOVE_PLAY_NICE},
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    }
};

static const struct TrainerMon sParty_Laura[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .lvl = 1,
    .species = SPECIES_LILLIGANT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_GIGA_DRAIN, MOVE_PETAL_DANCE, MOVE_QUIVER_DANCE, MOVE_POLLEN_PUFF},
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 1,
    .species = SPECIES_STEENEE,
    .heldItem = ITEM_MIRACLE_SEED,
    .ability = ABILITY_LEAF_GUARD,
    .moves = {MOVE_TRAILBLAZE, MOVE_SEED_BOMB, MOVE_GRASSY_GLIDE, MOVE_PLAY_NICE},
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
    .lvl = 1,
    .species = SPECIES_PARAS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_EFFECT_SPORE,
    .moves = {MOVE_SPORE, MOVE_STUN_SPORE, MOVE_TOXIC, MOVE_NONE},
    .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH)
    }
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cora[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Madeline1[] = { // Route Boss
    {
        .species = SPECIES_CINDERACE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_LIBERO,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_PYRO_BALL, MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GLISCOR,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_POISON_HEAL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(184, 252, 0, 72, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_PROTECT, MOVE_ROOST, MOVE_SWORDS_DANCE, MOVE_DUAL_WINGBEAT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RIBOMBEE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHIELD_DUST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_STICKY_WEB, MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_WEAVILE,
        .heldItem = ITEM_EXPERT_BELT,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_TOUGH_CLAWS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRIPLE_AXEL, MOVE_ICE_SHARD, MOVE_SHADOW_CLAW, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_HATTERENE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MAGIC_BOUNCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL, MOVE_PSYCHIC}
    }
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
        .species = SPECIES_EXCADRILL,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MOLD_BREAKER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_METAGROSS,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_CLEAR_BODY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_SHADOW_CLAW, MOVE_BULLET_PUNCH, MOVE_METEOR_MASH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_GOODRA_HISUIAN,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SHELL_ARMOR,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_SURF},
        .lvl = 1
    },
    {
        .species = SPECIES_TINKATON,
        .heldItem = ITEM_LIFE_ORB,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_MOLD_BREAKER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_ENCORE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
        .species = SPECIES_CLODSIRE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_RECOVER, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_URSALUNA,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_GARCHOMP,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_ROUGH_SKIN,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_SCALE_SHOT, MOVE_DRAGON_CLAW},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Beverly[] = {
    {
        .species = SPECIES_KINGLER,
        .ability = ABILITY_SHEER_FORCE,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .lvl = 1,
        .moves = {MOVE_CRABHAMMER, MOVE_SWORDS_DANCE, MOVE_RAZOR_SHELL, MOVE_HAMMER_ARM},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_CLOYSTER,
        .ability = ABILITY_SKILL_LINK,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_CRASH, MOVE_ROCK_BLAST, MOVE_WATER_SHURIKEN},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_OMASTAR,
        .ability = ABILITY_SHELL_ARMOR,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SCALD, MOVE_POWER_GEM, MOVE_CALM_MIND},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_DEWGONG,
        .ability = ABILITY_THICK_FAT,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .lvl = 1,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SCALD, MOVE_SIGNAL_BEAM, MOVE_FREEZE_DRY},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
        .nickname = COMPOUND_STRING("Dewleon")
    }
};

static const struct TrainerMon sParty_Imani[] = {
    {
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .lvl = 1,
        .moves = {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_SIMIPOUR,
        .ability = ABILITY_OCEANATE,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYPER_VOICE, MOVE_SCALD, MOVE_PROTECT, MOVE_GRASS_KNOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_CLAWITZER,
        .ability = ABILITY_MEGA_LAUNCHER,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_CHOICE_SCARF,
        .isShiny = TRUE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_U_TURN, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_WACAN_BERRY,
        .ability = ABILITY_DRIZZLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(240, 0, 252, 0, 16, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .moves = {MOVE_TAILWIND, MOVE_HURRICANE, MOVE_U_TURN, MOVE_ROOST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KILOWATTREL,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_WIND_POWER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_ROOST, MOVE_HURRICANE}
    },
    {
        .species = SPECIES_FLOATZEL,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SWIFT_SWIM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_WAVE_CRASH, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_AQUA_JET},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BASCULIN_BLUE_STRIPED,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_HEAD_SMASH, MOVE_WAVE_CRASH, MOVE_DOUBLE_EDGE, MOVE_ICE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 1,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
        .species = SPECIES_SAMUROTT,
        .ability = ABILITY_TORRENT,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_VELUZA,
        .ability = ABILITY_SHARPNESS,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_FILLET_AWAY},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_STORED_POWER},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
        .species = SPECIES_LUMINEON,
        .ability = ABILITY_STORM_DRAIN,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_AIR_SLASH, MOVE_SUBSTITUTE, MOVE_TOXIC},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_ARCTOVISH,
        .ability = ABILITY_WATER_ABSORB,
        .friendship = 200,
        .heldItem = ITEM_CHOICE_SCARF,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_FISHIOUS_REND, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_SEISMITOAD,
        .ability = ABILITY_WATER_ABSORB,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
        .species = SPECIES_SAMUROTT,
        .ability = ABILITY_TORRENT,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_VELUZA,
        .ability = ABILITY_SHARPNESS,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_FILLET_AWAY},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_STORED_POWER},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
        .species = SPECIES_SAMUROTT,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SHELL_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_SURF, MOVE_FLIP_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_AZUMARILL,
        .heldItem = ITEM_IAPAPA_BERRY,
        .ability = ABILITY_HUGE_POWER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_AQUA_JET, MOVE_BELLY_DRUM, MOVE_PLAY_ROUGH, MOVE_WATERFALL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BASCULEGION_FEMALE,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CRUNCH, MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, MOVE_HEAD_SMASH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 1,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .lvl = 1,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 1,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 1,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .lvl = 1,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 1,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .lvl = 1,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .lvl = 1,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .lvl = 1,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 1,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .lvl = 1,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .lvl = 1,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 1,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
        .species = SPECIES_MEOWSCARADA,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_PROTEAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FLOWER_TRICK, MOVE_TRIPLE_AXEL, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LIEPARD,
        .heldItem = ITEM_NORMAL_GEM,
        .ability = ABILITY_UNBURDEN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FURY_SWIPES, MOVE_PLAY_ROUGH, MOVE_GUNK_SHOT, MOVE_ROAR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Becky[] = {
    {
        .species = SPECIES_COMFEY,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TRIAGE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS}
    },
    {
        .species = SPECIES_AROMATISSE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_AROMA_VEIL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_PSYSHOCK, MOVE_THUNDERBOLT}
    },
    {
        .species = SPECIES_CLEFABLE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_UNAWARE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_COSMIC_POWER, MOVE_CALM_MIND, MOVE_MOONLIGHT, MOVE_DRAINING_KISS}
    }
};

static const struct TrainerMon sParty_Carol[] = {
    {
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_POISON_GEM,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_GUNK_SHOT, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_LEECH_LIFE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SERPERIOR,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_CONTRARY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_GLARE, MOVE_COIL, MOVE_LEAF_BLADE, MOVE_OUTRAGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SANDACONDA,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SAND_SPIT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 248, 0, 4, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_FIRE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DRAGONAIR,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_SHED_SKIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 156, 4, 0, 156),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_THUNDER_WAVE, MOVE_DRACO_METEOR, MOVE_AQUA_TAIL, MOVE_DOUBLE_TEAM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Nancy[] = {
    {
        .species = SPECIES_AMBIPOM,
        .heldItem = ITEM_NORMAL_GEM,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FAKE_OUT, MOVE_AERIAL_ACE, MOVE_COVET, MOVE_PURSUIT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_AZUMARILL,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SAP_SIPPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_ICE_SPINNER, MOVE_BELLY_DRUM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CHANSEY,
        .heldItem = ITEM_LUCKY_PUNCH,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_SERENE_GRACE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SOFT_BOILED}
    },
    {
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_NATURAL_CURE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BRAVE_BIRD, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Martha[] = {
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 1,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana1[] = {
    {
        .species = SPECIES_SINISTCHA_MASTERPIECE,
        .heldItem = ITEM_AGUAV_BERRY,
        .ability = ABILITY_HEATPROOF,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_MATCHA_GOTCHA, MOVE_SHADOW_BALL, MOVE_SCALD}
    },
    {
        .species = SPECIES_HYDRAPPLE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FICKLE_BEAM, MOVE_GIGA_DRAIN, MOVE_RECOVER, MOVE_EARTH_POWER}
    },
    {
        .species = SPECIES_BRAMBLEGHAST,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_WIND_RIDER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SHADOW_SNEAK, MOVE_STRENGTH_SAP, MOVE_POLTERGEIST, MOVE_POWER_WHIP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_FLAPPLE,
        .heldItem = ITEM_WIDE_LENS,
        .ability = ABILITY_HUSTLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_DANCE, MOVE_DUAL_WINGBEAT, MOVE_SUCKER_PUNCH, MOVE_GRAV_APPLE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Cedric[] = {
    {
    .lvl = 1,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Irene[] = {
    {
        .species = SPECIES_APPLETUN,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_RIPEN,
        .lvl = 1,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RECOVER, MOVE_RECYCLE, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_ALCREMIE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SWEET_VEIL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 4, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_DRAINING_KISS, MOVE_ACID_ARMOR, MOVE_STORED_POWER}
    },
    {
        .species = SPECIES_AMOONGUSS,
        .heldItem = ITEM_BLACK_SLUDGE,
        .ability = ABILITY_EFFECT_SPORE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TOXIC, MOVE_SYNTHESIS, MOVE_PROTECT, MOVE_FOUL_PLAY}
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
        .species = SPECIES_WEEZING_GALARIAN,
        .heldItem = ITEM_SHUCA_BERRY,
        .ability = ABILITY_MISTY_SURGE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_WILL_O_WISP, MOVE_FLAMETHROWER, MOVE_SLUDGE_WAVE, MOVE_STRANGE_STEAM}
    },
    {
        .species = SPECIES_WIGGLYTUFF,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_FUR_COAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_FIRE_BLAST, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_FLORGES_WHITE_FLOWER,
        .heldItem = ITEM_FAIRY_GEM,
        .ability = ABILITY_SYMBIOSIS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_WISH, MOVE_PROTECT}
    },
    {
        .species = SPECIES_GARDEVOIR,
        .heldItem = ITEM_FAIRY_GEM,
        .ability = ABILITY_SYNCHRONIZE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 244, 12),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE, MOVE_ENERGY_BALL}
    },
    {
        .species = SPECIES_TOGEKISS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SERENE_GRACE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_THUNDER_WAVE, MOVE_MOONBLAST}
    },
    {
        .species = SPECIES_AROMATISSE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_HEALER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 30, 31),
        .moves = {MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_NASTY_PLOT, MOVE_HIDDEN_POWER}
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 100, 0),
    .lvl = 1,
    .ability = ABILITY_SNOW_WARNING,
    .species = SPECIES_VULPIX_ALOLAN,
    .moves = {MOVE_AURORA_VEIL, MOVE_FREEZE_DRY, MOVE_CONFUSE_RAY, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 100, 0, 100, 0, 0),
    .lvl = 1,
    .ability = ABILITY_SLUSH_RUSH,
    .species = SPECIES_SANDSHREW_ALOLAN,
    .moves = {MOVE_ICICLE_CRASH, MOVE_METAL_CLAW, MOVE_FURY_CUTTER, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 52, 0, 0, 52),
    .lvl = 1,
    .ability = ABILITY_ICE_BODY,
    .species = SPECIES_SNORUNT,
    .moves = {MOVE_WEATHER_BALL, MOVE_FAKE_TEARS, MOVE_CHILLING_WATER, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .ability = ABILITY_SNOW_CLOAK,
    .species = SPECIES_SWINUB,
    .moves = {MOVE_ICE_SHARD, MOVE_TRAILBLAZE, MOVE_DIG, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
        .species = SPECIES_HATTERENE,
        .heldItem = ITEM_BABIRI_BERRY,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_MAGIC_BOUNCE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TRICK_ROOM, MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND},
        .lvl = 1
    },
    {
        .species = SPECIES_INDEEDEE,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_PSYCHIC_SURGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
        .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPER_VOICE, MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL},
        .lvl = 1
    },
    {
        .species = SPECIES_URSALUNA,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
        .moves = {MOVE_PROTECT, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_FACADE},
        .lvl = 1
    },
    {
        .species = SPECIES_AMOONGUSS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RAGE_POWDER, MOVE_SYNTHESIS, MOVE_SUNNY_DAY, MOVE_SPORE},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .lvl = 1,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 1,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .lvl = 1,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_Huey[] = { // Route Boss
    {
        .species = SPECIES_GASTRODON_WEST_SEA,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_STORM_DRAIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EARTH_POWER, MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_SURF}
    },
    {
        .species = SPECIES_VAPOREON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_WISH, MOVE_PROTECT}
    },
    {
        .species = SPECIES_EXCADRILL,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_MOLD_BREAKER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GOGOAT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SAP_SIPPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 92, 0, 0, 0, 168),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_BULK_UP, MOVE_HIGH_HORSEPOWER, MOVE_HORN_LEECH, MOVE_MILK_DRINK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KILOWATTREL,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_WIND_POWER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_JETSTREAM, MOVE_AIR_SLASH, MOVE_THUNDER_WAVE}
    },
    {
        .species = SPECIES_ABSOL,
        .heldItem = ITEM_ABSOLITE,
        .ability = ABILITY_SUPER_LUCK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_NIGHT_SLASH, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Edmond[] = {
    {
        .species = SPECIES_POLTCHAGEIST_COUNTERFEIT,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_HEATPROOF,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(108, 0, 60, 0, 252, 88),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_MEGA_DRAIN, MOVE_SCALD, MOVE_STRENGTH_SAP, MOVE_RAGE_POWDER}
    },
    {
        .species = SPECIES_CLODSIRE,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(116, 64, 164, 0, 0, 164),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_BULLDOZE, MOVE_LIQUIDATION, MOVE_TOXIC, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BRUXISH,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_STRONG_JAW,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 188, 4, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
        .species = SPECIES_SAMUROTT_HISUIAN,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_SHARPNESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 248, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_AQUA_CUTTER, MOVE_CEASELESS_EDGE, MOVE_SACRED_SWORD, MOVE_X_SCISSOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GOLISOPOD,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_EMERGENCY_EXIT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LEECH_LIFE, MOVE_LIQUIDATION, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KINGLER,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CRABHAMMER, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Phillip[] = {
    {
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
    .lvl = 1,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
        .species = SPECIES_FARFETCHD,
        .heldItem = ITEM_LEEK,
        .ability = ABILITY_DEFIANT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_SWORDS_DANCE, MOVE_BODY_SLAM, MOVE_DUAL_WINGBEAT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_AMBIPOM,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TAIL_SLAP, MOVE_TRIPLE_AXEL, MOVE_THROAT_CHOP, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_LIFE_ORB,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_SCRAPPY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_COMET_PUNCH, MOVE_DRAIN_PUNCH, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_IMMUNITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DARKEST_LARIAT, MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_BODY_SLAM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Annika[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_HEAT_ROCK,
        .ability = ABILITY_DROUGHT,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HEAT_WAVE, MOVE_EXTRASENSORY, MOVE_ENERGY_BALL, MOVE_CALM_MIND},
        .lvl = 1
    },
    {
        .species = SPECIES_CHANDELURE,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SHADOW_TAG,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_PSYCHIC},
        .lvl = 1
    },
    {
        .species = SPECIES_VOLCARONA,
        .heldItem = ITEM_CHARTI_BERRY,
        .ability = ABILITY_FLAME_BODY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
        .species = SPECIES_SEVIPER,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHEER_FORCE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_POISON_FANG, MOVE_COIL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_MALAMAR,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_CONTRARY,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SUPERPOWER, MOVE_PSYCHO_CUT, MOVE_KNOCK_OFF, MOVE_LIQUIDATION},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_SABLEYE,
        .heldItem = ITEM_MIRROR_HERB,
        .ability = ABILITY_PRANKSTER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWAGGER, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_POLTERGEIST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
        .species = SPECIES_BRAMBLEGHAST,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_WIND_RIDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK, MOVE_BULLET_SEED, MOVE_TRAILBLAZE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_POISON_HEAL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SPORE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP, MOVE_SEED_BOMB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_BELLOSSOM,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_CHLOROPHYLL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Auron[] = {
    {
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 1,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .lvl = 1,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_DOWNLOAD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_METANG,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_CLEAR_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD, MOVE_POWER_UP_PUNCH, MOVE_TRAILBLAZE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LUCARIO,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_STEADFAST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_METEOR_MASH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Hector[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 1,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 1,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 1,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 1,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 1,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .lvl = 1,
    .species = SPECIES_TREECKO,
    .moves = {MOVE_POUND, MOVE_LEER, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
        .species = SPECIES_KILOWATTREL,
        .heldItem = ITEM_SHARP_BEAK,
        .ability = ABILITY_WIND_POWER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_CUTTER, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .lvl = 1,
    },
    {
        .species = SPECIES_SLOWBRO_GALARIAN,
        .heldItem = ITEM_QUICK_CLAW,
        .ability = ABILITY_QUICK_DRAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_PSYCHIC, MOVE_NASTY_PLOT, MOVE_SCALD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_EXCADRILL,
        .heldItem = ITEM_HARD_STONE,
        .ability = ABILITY_SAND_FORCE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD, MOVE_POISON_JAB, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_SCEPTILE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TECHNICIAN,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_LEAF_BLADE, MOVE_DUAL_CHOP, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_SIMISEAR,
        .heldItem = ITEM_CHARCOAL,
        .ability = ABILITY_BLAZE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 2, 30, 30, 30, 31),
        .moves = {MOVE_HEAT_WAVE, MOVE_GRASS_KNOT, MOVE_PROTECT, MOVE_HIDDEN_POWER},
        .lvl = 1,
    },
    {
        .species = SPECIES_ARAQUANID,
        .heldItem = ITEM_SILVER_POWDER,
        .ability = ABILITY_WATER_BUBBLE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LUNGE, MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .lvl = 1,
    .species = SPECIES_TORCHIC,
    .moves = {MOVE_SCRATCH, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
        .species = SPECIES_KILOWATTREL,
        .heldItem = ITEM_SHARP_BEAK,
        .ability = ABILITY_WIND_POWER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_CUTTER, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .lvl = 1,
    },
    {
        .species = SPECIES_SLOWBRO_GALARIAN,
        .heldItem = ITEM_QUICK_CLAW,
        .ability = ABILITY_QUICK_DRAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_ZEN_HEADBUTT, MOVE_PROTECT, MOVE_LIQUIDATION},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_BLAZIKEN,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_SPEED_BOOST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_ARAQUANID,
        .heldItem = ITEM_SILVER_POWDER,
        .ability = ABILITY_WATER_BUBBLE,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LUNGE, MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_TOEDSCRUEL,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_MYCELIUM_MIGHT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_TAUNT},
        .lvl = 1,
    },
    {
        .species = SPECIES_ZOROARK,
        .heldItem = ITEM_BLACK_GLASSES,
        .ability = ABILITY_ILLUSION,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DARK_PULSE, MOVE_NASTY_PLOT, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB},
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .lvl = 1,
    .species = SPECIES_MUDKIP,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
        .species = SPECIES_KILOWATTREL,
        .heldItem = ITEM_SHARP_BEAK,
        .ability = ABILITY_WIND_POWER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_CUTTER, MOVE_ELECTROWEB, MOVE_VOLT_SWITCH, MOVE_PROTECT},
        .lvl = 1,
    },
    {
        .species = SPECIES_SLOWBRO_GALARIAN,
        .heldItem = ITEM_QUICK_CLAW,
        .ability = ABILITY_QUICK_DRAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_ZEN_HEADBUTT, MOVE_PROTECT, MOVE_LIQUIDATION},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_SWAMPERT,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TORRENT,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_FLIP_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,

    },
    {
        .species = SPECIES_ZOROARK,
        .heldItem = ITEM_BLACK_GLASSES,
        .ability = ABILITY_ILLUSION,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DARK_PULSE, MOVE_NASTY_PLOT, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB},
        .lvl = 1,   
    },
    {
        .species = SPECIES_SCOVILLAIN,
        .heldItem = ITEM_MIRACLE_SEED,
        .ability = ABILITY_CHLOROPHYLL,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .lvl = 1,

    },
    {
        .species = SPECIES_PARASECT,
        .heldItem = ITEM_SPELL_TAG,
        .ability = ABILITY_DRY_SKIN,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHADOW_CLAW, MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,

    }
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .lvl = 1,

    .species = SPECIES_TREECKO,
    .moves = {MOVE_POUND, MOVE_LEER, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
        .species = SPECIES_SLOWKING_GALARIAN,
        .heldItem = ITEM_TWISTED_SPOON,
        .ability = ABILITY_REGENERATOR,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EERIE_SPELL, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT, MOVE_SCALD},
        .lvl = 1,

    },
    {
        .species = SPECIES_PAWMOT,
        .heldItem = ITEM_MAGNET,
        .ability = ABILITY_IRON_FIST,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_FAKE_OUT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,

    },
    {
        .species = SPECIES_MANTINE,
        .heldItem = ITEM_MYSTIC_WATER,
        .ability = ABILITY_WATER_ABSORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SCALD, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_TAILWIND},
        .lvl = 1,   
    },
    {
        .species = SPECIES_SCEPTILE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TECHNICIAN,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_DUAL_CHOP, MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,   
    },
    {
        .species = SPECIES_PYROAR,
        .heldItem = ITEM_CHARCOAL,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_RIVALRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_HEAT_WAVE, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .lvl = 1,   
    },
    {
        .species = SPECIES_RIBOMBEE,
        .heldItem = ITEM_PIXIE_PLATE,
        .ability = ABILITY_HONEY_GATHER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_QUIVER_DANCE, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,

    }
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .lvl = 1,
    .species = SPECIES_TORCHIC,
    .moves = {MOVE_SCRATCH, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
        .species = SPECIES_SLOWKING_GALARIAN,
        .heldItem = ITEM_TWISTED_SPOON,
        .ability = ABILITY_REGENERATOR,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EERIE_SPELL, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT, MOVE_SCALD},
        .lvl = 1,
    },
    {
        .species = SPECIES_HELIOLISK,
        .heldItem = ITEM_SILK_SCARF,
        .ability = ABILITY_DRY_SKIN,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DRAGON_PULSE},
        .lvl = 1,
    },
    {
        .species = SPECIES_CLODSIRE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_WATER_ABSORB,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED),
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_GUNK_SHOT, MOVE_YAWN, MOVE_CHILLING_WATER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_BLAZIKEN,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_SPEED_BOOST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_BELLOSSOM,
        .heldItem = ITEM_MIRACLE_SEED,
        .ability = ABILITY_CHLOROPHYLL,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FIERY_DANCE, MOVE_ENERGY_BALL, MOVE_EARTH_POWER, MOVE_MOONBLAST},
        .lvl = 1,
    },
    {
        .species = SPECIES_LUMINEON,
        .heldItem = ITEM_MYSTIC_WATER,
        .ability = ABILITY_STORM_DRAIN,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_AIR_SLASH, MOVE_SCALD, MOVE_U_TURN, MOVE_ENCORE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .lvl = 1,
    .species = SPECIES_MUDKIP,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
        .species = SPECIES_SLOWKING_GALARIAN,
        .heldItem = ITEM_TWISTED_SPOON,
        .ability = ABILITY_REGENERATOR,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EERIE_SPELL, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT, MOVE_SCALD},
        .lvl = 1,
    },
    {
        .species = SPECIES_PAWMOT,
        .heldItem = ITEM_MAGNET,
        .ability = ABILITY_IRON_FIST,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_FAKE_OUT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_ARBOLIVA,
        .heldItem = ITEM_BIG_ROOT,
        .ability = ABILITY_SEED_SOWER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_HYPER_VOICE, MOVE_EARTH_POWER, MOVE_PROTECT},
        .lvl = 1,
    },
    {
        .species = SPECIES_SWAMPERT,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TORRENT,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_FLIP_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_ORICORIO,
        .heldItem = ITEM_SHARP_BEAK,
        .ability = ABILITY_DANCER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_AIR_SLASH, MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_RIBOMBEE,
        .heldItem = ITEM_PIXIE_PLATE,
        .ability = ABILITY_HONEY_GATHER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_QUIVER_DANCE, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Isaac1[] = {
    {
        .species = SPECIES_UMBREON,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_SYNCHRONIZE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 0, 128),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_CURSE, MOVE_PAYBACK, MOVE_PROTECT, MOVE_WISH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_FLYING_GEM,
        .ability = ABILITY_INNER_FOCUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ACROBATICS, MOVE_ROOST, MOVE_CRUNCH, MOVE_POISON_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_LIGHT_BALL,
        .ability = ABILITY_LIGHTNING_ROD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 248, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FAKE_OUT, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_THUNDER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SWOOBAT,
        .heldItem = ITEM_MAGO_BERRY,
        .ability = ABILITY_SIMPLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_STORED_POWER, MOVE_AIR_SLASH, MOVE_HEAT_WAVE}
    }
};

static const struct TrainerMon sParty_Davis[] = {
    {
        .species = SPECIES_KROKOROK,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MOXIE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_GIRAFARIG,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_SAP_SIPPER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_SIGNAL_BEAM, MOVE_HYPER_VOICE, MOVE_SHADOW_BALL},
        .lvl = 1
    },
    {
        .species = SPECIES_FRAXURE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MOLD_BREAKER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_DANCE, MOVE_DUAL_CHOP, MOVE_IRON_HEAD, MOVE_POISON_JAB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
        .species = SPECIES_LUCARIO,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_INNER_FOCUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH, MOVE_METEOR_MASH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOGEKISS,
        .heldItem = ITEM_SCOPE_LENS,
        .ability = ABILITY_SUPER_LUCK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_CUTTER, MOVE_ROOST, MOVE_DRAINING_KISS, MOVE_THUNDER_WAVE}
    },
    {
        .species = SPECIES_LOPUNNY,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_LIMBER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FAKE_OUT, MOVE_HIGH_JUMP_KICK, MOVE_RETURN, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_FROSMOTH,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_ICE_SCALES,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_BUG_BUZZ}
    }
};

static const struct TrainerMon sParty_Halle[] = {
    {
    .lvl = 1,
    .species = SPECIES_SABLEYE,
    },
    {
    .lvl = 1,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Garrison[] = {
    {
    .lvl = 1,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jackson1[] = {
{
        .species = SPECIES_LIEPARD,
        .ability = ABILITY_PRANKSTER,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ROCKY_HELMET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(168, 0, 132, 208, 4, 0),
        .lvl = 1,
        .moves = {MOVE_ASSIST, MOVE_THIEF, MOVE_COPYCAT, MOVE_ENDURE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_LIEPARD,
        .ability = ABILITY_PRANKSTER,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ROCKY_HELMET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(168, 0, 132, 208, 4, 0),
        .lvl = 1,
        .moves = {MOVE_ASSIST, MOVE_THIEF, MOVE_COPYCAT, MOVE_ENDURE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_LIEPARD,
        .ability = ABILITY_PRANKSTER,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_BRIGHT_POWDER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(168, 0, 132, 208, 4, 0),
        .lvl = 1,
        .moves = {MOVE_ASSIST, MOVE_THIEF, MOVE_COPYCAT, MOVE_ENDURE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_LIEPARD,
        .ability = ABILITY_PRANKSTER,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ROCKY_HELMET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(168, 0, 132, 208, 4, 0),
        .lvl = 1,
        .moves = {MOVE_ASSIST, MOVE_THIEF, MOVE_COPYCAT, MOVE_ENDURE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_SMEARGLE,
        .ability = ABILITY_MOODY,
        .heldItem = ITEM_ROCKY_HELMET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .lvl = 1,
        .moves = {MOVE_BANEFUL_BUNKER, MOVE_TRANSFORM, MOVE_ENDURE, MOVE_REVIVAL_BLESSING},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_DITTO,
        .ability = ABILITY_IMPOSTER,
        .heldItem = ITEM_CHOICE_SCARF,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .lvl = 1,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_RELAXED)
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
        .species = SPECIES_ARCANINE_HISUIAN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ROCK_HEAD,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HEAD_SMASH, MOVE_WILD_CHARGE, MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_MIGHTYENA,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_MOXIE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_SUCKER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_MABOSSTIFF,
        .heldItem = ITEM_MUSCLE_BAND,
        .ability = ABILITY_GUARD_DOG,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRAILBLAZE, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_OUTRAGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_HOUNDOOM,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_EARLY_BIRD,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FLAMETHROWER, MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
        .species = SPECIES_SPIDOPS,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_STAKEOUT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_STICKY_WEB, MOVE_SKITTER_SMACK, MOVE_BRICK_BREAK, MOVE_SILK_TRAP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BARRASKEWDA,
        .heldItem = ITEM_CHOICE_BAND,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_SWIFT_SWIM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_DANCE, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_JELLICENT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_PROTECT, MOVE_RECOVER}
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
        .species = SPECIES_GRANBULL,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_INTIMIDATE,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_CLOSE_COMBAT, MOVE_FIRE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_DACHSBUN,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_WELL_BAKED_BODY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PLAY_ROUGH, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_BOLTUND,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_STRONG_JAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_SYLVEON,
        .heldItem = ITEM_THROAT_SPRAY,
        .ability = ABILITY_PIXILATE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Sophia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Julio[] = {
    {
        .species = SPECIES_KLINKLANG,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_CLEAR_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHIFT_GEAR, MOVE_GEAR_GRIND, MOVE_RETURN, MOVE_VOLT_SWITCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PERRSERKER,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_TOUGH_CLAWS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULLET_PUNCH, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CORVIKNIGHT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_MIRROR_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(80, 176, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_BULK_UP, MOVE_AGILITY, MOVE_ROOST, MOVE_POWER_TRIP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MAGNEZONE,
        .heldItem = ITEM_ELECTRIC_GEM,
        .ability = ABILITY_ANALYTIC,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_CONFUSE_RAY}
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_JIGGLYPUFF,
    .ability = ABILITY_FRIEND_GUARD,
    .moves = {MOVE_METRONOME, MOVE_TOXIC, MOVE_DRAINING_KISS, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TINKATINK,
    .ability = ABILITY_FRIEND_GUARD,
    .moves = {MOVE_FAKE_OUT, MOVE_SWEET_KISS, MOVE_METAL_CLAW, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLEFAIRY,
    .ability = ABILITY_FRIEND_GUARD,
    .moves = {MOVE_METRONOME, MOVE_THUNDER_WAVE, MOVE_DRAINING_KISS, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Brenden[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
    .lvl = 1,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_POISON_POINT,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM},
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 130, 0, 252, 126),
    .lvl = 1,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_GIGA_DRAIN, MOVE_BRINE, MOVE_SLUDGE_BOMB, MOVE_PROTECT},
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_LEAF_STORM, MOVE_JETSTREAM, MOVE_GRASS_KNOT, MOVE_LEECH_SEED},
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    }
};

static const struct TrainerMon sParty_Lilith[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 52, 252, 0, 200),
    .lvl = 1,
    .species = SPECIES_ELDEGOSS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_GIGA_DRAIN, MOVE_LEAF_TORNADO, MOVE_HYPER_VOICE, MOVE_POLLEN_PUFF},
    .nature = TRAINER_PARTY_NATURE(NATURE_BOLD)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
    .lvl = 1,
    .species = SPECIES_APPLETUN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_RIPEN,
    .moves = {MOVE_ENERGY_BALL, MOVE_APPLE_ACID, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER},
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 1,
    .species = SPECIES_FLORAGATO,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_PROTEAN,
    .moves = {MOVE_SEED_BOMB, MOVE_KNOCK_OFF, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH},
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    }
};

static const struct TrainerMon sParty_Cristian[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    .lvl = 1,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_SAPPY_SEED, MOVE_SEED_BOMB, MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF},
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(126, 0, 252, 0, 4, 126),
    .lvl = 1,
    .species = SPECIES_TOEDSCOOL,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_MYCELIUM_MIGHT,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_EARTH_POWER, MOVE_NONE},
    .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    .lvl = 1,
    .species = SPECIES_SCOVILLAIN,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = ABILITY_CHLOROPHYLL,
    .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_GIGA_DRAIN, MOVE_NONE},
    .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    }
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
        .species = SPECIES_GOLURK,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_SHADOW_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PYROAR,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FLARE_BLITZ, MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_WILD_CHARGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOEDSCRUEL,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_MYCELIUM_MIGHT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_CONFUSE_RAY}
    }
};

static const struct TrainerMon sParty_Clarence[] = {
    {
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .lvl = 1,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .lvl = 1,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .lvl = 1,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .lvl = 1,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .lvl = 1,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .lvl = 1,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
        .species = SPECIES_TOEDSCOOL,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_MYCELIUM_MIGHT,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_DOCILE),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_MUD_SHOT, MOVE_MEGA_DRAIN, MOVE_VENOSHOCK, MOVE_STUN_SPORE},
        .lvl = 1,
    },
    {
        .species = SPECIES_WATTREL,
        .ability = ABILITY_WIND_POWER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_DOCILE),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_CUTTER, MOVE_ELECTROWEB, MOVE_CHARGE, MOVE_EERIE_IMPULSE},
        .lvl = 1,
    },
    {
        .species = SPECIES_SLOWPOKE_GALARIAN,
        .ability = ABILITY_OWN_TEMPO,
        .ev = TRAINER_PARTY_EVS(252, 200, 56, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE, MOVE_HEADBUTT, MOVE_WHIRLPOOL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_COMBUSKEN,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_BLAZE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FLAME_CHARGE, MOVE_DOUBLE_KICK, MOVE_AERIAL_ACE, MOVE_FURY_CUTTER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
        .species = SPECIES_WATTREL,
        .ability = ABILITY_WIND_POWER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_DOCILE),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_CUTTER, MOVE_ELECTROWEB, MOVE_CHARGE, MOVE_EERIE_IMPULSE},
        .lvl = 1,
    },
    {
        .species = SPECIES_SLOWPOKE_GALARIAN,
        .ability = ABILITY_OWN_TEMPO,
        .ev = TRAINER_PARTY_EVS(252, 200, 56, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE, MOVE_HEADBUTT, MOVE_WHIRLPOOL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_DRILBUR,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_SAND_FORCE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .moves = {MOVE_ROCK_TOMB, MOVE_AERIAL_ACE, MOVE_PROTECT, MOVE_STOMPING_TANTRUM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_GROVYLE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_OVERGROW,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRAILBLAZE, MOVE_AERIAL_ACE, MOVE_ASSURANCE, MOVE_FURY_CUTTER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_Paxton[] = {
    {
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
        .species = SPECIES_SEVIPER,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_COIL, MOVE_POISON_FANG, MOVE_ICE_FANG, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SPIRITOMB,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_INFILTRATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_WILL_O_WISP, MOVE_DARK_PULSE, MOVE_HEX, MOVE_PAIN_SPLIT}
    },
    {
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_ASSAULT_VEST,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_VOLT_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DISCHARGE, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_DAZZLING_GLEAM}
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
        .species = SPECIES_MAGMORTAR,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_MEGA_LAUNCHER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SEARING_SHOT, MOVE_AURA_SPHERE, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER}
    },
    {
        .species = SPECIES_CERULEDGE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHARPNESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_BITTER_BLADE, MOVE_SHADOW_CLAW, MOVE_SACRED_SWORD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ROTOM_HEAT,
        .heldItem = ITEM_FIGY_BERRY,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH, MOVE_DARK_PULSE}
    }
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
    .lvl = 1,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
        .species = SPECIES_WATTREL,
        .ability = ABILITY_WIND_POWER,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_DOCILE),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_CUTTER, MOVE_ELECTROWEB, MOVE_CHARGE, MOVE_EERIE_IMPULSE},
        .lvl = 1,
    },
    {
        .species = SPECIES_SLOWPOKE_GALARIAN,
        .ability = ABILITY_OWN_TEMPO,
        .ev = TRAINER_PARTY_EVS(252, 200, 56, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE, MOVE_HEADBUTT, MOVE_WHIRLPOOL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_CACNEA,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_SAND_VEIL,
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .moves = {MOVE_TRAILBLAZE, MOVE_FEINT_ATTACK, MOVE_PIN_MISSILE, MOVE_POISON_STING},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_MARSHTOMP,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TORRENT,
        .ev = TRAINER_PARTY_EVS(252, 170, 4, 52, 0, 30),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LIQUIDATION, MOVE_BULLDOZE, MOVE_YAWN, MOVE_AMNESIA},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
        .species = SPECIES_SLOWPOKE_GALARIAN,
        .ability = ABILITY_OWN_TEMPO,
        .ev = TRAINER_PARTY_EVS(252, 200, 56, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE, MOVE_HEADBUTT, MOVE_WHIRLPOOL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_PAWMO,
        .ability = ABILITY_NATURAL_CURE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .moves = {MOVE_SPARK, MOVE_ARM_THRUST, MOVE_FAKE_OUT, MOVE_BITE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_DUCKLETT,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_KEEN_EYE,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_WATER_PULSE, MOVE_AIR_CUTTER, MOVE_ICY_WIND, MOVE_PROTECT},
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_GROVYLE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_OVERGROW,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRAILBLAZE, MOVE_AERIAL_ACE, MOVE_ASSURANCE, MOVE_FURY_CUTTER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
        .species = SPECIES_INDEEDEE_FEMALE,
        .heldItem = ITEM_PSYCHIC_SEED,
        .ability = ABILITY_PSYCHIC_SURGE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FOLLOW_ME, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_DAZZLING_GLEAM}
    },
    {
        .species = SPECIES_ARMAROUGE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_FLASH_FIRE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TRICK_ROOM, MOVE_HEAT_WAVE, MOVE_EXPANDING_FORCE, MOVE_AURA_SPHERE}
    },
    {
        .species = SPECIES_URSALUNA,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .moves = {MOVE_HEADLONG_RUSH, MOVE_FACADE, MOVE_PROTECT, MOVE_DRAIN_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CAMERUPT,
        .heldItem = ITEM_CHARCOAL,
        .ability = ABILITY_DROUGHT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_ERUPTION, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_PROTECT}
    },
    {
        .species = SPECIES_AMOONGUSS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_PROTECT}
    },
    {
        .species = SPECIES_PANGORO,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .moves = {MOVE_DRAIN_PUNCH, MOVE_DARKEST_LARIAT, MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Tiana[] = { // Route Boss
    {
        .species = SPECIES_AXEW,
        .ability = ABILITY_RIVALRY,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_DRAGON_RAGE, MOVE_BITE, MOVE_SCRATCH, MOVE_LEER},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    },
    {
        .species = SPECIES_SNUBBULL,
        .ability = ABILITY_INTIMIDATE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_BITE, MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
    },
    {
        .species = SPECIES_ROOKIDEE,
        .ability = ABILITY_UNNERVE,
        .heldItem = ITEM_SHARP_BEAK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_PECK, MOVE_FURY_ATTACK, MOVE_HONE_CLAWS, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
    },
    {
        .species = SPECIES_CETODDLE,
        .ability = ABILITY_THICK_FAT,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(52, 52, 0, 102, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_ICE_SHARD, MOVE_BULLDOZE, MOVE_YAWN, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    }
};

static const struct TrainerMon sParty_Haley1[] = {
    {
        .species = SPECIES_DELIBIRD,
        .ability = ABILITY_INSOMNIA,
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 198, 102, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_WATER_PULSE, MOVE_CHILLING_WATER, MOVE_AIR_SLASH, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
    },
    {
        .species = SPECIES_CHEWTLE,
        .ability = ABILITY_STRONG_JAW,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_ICE_FANG, MOVE_JAW_LOCK, MOVE_HEADBUTT, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID), //just to lower its attack too :)
    },
    {
        .species = SPECIES_CHARCADET,
        .ability = ABILITY_FLAME_BODY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_FIRE_SPIN, MOVE_NIGHT_SHADE, MOVE_CLEAR_SMOG, MOVE_CONFUSE_RAY},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    },
    {
        .species = SPECIES_WATTREL,
        .ability = ABILITY_COMPETITIVE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_THUNDER_SHOCK, MOVE_VOLT_SWITCH, MOVE_ROOST, MOVE_DUAL_WINGBEAT},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
    },
    {
        .species = SPECIES_ROCKRUFF,
        .ability = ABILITY_STEADFAST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_TACKLE, MOVE_ROCK_SLIDE, MOVE_ROCK_THROW, MOVE_THUNDER_FANG},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    }
};

static const struct TrainerMon sParty_Janice[] = {
    {
        .species = SPECIES_SKIPLOOM,
        .ability = ABILITY_INFILTRATOR,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 150, 0),
        .lvl = 1,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_FAIRY_WIND, MOVE_TAILWIND, MOVE_STRENGTH_SAP},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_MASQUERAIN,
        .ability = ABILITY_INTIMIDATE,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 150, 0),
        .lvl = 1,
        .moves = {MOVE_CHILLING_WATER, MOVE_AIR_CUTTER, MOVE_PSYBEAM, MOVE_MUD_SHOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    },
    {
        .species = SPECIES_PACHIRISU,
        .ability = ABILITY_VOLT_ABSORB,
        .heldItem = ITEM_ORAN_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 140, 0, 100, 0, 0),
        .lvl = 1,
        .moves = {MOVE_SUPER_FANG, MOVE_NUZZLE, MOVE_FAKE_TEARS, MOVE_MUD_SHOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH)
    },
    {
        .species = SPECIES_TOGETIC,
        .ability = ABILITY_SERENE_GRACE,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 100, 0),
        .lvl = 1,
        .moves = {MOVE_JETSTREAM, MOVE_ANCIENT_POWER, MOVE_TRI_ATTACK, MOVE_EXTRASENSORY},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    }
};

static const struct TrainerMon sParty_Vivi[] = {
    {
        .species = SPECIES_WEEZING_GALARIAN,
        .heldItem = ITEM_LEFTOVERS,
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_NEUTRALIZING_GAS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 136, 0, 28, 92),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_HAZE, MOVE_PAIN_SPLIT, MOVE_STRANGE_STEAM}
    },
    {
        .species = SPECIES_RIBOMBEE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SHIELD_DUST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_CALM_MIND, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_DRAINING_KISS}
    },
    {
        .species = SPECIES_EXCADRILL,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ROTOM_WASH,
        .heldItem = ITEM_MAGO_BERRY,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(172, 0, 0, 0, 252, 84),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP}
    },
    {
        .species = SPECIES_GRAFAIAI,
        .heldItem = ITEM_NORMAL_GEM,
        .ability = ABILITY_UNBURDEN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ACROBATICS, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_ENCORE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SYLVEON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_PIXILATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(156, 0, 0, 0, 248, 96),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_WISH}
    }
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
    .lvl = 1,
    .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
    .lvl = 1,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andrea[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Rick[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .species = SPECIES_RELLOR,
        .ability = ABILITY_COMPOUND_EYES,
        .lvl = 1,
            .moves = {MOVE_ROLLOUT, MOVE_TACKLE, MOVE_POUNCE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_BASHFUL),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .species = SPECIES_SIZZLIPEDE,
        .ability = ABILITY_FLAME_BODY,
        .lvl = 1,
        .moves = {MOVE_EMBER, MOVE_BITE, MOVE_LEECH_SEED, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_BASHFUL),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .species = SPECIES_BEEDRILL,
        .ability = ABILITY_SNIPER,
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0,0,0,52,0,0),
        .lvl = 1,
        .moves = {MOVE_FURY_ATTACK, MOVE_BUG_BITE, MOVE_POISON_STING, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    }
};

static const struct TrainerMon sParty_Lyle[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 100, 0, 100, 0, 0),
    .lvl = 1,
    .ability = ABILITY_WHITE_SMOKE,
    .species = SPECIES_SIZZLIPEDE,
    .moves = {MOVE_FLAME_WHEEL, MOVE_BUG_BITE, MOVE_ROLLOUT, MOVE_NONE},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 100, 0, 100, 0, 0),
    .lvl = 1,
    .ability = ABILITY_SPEED_BOOST,
    .species = SPECIES_VENIPEDE,
    .moves = {MOVE_PROTECT, MOVE_BUG_BITE, MOVE_ROLLOUT, MOVE_POISON_TAIL},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 100, 100, 0, 0),
    .lvl = 1,
    .species = SPECIES_SCYTHER,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_U_TURN, MOVE_DUAL_WINGBEAT, MOVE_THIEF, MOVE_QUICK_ATTACK},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 100, 50),
    .lvl = 1,
    .species = SPECIES_BUTTERFREE,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_PSYBEAM, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_AIR_SLASH},
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 50, 100, 100, 0, 0),
    .lvl = 1,
    .species = SPECIES_DURANT,
    .ability = ABILITY_HUSTLE,
    .moves = {MOVE_IRON_HEAD, MOVE_BUG_BITE, MOVE_FURY_CUTTER, MOVE_NONE},
    }
};

static const struct TrainerMon sParty_Jose[] = {
    {
        .species = SPECIES_PARAS,
        .ability = ABILITY_EFFECT_SPORE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 200, 0, 150, 0, 0),
        .lvl = 1,
        .moves = {MOVE_BULLET_SEED, MOVE_BUG_BITE, MOVE_SPORE, MOVE_METAL_CLAW},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_BEAUTIFLY,
        .ability = ABILITY_RIVALRY,
        .gender = TRAINER_MON_FEMALE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 170, 0),
        .lvl = 1,
        .moves = {MOVE_MEGA_DRAIN, MOVE_AIR_CUTTER, MOVE_BUG_BUZZ, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    },
    {
        .species = SPECIES_ARIADOS,
        .ability = ABILITY_SNIPER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 150, 0, 150, 0, 0),
        .lvl = 1,
        .moves = {MOVE_LEECH_LIFE, MOVE_POISON_JAB, MOVE_FOCUS_ENERGY, MOVE_SWORDS_DANCE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_NINJASK,
        .ability = ABILITY_SPEED_BOOST,
        .heldItem = ITEM_FLYING_GEM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 120, 0, 150, 0, 0),
        .lvl = 1,
        .moves = {MOVE_ACROBATICS, MOVE_PROTECT, MOVE_LEECH_LIFE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    }
};

static const struct TrainerMon sParty_Doug[] = {
    {
        .species = SPECIES_NINJASK,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SPEED_BOOST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ACROBATICS, MOVE_PROTECT, MOVE_BATON_PASS, MOVE_X_SCISSOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BEEDRILL,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ability = ABILITY_SNIPER,
        .lvl = 1,
        .friendship = 0,
        .moves = {MOVE_X_SCISSOR, MOVE_ACROBATICS, MOVE_DRILL_RUN, MOVE_FRUSTRATION},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_VESPIQUEN,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_UNNERVE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(48, 0, 104, 0, 252, 104),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_U_TURN, MOVE_SLUDGE_BOMB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KLEAVOR,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SHARPNESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_X_SCISSOR, MOVE_STONE_AXE, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Greg[] = {
    {
        .species = SPECIES_VOLBEAT,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_TAIL_GLOW}
    },
    {
        .species = SPECIES_BUTTERFREE,
        .heldItem = ITEM_AGUAV_BERRY,
        .ability = ABILITY_TINTED_LENS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_QUIVER_DANCE}
    },
    {
        .species = SPECIES_SCOLIPEDE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_BATON_PASS, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LEAVANNY,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_OVERCOAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_CROSS_POISON, MOVE_AERIAL_ACE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Kent[] = {
    {
        .species - SPECIES_ACCELGOR,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_UNBURDEN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BUG_BUZZ, MOVE_DARK_PULSE, MOVE_WATER_SHURIKEN, MOVE_SPIKES}
    },
    {
        .species - SPECIES_YANMEGA,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BUG_BUZZ, MOVE_ANCIENT_POWER, MOVE_PROTECT, MOVE_JETSTREAM}
    },
    {
        .species - SPECIES_RABSCA,
        .heldItem = ITEM_AGUAV_BERRY,
        .ability = ABILITY_SYNCHRONIZE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 0, 16, 0, 252, 236),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_REVIVAL_BLESSING, MOVE_CALM_MIND}
    },
    {
        .species - SPECIES_WORMADAM_TRASH_CLOAK,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_OVERCOAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 68, 0, 188, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BUG_BUZZ, MOVE_FLASH_CANNON, MOVE_QUIVER_DANCE, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_James1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .lvl = 1,
    .species = SPECIES_KLEAVOR,
    .ability = ABILITY_SWARM,
    .moves = {MOVE_STONE_AXE, MOVE_X_SCISSOR, MOVE_U_TURN, MOVE_NONE},
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .lvl = 1,
    .species = SPECIES_SCIZOR,
    .ability = ABILITY_SWARM,
    .moves = {MOVE_BULLET_PUNCH, MOVE_U_TURN, MOVE_NONE, MOVE_NONE},
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
    .lvl = 1,
    .species = SPECIES_SCYTHER,
    .ability = ABILITY_SWARM,
    .moves = {MOVE_U_TURN, MOVE_DUAL_WINGBEAT, MOVE_THIEF, MOVE_QUICK_ATTACK},
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Brice[] = {
    {
        .species = SPECIES_KLEAVOR,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_SHARPNESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_X_SCISSOR, MOVE_STONE_AXE, MOVE_SWORDS_DANCE, MOVE_QUICK_ATTACK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GOLEM_ALOLAN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_GALVANIZE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BODY_SLAM, MOVE_HIGH_HORSEPOWER, MOVE_EXPLOSION, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RHYPERIOR,
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_SOLID_ROCK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_BLAST, MOVE_ROCK_POLISH, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RAMPARDOS,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ROCK_HEAD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SUPERCELL_SLAM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Trent1[] = {
    {
        .species = SPECIES_SUDOWOODO,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_ROCK_HEAD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_WOOD_HAMMER, MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LYCANROC_MIDNIGHT,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_NO_GUARD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_PROTECT, MOVE_CRUNCH, MOVE_STONE_EDGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_STONJOURNER,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_POWER_SPOT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_COALOSSAL,
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ability = ABILITY_STEAM_ENGINE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(244, 0, 0, 12, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_POWER_GEM, MOVE_SCALD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Lenny[] = { // Route Boss
    {
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 1,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Alan[] = {
    {
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 1,
    .species = SPECIES_NOSEPASS,
    },
    {
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Clark[] = {
    {
        .species = SPECIES_GRAVELER,
        .ability = ABILITY_STURDY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 200, 150, 4, 0, 0),
        .lvl = 1,
        .moves = {MOVE_STEALTH_ROCK, MOVE_SELF_DESTRUCT, MOVE_NONE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE) //hes sacrificing his life. so brave
    },
    {
    
        .species = SPECIES_RHYHORN,
        .ability = ABILITY_ROCK_HEAD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 200, 150, 4, 0, 0),
        .lvl = 1,
        .moves = {MOVE_ROCK_BLAST, MOVE_ROAR, MOVE_DRILL_RUN, MOVE_TAKE_DOWN},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    { 
    
        .species = SPECIES_CARKOL,
        .ability = ABILITY_STEAM_ENGINE,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 150, 8, 200, 0),
        .lvl = 1,
        .moves = {MOVE_ANCIENT_POWER, MOVE_INCINERATE, MOVE_SCALD, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    }
};

static const struct TrainerMon sParty_Eric[] = {
    {
        .species = SPECIES_SANDSLASH,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_TOUGH_CLAWS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_STEALTH_ROCK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LYCANROC_MIDDAY,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_KEEN_EYE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ACCELEROCK, MOVE_ROCK_SLIDE, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BASTIODON,
        .heldItem = ITEM_AGUAV_BERRY,
        .ability = ABILITY_FILTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(86, 0, 252, 0, 0, 166),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_HEAVY_SLAM, MOVE_PROTECT, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GIGALITH,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_SOLAR_BEAM},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike2[] = {
    {
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 1,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .lvl = 1,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 1,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
        .species = SPECIES_KABUTOPS,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_BATTLE_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
        .moves = {MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_AQUA_CUTTER, 0/*MOVE_BLIZZARD, make MOVE_ICE_BLADE*/},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MANTINE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SCALD, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_CLODSIRE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_BULLDOZE, MOVE_RECOVER, MOVE_PROTECT, MOVE_GUNK_SHOT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Gerald[] = {
    {
        .species = SPECIES_CHATOT,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PUNK_ROCK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_HIDDEN_POWER, MOVE_CHATTER}
    },
    {
        .species = SPECIES_PORYGON_Z,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_URSALUNA,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_HIGH_HORSEPOWER, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_WYRDEER,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYSHIELD_BASH, MOVE_EARTH_POWER, MOVE_HEADBUTT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Vivian[] = {
    {
        .species = SPECIES_PYROAR,
        .ability = ABILITY_RIVALRY,
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, MOVE_OVERHEAT, MOVE_HYPER_VOICE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    },
    {
        .species = SPECIES_TALONFLAME,
        .ability = ABILITY_GALE_WINGS,
        .heldItem = ITEM_FLYING_GEM,
        .ev = TRAINER_PARTY_EVS(36, 252, 0, 222, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_ACROBATICS, MOVE_FLARE_BLITZ, MOVE_BRAVE_BIRD, MOVE_TAILWIND},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    },
    {
        .species = SPECIES_HEATMOR,
        .ability = ABILITY_FLASH_FIRE,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 200, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_FIRE_SPIN, MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, MOVE_FOCUS_BLAST},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    }
};

static const struct TrainerMon sParty_Danielle[] = {
    {
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SCRAPPY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BOOMBURST, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_SHADOW_BALL}
    },
    {
        .species = SPECIES_ZANGOOSE,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_TOXIC_BOOST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_ICE_PUNCH, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LOPUNNY,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_LIMBER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRIPLE_AXEL, MOVE_HIGH_JUMP_KICK, MOVE_FAKE_OUT, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PURUGLY,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_BODY_SLAM, MOVE_FAKE_OUT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
        .species = SPECIES_SHIFTRY,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_FUR_COAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TAILWIND, MOVE_LEAF_BLADE, MOVE_DARKEST_LARIAT, MOVE_X_SCISSOR}
    },
    {
        .species = SPECIES_GARBODOR,
        .heldItem = ITEM_CHESTO_BERRY,
        .ability = ABILITY_AFTERMATH,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GUNK_SHOT, MOVE_SEED_BOMB, MOVE_REST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_KROOKODILE,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CRUNCH, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_FIRE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PERSIAN_ALOLAN,
        .heldItem = ITEM_WIKI_BERRY,
        .ability = ABILITY_FUR_COAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER_WAVE, MOVE_POWER_GEM, MOVE_HYPER_VOICE, MOVE_DARK_PULSE}
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
        .species = SPECIES_ABSOL,
        .heldItem = ITEM_CHOPLE_BERRY,
        .ability = ABILITY_SHARPNESS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_TOXTRICITY_LOW_KEY,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PUNK_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_PSYCHIC_NOISE},
        .lvl = 1
    },
    {
        .species = SPECIES_CURSOLA,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PERISH_BODY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_POWER_GEM, MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_GIGA_DRAIN},
        .lvl = 1
    },
    {
        .species = SPECIES_OBSTAGOON,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_OBSTRUCT, MOVE_FACADE, MOVE_THROAT_CHOP, MOVE_CLOSE_COMBAT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
        .species = SPECIES_LIEPARD,
        .heldItem = ITEM_MIRROR_HERB,
        .ability = ABILITY_PRANKSTER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_SWAGGER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_INNER_FOCUS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_NASTY_PLOT},
        .lvl = 1
    },
    {
        .species = SPECIES_GOLURK,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .ability = ABILITY_IRON_FIST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SHADOW_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_DRILL_RUN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Flint[] = {
    {
        .species = SPECIES_BASTIODON,
        .heldItem = ITEM_CUSTAP_BERRY,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_METAL_BURST, MOVE_STEALTH_ROCK, MOVE_IRON_DEFENSE, MOVE_BODY_PRESS}
    },
    {
        .species = SPECIES_COPPERAJAH,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRILL_RUN, MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DUGTRIO_ALOLAN,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SAND_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_SWORDS_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Ashley[] = {
    {
        .species = SPECIES_GOODRA_HISUIAN,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SAP_SIPPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 132, 124),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_SANDSLASH_ALOLAN,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_SLUSH_RUSH,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SWORDS_DANCE, MOVE_ICE_SHARD, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PROBOPASS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER_WAVE, MOVE_TRI_ATTACK, MOVE_FLASH_CANNON, MOVE_POWER_GEM}
    }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
        .species = SPECIES_KIRLIA,
        .heldItem = ITEM_EVIOLITE,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_SYNCHRONIZE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 48, 48, 160, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_EXPANDING_FORCE, MOVE_PSYCHIC_TERRAIN, MOVE_CALM_MIND}
    },
    {
        .species = SPECIES_CINCCINO,
        .heldItem = ITEM_LOADED_DICE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_BLAST, MOVE_DOUBLE_SLAP, MOVE_BULLET_SEED, MOVE_TIDY_UP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_FLETCHINDER,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_FLAME_BODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FLARE_BLITZ, MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_HIDDEN_POWER},
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31)
    },
    {
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_LEAFEON,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_SHARPNESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_LEAF_BLADE, MOVE_SLASH, MOVE_X_SCISSOR, MOVE_DOUBLE_EDGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_HONEDGE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_NO_GUARD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 164, 80, 0, 0, 12),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_NIGHT_SLASH, MOVE_SHADOW_SNEAK, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Jonah[] = {
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .lvl = 1,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 1,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Alexa[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 1,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 1,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .lvl = 1,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .lvl = 1,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_PLUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 248, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
        .moves = {MOVE_DISCHARGE, MOVE_MOONBLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT}
    },
    {
        .species = SPECIES_MINUN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MINUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .moves = {MOVE_THUNDER_PUNCH, MOVE_PLAY_ROUGH, MOVE_GRASS_KNOT, MOVE_ENCORE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_PSYCHIC_SEED,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SCALD, MOVE_SLACK_OFF, MOVE_PSYCHIC_TERRAIN, MOVE_CALM_MIND}
    },
    {
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_OWN_TEMPO,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET),
        .moves = {MOVE_EXPANDING_FORCE, MOVE_SCALD, MOVE_CALM_MIND, MOVE_FOCUS_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MANTINE,
        .heldItem = ITEM_WACAN_BERRY,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_ROOST}
    },
    {
        .species = SPECIES_OCTILLERY,
        .heldItem = ITEM_IAPAPA_BERRY,
        .ability = ABILITY_MOODY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PROTECT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .lvl = 1,
    .species = SPECIES_SWABLU,
    .moves = {MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .lvl = 1,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
        .species = SPECIES_CRADILY,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_STORM_DRAIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_EARTH_POWER, MOVE_ANCIENT_POWER, MOVE_SLUDGE_WAVE, MOVE_RECOVER}
    },
    {
        .species = SPECIES_TATSUGIRI,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_STORM_DRAIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DRAGON_PULSE, MOVE_HELPING_HAND, MOVE_HYDRO_PUMP, MOVE_ICY_WIND}
    },
    {
        .species = SPECIES_FLOATZEL,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_WATER_VEIL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SURF, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_ICY_WIND}
    },
    {
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_LIFE_ORB,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE}
    }
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
        .species = SPECIES_GALLADE,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_SHARPNESS,
        .lvl = 1,
        .moves = {MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_FROSLASS,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SNOW_CLOAK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HEX, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_WILL_O_WISP}
    },
    {
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER}
    },
    {
        .species = SPECIES_BASCULEGION_MALE,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_WAVE_CRASH, MOVE_LAST_RESPECTS, MOVE_HEAD_SMASH, MOVE_ICE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MOTHIM,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TINTED_LENS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MILD),
        .moves = {MOVE_BUG_BUZZ, MOVE_JETSTREAM, MOVE_QUIVER_DANCE, MOVE_HIDDEN_POWER},
        .iv = TRAINER_PARTY_IVS(30, 2, 30, 31, 30, 31)
    },
    {
        .species = SPECIES_OINKOLOGNE_FEMALE,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_THICK_FAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 248, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BODY_PRESS, MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_STOCKPILE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
    .lvl = 1,
    .species = SPECIES_RILLABOOM,
    .ability = ABILITY_GRASSY_SURGE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 126, 130, 0, 0),
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    .ability = ABILITY_TECHNICIAN,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_GRASSY_GLIDE, MOVE_SPORE, MOVE_MACH_PUNCH, MOVE_BULLET_SEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
    .lvl = 1,
    .species = SPECIES_EXPLOUD,
    .ability = ABILITY_SCRAPPY,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_TERRAIN_PULSE, MOVE_BOOMBURST, MOVE_FLAMETHROWER, MOVE_HYDRO_PUMP}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
    .lvl = 1,
    .species = SPECIES_HONCHKROW,
    .ability = ABILITY_TAILSTREAM,
    .gender = TRAINER_MON_FEMALE,
    .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_DARK_PULSE, MOVE_HURRICANE, MOVE_KNOCK_OFF, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 252, 62, 126, 0, 62),
    .lvl = 1,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_FLYING_GEM,
    .ability = ABILITY_WIND_RIDER,
    .gender = TRAINER_MON_MALE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_ACROBATICS, MOVE_SUCKER_PUNCH}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(56, 252, 0, 200, 0, 0),
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SHARPEDONITE,
    .ability = ABILITY_SPEED_BOOST,
    .gender = TRAINER_MON_MALE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_WAVE_CRASH, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(252, 0, 120, 0, 18, 120),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_CAMERUPTITE,
    .ability = ABILITY_SOLID_ROCK,
    .gender = TRAINER_MON_MALE,
    .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_ERUPTION, MOVE_EARTH_POWER, MOVE_LAVA_PLUME, MOVE_YAWN}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 1,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .lvl = 1,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .lvl = 1,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .lvl = 1,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .lvl = 1,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .lvl = 1,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .lvl = 1,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .lvl = 1,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 1,
    .species = SPECIES_FEEBAS,
    },
    {
    .lvl = 1,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Dawson[] = { // Route Boss
    {
        .species = SPECIES_FURFROU_DIAMOND_TRIM,
        .ability = ABILITY_FUR_COAT,
        .heldItem = ITEM_CHOICE_BAND,
        .friendship = 200,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_RETURN, MOVE_U_TURN, MOVE_SUCKER_PUNCH, MOVE_WILD_CHARGE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)

    },
    {
        .species = SPECIES_PERSIAN_ALOLAN,
        .ability = ABILITY_TECHNICIAN,
        .heldItem = ITEM_FOCUS_SASH,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SNARL, MOVE_ICY_WIND, MOVE_NASTY_PLOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)

    },
    {
        .species = SPECIES_GHOLDENGO,
        .ability = ABILITY_GOOD_AS_GOLD,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_PROTECT, MOVE_NASTY_PLOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)

    },
    {
        .species = SPECIES_MAGNEMITE,
        .ability = ABILITY_STURDY,
        .heldItem = ITEM_EVIOLITE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 0, 126, 252, 126, 0),
        .lvl = 1,
        .moves = {MOVE_SHOCK_WAVE, MOVE_FLASH_CANNON, MOVE_CHARGE_BEAM, MOVE_TRI_ATTACK},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)

    },
    {
        .species = SPECIES_HITMONLEE,
        .ability = ABILITY_BRUTAL_LEGS,
        .heldItem = ITEM_CHOICE_SCARF,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_TRIPLE_AXEL, MOVE_BLAZE_KICK, MOVE_TROP_KICK},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)

    },
    {
        .species = SPECIES_MAUSHOLD_FAMILY_OF_FOUR,
        .ability = ABILITY_TECHNICIAN,
        .heldItem = ITEM_WIDE_LENS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_POPULATION_BOMB, MOVE_TIDY_UP, MOVE_BEAT_UP, MOVE_PLAY_ROUGH},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)

    }
};

static const struct TrainerMon sParty_Sarah[] = {
    {
        .species = SPECIES_LUDICOLO,
        .ability = ABILITY_SWIFT_SWIM,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 100, 0),
        .lvl = 1,
        .moves = {MOVE_RAIN_DANCE, MOVE_SCALD, MOVE_BUBBLE_BEAM, MOVE_GRASS_PLEDGE},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    },
    {
        .species = SPECIES_BUIZEL,
        .ability = ABILITY_SWIFT_SWIM,
        .heldItem = ITEM_LEPPA_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 150, 0, 100, 0, 0),
        .lvl = 1,
        .moves = {MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_SONIC_BOOM, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET)
    },
    {
        .species = SPECIES_DRIZZILE,
        .ability = ABILITY_SNIPER,
        .gender = TRAINER_MON_FEMALE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 100, 0),
        .lvl = 1,
        .moves = {MOVE_WATER_PLEDGE, MOVE_ICY_WIND, MOVE_WEATHER_BALL, MOVE_MUD_SHOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
};

static const struct TrainerMon sParty_Darian[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 200, 100, 0, 0),
    .lvl = 1,
    .ability = ABILITY_LIGHTNING_ROD,
    .species = SPECIES_GOLDEEN,
    .moves = {MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_SCALE_SHOT, MOVE_FLIP_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 200, 100, 0, 0),
    .lvl = 1,
    .ability = ABILITY_ADAPTABILITY,
    .species = SPECIES_BASCULIN_RED_STRIPED,
    .moves = {MOVE_AQUA_JET, MOVE_DIVE, MOVE_SCALE_SHOT, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 200, 100, 0, 0),
    .lvl = 1,
    .ability = ABILITY_SHARPNESS,
    .species = SPECIES_VELUZA,
    .moves = {MOVE_AQUA_CUTTER, MOVE_FILLET_AWAY, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(0, 0, 200, 100, 0, 0),
    .lvl = 1,
    .ability = ABILITY_PROPELLER_TAIL,
    .species = SPECIES_ARROKUDA,
    .moves = {MOVE_PECK, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Hailey[] = {
    {
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_WHITE_HERB,
        .ability = ABILITY_SKILL_LINK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 176, 0, 176, 156, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .moves = {MOVE_ICICLE_CRASH, MOVE_ROCK_BLAST, MOVE_BUBBLE_BEAM, MOVE_SHELL_SMASH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GOREBYSS,
        .heldItem = ITEM_WHITE_HERB,
        .ability = ABILITY_SWIFT_SWIM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BUBBLE_BEAM, MOVE_DAZZLING_GLEAM, MOVE_SIGNAL_BEAM, MOVE_TOXIC}
    },
    {
        .species = SPECIES_DUGTRIO,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_ARENA_TRAP,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_SLIDE, MOVE_HIGH_HORSEPOWER, MOVE_STEALTH_ROCK, MOVE_AERIAL_ACE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Chandler[] = {
    {
        .species = SPECIES_MAREANIE,
        .heldItem = ITEM_BLACK_SLUDGE,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_MERCILESS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(244, 0, 252, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PROTECT, MOVE_SCALD, MOVE_RECOVER, MOVE_TOXIC}
    },
    {
        .species = SPECIES_ARROKUDA,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICE_FANG, MOVE_NONE, MOVE_NONE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_GRAPPLOCT,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_LIMBER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 244, 0, 0, 0, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_BRUTAL_SWING},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
        .species = SPECIES_WYRDEER,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_SAP_SIPPER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .moves = {MOVE_PSYSHIELD_BASH, MOVE_HIDDEN_POWER, MOVE_MEGAHORN, MOVE_SHADOW_BALL},
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31)
    },
    {
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_WIGGLYTUFF,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_FUR_COAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_FIRE_BLAST, MOVE_PSYCHIC}
    }
};

static const struct TrainerMon sParty_Joseph[] = {
    {
        .species = SPECIES_TOXTRICITY,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_PUNK_ROCK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_SHIFT_GEAR}
    },
    {
        .species = SPECIES_EXPLOUD,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_SCRAPPY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BOOMBURST, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_EXTRASENSORY}
    },
    {
        .species = SPECIES_PRIMARINA,
        .heldItem = ITEM_THROAT_SPRAY,
        .ability = ABILITY_LIQUID_VOICE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 248, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 3, 31, 31, 30, 30),
        .moves = {MOVE_BOOMBURST, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_HIDDEN_POWER}
    }
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
        .species = SPECIES_MAGNEZONE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ANALYTIC,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_CONFUSE_RAY}
    },
    {
        .species = SPECIES_EELEKTROSS,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DISCHARGE, MOVE_GIGA_DRAIN, MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE}
    },
    {
        .species = SPECIES_LUCARIO,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_INNER_FOCUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 248, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE}
    }
};

static const struct TrainerMon sParty_Marcos[] = {
    {
        .species = SPECIES_CHATOT,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_PUNK_ROCK,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 31),
        .moves = {MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_HIDDEN_POWER}
    },
    {
        .species = SPECIES_FLYGON,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 244, 248, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_BOOMBURST, MOVE_BUG_BUZZ, MOVE_EARTH_POWER, MOVE_DRAGON_PULSE}
    },
    {
        .species = SPECIES_ZEBSTRIKA,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SAP_SIPPER,
        .lvl = 1,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_SUPERCELL_SLAM, MOVE_DOUBLE_KICK, MOVE_TRAILBLAZE},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    }
};

static const struct TrainerMon sParty_Rhett[] = {
    {
        .species = SPECIES_PAWMOT,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SCRAFTY,
        .heldItem = ITEM_ROSELI_BERRY,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_KNOCK_OFF, MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOXICROAK,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_DRY_SKIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .moves = {MOVE_NASTY_PLOT, MOVE_AURA_SPHERE, MOVE_SLUDGE_WAVE, MOVE_SUCKER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Tyron[] = {
    {
        .species = SPECIES_MABOSSTIFF,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_GUARD_DOG,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_OUTRAGE, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_ICE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LYCANROC_DUSK,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_TOUGH_CLAWS,
        .lvl = 1,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_MANECTRIC,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_STATIC,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DISCHARGE, MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_SIGNAL_BEAM}
    }
};

static const struct TrainerMon sParty_Celina[] = {
    {
        .species = SPECIES_PARASECT,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_DRY_SKIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_LEECH_LIFE, MOVE_LEECH_SEED, MOVE_SPORE, MOVE_BULLET_SEED},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TREVENANT,
        .heldItem = ITEM_FIGY_BERRY,
        .ability = ABILITY_HARVEST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(236, 0, 16, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_CURSE, MOVE_SUBSTITUTE}
    },
    {
        .species = SPECIES_FLORGES_WHITE_FLOWER,
        .heldItem = ITEM_PIXIE_PLATE,
        .ability = ABILITY_FLOWER_VEIL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_WISH, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Bianca[] = {
    {
        .species = SPECIES_MILTANK,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SCRAPPY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_BODY_SLAM, MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_BODY_PRESS},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_POLTEAGEIST,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_WEAK_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SHELL_SMASH, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_STRENGTH_SAP}
    },
    {
        .species = SPECIES_ROTOM_FROST,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_VOLT_SWITCH, MOVE_DARK_PULSE, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Hayden[] = {
    {
        .species = SPECIES_HOUNDOOM,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_FLASH_FIRE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FLAMETHROWER, MOVE_DESTINY_BOND, MOVE_DARK_PULSE, MOVE_NASTY_PLOT}
    },
    {
        .species = SPECIES_CERULEDGE,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_WEAK_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_BITTER_BLADE, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_INTIMIDATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FIRE_FANG, MOVE_MORNING_SUN, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Sophie[] = {
    {
        .species = SPECIES_CARNIVINE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 31, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS, MOVE_HIDDEN_POWER}
    },
    {
        .species = SPECIES_SIMISAGE,
        .heldItem = ITEM_GRASS_GEM,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_OVERGROW,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SEED_BOMB, MOVE_GUNK_SHOT, MOVE_ACROBATICS, MOVE_BRICK_BREAK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DHELMISE,
        .heldItem = ITEM_OCCA_BERRY,
        .ability = ABILITY_STEELWORKER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ANCHOR_SHOT, MOVE_POLTERGEIST, MOVE_POWER_WHIP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_INNER_FOCUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LEECH_LIFE, MOVE_CROSS_POISON, MOVE_DUAL_WINGBEAT, MOVE_ROOST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TALONFLAME,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_GALE_WINGS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_FLAME_CHARGE, MOVE_U_TURN, MOVE_STEEL_WING},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ROTOM_FAN,
        .heldItem = ITEM_AIR_BALLOON,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 248, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_DARK_PULSE}
    }
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
        .species = SPECIES_GRENINJA,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TORRENT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_WATER_SHURIKEN, MOVE_ICE_BEAM, MOVE_SLUDGE_WAVE, MOVE_DARK_PULSE}
    },
    {
        .species = SPECIES_BELLIBOLT,
        .heldItem = ITEM_SHUCA_BERRY,
        .ability = ABILITY_ELECTROMORPHOSIS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SLACK_OFF, MOVE_WATER_PULSE, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
        .species = SPECIES_MAMOSWINE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_THICK_FAT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_TRAILBLAZE, MOVE_ICE_FANG, MOVE_IRON_HEAD, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BOLTUND,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_STRONG_JAW,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_PLAY_ROUGH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BRAVIARY_HISUIAN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_TINTED_LENS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_PSYCHIC}
    }
};

static const struct TrainerMon sParty_Angelina[] = {
    {
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
        .species = SPECIES_OMASTAR,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_WEAK_ARMOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_POWER_GEM, MOVE_SURF, MOVE_ICE_BEAM, MOVE_SPIKES}
    },
    {
        .species = SPECIES_ARAQUANID,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_WATER_BUBBLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(188, 252, 68, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_TRAILBLAZE, MOVE_STICKY_WEB},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_ADAPTABILITY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_LIQUIDATION, MOVE_X_SCISSOR},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_QUAGSIRE,
        .heldItem = ITEM_RINDO_BERRY,
        .ability = ABILITY_UNAWARE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(180, 120, 136, 0, 0, 72),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_AVALANCHE, MOVE_LIQUIDATION, MOVE_COUNTER, MOVE_RECOVER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
        .species = SPECIES_CLEFABLE,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_MAGIC_GUARD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_STEALTH_ROCK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
        .species = SPECIES_WEEZING_GALARIAN,
        .heldItem = ITEM_IAPAPA_BERRY,
        .ability = ABILITY_NEUTRALIZING_GAS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(236, 0, 4, 0, 96, 172),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_STRANGE_STEAM, MOVE_FIRE_BLAST, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP}
    },
    {
        .species = SPECIES_TOGEKISS,
        .heldItem = ITEM_KINGS_ROCK,
        .ability = ABILITY_SERENE_GRACE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_FIRE_BLAST, MOVE_ROOST}
    },
    {
        .species = SPECIES_GARDEVOIR,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_TRACE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AURA_SPHERE, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_DESTINY_BOND}
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
        .species = SPECIES_DRAGONAIR,
        .heldItem = ITEM_FLAME_ORB,
        .ability = ABILITY_MARVEL_SCALE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 248, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER_WAVE, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_PROTECT}
    },
    {
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_DOWNLOAD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_THUNDERBOLT, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_DUSCLOPS,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_PRESSURE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(240, 0, 20, 0, 0, 248),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
        .species = SPECIES_MURKROW,
        .heldItem = ITEM_AGUAV_BERRY,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER_WAVE, MOVE_SWAGGER, MOVE_FOUL_PLAY, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .lvl = 1,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .lvl = 1,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .lvl = 1,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .lvl = 1,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pete[] = {
    {
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
    .lvl = 1,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_CLEAR_BODY,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_TOXIC_SPIKES},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_MILOTIC,
        .ability = ABILITY_REGENERATOR,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 126, 0, 0, 126),
        .lvl = 1,
        .moves = {MOVE_FLIP_TURN, MOVE_AQUA_RING, MOVE_PAIN_SPLIT, MOVE_PLAY_ROUGH},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_SLOWBRO,
        .ability = ABILITY_OWN_TEMPO,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SLOWBRONITE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_PSYCHIC, MOVE_FIRE_BLAST, MOVE_ICE_BEAM},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    }
};

static const struct TrainerMon sParty_Josue[] = {
    {
        .species = SPECIES_BRAVIARY_HISUIAN,
        .ability = ABILITY_TINTED_LENS,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .lvl = 1,
        .moves = {MOVE_ESPER_WING, MOVE_JETSTREAM, MOVE_HEAT_WAVE, MOVE_TAILWIND},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_INTIMIDATE,
        .friendship = 200,
        .heldItem = ITEM_ASSAULT_VEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 126, 0, 0, 126),
        .lvl = 1,
        .moves = {MOVE_LIQUIDATION, MOVE_BOUNCE, MOVE_STONE_EDGE, MOVE_LASH_OUT},
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_ARAQUANID,
        .ability = ABILITY_WATER_BUBBLE,
        .friendship = 200,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_PINSIRITE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_LUNGE, MOVE_SKITTER_SMACK, MOVE_AERIAL_ACE},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    }
};

static const struct TrainerMon sParty_Camron[] = {
    {
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
        .species = SPECIES_POLITOED,
        .ability = ABILITY_DRIZZLE,
        .friendship = 200,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_HYPNOSIS, MOVE_RAIN_DANCE},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_LAPRAS,
        .ability = ABILITY_WATER_ABSORB,
        .friendship = 200,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, MOVE_DRAGON_PULSE, MOVE_RAIN_DANCE},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_VAPOREON,
        .ability = ABILITY_WATER_ABSORB,
        .friendship = 200,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 252, 0),
        .lvl = 1,
        .moves = {MOVE_SCALD, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_PROTECT},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    }
};

static const struct TrainerMon sParty_Carolina[] = {
    {
        .species = SPECIES_GOLDUCK,
        .ability = ABILITY_SWIFT_SWIM,
        .friendship = 200,
        .heldItem = ITEM_SITRUS_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(108, 0, 8, 144, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_NASTY_PLOT},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_MANTINE,
        .ability = ABILITY_STORM_DRAIN,
        .friendship = 200,
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .lvl = 1,
        .moves = {MOVE_HYDRO_PUMP, MOVE_AIR_SLASH, MOVE_SUBSTITUTE, MOVE_TOXIC},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    },
    {
        .species = SPECIES_FERALIGATR,
        .ability = ABILITY_SHEER_FORCE,
        .friendship = 200,
        .heldItem = ITEM_LIFE_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .lvl = 1,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_TRAILBLAZE, MOVE_DRAGON_DANCE},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    }
};

static const struct TrainerMon sParty_Elijah[] = {
    {
        .species = SPECIES_HONCHKROW,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TAILSTREAM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 192, 0, 164, 152, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_NAIVE),
        .moves = {MOVE_AIR_SLASH, MOVE_SUCKER_PUNCH, MOVE_BRAVE_BIRD, MOVE_HEAT_WAVE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_BRAVIARY_HISUIAN,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SHEER_FORCE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 248, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_HYPER_VOICE, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_JUMPLUFF,
        .heldItem = ITEM_FLYING_GEM,
        .ability = ABILITY_CHLOROPHYLL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 180, 0, 0, 80),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SWORDS_DANCE, MOVE_SEED_BOMB, MOVE_ACROBATICS, MOVE_U_TURN},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
        .species = SPECIES_WHIMSICOTT,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TAILWIND, MOVE_TAUNT, MOVE_ENCORE, MOVE_MOONBLAST}
    },
    {
        .species = SPECIES_SAWSBUCK_SUMMER,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SERENE_GRACE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_HEADBUTT, MOVE_ZEN_HEADBUTT, MOVE_HORN_LEECH, MOVE_WILD_CHARGE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ARBOLIVA,
        .heldItem = ITEM_AGUAV_BERRY,
        .ability = ABILITY_HARVEST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_STRENGTH_SAP}
    }
};

static const struct TrainerMon sParty_Bryan[] = {
    {
        .species = SPECIES_DUGTRIO,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_SAND_VEIL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_STEALTH_ROCK, MOVE_STOMPING_TANTRUM, MOVE_NIGHT_SLASH, MOVE_FURY_SWIPES},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DRACOVISH,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_SAND_RUSH,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FISHIOUS_REND, MOVE_LEECH_LIFE, MOVE_IRON_HEAD, MOVE_ICE_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RAMPARDOS,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_MOLD_BREAKER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Branden[] = {
    {
        .species = SPECIES_VICTREEBEL,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_CHLOROPHYLL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LEECH_LIFE, MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TANGROWTH,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_REGENERATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_MORNING_SUN, MOVE_SLEEP_POWDER}
    },
    {
        .species = SPECIES_SHIFTRY,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_WIND_RIDER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SUCKER_PUNCH, MOVE_LEAF_BLADE, MOVE_WICKED_BLOW, MOVE_ROCK_SLIDE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Bryant[] = {
    {
        .species = SPECIES_PYROAR,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SCORCHATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_HYPER_VOICE, MOVE_SOLAR_BEAM, MOVE_HEAT_WAVE, MOVE_DARK_PULSE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DARMANITAN_STANDARD_MODE,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_GORILLA_TACTICS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, MOVE_CLOSE_COMBAT}
    },
    {
        .species = SPECIES_CENTISKORCH,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_FLASH_FIRE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FIRE_LASH, MOVE_SOLAR_BLADE, MOVE_SKITTER_SMACK, MOVE_THUNDER_FANG},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Shayla[] = {
    {
        .species = SPECIES_SUNFLORA,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_DROUGHT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_FLAME_BURST, MOVE_GROWTH}
    },
    {
        .species = SPECIES_WHIMSICOTT,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_TAILWIND, MOVE_TOXIC, MOVE_ENCORE, MOVE_MOONBLAST},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_MARACTUS,
        .heldItem = ITEM_MIRACLE_SEED,
        .ability = ABILITY_CHLOROPHYLL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SPIKY_SHIELD, MOVE_LEECH_SEED, MOVE_SOLAR_BEAM, MOVE_PETAL_DANCE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Kyra[] = {
    {
    .lvl = 1,
    .species = SPECIES_DODUO,
    },
    {
    .lvl = 1,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
    .lvl = 1,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 1,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
    .lvl = 1,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 1,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Helene[] = {
    {
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 1,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Devan[] = {
    {
        .species = SPECIES_GOLEM_ALOLAN,
        .ability = ABILITY_GALVANIZE,
        .heldItem = ITEM_FOCUS_SASH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(100, 100, 0, 0, 0, 4),
        .lvl = 1,
        .moves = {MOVE_HEAVY_SLAM, MOVE_SELF_DESTRUCT, MOVE_TACKLE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_CLODSIRE,
        .ability = ABILITY_WATER_ABSORB,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(100, 100, 0, 0, 0, 100),
        .lvl = 1,
        .moves = {MOVE_LIQUIDATION, MOVE_STOMPING_TANTRUM, MOVE_YAWN, MOVE_POISON_JAB},
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH)
    },
    {
        .species = SPECIES_TYRUNT,
        .ability = ABILITY_STRONG_JAW,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 160, 0, 0),
        .lvl = 1,
        .moves = {MOVE_BITE, MOVE_POISON_FANG, MOVE_FIRE_FANG, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
};

static const struct TrainerMon sParty_Johnson[] = {
    {
        .species = SPECIES_RATICATE,
        .ability = ABILITY_GUTS,
        .heldItem = ITEM_FLAME_ORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 200, 0, 0),
        .lvl = 1,
        .moves = {MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_NONE, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_WATCHOG,
        .ability = ABILITY_KEEN_EYE,
        .gender = TRAINER_MON_FEMALE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 200, 0, 0),
        .lvl = 1,
        .moves = {MOVE_CONFUSE_RAY, MOVE_HYPNOSIS, MOVE_HYPER_FANG, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_QUIET)
    },
    {
        .species = SPECIES_LECHONK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 100, 0, 150, 0, 0),
        .lvl = 1,
        .moves = {MOVE_TAKE_DOWN, MOVE_TRAILBLAZE, MOVE_CHILLING_WATER, MOVE_ENDEAVOR},
        .nature = TRAINER_PARTY_NATURE(NATURE_BASHFUL)
    },
};

static const struct TrainerMon sParty_Melina[] = {
    {
        .species = SPECIES_BOLTUND,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_STRONG_JAW,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_EELEKTRIK,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 4, 0, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SUPER_FANG, MOVE_TOXIC, MOVE_COIL, MOVE_DISCHARGE}
    },
    {
        .species = SPECIES_DURALUDON,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_HEAVY_METAL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_SNARL}
    }
};

static const struct TrainerMon sParty_Brandi[] = {
    {
        .species = SPECIES_CLEFABLE,
        .heldItem = ITEM_LUM_BERRY,
        .ability = ABILITY_UNAWARE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_TOXIC, MOVE_MOONLIGHT}
    },
    {
        .species = SPECIES_ELDEGOSS,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_EFFECT_SPORE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SYNTHESIS, MOVE_SUNNY_DAY, MOVE_GROWTH, MOVE_GIGA_DRAIN}
    },
    {
        .species = SPECIES_SYLVEON,
        .heldItem = ITEM_THROAT_SPRAY,
        .ability = ABILITY_PIXILATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_WISH, MOVE_CALM_MIND, MOVE_MYSTICAL_FIRE}
    }
};

static const struct TrainerMon sParty_Aisha[] = {
    {
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_NO_GUARD,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_ICE_PUNCH, MOVE_BULLET_PUNCH, MOVE_THROAT_CHOP},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .ability = ABILITY_WATER_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_LIQUIDATION, MOVE_EARTHQUAKE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_PANGORO,
        .heldItem = ITEM_IAPAPA_BERRY,
        .ability = ABILITY_IRON_FIST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DARKEST_LARIAT, MOVE_GUNK_SHOT, MOVE_BULLET_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .lvl = 1,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
        .species = SPECIES_PINCURCHIN,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_ELECTRIC_SURGE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RISING_VOLTAGE, MOVE_SCALD, MOVE_THUNDER_WAVE, MOVE_RECOVER}
    },
    {
        .species = SPECIES_EELEKTROSS,
        .heldItem = ITEM_ASSAULT_VEST,
        .ability = ABILITY_LEVITATE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DRAGON_CLAW, MOVE_AQUA_TAIL, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_RAICHU_ALOLAN,
        .heldItem = ITEM_CHOICE_SPECS,
        .ability = ABILITY_SURGE_SURFER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_RISING_VOLTAGE, MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_VOLT_SWITCH}
    },
    {
        .species = SPECIES_HELIOLISK,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_DRY_SKIN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_GLARE, MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_VOLT_SWITCH}
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
        .species = SPECIES_ORICORIO,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_DANCER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
        .moves = {MOVE_QUIVER_DANCE, MOVE_REVELATION_DANCE, MOVE_AIR_SLASH, MOVE_HIDDEN_POWER}
    },
    {
        .species = SPECIES_CHANDELURE,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_FLASH_FIRE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_FLAMETHROWER, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_CENTISKORCH,
        .heldItem = ITEM_SHELL_BELL,
        .ability = ABILITY_WHITE_SMOKE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_COIL, MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_FLAREON,
        .heldItem = ITEM_TOXIC_ORB,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
        .species = SPECIES_WHIMSICOTT,
        .heldItem = ITEM_KEBIA_BERRY,
        .ability = ABILITY_PRANKSTER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TAILWIND, MOVE_LEECH_SEED, MOVE_TAUNT, MOVE_PSYCHIC}
    },
    {
        .species = SPECIES_ARAQUANID,
        .heldItem = ITEM_CHOICE_BAND,
        .ability = ABILITY_WATER_BUBBLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_CRUNCH, MOVE_TRAILBLAZE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
        .species = SPECIES_CRAWDAUNT,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_ADAPTABILITY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CRABHAMMER, MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_AQUA_JET},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_BEWEAR,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_FLUFFY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_EARTHQUAKE, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_SYLVEON,
        .heldItem = ITEM_THROAT_SPRAY,
        .ability = ABILITY_PIXILATE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND, MOVE_PSYSHOCK},
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_PURE_POWER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FAKE_OUT, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_BULLET_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_PUNCHING_GLOVE,
        .ability = ABILITY_NO_GUARD,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULK_UP, MOVE_DYNAMIC_PUNCH, MOVE_DRAIN_PUNCH, MOVE_FISSURE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    },
    {
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_NORMAL_GEM,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_UNBURDEN,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_FAKE_OUT, MOVE_HIGH_JUMP_KICK, MOVE_BLAZE_KICK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .lvl = 1,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 1,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
        .species = SPECIES_SLOWPOKE_GALARIAN,
        .ability = ABILITY_OWN_TEMPO,
        .ev = TRAINER_PARTY_EVS(252, 200, 56, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE, MOVE_HEADBUTT, MOVE_WHIRLPOOL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_HELIOPTILE,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_DRY_SKIN,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_ELECTROWEB, MOVE_GRASS_KNOT},
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_CLODSIRE,
        .ability = ABILITY_POISON_POINT,
        .ev = TRAINER_PARTY_EVS(10, 10, 10, 10, 50, 10),
        .moves = {MOVE_ROCK_TOMB, MOVE_ACID_SPRAY, MOVE_POISON_TAIL, MOVE_MUD_SHOT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_COMBUSKEN,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_BLAZE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_FLAME_CHARGE, MOVE_DOUBLE_KICK, MOVE_AERIAL_ACE, MOVE_FURY_CUTTER},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
        .species = SPECIES_SLOWPOKE_GALARIAN,
        .ability = ABILITY_OWN_TEMPO,
        .ev = TRAINER_PARTY_EVS(252, 200, 56, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE, MOVE_HEADBUTT, MOVE_WHIRLPOOL},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
    },
    {
        .species = SPECIES_DOLLIV,
        .heldItem = ITEM_ORAN_BERRY,
        .ability = ABILITY_EARLY_BIRD,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_TERRAIN_PULSE, MOVE_HELPING_HAND, MOVE_MEGA_DRAIN, MOVE_CHARM},
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_PAWMO,
        .ability = ABILITY_NATURAL_CURE,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .moves = {MOVE_SPARK, MOVE_ARM_THRUST, MOVE_FAKE_OUT, MOVE_BITE},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS)
    },
    {
        .species = SPECIES_MARSHTOMP,
        .heldItem = ITEM_EXPERT_BELT,
        .ability = ABILITY_TORRENT,
        .ev = TRAINER_PARTY_EVS(252, 170, 4, 52, 0, 30),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_LIQUIDATION, MOVE_BULLDOZE, MOVE_YAWN, MOVE_AMNESIA},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        }
};

static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_ArchieMuseum[] = {
    {
        .species = SPECIES_PELIPPER,
        .heldItem = ITEM_DAMP_ROCK,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_DRIZZLE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 4, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_PROTECT, MOVE_ROOST, MOVE_SCALD, MOVE_HURRICANE}
    },
    {
        .species = SPECIES_BEARTIC,
        .heldItem = ITEM_SITRUS_BERRY,
        .ability = ABILITY_SWIFT_SWIM,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_BRICK_BREAK},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_SPEED_BOOST,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_PROTECT, MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_CRUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_DHELMISE,
        .heldItem = ITEM_ROCKY_HELMET,
        .ability = ABILITY_STEELWORKER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_SYNTHESIS, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_LEFTOVERS,
        .ability = ABILITY_VOLT_ABSORB,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(88, 0, 172, 0, 0, 248),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SCALD, MOVE_VOLT_SWITCH, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_FLYING_GEM,
        .ability = ABILITY_INFILTRATOR,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(8, 248, 0, 252, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ACROBATICS, MOVE_CROSS_POISON, MOVE_U_TURN, MOVE_PROTECT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_CourtneyMtChimney[] = {
    {
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_EJECT_PACK,
        .ability = ABILITY_FLASH_FIRE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_SCORCHING_SANDS}
    },
    {
        .species = SPECIES_SCOVILLAIN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 164, 0, 252, 92, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_LONELY),
        .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_ZEN_HEADBUTT},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TYPHLOSION,
        .heldItem = ITEM_CHOICE_SCARF,
        .ability = ABILITY_FLASH_FIRE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_ERUPTION, MOVE_EXTRASENSORY, MOVE_SHADOW_BALL, MOVE_SCORCHING_SANDS}
    }
};

static const struct TrainerMon sParty_CourtneyMeteorFalls[] = {
    {
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_FOCUS_SASH,
        .ability = ABILITY_DROUGHT,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_HYPNOSIS, MOVE_NASTY_PLOT}
    },
    {
        .species = SPECIES_SCOVILLAIN,
        .heldItem = ITEM_LIFE_ORB,
        .ability = ABILITY_CHLOROPHYLL,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 30, 30, 30, 31, 30),
        .moves = {MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER, MOVE_GROWTH}
    },
    {
        .species = SPECIES_CHANDELURE,
        .heldItem = ITEM_SPELL_TAG,
        .ability = ABILITY_SHADOW_TAG,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SHADOW_BALL, MOVE_HEAT_WAVE, MOVE_ENERGY_BALL, MOVE_SUBSTITUTE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_GruntMeteorFalls[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
        .species = SPECIES_ARCANINE_HISUIAN,
        .ability = ABILITY_ROCK_HEAD,
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_RAGING_FURY, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY)
    },
    {
        .species = SPECIES_BLAZIKEN,
        .ability = ABILITY_SPEED_BOOST,
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_BLAZE_KICK, MOVE_HIGH_JUMP_KICK, MOVE_PROTECT, MOVE_BRAVE_BIRD},
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT)
    },
    {
        .species = SPECIES_HOUNDOOM,
        .ability = ABILITY_FLASH_FIRE,
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_OVERHEAT, MOVE_DARK_PULSE, MOVE_SOLAR_BEAM, MOVE_NONE},
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID)
    },
    {
        .species = SPECIES_MAGMAR,
        .ability = ABILITY_FLAME_BODY,
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .moves = {MOVE_HEAT_WAVE, MOVE_PSYCHIC, MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST)
    }
};

static const struct TrainerMon sParty_Darius[] = {
    {
        .species = SPECIES_BISHARP,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_INNER_FOCUS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_PSYCHO_CUT, MOVE_SUCKER_PUNCH},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_TOGEDEMARU,
        .heldItem = ITEM_CUSTAP_BERRY,
        .ability = ABILITY_STURDY,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ZING_ZAP, MOVE_IRON_HEAD, MOVE_ENDEAVOR, MOVE_SPIKY_SHIELD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
        .species = SPECIES_ORTHWORM,
        .heldItem = ITEM_AGUAV_BERRY,
        .ability = ABILITY_EARTH_EATER,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_IRON_HEAD},
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    }
};

static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .lvl = 1,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .lvl = 1,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .lvl = 1,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .lvl = 1,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .lvl = 1,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .lvl = 1,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .lvl = 1,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 1,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
    .lvl = 1,
    .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
    .lvl = 1,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 1,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
    .lvl = 1,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .lvl = 1,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .lvl = 1,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 1,
    .species = SPECIES_FLYGON,
    .ability = ABILITY_DRAGONFLY,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_BUG_BUZZ, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 1,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_FLAME_WHEEL, MOVE_DOUBLE_KICK, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Steven_GraniteCave[] = { // team kinda suck ass ngl
    {
        .species = SPECIES_PINCURCHIN,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ability = ABILITY_ELECTRIC_SURGE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(240, 0, 0, 0, 244, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_SPIKES, MOVE_ACUPRESSURE, MOVE_SCALD, MOVE_SHOCK_WAVE}
    },
    {
        .species = SPECIES_SQUAWKABILLY_BLUE_PLUMAGE,
        .heldItem = ITEM_FLAME_ORB,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_GUTS,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 240, 0, 236, 0, 28),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_FACADE, MOVE_DUAL_WINGBEAT, MOVE_U_TURN, MOVE_QUICK_ATTACK}
    },
    {
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_SALAC_BERRY,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_MOXIE,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 240, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_LUNGE, MOVE_BRICK_BREAK}
    },
    {
        .species = SPECIES_TORRACAT,
        .heldItem = ITEM_EVIOLITE,
        .ability = ABILITY_INTIMIDATE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_TRAILBLAZE, MOVE_FIRE_FANG, MOVE_BITE, MOVE_LEER}
    },
    {
        .species = SPECIES_FROGADIER,
        .heldItem = ITEM_WATER_GEM,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_PROTEAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 248, 240, 4),
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .moves = {MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_GRASS_KNOT, MOVE_DARK_PULSE}
    },
    {
        .species = SPECIES_GROVYLE,
        .heldItem = ITEM_LIECHI_BERRY,
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_TECHNICIAN,
        .lvl = 1,
        .ev = TRAINER_PARTY_EVS(0, 244, 0, 248, 0, 0),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_RAZOR_LEAF, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_NONE}
    }
};

    enum class Error {
        Ok = 0,
        NotOwner = -1,
        NoPath = -2,
        Name_exists = -3,
        Busy = -4,
        NotFound = -5,
        NotEnoughEnergy = -6,
        NotEnoughResources = -6,
        InvalidTarget = -7,
        Full = -8,
        NotInRange = -9,
        InvalidArgs = -10,
        Tired = -11,
        NoBodypart = -12,
        NotEnoughExtensions = -6,
        RclNotEnough = -14,
        GclNotEnough = -15,
    };

    enum class Find {
        ExitTop = 1,
        ExitRight = 3,
        ExitBottom = 5,
        ExitLeft = 7,
        Exit = 10,
        Creeps = 101,
        MyCreeps = 102,
        HostileCreeps = 103,
        SourcesActive = 104,
        Sources = 105,
        DroppedEnergy = -106,
        DroppedResources = 106,
        Structures = 107,
        MyStructures = 108,
        HostileStructures = 109,
        Flags = 110,
        ConstructionSites = 111,
        MySpawns = 112,
        HostileSpawns = 113,
        MyConstructionSites = 114,
        HostileConstructionSites = 115,
        Minerals = 116,
        Nukes = 117,
        Tombstones = 118,
        PowerCreeps = 119,
        MyPowerCreeps = 120,
        HostilePowerCreeps = 121,
    };

    enum class Position {
        Top = 1,
        TopRight = 2,
        Right = 3,
        BottomRight = 4,
        Bottom = 5,
        BottomLeft = 6,
        Left = 7,
        TopLeft = 8,
    };

    enum class Color {
        Red = 1,
        Purple = 2,
        Blue = 3,
        Cyan = 4,
        Green = 5,
        Yellow = 6,
        Orange = 7,
        Brown = 8,
        Grey = 9,
        White = 10,
    };

	enum class Look {
		Creeps,
		Energy,
		Resources,
		Sources,
		Minerals,
		Structures,
		Flags,
		ConstructionSites,
		Nukes,
		Terrain,
		Tombstones,
		PowerCreeps
	};

    enum class BodyPart {
        Move
        Work
        Carry
        Attack
        RangedAttack
        Tough
        Heal
        Claim
    };

    enum class Structure {
        Spawn,
        Extension,
        Road,
        Wall,
        Rampart,
        KeeperLair,
        Portal,
        Controller,
        Link,
        Storage,
        Tower,
        Observer,
        PowerBank,
        PowerSpawn,
        Extractor,
        Lab,
        Terminal,
        Container,
        Nuker
    };
    enum class Resource {
        Energy,
        Power,
        Ops,
        Hydrogen,
        Oxygen,
        Utrium,
        Lemergium,
        Keanium,
        Zynthium,
        Catalyst,
        Ghodium,
        Hydroxide,
        ZynthiumKeanite,
        UtriumLemergite,
        UtriumHydride,
        UtriumOxide,
        KeaniumHydride,
        KeaniumOxide,
        LemergiumHydride,
        LemergiumOxide,
        ZynthiumHydride,
        ZynthiumOxide,
        GhodiumHydride,
        GhodiumOxide,
        UtriumAcid,
        UtriumAlkalide,
        KeaniumAcid,
        KeaniumAlkalide,
        LemergiumAcid,
        LemergiumAlkalide,
        ZynthiumAcid,
        ZynthiumAlkalide,
        GhodiumAcid,
        GhodiumAlkalide,
        CatalyzedUtriumAcid,
        CatalyzedUtriumAlkalide,
        CatalyzedKeaniumAcid,
        CatalyzedKeaniumAlkalide,
        CatalyzedLemergiumAcid,
        CatalyzedLemergiumAlkalide,
        CatalyzedZynthiumAcid,
        CatalyzedZynthiumAlkalide,
        CatalyzedGhodiumAcid,
        CatalyzedGhodiumAlkalide,
    };

    enum class TerrainMask {
        Wall = 1,
        Swamp = 2,
        Lava = 4,
    };

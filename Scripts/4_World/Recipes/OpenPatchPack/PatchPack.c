class OpenPatchPack extends RecipeBase
{
	override void Init()
	{
		m_Name = "Open";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
        InsertIngredient(0,"Knife");//you can insert multiple ingredients this way
        InsertIngredient(0,"Sickle");//you can insert multiple ingredients this way
		InsertIngredient(0,"KukriKnife");
		InsertIngredient(0,"FangeKnife");
		InsertIngredient(0,"Hacksaw");
		InsertIngredient(0,"KitchenKnife");
		InsertIngredient(0,"SteakKnife");
		InsertIngredient(0,"StoneKnife");
		InsertIngredient(0,"CombatKnife");
		InsertIngredient(0,"HuntingKnife");
		InsertIngredient(0,"Machete");
		InsertIngredient(0,"CrudeMachete");
		InsertIngredient(0,"OrientalMachete");
		InsertIngredient(0,"AK_Bayonet");
		InsertIngredient(0,"M9A1_Bayonet");
		InsertIngredient(0,"Mosin_Bayonet");
		InsertIngredient(0,"SKS_Bayonet");
		InsertIngredient(0,"CanOpener");
		InsertIngredient(0,"FarmingHoe");
		InsertIngredient(0,"Shovel");
		InsertIngredient(0,"FieldShovel");
		InsertIngredient(0,"Crowbar");
		InsertIngredient(0,"Hammer");
		InsertIngredient(0,"Wrench");
		InsertIngredient(0,"Screwdriver");
		InsertIngredient(0,"BaseballBat");
		InsertIngredient(0,"Pickaxe");
		InsertIngredient(0,"WoodAxe");
		InsertIngredient(0,"FirefighterAxe");
		InsertIngredient(0,"Hatchet");
		InsertIngredient(0,"HandSaw");
		InsertIngredient(0,"Pliers");
		InsertIngredient(0,"Spear");
		InsertIngredient(0,"BoneKnife");
		InsertIngredient(0,"MeatTenderizer");
		InsertIngredient(0,"Cleaver");
		InsertIngredient(0,"Sword");
	
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = -1;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"ALV_PatchPack");//you can insert multiple ingredients this wa,
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = 1;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		//AddResult("");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

 	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{      
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		//Get random patch name
        string PatchNameRandomizer = GetPatchNames().GetRandomElement();
        //Create Patch
        GetGame().CreateObjectEx(PatchNameRandomizer, player.GetPosition(), ECE_SETUP|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);
	}

    TStringArray GetPatchNames()
    {
        return {
            "ALV_Patch_USA",
            "ALV_Patch_USBW",
            "ALV_Patch_UK",
            "ALV_Patch_UKBW",
            "ALV_Patch_RedCross",
            "ALV_Patch_Medic",
            "ALV_CirclePatch_Outdoors",
            "ALV_CirclePatch_SpaceCamp",
            "ALV_CirclePatch_BigFoot",
            "ALV_CirclePatch_Hellfish",
            "ALV_CirclePatch_4thOfJuly",
            "ALV_CirclePatch_AlaskaState",
            "ALV_CirclePatch_AlchemyBlack",
            "ALV_CirclePatch_AlchemyWood",
            "ALV_CirclePatch_Alien",
            "ALV_CirclePatch_AmericanIndian",
            "ALV_CirclePatch_Bandit",
            "ALV_CirclePatch_BaphometDevil",
            "ALV_CirclePatch_Barber",
            "ALV_CirclePatch_BeachSunset",
            "ALV_CirclePatch_Biker",
            "ALV_CirclePatch_Blacksmith",
            "ALV_CirclePatch_BlueCock",
            "ALV_CirclePatch_BrainPlate",
            "ALV_CirclePatch_Brewery",
            "ALV_CirclePatch_Builder",
            "ALV_CirclePatch_Butcher",
            "ALV_CirclePatch_Campfire",
            "ALV_CirclePatch_Camping",
            "ALV_CirclePatch_Carpentry",
            "ALV_CirclePatch_Christmas",
            "ALV_CirclePatch_Circus",
            "ALV_CirclePatch_Club",
            "ALV_CirclePatch_ComedyClub",
            "ALV_CirclePatch_CottageCoreFrog",
            "ALV_CirclePatch_Courier",
            "ALV_CirclePatch_CrueltyFree",
            "ALV_CirclePatch_Deli",
            "ALV_CirclePatch_Easter",
            "ALV_CirclePatch_Esoteric",
            "ALV_CirclePatch_EyeofHorusEgyptian",
            "ALV_CirclePatch_FaceDry",
            "ALV_CirclePatch_FaithHopeLove",
            "ALV_CirclePatch_FarmersMarket",
            "ALV_CirclePatch_Fisherman",
            "ALV_CirclePatch_FlagIreland",
            "ALV_CirclePatch_FlagTurkey",
            "ALV_CirclePatch_FlagUkraine",
            "ALV_CirclePatch_FlowerSkull",
            "ALV_CirclePatch_ForestStag",
            "ALV_CirclePatch_FortuneTeller",
            "ALV_CirclePatch_FuckOff",
            "ALV_CirclePatch_Gambling",
            "ALV_CirclePatch_Ganesh",
            "ALV_CirclePatch_GothRose",
            "ALV_CirclePatch_Graffiti",
            "ALV_CirclePatch_GunsandAmmo",
            "ALV_CirclePatch_Halloween",
            "ALV_CirclePatch_HappyDiwali",
            "ALV_CirclePatch_HappyPassover",
            "ALV_CirclePatch_HippyPeace",
            "ALV_CirclePatch_HummingBird",
            "ALV_CirclePatch_IceCream",
            "ALV_CirclePatch_IlluminatiGoat",
            "ALV_CirclePatch_Jail",
            "ALV_CirclePatch_JapaneseteaHouse",
            "ALV_CirclePatch_JapanRisingSun",
            "ALV_CirclePatch_JeMeSouviens",
            "ALV_CirclePatch_Jesus",
            "ALV_CirclePatch_Jurassic",
            "ALV_CirclePatch_Karaoke",
            "ALV_CirclePatch_KeepOut",
            "ALV_CirclePatch_KillerClown",
            "ALV_CirclePatch_Knight",
            "ALV_CirclePatch_Kraken",
            "ALV_CirclePatch_LandoftheFree",
            "ALV_CirclePatch_Lawyer",
            "ALV_CirclePatch_Leatherwork",
            "ALV_CirclePatch_Library",
            "ALV_CirclePatch_Lilith",
            "ALV_CirclePatch_LiveMusic",
            "ALV_CirclePatch_MadKuntzJack",
            "ALV_CirclePatch_MadKuntzTinny",
            "ALV_CirclePatch_Medical",
            "ALV_CirclePatch_MedicalMarijuana",
            "ALV_CirclePatch_Medusa",
            "ALV_CirclePatch_Mermaid",
            "ALV_CirclePatch_MontanaState",
            "ALV_CirclePatch_MotherOfAll",
            "ALV_CirclePatch_Mushroom",
            "ALV_CirclePatch_MushroomDrawing",
            "ALV_CirclePatch_NegHonor",
            "ALV_CirclePatch_News",
            "ALV_CirclePatch_NoFear",
            "ALV_CirclePatch_Norse",
            "ALV_CirclePatch_Octopus",
            "ALV_CirclePatch_OnAir",
            "ALV_CirclePatch_Persian",
            "ALV_CirclePatch_Pizza",
            "ALV_CirclePatch_PosHonor",
            "ALV_CirclePatch_PrawnGod",
            "ALV_CirclePatch_Quarantine",
            "ALV_CirclePatch_Radioactive",
            "ALV_CirclePatch_Ramadan",
            "ALV_CirclePatch_Raven",
            "ALV_CirclePatch_Reaper",
            "ALV_CirclePatch_RecordStore",
            "ALV_CirclePatch_SadPug",
            "ALV_CirclePatch_SantaMuerte",
            "ALV_CirclePatch_Sasquatch",
            "ALV_CirclePatch_Science",
            "ALV_CirclePatch_Scottish",
            "ALV_CirclePatch_ScubaClub",
            "ALV_CirclePatch_Seafood",
            "ALV_CirclePatch_SkullandMoon",
            "ALV_CirclePatch_Snowman",
            "ALV_CirclePatch_Stonemason",
            "ALV_CirclePatch_Stoner",
            "ALV_CirclePatch_StPatricksDay",
            "ALV_CirclePatch_Taco",
            "ALV_CirclePatch_Tailor",
            "ALV_CirclePatch_Taxidermy",
            "ALV_CirclePatch_Thanksgiving",
            "ALV_CirclePatch_TheEndisNigh",
            "ALV_CirclePatch_ThreeBears",
            "ALV_CirclePatch_Tiger",
            "ALV_CirclePatch_TownHall",
            "ALV_CirclePatch_Trader",
            "ALV_CirclePatch_TrickorTreat",
            "ALV_CirclePatch_Trustno1",
            "ALV_CirclePatch_UnicornVomit",
            "ALV_CirclePatch_University",
            "ALV_CirclePatch_ValentineDay",
            "ALV_CirclePatch_VampyricCastle",
            "ALV_CirclePatch_Vet",
            "ALV_CirclePatch_ViveLeQuebecWeed",
            "ALV_CirclePatch_Western",
            "ALV_CirclePatch_Wicca",
            "ALV_CirclePatch_Wizard",
            "ALV_CirclePatch_WorlDomination",
            "ALV_Patch_AnimalSkull",
            "ALV_Patch_BitchImFabulous",
            "ALV_Patch_CampingGrey",
            "ALV_Patch_Cassette",
            "ALV_Patch_CuteKiller",
            "ALV_Patch_EgyptianScarab",
            "ALV_Patch_EwPeople",
            "ALV_Patch_GangsterSkull",
            "ALV_Patch_Genius",
            "ALV_Patch_GirlGang",
            "ALV_Patch_HandInHand",
            "ALV_Patch_HardToKidnap",
            "ALV_Patch_IceCreamTruck",
            "ALV_Patch_IGetShitDone",
            "ALV_Patch_Illuminati",
            "ALV_Patch_InMyDefense",
            "ALV_Patch_IPutASpellOnYou",
            "ALV_Patch_JustMarried",
            "ALV_Patch_KillerCat",
            "ALV_Patch_PlagueDr",
            "ALV_Patch_Reggae",
            "ALV_Patch_StayBrutal",
            "ALV_Patch_StayWeird",
            "ALV_Patch_UnderestimateMe",
            "ALV_Patch_Veteran",
            "ALV_Patch_WithinRange",
            "ALV_Patch_YeeHaw",
            "ALV_Patch_YippyKiYay",
        };
    }
};


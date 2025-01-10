class CfgPatches
{
	class PatchPack_Pack
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PatchPack"};
		units[] = {};
	};
};

class CfgVehicles
{	
    class Inventory_Base;
	class ALV_PatchPack: Inventory_Base
	{
		scope = 2;
		displayName = "Patch Pack";
		descriptionShort = "Which patch is in there?";
		model = "Source_Files\PatchPack\Configs\data\PatchPack.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] ={"Source_Files\PatchPack\Configs\data\PatchPack_co.paa"};
		rotationFlags = 17;
		quantityBar = 1;
		itemSize[] = {1,2};
		weight = 0;
		spawnOffset = 0;
		lootCategory = "Clothing";
		lootTag[] = {"Village","Town","Hunting"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1.0,{"Source_Files\PatchPack\Configs\data\PatchPack.rvmat"}},{0.7,{"Source_Files\PatchPack\Configs\data\PatchPack.rvmat"}},{0.5,{"Source_Files\PatchPack\Configs\data\PatchPack.rvmat"}},{0.3,{"Source_Files\PatchPack\Configs\data\PatchPack.rvmat"}},{0.0,{"Source_Files\PatchPack\Configs\data\PatchPack.rvmat"}}};
				};
			};
		};
		
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "seedpack_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
};
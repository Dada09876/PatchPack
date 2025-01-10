#define _ARMA_

class CfgPatches
{
	class PatchPack
	{
		requiredAddons[] = {"ALV_Better_Clothes","Dada_ALV_Retextures"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class PatchPack
	{
		dir = "PatchPack";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "PatchPack";
		credits = "";
		author = "Dada";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Source_Files\PatchPack\scripts\4_World"};
			};
		};
	};
};
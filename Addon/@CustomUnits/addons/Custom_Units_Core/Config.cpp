class DefaultEventhandlers;
class CfgPatches {
	class Custom_DUWS_Core {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Data_F", 
			"A3_Characters_F", 
			"A3_Characters_F_BLUFOR", 
			"A3_Characters_F_OPFOR", 
			"A3_Characters_F_Civil", 
			"A3_Characters_F_INDEP", 
			"a3_characters_f_beta"
			};
		version="1";
		projectName="Custom_DUWS_Core";
		author="TeorgeGakei";
	};
};

class CfgWorlds {
	class GenericNames {
		class DUWS_Blu_Names {
			class FirstNames {
				JeanPierre = "Jean Pierre";
			};
			class LastNames {
				Polnareff = "Polnareff";
			};
		};
		class DUWS_Opfor_Names {
			class FirstNames {
				Nothing = "";
			};
			class LastNames {
				Nothing = "";
			};
		};
		class DUWS_General_Name {
			class FirstNames {
				General = "General";
			};
			class LastNames {
				Moreau = "Moreau";
			};
		};
		class DUWS_Sabbers_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Penguin = "Penguin";
			};
		};
		class DUWS_Jayme_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Fox = "Fox";
			};
		};
		class DUWS_Hunter_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Eagle = "Eagle";
			};
		};
		class DUWS_Kevin_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Wolf = "Wolf";
			};
		};
		class DUWS_Jacob_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Panda = "Panda";
			};
		};
		class DUWS_Pilot_Name {
			class FirstNames {
				Hawk = "Hawk";
			};
			class LastNames {
				Nothing = "";
			};
		};
		class DUWS_Sniper_Name {
			class FirstNames {
				The = "The";
			};
			class LastNames {
				Finger = "Finger";
			};
		};
		class DUWS_Spotter_Name {
			class FirstNames {
				The = "The";
			};
			class LastNames {
				Eye = "Eye";
			};
		};
	};
};


class cfgFactionClasses
{
	class BLU_DUWS //Faction Calling Name
	{
		displayName = "BLU_DUWS"; //Faction name in-game
		priority = 3; //How far down it is on the menu
		side = 1; // 1 Blufor 0 opfor 3 independant i think.
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
	};
	class OPFOR_DUWS //Faction Calling Name
	{
		displayName = "OPFOR_DUWS"; //Faction name in-game
		priority = 3; //How far down it is on the menu
		side = 0; // 1 Blufor 0 opfor 3 independant i think.
		icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
	};
};

class CfgVehicleClasses
{
	class Men_Additional
	{
		displayName = "Men (DUWS)"; // Name of the Group of Units
	};
};
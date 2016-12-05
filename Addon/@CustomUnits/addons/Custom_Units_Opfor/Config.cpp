class DefaultEventhandlers;
class CfgPatches {
	class Custom_DUWS_Opf {
		units[] = {
			};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Data_F", 
			"A3_Characters_F", 
			"A3_Characters_F_BLUFOR", 
			"A3_Characters_F_OPFOR", 
			"A3_Characters_F_Civil", 
			"A3_Characters_F_INDEP", 
			"a3_characters_f_beta",
			"Custom_DUWS_Core",
			"Custom_DUWS_Weapons"
			};
		version="1";
		projectName="Custom_DUWS_Opf";
		author="TeorgeGakei";
	};
};

class CfgVehicles {
		/*extern*/ class SoldierEB;

		class O_Soldier_base_F: SoldierEB {
		};
		
		//Declaring the base soldier class
		class O_DUWS_base_F: O_Soldier_base_F {
		author = "Sabrina Penguin";
		_generalMacro = "O_DUWS_base_F";
		expansion = 1;
		faceType = "Man_A3";
		side = 0;
		faction = "OPFOR_DUWS";
		genericNames = "DUWS_Opfor_Names";
		vehicleClass = "Men_Additional";
		editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		nakedUniform = "U_BasicBody";  // Do not change
		accuracy = 2.300000;
		camouflage = 1.400000;
		minFireTime = 7;
		cost = 100000;
		canCarryBackPack = 1;
		scope = 0;
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		};
		
		//Opfor Sniper and Spotter (Mission)
		
		class Opfor_Sniper_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Sniper_1"; 
		scope = 2;
		displayName = "Taliban Sniper"; // In-game name of unit
		genericNames = "DUWS_Sniper_Name";
		uniformClass = "AFG_2002FourColorWoodland_FieldUniform_SS";  // Uniform Class
		backpack = "B_AssaultPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_R_CAP_OD_US", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_R_CAP_OD_US", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_svdp_wd_scoped"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_svdp_wd_scoped"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShellRed", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {};
		respawnItems[] = {};
		};
		
		class Opfor_Spotter_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Spotter_1"; 
		scope = 2;
		displayName = "Taliban Spotter"; // In-game name of unit
		genericNames = "DUWS_Spotter_Name";
		uniformClass = "AFG_2002Woodland_TacticalUniform_TS";  // Uniform Class
		backpack = "B_AssaultPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_H_pakol2", "TRYK_Beard_BK", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMap"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_H_pakol2", "TRYK_Beard_BK", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMap"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u_scoped"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u_scoped"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShellRed", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShell", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {};
		respawnItems[] = {};
		};
		
		//Opfor Officer (mission)
		
		class Opfor_Officer_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Officer_1"; 
		scope = 2;
		displayName = "Taliban Officer"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_2";  // Uniform Class
		backpack = "RHS_Podnos_Gun_Bag"; // Backpack Class
		linkedItems[] = {"H_Bandanna_cbr", "TRYK_Beard_BK2", "SP_Modular1_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_cbr", "TRYK_Beard_BK2", "SP_Modular1_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		};
		
		//OPFOR Soldier
		
		class Opfor_Soldier_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Soldier_1"; 
		scope = 2;
		displayName = "Taliban Soldier"; // In-game name of unit
		uniformClass = "TRYK_ZARATAKI2";  // Uniform Class
		backpack = "rhs_sidor"; // Backpack Class
		linkedItems[] = {"H_Bandanna_sgg", "PU_shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_sgg", "PU_shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_akms", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akms", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_2 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_akm", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akm", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_3 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak47", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_4 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_4"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_5 : Opfor_Soldier_2  {
		_generalMacro = "Opfor_Soldier_5"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_6 : Opfor_Soldier_3  {
		_generalMacro = "Opfor_Soldier_6"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_7 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_7"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_8 : Opfor_Soldier_2  {
		_generalMacro = "Opfor_Soldier_8"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_9 : Opfor_Soldier_3  {
		_generalMacro = "Opfor_Soldier_9"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_10 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_10"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_11 : Opfor_Soldier_2  {
		_generalMacro = "Opfor_Soldier_11"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_12 : Opfor_Soldier_3  {
		_generalMacro = "Opfor_Soldier_12"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_13 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_13"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_14 : Opfor_Soldier_4  {
		_generalMacro = "Opfor_Soldier_14"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_15 : Opfor_Soldier_7  {
		_generalMacro = "Opfor_Soldier_15"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_16 : Opfor_Soldier_10  {
		_generalMacro = "Opfor_Soldier_16"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		
		//Opfor Ammo Bearer
		
		class Opfor_Ammoholder_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Ammoholder_1"; 
		scope = 2;
		displayName = "Taliban Ammo Bearer"; // In-game name of unit
		uniformClass = "TRYK_T_camo_tan";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"SP_Shemagh_CheckBlack", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Shemagh_CheckBlack", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_100Rnd_762x54mmR"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_100Rnd_762x54mmR"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Ammoholder_2 : Opfor_Ammoholder_1  {
		_generalMacro = "Opfor_Ammoholder_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Ammoholder_3 : Opfor_Ammoholder_1  {
		_generalMacro = "Opfor_Ammoholder_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Ammoholder_4 : Opfor_Ammoholder_1  {
		_generalMacro = "Opfor_Ammoholder_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Ammoholder_5 : Opfor_Ammoholder_1  {
		_generalMacro = "Opfor_Ammoholder_5"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Medic
		
		class Opfor_Medic_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Medic_1"; 
		scope = 2;
		displayName = "Taliban Medic"; // In-game name of unit
		uniformClass = "TRYK_ZARATAKI2";  // Uniform Class
		backpack = "B_AssaultPack_rgr"; // Backpack Class
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "Binocular"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_atropine", "ACE_atropine", "ACE_adenosine", "ACE_adenosine", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_atropine", "ACE_atropine", "ACE_adenosine", "ACE_adenosine", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_surgicalKit"};
		};
		
		class Opfor_Medic_2 : Opfor_Medic_1  {
		_generalMacro = "Opfor_Medic_2"; 
		scope = 2;
		displayName = "Taliban Medic"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Denim_T_BK";  // Uniform Class
		backpack = "B_AssaultPack_rgr"; // Backpack Class
		linkedItems[] = {"SP_Shemagh_CheckWhite", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Shemagh_CheckWhite", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "Binocular"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Squad Leader
		
		class Opfor_SquadLeader_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_SquadLeader_1"; 
		scope = 2;
		displayName = "Taliban Squad Leader"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_3";  // Uniform Class
		backpack = "B_Kitbag_sgg"; // Backpack Class
		linkedItems[] = {"SP_JackEllis1_PressBlue1", "SP_Bandana_Black", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_JackEllis1_PressBlue1", "SP_Bandana_Black", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_M16A4"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_M16A4"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_SquadLeader_2 : Opfor_SquadLeader_1  {
		_generalMacro = "Opfor_SquadLeader_2"; 
		scope = 2;
		uniformClass = "U_C_Journalist";  // Uniform Class
		backpack = "TFA_Kitbag_NWU2"; // Backpack Class
		linkedItems[] = {"TRYK_V_Bulletproof_BLK", "AFG_Beret_ArmyGreen", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_Bulletproof_BLK", "AFG_Beret_ArmyGreen", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_SquadLeader_3 : Opfor_SquadLeader_1  {
		_generalMacro = "Opfor_SquadLeader_3"; 
		scope = 2;
		weapons[] = {"RH_m4_des"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_m4_des"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_SquadLeader_4 : Opfor_SquadLeader_2  {
		_generalMacro = "Opfor_SquadLeader_4"; 
		scope = 2;
		weapons[] = {"RH_m4_des"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_m4_des"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Team Leader
		
		class Opfor_TeamLeader_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_TeamLeader_1"; 
		scope = 2;
		displayName = "Taliban Squad Leader"; // In-game name of unit
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "TFA_Kitbag_NWU2"; // Backpack Class
		linkedItems[] = {"TRYK_V_Bulletproof_BLK", "rhs_6b27m_ml", "rhs_scarf", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_Bulletproof_BLK", "rhs_6b27m_ml", "rhs_scarf", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_2 : Opfor_TeamLeader_1  {
		_generalMacro = "Opfor_TeamLeader_2"; 
		scope = 2;
		uniformClass = "U_C_Journalist";  // Uniform Class
		backpack = "TFA_Kitbag_NWU2"; // Backpack Class
		linkedItems[] = {"TRYK_V_Bulletproof_BLK", "rhsusf_cvc_helmet", "T_HoodMW", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_Bulletproof_BLK", "rhsusf_cvc_helmet", "T_HoodMW", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_TeamLeader_3 : Opfor_TeamLeader_1  {
		_generalMacro = "Opfor_TeamLeader_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_TeamLeader_4 : Opfor_TeamLeader_2  {
		_generalMacro = "Opfor_TeamLeader_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_TeamLeader_5 : Opfor_TeamLeader_1  {
		_generalMacro = "Opfor_TeamLeader_5"; 
		scope = 2;
		weapons[] = {"hlc_rifle_akm"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_akm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_6 : Opfor_TeamLeader_2  {
		_generalMacro = "Opfor_TeamLeader_6"; 
		scope = 2;
		weapons[] = {"hlc_rifle_akm"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_akm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_7 : Opfor_TeamLeader_5  {
		_generalMacro = "Opfor_TeamLeader_7"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak47"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_TeamLeader_8 : Opfor_TeamLeader_6  {
		_generalMacro = "Opfor_TeamLeader_8"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak47"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Anti Tank Rifleman
		
		class Opfor_Light_AntiTank_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Light_AntiTank_1"; 
		scope = 2;
		displayName = "Taliban Anti Tank Rifleman"; // In-game name of unit
		uniformClass = "TRYK_ZARATAKI2";  // Uniform Class
		backpack = "SP_Carryall_Green"; // Backpack Class
		linkedItems[] = {"TRYK_H_Booniehat_WOOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_H_Booniehat_WOOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_M590_5RD"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_M590_5RD"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag"};
		};
		
		class Opfor_Light_AntiTank_2 : Opfor_Light_AntiTank_1  {
		_generalMacro = "Opfor_Light_AntiTank_2"; 
		scope = 2;
		uniformClass = "U_B_CombatUniform_mcam_tshirt";  // Uniform Class
		linkedItems[] = {"rhs_6b23_vydra_3m", "Balaclava_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6b23_vydra_3m", "Balaclava_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Light_AntiTank_3 : Opfor_Light_AntiTank_1  {
		_generalMacro = "Opfor_Light_AntiTank_3"; 
		scope = 2;
		weapons[] = {"RH_vz61"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_vz61"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Light_AntiTank_4 : Opfor_Light_AntiTank_2  {
		_generalMacro = "Opfor_Light_AntiTank_4"; 
		scope = 2;
		weapons[] = {"RH_vz61"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_vz61"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Missile Specialist (AT)
		
		class Opfor_AntiTank_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_AntiTank_1"; 
		scope = 2;
		displayName = "Taliban Missile Specialist (AT)"; // In-game name of unit
		uniformClass = "AFG_1996Woodland_PulloverUniform";  // Uniform Class
		backpack = "B_AssaultPack_rgr"; // Backpack Class
		linkedItems[] = {"rhs_6b23_vydra_3m", "usaf_cap_mc", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6b23_vydra_3m", "usaf_cap_mc", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiTank_2 : Opfor_AntiTank_1  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		uniformClass = "AFG_1980DuckHunter_FieldUniform_SS";  // Uniform Class
		linkedItems[] = {"SP_BaseballCap_TweedCheckedGreen", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_BaseballCap_TweedCheckedGreen", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_AntiTank_3 : Opfor_AntiTank_1  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiTank_4 : Opfor_AntiTank_2  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiTank_5 : Opfor_AntiTank_1  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"RH_deagle", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_deagle", "rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiTank_6 : Opfor_AntiTank_2  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"RH_deagle", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_deagle","rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Missile Specialist (AT) Assistant
		
		class Opfor_Assistant_AntiTank_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Assistant_AntiTank_1"; 
		scope = 2;
		displayName = "Taliban Asst. Missile Specialist (AT)"; // In-game name of unit
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "SP_Carryall_Green"; // Backpack Class
		linkedItems[] = {"G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_M590_5RD"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_M590_5RD"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Missile Specialist (AA)
		
		class Opfor_AntiAir_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_AntiAir_1"; 
		scope = 2;
		displayName = "Taliban Missile Specialist (AA)"; // In-game name of unit
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "SP_Carryall_Green"; // Backpack Class
		linkedItems[] = {"H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u", "CUP_launch_Igla"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "CUP_launch_Igla"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "CUP_Igla_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "CUP_Igla_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiAir_2 : Opfor_AntiAir_1  {
		_generalMacro = "Opfor_AntiAir_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74", "CUP_launch_Igla"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "CUP_launch_Igla"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiAir_3 : Opfor_AntiAir_1  {
		_generalMacro = "Opfor_AntiAir_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74m", "CUP_launch_Igla"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74m", "CUP_launch_Igla"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Autorifleman
		
		class Opfor_Autorifleman_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Autorifleman_1"; 
		scope = 2;
		displayName = "Taliban Autorifleman"; // In-game name of unit
		uniformClass = "U_BG_leader";  // Uniform Class
		backpack = "rhsusf_falconii_coy"; // Backpack Class
		linkedItems[] = {"rhs_6b23_6sh116_od", "usaf_boonie_mc", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "PU_shemagh_OD"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6b23_6sh116_od", "usaf_boonie_mc", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "PU_shemagh_OD"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_pkp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_pkp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Autorifleman_2 : Opfor_Autorifleman_1  {
		_generalMacro = "Opfor_Autorifleman_2"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla1_1";  // Uniform Class
		backpack = "rhsusf_assault_eagleaiii_ucp"; // Backpack Class
		linkedItems[] = {"rhs_6b23_digi_crew", "rhs_balaclava", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6b23_digi_crew", "rhs_balaclava", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Autorifleman_3 : Opfor_Autorifleman_1  {
		_generalMacro = "Opfor_Autorifleman_3"; 
		scope = 2;
		uniformClass = "U_BG_Guerrilla_6_1";  // Uniform Class
		backpack = "rhsusf_assault_eagleaiii_ucp"; // Backpack Class
		linkedItems[] = {"rhs_6sh92_vog_headset", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6sh92_vog_headset", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Autorifleman_4 : Opfor_Autorifleman_1  {
		_generalMacro = "Opfor_Autorifleman_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Autorifleman_5 : Opfor_Autorifleman_2  {
		_generalMacro = "Opfor_Autorifleman_5"; 
		scope = 2;
		weapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Autorifleman_6 : Opfor_Autorifleman_3  {
		_generalMacro = "Opfor_Autorifleman_6"; 
		scope = 2;
		weapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Autorifleman_7 : Opfor_Autorifleman_1  {
		_generalMacro = "Opfor_Autorifleman_7"; 
		scope = 2;
		weapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Autorifleman_8 : Opfor_Autorifleman_2  {
		_generalMacro = "Opfor_Autorifleman_8"; 
		scope = 2;
		weapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Autorifleman_9 : Opfor_Autorifleman_3  {
		_generalMacro = "Opfor_Autorifleman_9"; 
		scope = 2;
		weapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Grenadier
		
		class Opfor_Grenadier_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Grenadier_1"; 
		scope = 2;
		displayName = "Taliban Grenadier"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_1";  // Uniform Class
		backpack = "B_AssaultPack_blk"; // Backpack Class
		linkedItems[] = {"rhs_fieldcap_digi2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_fieldcap_digi2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74_GL"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74_GL"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Grenadier_2 : Opfor_Grenadier_1  {
		_generalMacro = "Opfor_Grenadier_2"; 
		scope = 2;
		uniformClass = "U_C_HunterBody_grn";  // Uniform Class
		backpack = "B_AssaultPack_blk"; // Backpack Class
		linkedItems[] = {"SP_Beret3_Brown", "TRYK_Beard_BK4", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Beret3_Brown", "TRYK_Beard_BK4", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Grenadier_3 : Opfor_Grenadier_1  {
		_generalMacro = "Opfor_Grenadier_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74m_gl"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74m_gl"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Grenadier_4 : Opfor_Grenadier_2  {
		_generalMacro = "Opfor_Grenadier_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74m_gl"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74m_gl"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Designated Marksman
		
		class Opfor_Marksman_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Marksman_1"; 
		scope = 2;
		displayName = "Taliban Designated Marksman"; // In-game name of unit
		uniformClass = "Niko_USA_R_DesertTiger";  // Uniform Class
		backpack = "B_AssaultPack_dgtl"; // Backpack Class
		linkedItems[] = {"SP_Shemagh_CheckTan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Shemagh_CheckTan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m38"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m38"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Marksman_2 : Opfor_Marksman_1  {
		_generalMacro = "Opfor_Marksman_2"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "B_AssaultPack_dgtl"; // Backpack Class
		linkedItems[] = {"SP_Hood_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Hood_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Marksman_3 : Opfor_Marksman_1  {
		_generalMacro = "Opfor_Marksman_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_M14_Rail_Oldscope"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_M14_Rail_Oldscope"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Marksman_4 : Opfor_Marksman_2  {
		_generalMacro = "Opfor_Marksman_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_M14_Rail_Oldscope"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_M14_Rail_Oldscope"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Vehicles
		
		/*extern*/ class CUP_C_Ural_Open_Civ_01;
		
		class CUP_C_Ural_Open_Civ_custom : CUP_C_Ural_Open_Civ_01 {
		crew = "Opfor_Soldier_1";
		};
		
		/*extern*/ class CUP_C_LR_Transport_CTK;
		
		class CUP_C_LR_Transport_CTK_custom : CUP_C_LR_Transport_CTK {
		crew = "Opfor_Soldier_1";
		};
		
		/*extern*/ class CUP_I_BTR40_TKG;
		
		class CUP_I_BTR40_TKG_custom : CUP_I_BTR40_TKG {
		crew = "Opfor_Soldier_1";
		};
		
};
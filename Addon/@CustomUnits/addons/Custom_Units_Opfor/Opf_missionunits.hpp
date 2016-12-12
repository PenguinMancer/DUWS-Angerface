		//Opfor Sniper (Mission)
		
		class Opfor_Sniper_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Sniper"; // In-game name of unit
		genericNames = "DUWS_Sniper_Name";
		sensitivity = 5;
		uniformClass = "AFG_2002FourColorWoodland_FieldUniform_SS";  // Uniform Class
		backpack = "B_AssaultPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_R_CAP_OD_US", "G_Bandanna_oli", Standard_Equipment_Opf}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_R_CAP_OD_US", "G_Bandanna_oli", Standard_Equipment_Opf}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_svdp_wd_scoped", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_svdp_wd_scoped", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShellRed", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {};
		respawnItems[] = {};
		};
		
		//Opfor Spotter (Mission)
		
		class Opfor_Spotter_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Spotter"; // In-game name of unit
		genericNames = "DUWS_Spotter_Name";
		sensitivity = 5;	
		uniformClass = "AFG_2002Woodland_TacticalUniform_TS";  // Uniform Class
		backpack = "B_AssaultPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_H_pakol2", "TRYK_Beard_BK", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMap"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_H_pakol2", "TRYK_Beard_BK", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMap"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u_scoped", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u_scoped", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShellRed", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShell", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {};
		respawnItems[] = {};
		};
		
		//Opfor Officer (mission)
		
		class Opfor_Officer_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Officer"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_2";  // Uniform Class
		backpack = "RHS_Podnos_Gun_Bag"; // Backpack Class
		linkedItems[] = {"H_Bandanna_cbr", "TRYK_Beard_BK2", "SP_Modular1_Tan", Standard_Equipment_Opf}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_cbr", "TRYK_Beard_BK2", "SP_Modular1_Tan", Standard_Equipment_Opf}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_dirty", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		};
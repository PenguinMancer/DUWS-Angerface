		//Blufor Autorifleman
		
		class Blufor_Autorifleman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Autorifleman_1"; 
		scope = 2;
		displayName = "Marine Autorifleman"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhs_googles_black", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhs_googles_black", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_lmg_m249para", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_m249para", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Autorifleman_2 : Blufor_Autorifleman_1  {
		_generalMacro = "Blufor_Autorifleman_2"; 
		scope = 2;
		weapons[] = {"hlc_lmg_M249E2", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_M249E2", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Autorifleman_3 : Blufor_Autorifleman_1  {
		_generalMacro = "Blufor_Autorifleman_3"; 
		scope = 2;
		weapons[] = {"hlc_m249_pip1_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_m249_pip1_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Autorifleman_4 : Blufor_Autorifleman_1  {
		_generalMacro = "Blufor_Autorifleman_4"; 
		scope = 2;
		weapons[] = {"RH_M27IAR_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_M27IAR_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1",  Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1",  Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Autorifleman_5 : Blufor_Autorifleman_1  {
		_generalMacro = "Blufor_Autorifleman_5"; 
		scope = 2;
		weapons[] = {"rhs_weap_m240B_CAP_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m240B_CAP_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_100Rnd_762x51_m993", "rhsusf_100Rnd_762x51_m993", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_100Rnd_762x51_m993", "rhsusf_100Rnd_762x51_m993", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
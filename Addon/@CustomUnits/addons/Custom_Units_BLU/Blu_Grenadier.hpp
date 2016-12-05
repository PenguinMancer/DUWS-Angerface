		//Blufor Grenadier
		
		class Blufor_Grenadier_1 : Blufor_Light_AntiTank_1  {
		_generalMacro = "Blufor_Grenadier_1"; 
		scope = 2;
		displayName = "Marine Grenadier"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_M4A1_ris_M203s_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_M4A1_ris_M203s_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		class Blufor_Grenadier_2 : Blufor_Grenadier_1  {
		_generalMacro = "Blufor_Grenadier_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4a1_blockII_M203_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4a1_blockII_M203_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Grenadier_3 : Blufor_Grenadier_1  {
		_generalMacro = "Blufor_Grenadier_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4a1_carryhandle_m203_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
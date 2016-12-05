		//Blufor Missile Specialist (AT)
		
		class Blufor_AntiTank_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_AntiTank_1"; 
		scope = 2;
		displayName = "Marine Missile Specialist"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_smaw_HEAA", "rhs_mag_smaw_HEAA"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_smaw_HEAA", "rhs_mag_smaw_HEAA"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		class Blufor_AntiTank_2 : Blufor_AntiTank_1  {
		_generalMacro = "Blufor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
		
		class Blufor_AntiTank_3 : Blufor_AntiTank_1  {
		_generalMacro = "Blufor_AntiTank_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
		
		class Blufor_AntiTank_4 : Blufor_AntiTank_1  {
		_generalMacro = "Blufor_AntiTank_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
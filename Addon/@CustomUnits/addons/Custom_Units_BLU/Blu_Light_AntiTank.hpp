		//Blufor Anti Tank Rifleman
		
		class Blufor_Light_AntiTank_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Light_AntiTank_1"; 
		scope = 2;
		displayName = "Marine Anti Tank Rifleman"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_m136_hp_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_m136_hp_mag"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		class Blufor_Light_AntiTank_2 : Blufor_Light_AntiTank_1  {
		_generalMacro = "Blufor_Light_AntiTank_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Light_AntiTank_3 : Blufor_Light_AntiTank_1  {
		_generalMacro = "Blufor_Light_AntiTank_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Light_AntiTank_4 : Blufor_Light_AntiTank_1  {
		_generalMacro = "Blufor_Light_AntiTank_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
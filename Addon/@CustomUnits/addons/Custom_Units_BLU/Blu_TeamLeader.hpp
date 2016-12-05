		//Blufor Team Leader
		
		class Blufor_TeamLeader_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_TeamLeader_1"; 
		scope = 2;
		displayName = "Marine Team Leader"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "SP_Beret4_Green", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "SP_Beret4_Green", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_TeamLeader_2 : Blufor_TeamLeader_1  {
		_generalMacro = "Blufor_TeamLeader_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_TeamLeader_3 : Blufor_TeamLeader_1  {
		_generalMacro = "Blufor_TeamLeader_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_TeamLeader_4 : Blufor_TeamLeader_1  {
		_generalMacro = "Blufor_TeamLeader_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
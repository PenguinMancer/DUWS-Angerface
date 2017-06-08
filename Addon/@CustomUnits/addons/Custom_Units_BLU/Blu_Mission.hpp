		//Blufor General
		
		class Blufor_General : B_DUWS_base_F  {
		scope = 2;
		displayName = "General Toutain"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_General_Name";
		uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";  // Uniform Class
		backpack = ""; // Backpack Class
		linkedItems[] = {"H_Bandanna_sgg", "CUP_V_B_MTV_noCB", "G_Aviator"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_sgg", "CUP_V_B_MTV_noCB", "G_Aviator"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {}; // Weapons added to the unit.
		respawnweapons[] = {}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {}; //Magazines added to the unit.
		Respawnmagazines[] = {}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Pilot (only used in rescue mission)
		
		class Blufor_Pilot_Mission : B_DUWS_base_F  {
		scope = 2;
		displayName = "Hawk"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Pilot_Name";
		uniformClass = "TRYK_U_B_AOR2_OD_CombatUniform";  // Uniform Class
		backpack = "B_Parachute"; // Backpack Class
		linkedItems[] = {"rhs_tsh4", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_tsh4", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hgun_PDW2000_F", "RH_fn57", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hgun_PDW2000_F", "RH_fn57", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
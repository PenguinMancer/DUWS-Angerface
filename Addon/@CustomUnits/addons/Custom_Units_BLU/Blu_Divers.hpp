		//Blufor Diver
		
		class Blufor_Diver_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "G4S Diver"; // In-game name of unit
		uniformClass = "U_B_Wetsuit";  // Uniform Class
		backpack = "SP_Camelbak_Black"; // Backpack Class
		linkedItems[] = {"IP_V_RebreatherIR_ST", "SP_Goggles_Green", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"IP_V_RebreatherIR_ST", "SP_Goggles_Green", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Diver Exp Specialist
		
		class Blufor_Diver_exp_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "G4S Diver Explosive Specialist"; // In-game name of unit
		uniformClass = "U_O_Wetsuit";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_ESS_BLKBLK_NV", "IP_V_RebreatherIR_ST", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_ESS_BLKBLK_NV", "IP_V_RebreatherIR_ST", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_m112_mag", "rhsusf_m112_mag", "rhsusf_m112_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_m112_mag", "rhsusf_m112_mag", "rhsusf_m112_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ACE_DefusalKit", "MineDetector"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ACE_DefusalKit", "MineDetector"};
		};
		
		//Blufor Diver Team Leader
		
		class Blufor_Diver_Teamleader_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "G4S Diver Team Leader"; // In-game name of unit
		uniformClass = "U_I_Wetsuit";  // Uniform Class
		backpack = "SP_Camelbak_Black"; // Backpack Class
		linkedItems[] = {"IP_V_RebreatherIR_ST", "Mask_M40", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"IP_V_RebreatherIR_ST", "Mask_M40", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
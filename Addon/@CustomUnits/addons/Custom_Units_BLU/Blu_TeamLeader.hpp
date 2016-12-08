		//Blufor Team Leader
		
		class Blufor_TeamLeader_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Team Leader"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"lbt_tl_coy", "SP_Beret_Tan", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_tl_coy", "SP_Beret_Tan", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_TeamLeader_2 : Blufor_TeamLeader_1  {
		scope = 2;
		weapons[] = {"CUP_arifle_Mk16_STD", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_arifle_Mk16_STD", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_TeamLeader_3 : Blufor_TeamLeader_1  {
		scope = 2;
		weapons[] = {"RH_hk416_des", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};

		class Blufor_TeamLeader_4 : Blufor_TeamLeader_1 {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};

		class Blufor_TeamLeader_5 : Blufor_TeamLeader_1 {
		scope = 2;
		weapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_TeamLeader_6 : Blufor_TeamLeader_1 {
		scope = 2;
		weapons[] = {"CUP_arifle_Mk16_STD", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_arifle_Mk16_STD", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_TeamLeader_7 : Blufor_TeamLeader_1 {
		scope = 2;
		weapons[] = {"RH_hk416_des", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_TeamLeader_8 : Blufor_TeamLeader_1 {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};

		class Blufor_TeamLeader_9 : Blufor_TeamLeader_1 {
		scope = 2;
		weapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
			
		class Blufor_TeamLeader_10 : Blufor_TeamLeader_9 {
		scope = 2;
		weapons[] = {"CUP_arifle_Mk16_STD", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_arifle_Mk16_STD", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_TeamLeader_11 : Blufor_TeamLeader_9 {
		scope = 2;
		weapons[] = {"RH_hk416_des", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_TeamLeader_12 : Blufor_TeamLeader_9 {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		//Blufor Soldier
		
		class Blufor_Soldier_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Soldier"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Soldier_2 : Blufor_Soldier_1  {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_3 : Blufor_Soldier_1  {
		scope = 2;
		weapons[] = {"RH_hk416_des", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};

		class Blufor_Soldier_4 : Blufor_Soldier_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};

		class Blufor_Soldier_5 : Blufor_Soldier_1 {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_Soldier_6 : Blufor_Soldier_1 {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_Soldier_7 : Blufor_Soldier_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_Soldier_8 : Blufor_Soldier_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};

		class Blufor_Soldier_9 : Blufor_Soldier_1 {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
			
		class Blufor_Soldier_10 : Blufor_Soldier_1 {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
			
		class Blufor_Soldier_11 : Blufor_Soldier_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
			
		class Blufor_Soldier_12 : Blufor_Soldier_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
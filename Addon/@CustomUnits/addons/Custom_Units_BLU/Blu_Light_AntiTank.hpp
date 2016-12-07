		//Blufor Anti Tank Rifleman

		class Blufor_Light_AntiTank_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Anti-Tank Rifleman"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"lbt_light_coy", "TRYK_H_woolhat_tan", "rhs_googles_black", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "TRYK_H_woolhat_tan", "rhs_googles_black", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"bg21_famas_FS_tan_sighted", "rhs_weap_M136", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "rhs_weap_M136", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, "rhs_m136_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, "rhs_m136_mag"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		class Blufor_Light_AntiTank_2 : Blufor_Light_AntiTank_1  {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "rhs_weap_M136", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "rhs_weap_M136", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
		
		class Blufor_Light_AntiTank_3 : Blufor_Light_AntiTank_1  {
		scope = 2;
		weapons[] = {"RH_hk416_des", "rhs_weap_M136", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "rhs_weap_M136", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, "rhs_m136_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, "rhs_m136_mag"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		class Blufor_Light_AntiTank_4 : Blufor_Light_AntiTank_3  {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "rhs_weap_M136", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "rhs_weap_M136", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
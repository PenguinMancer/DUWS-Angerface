		//Blufor Missile Specialist (AT)
		
		class Blufor_AntiTank_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Missile Specialist"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"bg21_famas_FS_tan_sighted", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};

		class Blufor_AntiTank_2 : Blufor_AntiTank_1  {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
		
		class Blufor_AntiTank_3 : Blufor_AntiTank_1  {
		scope = 2;
		weapons[] = {"RH_hk416_des", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		class Blufor_AntiTank_4 : Blufor_AntiTank_3  {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
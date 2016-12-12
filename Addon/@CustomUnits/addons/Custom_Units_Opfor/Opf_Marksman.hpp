		//Opfor Designated Marksman
		
		class Opfor_Marksman_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Designated Marksman"; // In-game name of unit
		uniformClass = "CUP_U_O_CHDKZ_Lopotev";  // Uniform Class
		backpack = "B_AssaultPack_sgg"; // Backpack Class
		linkedItems[] = {"CUP_V_RUS_Smersh_1", "SFG_Tac_smallBeardD", "SP_Shemagh_CheckGreen", Standard_Equipment_Opf}; // Item's added to the unit. 
		respawnLinkedItems[] = {"CUP_V_RUS_Smersh_1", "SFG_Tac_smallBeardD", "SP_Shemagh_CheckGreen", Standard_Equipment_Opf}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_svdp_wd_scoped", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_svdp_wd_scoped", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Marksman_2 : Opfor_Marksman_1  {
		scope = 2;
		weapons[] = {"rhs_weap_m38", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m38", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Marksman_3 : Opfor_Marksman_1  {
		scope = 2;
		weapons[] = {"rhs_weap_kar98k", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_kar98k", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsgref_5Rnd_792x57_kar98k", "rhsgref_5Rnd_792x57_kar98k", "rhsgref_5Rnd_792x57_kar98k", "rhsgref_5Rnd_792x57_kar98k", Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsgref_5Rnd_792x57_kar98k", "rhsgref_5Rnd_792x57_kar98k", "rhsgref_5Rnd_792x57_kar98k", "rhsgref_5Rnd_792x57_kar98k", Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Marksman_4 : Opfor_Marksman_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_M14_Rail_Oldscope", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_M14_Rail_Oldscope", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
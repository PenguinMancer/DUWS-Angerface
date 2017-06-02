		//Opfor Team Leader
		
		class Opfor_TeamLeader_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Squad Leader"; // In-game name of unit
		uniformClass = "U_BG_Guerilla1_1";  // Uniform Class
		backpack = "CUP_B_CivPack_WDL"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_B_RRV_DA1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_B_RRV_DA1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_akm", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_akm", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_2 : Opfor_TeamLeader_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74m", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74m", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_3 : Opfor_TeamLeader_2  {
		scope = 2;
		weapons[] = {"hlc_rifle_aks74", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_TeamLeader_4 : Opfor_TeamLeader_1  {
		scope = 2;
		weapons[] = {"RH_hk416s_des", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416s_des", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_5 : Opfor_TeamLeader_1  {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"25Rnd_556x45_famas", "25Rnd_556x45_famas", "25Rnd_556x45_famas", Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {"25Rnd_556x45_famas", "25Rnd_556x45_famas", "25Rnd_556x45_famas", Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_6 : Opfor_TeamLeader_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_akm", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_akm", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_7 : Opfor_TeamLeader_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74m", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74m", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_8 : Opfor_TeamLeader_7  {
		scope = 2;
		weapons[] = {"hlc_rifle_aks74", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_TeamLeader_9 : Opfor_TeamLeader_1  {
		scope = 2;
		weapons[] = {"RH_hk416s_des", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416s_des", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_10 : Opfor_TeamLeader_1  {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"25Rnd_556x45_famas", "25Rnd_556x45_famas", "25Rnd_556x45_famas", Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {"25Rnd_556x45_famas", "25Rnd_556x45_famas", "25Rnd_556x45_famas", Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
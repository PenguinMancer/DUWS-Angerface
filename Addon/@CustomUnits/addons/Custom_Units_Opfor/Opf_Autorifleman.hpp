		//Opfor Autorifleman
		
		class Opfor_Autorifleman_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Autorifleman"; // In-game name of unit
		uniformClass = "U_BG_Guerilla1_1";  // Uniform Class
		backpack = "SP_Carryall_ATacsFG"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"CUP_lmg_PKM", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_lmg_PKM", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Autorifleman_2 : Opfor_Autorifleman_1  {
		scope = 2;
		weapons[] = {"CUP_lmg_Pecheneg", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_lmg_Pecheneg", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Autorifleman_3 : Opfor_Autorifleman_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_rpk", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_rpk", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_45Rnd_762x39_m_rpk", "hlc_45Rnd_762x39_m_rpk", "hlc_45Rnd_762x39_m_rpk"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_45Rnd_762x39_m_rpk", "hlc_45Rnd_762x39_m_rpk", "hlc_45Rnd_762x39_m_rpk"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Autorifleman_4 : Opfor_Autorifleman_3  {
		scope = 2;
		weapons[] = {"hlc_rifle_rpk74n", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_rpk74n", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
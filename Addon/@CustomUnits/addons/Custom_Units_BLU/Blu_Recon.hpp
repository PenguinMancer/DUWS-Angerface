		//Blufor Recon Scout
		
		class Blufor_Recon_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Recon Scout"; // In-game name of unit
		uniformClass = "U_I_G_resistanceLeader_F";  // Uniform Class
		backpack = "IP_B_AssaultPack_SnowTiger"; // Backpack Class
		linkedItems[] = {"VSM_M81_Boonie", "SP_Balaclava_NodUrban", "IP_V_PlateCarrierSpec_rgrSnowHex", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"VSM_M81_Boonie", "SP_Balaclava_NodUrban", "IP_V_PlateCarrierSpec_rgrSnowHex", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_ak74m_2mag", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_ak74m_2mag", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "MiniGrenade", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "MiniGrenade", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Recon Marksman
		
		class Blufor_Recon_Marksman_1 : B_DUWS_base_F  {
		scope = 2;
		displayName =  "French Recon Marksman"; // In-game name of unit
		uniformClass = "Niko_USA_TPAT";  // Uniform Class
		backpack = "TRYK_B_Carryall_wh"; // Backpack Class
		linkedItems[] = {"SP_Bandolier1_Grey", "SP_Shemagh_White", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Bandolier1_Grey", "SP_Shemagh_White", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_svdp_scoped", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_svdp_scoped", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Recon Scout (AT)
		
		class Blufor_Recon_LAT_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Recon scout (AT)"; // In-game name of unit
		uniformClass = "Niko_USA_Yeti";  // Uniform Class
		backpack = "TRYK_B_Carryall_wh"; // Backpack Class
		linkedItems[] = {"SP_JackEllis1_Grey", "TRYK_H_headset2", "SP_Balaclava_NodUrban", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_JackEllis1_Grey", "TRYK_H_headset2", "SP_Balaclava_NodUrban", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_ak74", "RH_gsh18", "launch_RPG32_F", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74", "RH_gsh18", "launch_RPG32_F", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RPG32_F"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RPG32_F"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Recon Explosives Expert
		
		class Blufor_Recon_Exp_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Recon Explosive Specialist"; // In-game name of unit
		uniformClass = "Niko_USA_aobalpine";  // Uniform Class
		backpack = "TRYK_B_Carryall_wh"; // Backpack Class
		linkedItems[] = {"SP_JackEllis1_White", "TRYK_H_Helmet_Snow", "TRYK_Beard_Gr2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_JackEllis1_White", "TRYK_H_Helmet_Snow", "TRYK_Beard_Gr2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_ak103", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_ak103", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "MiniGrenade", "MiniGrenade", "MiniGrenade", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "MiniGrenade", "MiniGrenade", "MiniGrenade", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ATMine_Range_Mag", "SatchelCharge_Remote_Mag", "APERSBoundingMine_Range_Mag"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ATMine_Range_Mag", "SatchelCharge_Remote_Mag", "APERSBoundingMine_Range_Mag"};
		};
		
		//Blufor Recon Medic
		
		class Blufor_Recon_Medic_1 : Blufor_Medic_1  {
		scope = 2;
		displayName = "French Recon Medic"; // In-game name of unit
		uniformClass = "Niko_USA_SnowMARPAT";  // Uniform Class
		backpack = "TRYK_B_Coyotebackpack_WH"; // Backpack Class
		linkedItems[] = {"SP_JackEllis1_Grey", "SP_SSh68NetHelmet_White1", "G_mas_wpn_bala_gog", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_JackEllis1_Grey", "SP_SSh68NetHelmet_White1", "G_mas_wpn_bala_gog", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aku12", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aku12", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"};  //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Recon JTAC
		
		class Blufor_Recon_JTAC_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Recon JTAC"; // In-game name of unit
		uniformClass = "TRYK_U_B_Snow_CombatUniform";  // Uniform Class
		backpack = "IP_B_Kitbag_SnowHex"; // Backpack Class
		linkedItems[] = {"SP_Harness1_Grey", "TRYK_H_wig", "G_mas_wpn_wrap_gog_t", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Harness1_Grey", "TRYK_H_wig", "G_mas_wpn_wrap_gog_t", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_ak74m_folded", "RH_gsh18", "Laserdesignator_mas_h", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_ak74m_folded", "RH_gsh18", "Laserdesignator_mas_h", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ACE_SpottingScope", "ACE_Tripod"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ACE_SpottingScope", "ACE_Tripod"};
		};
		
		//Blufor Recon Team Leader
		
		class Blufor_Recon_TL_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Recon Team Leader"; // In-game name of unit
		uniformClass = "Niko_USA_aobalpinepcu";  // Uniform Class
		backpack = "IP_B_FieldPack_SnowTiger"; // Backpack Class
		linkedItems[] = {"SP_Tactical1_Grey", "SP_Bandana_NodUrban", "G_Bandanna_beast", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Tactical1_Grey", "SP_Bandana_NodUrban", "G_Bandanna_beast", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74", "RH_g17", "Rangefinder_mas_h", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "RH_g17", "Rangefinder_mas_h", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
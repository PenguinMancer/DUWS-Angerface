		//Blufor Autorifleman
		
		class Blufor_Autorifleman_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Autorifleman"; // In-game name of unit
		uniformClass = "Niko_USA_R_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"lbt_operator_coy", "NeckTight_DMO", "TRYK_r_cap_tan_Glasses", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_operator_coy", "NeckTight_DMO", "TRYK_r_cap_tan_Glasses", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_m249_pip1_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_m249_pip1_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_200rnd_556x45_T_SAW", "hlc_200rnd_556x45_T_SAW", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_200rnd_556x45_T_SAW", "hlc_200rnd_556x45_T_SAW", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};

		class Blufor_Autorifleman_2 : Blufor_Autorifleman_1  {
		scope = 2;
		weapons[] = {"rhs_weap_m240G_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m240G_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Autorifleman_3 : Blufor_Autorifleman_1  {
		scope = 2;
		weapons[] = {"hlc_m249_pip1_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_m249_pip1_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Autorifleman_4 : Blufor_Autorifleman_2  {
		scope = 2;
		weapons[] = {"rhs_weap_m240G_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m240G_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Autorifleman_5 : Blufor_Autorifleman_3  {
		scope = 2;
		weapons[] = {"hlc_m249_pip1_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_m249_pip1_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_200rnd_556x45_T_SAW", "hlc_200rnd_556x45_T_SAW", Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_200rnd_556x45_T_SAW", "hlc_200rnd_556x45_T_SAW", Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Autorifleman_6 : Blufor_Autorifleman_4  {
		scope = 2;
		weapons[] = {"rhs_weap_m240G_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m240G_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer", "rhsusf_100Rnd_762x51_m62_tracer", Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
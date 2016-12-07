		//Blufor Grenadier
		
		class Blufor_Grenadier_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Grenadier"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Kitbag"; // Backpack Class
		linkedItems[] = {"lbt_weapons_mc", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_weapons_mc", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_hk416d145_m320_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_hk416d145_m320_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, HE_grenades}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, HE_grenades}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		class Blufor_Grenadier_2 : Blufor_Grenadier_1  {
		scope = 2;
		weapons[] = {"rhs_weap_hk416d145_m320_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_hk416d145_m320_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Grenadier_3 : Blufor_Grenadier_1  {
		scope = 2;
		weapons[] = {"rhs_weap_hk416d145_m320_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_hk416d145_m320_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu, HE_grenades}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu, HE_grenades}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
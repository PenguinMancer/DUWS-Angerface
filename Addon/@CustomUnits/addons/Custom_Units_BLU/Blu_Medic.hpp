		//Blufor Medic

		class Blufor_Medic_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Medic"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"lbt_medical_mc", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_medical_mc", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		};
			
		class Blufor_Medic_2 : Blufor_Medic_1  {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_Medic_3 : Blufor_Medic_1  {
		scope = 2;
		weapons[] = {"RH_hk416_des", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};

		class Blufor_Medic_4 : Blufor_Medic_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};

		class Blufor_Medic_5 : Blufor_Medic_1 {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_Medic_6 : Blufor_Medic_1 {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_Medic_7 : Blufor_Medic_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
			
		class Blufor_Medic_8 : Blufor_Medic_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};

		class Blufor_Medic_9 : Blufor_Medic_1 {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
			
		class Blufor_Medic_10 : Blufor_Medic_1 {
		scope = 2;
		weapons[] = {"bg21_famas_FS_tan", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
			
		class Blufor_Medic_11 : Blufor_Medic_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
			
		class Blufor_Medic_12 : Blufor_Medic_3 {
		scope = 2;
		weapons[] = {"RH_hk416_des_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hk416_des_sighted", "RH_g17", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, G17_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		//Blufor Medic
		
		class Blufor_Medic_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Medic_1"; 
		scope = 2;
		displayName = "Marine Medic"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "TRYK_B_Medbag_ucp"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "G_Spectacles", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "G_Spectacles", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_m18_red", "rhs_mag_m18_red", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_m18_red", "rhs_mag_m18_red", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		};
		
		class Blufor_Medic_2 : Blufor_Medic_1  {
		_generalMacro = "Blufor_Medic_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Medic_3 : Blufor_Medic_1  {
		_generalMacro = "Blufor_Medic_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Medic_4 : Blufor_Medic_1  {
		_generalMacro = "Blufor_Medic_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
class DefaultEventhandlers;
class CfgPatches {
	class Custom_DUWS_Groups {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"Custom_DUWS_Core",
			"Custom_DUWS_Blu",
			"Custom_DUWS_Opf",
			"Custom_DUWS_Weapons"
			};
		version="1";
		projectName="Custom_DUWS_Groups";
		author="TeorgeGakei";
	};
};
class CfgGroups
{
	//West
	class West {
		
		class BLU_DUWS {
			name = "BLU_DUWS";
			
			class Infantry {
				name = "Infantry";
				
				class BUS_InfSquad {
					name = "Rifle Squad";
					side = 1;
					faction = "BLU_DUWS";
					
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "Blufor_Assistant_Autorifleman_1";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "Blufor_Ammobearer_1";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class BUS_InfSquad_Weapons
				{
					name = "Weapons Squad";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Assistant_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "Blufor_Ammobearer_1";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "Blufor_Soldier_3";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class BUS_InfTeam
				{
					name = "Fire Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Grenadier_1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Light_AntiTank_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BUS_InfTeam_AT
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BUS_InfTeam_AA
				{
					name = "Air-Defense Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_AntiAir_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_AntiAir_1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Assistant_AntiAir_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BUS_ReconTeam
				{
					name = "Recon Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_Recon_TL_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Recon_Marksman_1";
						rank = "CORPORAL";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Recon_medic_1_F";
						rank = "PRIVATE";
						position[] = {-5,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Recon_1";
						rank = "CORPORAL";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "Blufor_Recon_lat_1";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "Blufor_Recon_JTAC_1";
						rank = "PRIVATE";
						position[] = {15,-9,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "Blufor_Recon_TL_1";
						rank = "PRIVATE";
						position[] = {-15,-9,0};
					};
				};
				class BUS_ReconPatrol
				{
					name = "Recon Patrol";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_Recon_TL_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Recon_Marksman_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Recon_medic_1_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Recon_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BUS_SniperTeam
				{
					name = "Sniper Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Sniper_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Spotter_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class SpecOps {
				name = "Special Forces";

				class BUS_DiverTeam {
					name = "Diver Team";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "Blufor_Diver_Teamleader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Blufor_Diver_exp_1";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "Blufor_Diver_1";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "Blufor_Diver_1";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
			};
			class Support {
				name = "Support Infantry";
				
				class BUS_Support_CLS {
					name = "Support Team (CLS)";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
			};
			class Motorized {
				name = "Motorized Infantry";

				class BUS_MotInf_Team {
					name = "Motorized Team";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "CUP_B_HMMWV_M2_GPK_USA_custom";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-12, -12, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "Blufor_Light_AntiTank_1";
						rank = "PRIVATE";
						position[] = {14, -13, 0};
					};
				};
			};
			class Mechanized {
				name = "Mechanized Infantry";

				class BUS_MechInfSquad {
					name = "Mechanized Rifle Squad";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "RHS_M2A2_BUSKI_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Blufor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {-12, -12, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "Blufor_Soldier_2";
						rank = "PRIVATE";
						position[] = {13, -14, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "Blufor_Light_AntiTank_1";
						rank = "CORPORAL";
						position[] = {18, -19, -2};
					};
					class Unit4 {
						side = 1;
						vehicle = "Blufor_Marksman_1";
						rank = "PRIVATE";
						position[] = {-19, -19, -2};
					};
					class Unit5 {
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {23, -24, -3};
					};
					class Unit6 {
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-24, -23, -2};
					};
					class Unit7 {
						side = 1;
						vehicle = "Blufor_Ammobearer_1";
						rank = "PRIVATE";
						position[] = {29, -29, -3};
					};
					class Unit8 {
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {-29, -28, -2};
					};
				};
				class BUS_MechInf_AT {
					name = "Mechanized Rifle Squad";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

					class Unit0 {
						side = 1;
						vehicle = "CUP_B_MCV80_GB_D_SLAT_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 1;
						vehicle = "Blufor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {-13, -12, 0};
					};

					class Unit2 {
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {13, -14, 0};
					};

					class Unit3 {
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {18, -19, 0};
					};

					class Unit4 {
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-19, -18, -1};
					};

					class Unit5 {
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "SERGEANT";
						position[] = {23, -24, 1};
					};

					class Unit6 {
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-23, -23, 0};
					};

					class Unit7 {
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {28, -29, 1};
					};

					class Unit8 {
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-29, -28, 0};
					};
				};
			};
			class Armored {
				name = "Armor";

				class BUS_TankSection {
					name = "Tank Section";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0 {
						side = 1;
						vehicle = "rhsusf_m1a2sep1tuskid_usarmy_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "rhsusf_m1a2sep1tuskid_usarmy_custom";
						rank = "SERGEANT";
						position[] = {20, -30, 0};
					};
				};
				class BUS_TankPlatoon_AA {
					name = "Tank Platoon (Combined)";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0 {
						side = 1;
						vehicle = "rhsusf_m1a2sep1tuskid_usarmy_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "I_mas_cars_LR_soft_Stinger_custom";
						rank = "SERGEANT";
						position[] = {20, -30, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "rhsusf_m1a2sep1tuskid_usarmy_custom";
						rank = "SERGEANT";
						position[] = {-20, -30, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "I_mas_cars_LR_soft_Stinger_custom";
						rank = "CORPORAL";
						position[] = {-40, -60, 2};
					};
				};
			};
		};
	};
	//East
	class East {

		class OPFOR_DUWS {
			name = "OPFOR_DUWS";

			class Infantry {
				name = "Infantry";

				class OIA_InfSquad {
					name = "Rifle Squad";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "Opfor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_Soldier_1";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Light_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-5, -5, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_Marksman_1";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};

					class Unit4 {
						side = 0;
						vehicle = "Opfor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {-10, -10, 0};
					};

					class Unit5 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {15, -15, 0};
					};

					class Unit6 {
						side = 0;
						vehicle = "Opfor_Ammoholder_1";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};

					class Unit7 {
						side = 0;
						vehicle = "Opfor_Medic_1";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class OIA_InfSquad_Weapons {
					name = "Weapon Squad";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "Opfor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Grenadier_1";
						rank = "CORPORAL";
						position[] = {-5, -5, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_Marksman_1";
						rank = "SERGEANT";
						position[] = {10, -10, 0};
					};

					class Unit4 {
						side = 0;
						vehicle = "Opfor_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
					};

					class Unit6 {
						side = 0;
						vehicle = "Opfor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};

					class Unit5 {
						side = 0;
						vehicle = "Opfor_Ammoholder_1";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};

					class Unit7 {
						side = 0;
						vehicle = "Opfor_Medic_1";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class OIA_InfTeam {
					name = "Fire Team";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "Opfor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Grenadier_1";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_Light_AntiTank_1";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
			};
			class Mechanized {
				name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";

				class OIA_MechInfSquad {
					name = "Mechanized Rifle Squad";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "CUP_C_Ural_Open_Civ_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {-12, -12, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Soldier_1";
						rank = "PRIVATE";
						position[] = {14, -13, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_Light_AntiTank_1";
						rank = "CORPORAL";
						position[] = {18, -18, 0};
					};

					class Unit4 {
						side = 0;
						vehicle = "Opfor_Marksman_1";
						rank = "PRIVATE";
						position[] = {-18, -18, 0};
					};

					class Unit5 {
						side = 0;
						vehicle = "Opfor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {23, -23, 0};
					};

					class Unit6 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-23, -23, 0};
					};

					class Unit7 {
						side = 0;
						vehicle = "Opfor_Ammoholder_1";
						rank = "PRIVATE";
						position[] = {28, -28, 0};
					};

					class Unit8 {
						side = 0;
						vehicle = "Opfor_Medic_1";
						rank = "PRIVATE";
						position[] = {-28, -28, 0};
					};
				};

				class OIA_MechInf_AT {
					name = "Mechanized Rifle Squad";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "CUP_C_LR_Transport_CTK_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {-12, -17, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {14, -18, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {19, -23, 0};
					};

					class Unit4 {
						side = 0;
						vehicle = "Opfor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-18, -23, 0};
					};

					class Unit5 {
						side = 0;
						vehicle = "Opfor_AntiTank_1";
						rank = "SERGEANT";
						position[] = {24, -28, 0};
					};

					class Unit6 {
						side = 0;
						vehicle = "Opfor_Assistant_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-23, -28, 0};
					};

					class Unit7 {
						side = 0;
						vehicle = "Opfor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {29, -33, 0};
					};

					class Unit8 {
						side = 0;
						vehicle = "Opfor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-28, -33, 0};
					};
				};
			};
		};
	};	
};

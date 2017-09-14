class CfgGroups
{
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
						vehicle = "Blufor_Soldier_1";
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
						vehicle = "rhsusf_m1025_d_m2_DUWS";
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
						vehicle = "RHS_M2A3_BUSKIII_DUWS";
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
						vehicle = "Blufor_Soldier_1";
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
						vehicle = "RHS_M2A3_BUSKIII_DUWS";
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
						vehicle = "CUP_B_M1A1_DES_USMC_DUWS";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "CUP_B_M1A1_DES_USMC_DUWS";
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
						vehicle = "CUP_B_M1A1_DES_USMC_DUWS";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "CUP_B_M1128_MGS_Desert_DUWS";
						rank = "SERGEANT";
						position[] = {20, -30, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "CUP_B_M1A1_DES_USMC_DUWS";
						rank = "SERGEANT";
						position[] = {-20, -30, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "CUP_B_M1128_MGS_Desert_DUWS";
						rank = "CORPORAL";
						position[] = {-40, -60, 2};
					};
				};
			};
		};
	};	
};
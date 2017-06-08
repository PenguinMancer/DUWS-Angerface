class CfgGroups
{
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
						vehicle = "CUP_C_Ural_Open_Civ_DUWS";
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
						vehicle = "CUP_I_Datsun_PK_TK_Random_DUWS";
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
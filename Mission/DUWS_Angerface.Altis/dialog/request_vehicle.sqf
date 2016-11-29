_index = lbCurSel 2102;


_spawnPos = getpos player;
_spawnPos = [(_spawnPos select 0)+30, _spawnPos select 1];

switch (_index) do
{
    case 0:
    {
          if (commandpointsblu1 >= 1) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 1;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_Quadbike_01_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 1:
    {
          if (commandpointsblu1 >= 4) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 4;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "I_G_Offroad_01_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 2:
    {
          if (commandpointsblu1 >= 6) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 6;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "I_G_Van_01_transport_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 3:
    {
          if (commandpointsblu1 >= 5) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 5;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "CUP_B_UAZ_Open_CDF" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 4:
    {
          if (commandpointsblu1 >= 15) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 15;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "CUP_O_Datsun_PK_Random" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 5:
    {
          if (commandpointsblu1 >= 20) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 20;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "CUP_I_SUV_Armored_ION" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 6:
    {
          if (commandpointsblu1 >= 8) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 8;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_Truck_01_covered_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 7:
    {
          if (commandpointsblu1 >= 8) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 8;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "CUP_O_Ural_RU" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 8:
    {
          if (commandpointsblu1 >= 8) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 8;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhsusf_M1078A1P2_wd_fmtv_usarmy" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//SEMI Armored
	case 9:
    {
          if (commandpointsblu1 >= 5) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 5;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhsusf_m1025_w" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 10:
    {
          if (commandpointsblu1 >= 18) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 18;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhsusf_m1025_w_m2" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 11:
    {
          if (commandpointsblu1 >= 5) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 5;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhs_tigr_msv" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 12:
    {
          if (commandpointsblu1 >= 5) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 5;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_MRAP_01_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 13:
    {
          if (commandpointsblu1 >= 18) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 18;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_MRAP_01_hmg_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 14:
    {
          if (commandpointsblu1 >= 25) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 25;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_MRAP_01_gmg_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//APCS
	case 15:
    {
          if (commandpointsblu1 >= 25) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 25;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_APC_Tracked_01_rcws_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 16:
    {
          if (commandpointsblu1 >= 28) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 28;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_APC_Tracked_01_CRV_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 17:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "RHS_M2A3_BUSKIII" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 18:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhsusf_m113_usarmy_M240" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 19:
    {
          if (commandpointsblu1 >= 25) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 25;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhs_btr80a_vdv" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 20:
    {
          if (commandpointsblu1 >= 35) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 25;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "CUP_B_Ridgback_HMG_GB_D" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 21:
    {
          if (commandpointsblu1 >= 35) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 35;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_APC_Wheeled_01_cannon_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//Infantry Fighting Vehicle
	case 22:
    {
          if (commandpointsblu1 >= 25) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 25;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhs_bmd4ma_vdv" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//AA gun
	case 23:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_APC_Tracked_01_AA_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//Artillery
	case 24:
    {
          if (commandpointsblu1 >= 60) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 60;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "RHS_BM21_MSV_01" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 25:
    {
          if (commandpointsblu1 >= 75) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 75;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_MBT_01_mlrs_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 26:
    {
          if (commandpointsblu1 >= 75) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 75;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_MBT_01_arty_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 27:
    {
          if (commandpointsblu1 >= 75) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 75;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhsusf_m109_usarmy" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 28:
    {
          if (commandpointsblu1 >= 80) then
            {
              if (isClass(configFile >> "CfgVehicles" >> "rhs_2s3_tv")) then {
                hint "Vehicle ready !";
                commandpointsblu1 = commandpointsblu1 - 80;
                ctrlSetText [1000, format["%1",commandpointsblu1]];
                _vehic = "rhs_2s3_tv" createVehicle _spawnPos;
              } else {
              hint "RHS:Escalation mod not installed!";
              };
          }
          else
          {
          hint "Not enough command points";
          };
    };
//Tanks
    case 29:
    {
          if (commandpointsblu1 >= 40) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 40;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_MBT_01_cannon_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 30:
    {
          if (commandpointsblu1 >= 40) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 40;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_MBT_01_TUSK_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 31:
    {
          if (commandpointsblu1 >= 40) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 40;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhs_t80u" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 32:
    {
          if (commandpointsblu1 >= 60) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 60;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhsusf_m1a2sep1tuskiwd_usarmy" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//Unarmed Helicopters
	case 33:
    {
          if (commandpointsblu1 >= 12) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 12;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "C_Heli_Light_01_civil_F" createVehicle _spawnPos;
		   _vehic setVariable ["color",13];
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 34:
    {
          if (commandpointsblu1 >= 15) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 15;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_Heli_Light_01_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 35:
    {
          if (commandpointsblu1 >= 22) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 22;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_Heli_Transport_01_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 36:
    {
          if (commandpointsblu1 >= 25) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 25;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "RHS_Mi8AMTSh_vvs" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 37:
    {
          if (commandpointsblu1 >= 26) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 26;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_Heli_Transport_03_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//Armed Helicopters
	case 38:
    {
          if (commandpointsblu1 >= 20) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 20;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "USAF_HH60G" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 39:
    {
          if (commandpointsblu1 >= 25) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 25;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_Heli_Light_01_armed_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 40:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "USAF_CV22" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 41:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "CUP_I_Ka60_GL_Blk_ION" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 42:
    {
          if (commandpointsblu1 >= 35) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "RHS_Mi8MTV3_vvs" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
    case 43:
    {
          if (commandpointsblu1 >= 45) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 45;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_Heli_Attack_01_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 44:
    {
          if (commandpointsblu1 >= 40) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 40;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhs_ah64d_wd" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 45:
    {
          if (commandpointsblu1 >= 50) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 50;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "RHS_Ka52_vvs" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//Fighter Jets
	case 46:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "RHS_Su25SM_vvs" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 47:
    {
          if (commandpointsblu1 >= 45) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 45;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_Plane_CAS_01_F" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 48:
    {
          if (commandpointsblu1 >= 60) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 60;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "rhs_a10" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 49:
    {
          if (commandpointsblu1 >= 70) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 70;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "USAF_B1B" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 50:
    {
          if (commandpointsblu1 >= 100) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 100;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "USAF_AC130U" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//Other Jets
	case 51:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "USAF_C5" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 52:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "RHS_C130J" createVehicle _spawnPos;
          }
          else
          {
          hint "Not enough command points";
          };
    };
//UAVs
	case 53:
    {
          if (commandpointsblu1 >= 5) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 5;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = execVM "dialog\UAV3.sqf";
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 54:
    {
          if (commandpointsblu1 >= 10) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 10;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_UGV_01_F" createVehicle _spawnPos; createVehicleCrew _vehic;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 55:
    {
          if (commandpointsblu1 >= 15) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 15;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = execVM "dialog\UAV1.sqf";
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 56:
    {
          if (commandpointsblu1 >= 15) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 15;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = execVM "dialog\UAV2.sqf";
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 57:
    {
          if (commandpointsblu1 >= 20) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 20;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "B_UGV_01_rcws_F" createVehicle _spawnPos; createVehicleCrew _vehic;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 58:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "USAF_MQ9" createVehicle _spawnPos; createVehicleCrew _vehic;
          }
          else
          {
          hint "Not enough command points";
          };
    };
	case 59:
    {
          if (commandpointsblu1 >= 30) then
          {
           hint "Vehicle ready !";
           commandpointsblu1 = commandpointsblu1 - 30;
           ctrlSetText [1000, format["%1",commandpointsblu1]];
           _vehic = "USAF_RQ4A" createVehicle _spawnPos; createVehicleCrew _vehic;
          }
          else
          {
          hint "Not enough command points";
          };
    };
};
publicVariable "commandpointsblu1";
//hint format["index: %1",_index];

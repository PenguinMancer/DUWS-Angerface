private [ "_ghost_spot", "_vehicle", "_dist", "_actualdir" ];
_index = lbCurSel 5607;

closeDialog 0;

_USDcost = 0;
_vehicle = "Land_HelipadEmpty_F";
_classname = "";
_posFOB = getpos hq_blu1;
isboat = false;
build_invalid = 0;
buildconfirmation = 1;
build_rotation = 0;

switch (_index) do
{
    case 0:
    {
          if (USDbudget >= 5) then
          {
           _USDcost = 5;
           _classname = "B_Quadbike_01_F";
          }
          else
          {
		  hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 1:
    {
          if (USDbudget >= 10) then
          {
           _USDcost = 10;
           _classname = "I_G_Offroad_01_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 2:
    {
          if (USDbudget >= 12) then
          {
           _USDcost = 12;
           _classname = "I_G_Van_01_transport_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 3:
    {
          if (USDbudget >= 7) then
          {
           _USDcost = 7;
           _classname = "CUP_B_UAZ_Open_CDF";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 4:
    {
          if (USDbudget >= 15) then
          {
           _USDcost = 15;
           _classname = "CUP_O_Datsun_PK_Random";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 5:
    {
          if (USDbudget >= 150) then
          {
           _USDcost = 150;
           _classname = "CUP_I_SUV_Armored_ION";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 6:
    {
          if (USDbudget >= 20) then
          {
           _USDcost = 20;
           _classname = "B_Truck_01_covered_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 7:
    {
          if (USDbudget >= 18) then
          {
           _USDcost = 18;
           _classname = "CUP_O_Ural_RU";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 8:
    {
          if (USDbudget >= 18) then
          {
           _USDcost = 18;
           _classname = "rhsusf_M1078A1P2_wd_fmtv_usarmy";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
//SEMI Armored
	case 9:
    {
          if (USDbudget >= 50) then
          {
           _USDcost = 50;
           _classname = "rhsusf_m1025_w";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 10:
    {
          if (USDbudget >= 70) then
          {
           _USDcost = 70;
           _classname = "rhsusf_m1025_w_m2";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 11:
    {
          if (USDbudget >= 45) then
          {
           _USDcost = 45;
           _classname = "rhs_tigr_msv";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 12:
    {
          if (USDbudget >= 75) then
          {
           _USDcost = 75;
           _classname = "B_MRAP_01_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 13:
    {
          if (USDbudget >= 95) then
          {
           _USDcost = 95;
           _classname = "B_MRAP_01_hmg_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 14:
    {
          if (USDbudget >= 100) then
          {
           _USDcost = 100;
           _classname = "B_MRAP_01_gmg_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
//APCS
	case 15:
    {
          if (USDbudget >= 2000) then
          {
           _USDcost = 2000;
           _classname = "B_APC_Tracked_01_rcws_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 16:
    {
          if (USDbudget >= 2000) then
          {
           _USDcost = 2000;
           _classname = "B_APC_Tracked_01_CRV_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 17:
    {
          if (USDbudget >= 1000) then
          {
           _USDcost = 1000;
           _classname = "RHS_M2A3_BUSKIII";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 18:
    {
          if (USDbudget >= 300) then
          {
           _USDcost = 300;
           _classname = "rhsusf_m113_usarmy_M240";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 19:
    {
          if (USDbudget >= 1000) then
          {
           _USDcost = 1000;
           _classname = "rhs_btr80a_vdv";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 20:
    {
          if (USDbudget >= 500) then
          {
           _USDcost = 500;
           _classname = "CUP_B_Ridgback_HMG_GB_D";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 21:
    {
          if (USDbudget >= 1500) then
          {
           _USDcost = 1500;
           _classname = "B_APC_Wheeled_01_cannon_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 22:
    {
          if (USDbudget >= 1500) then
          {
           _USDcost = 1500;
           _classname = "rhs_bmd4ma_vdv";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
//AA gun
	case 23:
    {
          if (USDbudget >= 3000) then
          {
           _USDcost = 3000;
           _classname = "B_APC_Tracked_01_AA_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
//Artillery
	case 24:
    {
          if (USDbudget >= 1000) then
          {
           _USDcost = 1000;
           _classname = "RHS_BM21_MSV_01";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 25:
    {
          if (USDbudget >= 1500) then
          {
           _USDcost = 1500;
           _classname = "B_MBT_01_mlrs_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 26:
    {
          if (USDbudget >= 2000) then
          {
           _USDcost = 2000;
           _classname = "B_MBT_01_arty_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 27:
    {
          if (USDbudget >= 1500) then
          {
           _USDcost = 1500;
           _classname = "rhsusf_m109_usarmy";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 28:
    {
          if (USDbudget >= 1000) then
          {
           _USDcost = 1000;
           _classname = "rhs_2s3_tv";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
//Tanks
    case 29:
    {
          if (USDbudget >= 8000) then
          {
           _USDcost = 8000;
           _classname = "B_MBT_01_cannon_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 30:
    {
          if (USDbudget >= 8000) then
          {
           _USDcost = 8000;
           _classname = "B_MBT_01_TUSK_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 31:
    {
          if (USDbudget >= 3000) then
          {
           _USDcost = 3000;
           _classname = "rhs_t80u";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 32:
    {
          if (USDbudget >= 6000) then
          {
           _USDcost = 6000;
           _classname = "rhsusf_m1a2sep1tuskiwd_usarmy";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
//Unarmed Helicopters
	case 33:
    {
          if (USDbudget >= 500) then
          {
           _USDcost = 500;
           _classname = "C_Heli_Light_01_civil_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 34:
    {
          if (USDbudget >= 1250) then
          {
           _USDcost = 1250;
           _classname = "B_Heli_Light_01_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 35:
    {
          if (USDbudget >= 4000) then
          {
           _USDcost = 4000;
           _classname = "B_Heli_Transport_01_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 36:
    {
          if (USDbudget >= 3000) then
          {
           _USDcost = 3000;
           _classname = "RHS_Mi8AMTSh_vvs";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 37:
    {
          if (USDbudget >= 5000) then
          {
           _USDcost = 5000;
           _classname = "B_Heli_Transport_03_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
//Armed Helicopters
	case 38:
    {
          if (USDbudget >= 3500) then
          {
           _USDcost = 3500;
           _classname = "B_Heli_Light_01_armed_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 39:
    {
          if (USDbudget >= 10000) then
          {
           _USDcost = 10000;
           _classname = "CUP_I_Ka60_GL_Blk_ION";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 40:
    {
          if (USDbudget >= 8500) then
          {
           _USDcost = 8500;
           _classname = "RHS_Mi8MTV3_vvs";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
    case 41:
    {
          if (USDbudget >= 15000) then
          {
           _USDcost = 15000;
           _classname = "B_Heli_Attack_01_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 42:
    {
          if (USDbudget >= 15000) then
          {
           _USDcost = 15000;
           _classname = "rhs_ah64d_wd";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 43:
    {
          if (USDbudget >= 8000) then
          {
           _USDcost = 8000;
           _classname = "RHS_Ka52_vvs";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
//Fighter Jets
	case 44:
    {
          if (USDbudget >= 15000) then
          {
           _USDcost = 15000;
           _classname = "RHS_Su25SM_vvs";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 45:
    {
          if (USDbudget >= 20000) then
          {
           _USDcost = 20000;
           _classname = "B_Plane_CAS_01_F";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 46:
    {
          if (USDbudget >= 20000) then
          {
           _USDcost = 20000;
           _classname = "rhs_a10";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 47:
    {
          if (USDbudget >= 15000) then
          {
           _USDcost = 15000;
           _classname = "RHS_C130J";
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
//Boats n shit
	case 48:
    {
          if (USDbudget >= 6500) then
          {
           _USDcost = 6500;
           _classname = "C_Scooter_Transport_01_F";
		   isboat = true;
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 49:
    {
          if (USDbudget >= 15) then
          {
           _USDcost = 15;
           _classname = "B_Boat_Transport_01_F";
		   isboat = true;
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 50:
    {
          if (USDbudget >= 250) then
          {
           _USDcost = 250;
           _classname = "CUP_B_RHIB_USMC";
		   isboat = true;
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 51:
    {
          if (USDbudget >= 2000) then
          {
           _USDcost = 2000;
           _classname = "rhsusf_mkvsoc";
		   isboat = true;
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
	case 52:
    {
          if (USDbudget >= 200) then
          {
           _USDcost = 200;
           _classname = "B_SDV_01_F";
		   isboat = true;
          }
          else
          {
          hint "Not enough USD.";
          buildconfirmation = 2;
          };
    };
};

actcancel = -1;
actplace = -1;
actrotate = -1;

while {buildconfirmation == 1} do {

	actcancel = player addAction ["<t color='#B0FF00'>Cancel</t>","scripts\buildcancel.sqf","",-725,false,true];
	actplace = player addAction ["<t color='#B0FF00'>Place</t>","scripts\buildplace.sqf","",-775,false,true,"","build_invalid == 0"];
	actrotate = player addAction ["<t color='#B0FF00'>Rotation</t>","build_rotation = build_rotation + 90","",-750,false,false];

	_ghost_spot = getmarkerpos "ghost_spot";

	_vehicle = _classname createVehicleLocal _ghost_spot;
	_vehicle allowdamage false;
	_vehicle setVehicleLock "LOCKED";
	_vehicle enableSimulationGlobal false;

	_dist = 0.6 * (sizeOf _classname);
	if (_dist < 3.5) then { _dist = 3.5 };
	_dist = _dist + 0.5;

	for [{_i=0}, {_i<5}, {_i=_i+1}] do {
		_vehicle setObjectTextureGlobal [_i, '#(rgb,8,8,3)color(0,1,0,0.8)'];
	};

	while {buildconfirmation == 1 && alive player} do {
		_truedir = 90 - (getdir player);
		_truepos = [((getpos player) select 0) + (_dist * (cos _truedir)), ((getpos player) select 1) + (_dist * (sin _truedir)),0];
		
		_actualdir = ((getdir player) + build_rotation);
		_actualdir = _actualdir + 270;
		
		while { _actualdir > 360 } do { _actualdir = _actualdir - 360 };
		while { _actualdir < 0 } do { _actualdir = _actualdir + 360 };

		_vehicle setdir _actualdir;
		
		if ( ((_truepos distance _posFOB) < 250) && ((!surfaceIsWater _truepos) && (!surfaceIsWater getpos player)) || (isboat)  ) then {
			_vehicle setpos _truepos;
			_vehicle setVectorUp [0,0,1]; //for HQ/FOBs only. 
			build_invalid = 0;
		} else {
			_vehicle setpos _ghost_spot;
			build_invalid = 1;
			if (((surfaceIsWater _truepos) || (surfaceIsWater getpos player)) && !(isboat)) then {
				hint "Can't build on water.";
			} else {
				hint "Too far away from HQ."
			};
		};
		sleep 0.05;
	};
	
	if (!alive player) then {
		buildconfirmation = 2;
	};
	
};

if (actcancel != -1) then {
player removeAction actcancel;
};
if (actplace != -1) then {
player removeAction actplace;
};
if (actrotate != -1) then {
player removeAction actrotate;
};

if (buildconfirmation == 2) exitwith {
deleteVehicle _vehicle;
};

_vehpos = getpos _vehicle;
_vehdir = getdir _vehicle;
deleteVehicle _vehicle;
sleep 0.1;
_vehicle = _classname createVehicle _vehpos;
_vehicle allowDamage false;
_vehicle setpos _vehpos;
_vehicle setDir _vehdir;
_vehicle setVectorUp [0,0,1];
sleep 0.3;
_vehicle allowDamage true;
_vehicle setDamage 0;

USDbudget = USDbudget - _USDcost;

publicVariable "USDbudget";
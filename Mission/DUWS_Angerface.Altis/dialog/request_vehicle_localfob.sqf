private [ "_ghost_spot", "_vehicle", "_dist", "_actualdir" ];
_index = lbCurSel 7611;

closeDialog 0;

_cpcost = 0;
_vehicle = "Land_HelipadEmpty_F";
_classname = "";
_position = getpos player;
_posFOB = [Array_of_FOBS, _position] call BIS_fnc_nearestPosition;
isboat = false;
build_invalid = 0;
buildconfirmation = 1;
build_rotation = 0;

switch (_index) do
{
    case 0:
    {
          if (commandpointsblu1 >= 1) then
          {
           _cpcost = 1;
           _classname = "B_Quadbike_01_F";
          }
          else
          {
		  hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
    case 1:
    {
          if (commandpointsblu1 >= 4) then
          {
           _cpcost = 4;
           _classname = "I_G_Offroad_01_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 2:
    {
          if (commandpointsblu1 >= 6) then
          {
           _cpcost = 6;
           _classname = "I_G_Van_01_transport_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
    case 3:
    {
          if (commandpointsblu1 >= 8) then
          {
           _cpcost = 8;
           _classname = "B_Truck_01_covered_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
    case 4:
    {
          if (commandpointsblu1 >= 8) then
          {
           _cpcost = 8;
           _classname = "rhsusf_M1078A1P2_wd_fmtv_usarmy";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
//SEMI Armored
	case 5:
    {
          if (commandpointsblu1 >= 5) then
          {
           _cpcost = 5;
           _classname = "rhsusf_m1025_w";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 6:
    {
          if (commandpointsblu1 >= 18) then
          {
           _cpcost = 18;
           _classname = "rhsusf_m1025_w_m2";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
//APCS
	case 7:
    {
          if (commandpointsblu1 >= 30) then
          {
           _cpcost = 30;
           _classname = "RHS_M2A3_BUSKIII";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 8:
    {
          if (commandpointsblu1 >= 30) then
          {
           _cpcost = 30;
           _classname = "rhsusf_m113_usarmy_M240";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 9:
    {
          if (commandpointsblu1 >= 35) then
          {
           _cpcost = 25;
           _classname = "CUP_B_Ridgback_HMG_GB_D";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
//Artillery
	case 10:
    {
          if (commandpointsblu1 >= 75) then
          {
           _cpcost = 75;
           _classname = "B_MBT_01_mlrs_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 11:
    {
          if (commandpointsblu1 >= 75) then
          {
           _cpcost = 75;
           _classname = "rhsusf_m109_usarmy";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
//Tanks
	case 12:
    {
          if (commandpointsblu1 >= 60) then
          {
           _cpcost = 60;
           _classname = "rhsusf_m1a2sep1tuskiwd_usarmy";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
//Unarmed Helicopters
    case 13:
    {
          if (commandpointsblu1 >= 15) then
          {
           _cpcost = 15;
           _classname = "B_Heli_Light_01_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
//Armed Helicopters
	case 14:
    {
          if (commandpointsblu1 >= 25) then
          {
           _cpcost = 25;
           _classname = "B_Heli_Light_01_armed_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 15:
    {
          if (commandpointsblu1 >= 40) then
          {
           _cpcost = 40;
           _classname = "rhs_ah64d_wd";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
//Fighter Jets
	case 16:
    {
          if (commandpointsblu1 >= 45) then
          {
           _cpcost = 45;
           _classname = "B_Plane_CAS_01_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 17:
    {
          if (commandpointsblu1 >= 60) then
          {
           _cpcost = 60;
           _classname = "rhs_a10";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 18:
    {
          if (commandpointsblu1 >= 30) then
          {
           _cpcost = 30;
           _classname = "RHS_C130J";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
};

actcancel = -1;
actplace = -1;
actrotate = -1;

while {buildconfirmation == 1} do {

	actcancel = player addAction ["<t color='#B0FF00'>Cancel</t>","dialog\building\buildcancel.sqf","",-725,false,true];
	actplace = player addAction ["<t color='#B0FF00'>Place</t>","dialog\building\buildplace.sqf","",-775,false,true,"","build_invalid == 0"];
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
				hint "Too far away from FOB."
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

commandpointsblu1 = commandpointsblu1 - _cpcost;

publicVariable "commandpointsblu1";
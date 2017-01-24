private [ "_ghost_spot", "_vehicle", "_dist", "_actualdir" ];
_index = lbCurSel 9708;

closeDialog 0;

_cpcost = 0;
_vehicle = "Land_HelipadEmpty_F";
_classname = "";
_posFOB = getpos hq_blu1;
isboat = false;
Deletemode = 0;
build_invalid = 0;
buildconfirmation = 1;
build_rotation = 0;

switch (_index) do
{
    case 0:
    {
	_classname = "Land_BagFence_Short_F";
    };
    case 1:
    {
	_classname = "Land_BagFence_Long_F";
    };
	case 2:
    {
	_classname = "Land_BagFence_Round_F";
    };
	case 3:
    {
	_classname = "Land_BagFence_Corner_F";
    };
	case 4:
    {
	_classname = "Land_BagFence_End_F";
    };
	case 5:
    {
	_classname = "Land_HBarrier_1_F";
    };
	case 6:
    {
	_classname = "Land_HBarrier_3_F";
    };
	case 7:
    {
	_classname = "Land_HBarrier_5_F";
    };
	case 8:
    {
	_classname = "Land_HBarrierBig_F";
    };
	case 9:
    {
	_classname = "Land_HBarrierTower_F";
    };
	case 10:
    {
	_classname = "Land_HBarrierWall4_F";
    };
	case 11:
    {
	_classname = "Land_HBarrierWall6_F";
    };
	case 12:
    {
	_classname = "Land_HBarrierWall_corner_F";
    };
	case 13:
    {
	_classname = "Land_HBarrierWall_corridor_F";
    };
	case 14:
    {
	_classname = "CamoNet_BLUFOR_F";
    };
	case 15:
    {
	_classname = "CamoNet_BLUFOR_open_F";
    };
	case 16:
    {
	_classname = "CamoNet_BLUFOR_big_F";
    };
	case 17:
    {
	_classname = "Land_Concrete_SmallWall_4m_F";
    };
	case 18:
    {
	_classname = "Land_CncWall1_F";
    };
	case 19:
    {
	_classname = "Land_CncBarrier_F";
    };
	case 20:
    {
	_classname = "Land_CncBarrierMedium_F";
    };
	case 21:
    {
	_classname = "land_PipeWall_concretel_8m_F";
    };
	case 22:
    {
	_classname = "Land_IndFnc_3_F";
    };
	case 23:
    {
	_classname = "Land_Wired_Fence_4m_F";
    };
	case 24:
    {
	_classname = "Land_New_WiredFence_5m_F";
    };
	case 25:
    {
	_classname = "Land_Campfire_F";
    };
	case 26:
    {
	_classname = "Land_CampingChair_V1_F";
    };
	case 27:
    {
	_classname = "Land_CampingTable_small_F";
    };
	case 28:
    {
	_classname = "Land_CampingTable_F";
    };
	case 29:
    {
	_classname = "Land_Sleeping_bag_F";
    };
	case 30:
    {
	_classname = "Land_Pallet_F";
    };
	case 31:
    {
	_classname = "Land_Bricks_V1_F";
    };
	case 32:
    {
	_classname = "Land_CinderBlocks_F";
    };
	case 33:
    {
	_classname = "Land_ConcretePipe_F";
    };
	case 34:
    {
	_classname = "Land_IronPipes_F";
    };
	case 35:
    {
	_classname = "Land_WoodenBox_F";
    };
	case 36:
    {
	_classname = "Land_WorkStand_F";
    };
	case 37:
    {
	_classname = "Land_BagBunker_Small_F";
    };
	case 38:
    {
	_classname = "Land_BagBunker_Large_F";
    };
	case 39:
    {
	_classname = "Land_BagBunker_Tower_F";
    };
	case 40:
    {
          if (commandpointsblu1 >= 5) then
          {
           _cpcost = 5;
           _classname = "Land_TentHangar_V1_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 41:
    {
          if (commandpointsblu1 >= 5) then
          {
           _cpcost = 5;
           _classname = "Land_Cargo_House_V1_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 42:
    {
          if (commandpointsblu1 >= 5) then
          {
           _cpcost = 5;
           _classname = "Land_Cargo_Patrol_V1_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 43:
    {
          if (commandpointsblu1 >= 10) then
          {
           _cpcost = 10;
           _classname = "Land_Cargo_Tower_V1_F";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 44:
    {
	_classname = "ShootingPos_F";
    };
	case 45:
    {
	_classname = "TargetP_Inf_F";
    };
	case 46:
    {
	_classname = "Land_Ammobox_rounds_F";
    };
	case 47:
    {
	_classname = "Box_NATO_Wps_F";
    };
	case 48:
    {
	_classname = "Box_NATO_WpsSpecial_F";
    };
	case 49:
    {
	_classname = "Box_NATO_WpsLaunch_F";
    };
	case 50:
    {
	_classname = "Box_NATO_Ammo_F";
    };
	case 51:
    {
	_classname = "Box_NATO_AmmoOrd_F";
    };
	case 52:
    {
	_classname = "Box_NATO_Grenades_F";
    };
	case 53:
    {
	_classname = "Box_NATO_Support_F";
    };
	case 54:
    {
	_classname = "Box_NATO_AmmoVeh_F";
    };
	case 55:
    {
          if (commandpointsblu1 >= 15) then
          {
           _cpcost = 15;
           _classname = "RHS_M2StaticMG_MiniTripod_D";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 56:
    {
          if (commandpointsblu1 >= 15) then
          {
           _cpcost = 15;
           _classname = "RHS_M2StaticMG_D";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 57:
    {
          if (commandpointsblu1 >= 15) then
          {
           _cpcost = 15;
           _classname = "RHS_M252_D";
          }
          else
          {
          hint "Not enough command points.";
          buildconfirmation = 2;
          };
    };
	case 58:
    {
          if (commandpointsblu1 >= 15) then
          {
           _cpcost = 15;
           _classname = "RHS_MK19_TriPod_D";
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
_vehicle setDamage 0;
[[_vehicle,["<t color='#B0FF00'>Delete Fortification</t>","dialog\Delete_fortification.sqf",[_vehicle],-900,false,true,"","Deletemode == 1"]],"addAction",true,true] call BIS_fnc_MP;

commandpointsblu1 = commandpointsblu1 - _cpcost;

publicVariable "commandpointsblu1";
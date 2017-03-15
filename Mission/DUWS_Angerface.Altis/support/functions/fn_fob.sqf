private [ "_ghost_spot", "_vehicle", "_dist", "_actualdir" ];
_position = _this select 0;
zoneFound = false;
build_invalid = 0;
buildconfirmation = 1;

_vehicle = "Land_HelipadEmpty_F";
_classname = "Land_Cargo_HQ_V3_F"; // this is the desert one

if (count WARCOM_zones_controled_by_BLUFOR == 0) exitWith {
["Info",["NO ZONES CONTROLLED","Blufor currently controls no zones."]] call bis_fnc_showNotification;
sleep 15;
_repfob = [player,"fob_support"] call BIS_fnc_addCommMenuItem;
DUWSrepfob = _repfob;
};

_closest = [WARCOM_zones_controled_by_BLUFOR, _position] call BIS_fnc_nearestPosition;
if (_position distance _closest < 250) then {zoneFound = true};

if (!zoneFound) exitWith {
	["Info",["NO FOB ALLOWED HERE","You Must Be Within 250m of a Green Zone's Center"]] call bis_fnc_showNotification;
	sleep 15;
  _repfob = [player,"fob_support"] call BIS_fnc_addCommMenuItem;
  DUWSrepfob = _repfob;
};

if (commandpointsblu1 < 10) exitWith {
  ["info",["Not enough command points","Not enough Command Points (10CP required)"]] call bis_fnc_showNotification;
  sleep 15;
  _repfob = [player,"fob_support"] call BIS_fnc_addCommMenuItem;
  DUWSrepfob = _repfob;
};

// REGARDE SI LA ZONE EST OK
Hint "Requesting a FOB...";
player sidechat "Requesting a FOB on my position...";

_trg=createTrigger["EmptyDetector",_closest];
_trg setTriggerArea[500,500,0,false];
_trg setTriggerActivation["EAST","PRESENT",true];
_trg setTriggerStatements["this", "", ""];
sleep 10;
_amountOPFOR = count list _trg;

deleteVehicle _trg;

if (_amountOPFOR > 3) exitWith {
Hint "This position is not clear from enemies";
PAPABEAR sidechat "Request denied. Enemies are too close to this position."; 
sleep 15;
  _repfob = [player,"fob_support"] call BIS_fnc_addCommMenuItem;
  DUWSrepfob = _repfob;
};

actcancel = -1;
actplace = -1;

while {buildconfirmation == 1} do {

	actcancel = player addAction ["<t color='#B0FF00'>Cancel</t>","dialog\building\buildcancel.sqf","",-725,false,true];
	actplace = player addAction ["<t color='#B0FF00'>Place</t>","dialog\building\buildplace.sqf","",-775,false,true,"","build_invalid == 0"];

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

		if ( ((_truepos distance _closest) < 250) && ((!surfaceIsWater _truepos) && (!surfaceIsWater getpos player)) ) then {
			_vehicle setpos _truepos;
			_vehicle setVectorUp [0,0,1]; //for HQ/FOBs only. 
			build_invalid = 0;
		} else {
			_vehicle setpos _ghost_spot;
			build_invalid = 1;
			if ((surfaceIsWater _truepos) || (surfaceIsWater getpos player)) then {
				hint "Can't build on water.";
			} else {
				hint "Too far away from zone center."
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

if (buildconfirmation == 2) exitwith {
deleteVehicle _vehicle;
sleep 15;
_repfob = [player,"fob_support"] call BIS_fnc_addCommMenuItem;
DUWSrepfob = _repfob;
};

commandpointsblu1 = commandpointsblu1 - 10;
publicVariable "commandpointsblu1";
PAPABEAR sidechat "Roger that, the FOB is being deployed...";

_vehpos = getpos _vehicle;
deleteVehicle _vehicle;
sleep 0.1;
_fob = _classname createVehicle _vehpos;
_fob allowDamage false;
_fob setpos _vehpos;
_fob setVectorUp [0,0,1];
sleep 0.3;
_fob allowDamage true;
_fob setDamage 0;

_fobname = [] call Recurring_fnc_getRandomCallsign;

// create marker on FOB
_markername = format["fob%1%2",round (_vehpos select 0),round (_vehpos select 1)]; // Define marker name
//hint _markername;
_markerstr = createMarker [str(_markername), _vehpos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "loc_Bunker";
str(_markername) setMarkerColor "ColorBLUFOR";
str(_markername) setMarkerText format["FOB %1",_fobname];
str(_markername) setMarkerSize [2.5, 2.5];
fobname = _fobname;
publicvariable "fobname"; 

sleep 5;

[_fob,"Recurring_fnc_addFobActions",true,true] spawn BIS_fnc_MP;
[missionNamespace, _vehpos] remoteExecCall ["BIS_fnc_addRespawnPosition", 0, true];

// For fortifying
[[_fob,["<t color='#ff0000'>Fortify FOB(4CP)</t>","inithq\fortifyFOB.sqf", getpos _fob, 0, true, true, "", "_this == player"]],"addAction",true,true] call BIS_fnc_MP;

PAPABEAR sidechat "The FOB has been deployed.";

/////////////////////////////////////////////////////////////////////////////
[_vehpos, 250] spawn SoldierSpawn_fnc_createblupatrol;
[_vehpos, 250] spawn SoldierSpawn_fnc_createblupatrol;
[_vehpos, 250] spawn SoldierSpawn_fnc_createblupatrol;
_handle = [_vehpos] execVM "initHQ\guards.sqf";
////////////////////////////////////////////////////////////////////////////

// CREATE ZONE NOTIFICATION TRIGGER
_trg23=createTrigger["EmptyDetector",_vehpos];
_trg23 triggerAttachVehicle [player];
_trg23 setTriggerArea[250,250,0,false];
_trg23 setTriggerActivation["VEHICLE","PRESENT",true];
_trg23 setTriggerStatements["this", format["[""FOB %1"",thislist] spawn Recurring_fnc_enterlocation",_fobname], ""];

// warning trigger when an enemy approaches the camp
_trgWarning=createTrigger["EmptyDetector",_vehpos];
_trgWarning setTriggerArea[500,500,0,false];
_trgWarning setTriggerActivation["EAST","PRESENT",true];
_trgWarning setTriggerStatements["this","[] call Recurring_fnc_warningfob", ""];

//ADD THE FOB TO Array_of_FOBS
Array_of_FOBS = Array_of_FOBS + [_fob];
publicVariable "Array_of_FOBS";

Array_of_FOBname = Array_of_FOBname + [_fobname];
publicVariable "Array_of_FOBname";

sleep 1;
enableSaving true;
sleep 0.1;
//saveGame;
enableSaving [ false, false ];
sleep 1;

sleep 300;
_repfob = [player,"fob_support"] call BIS_fnc_addCommMenuItem;
DUWSrepfob = _repfob;
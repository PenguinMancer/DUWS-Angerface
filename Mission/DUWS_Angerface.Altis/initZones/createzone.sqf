//  _trg = ["Outpost Airbase",5,50,getpos this,true] execvm "createzone.sqf";
//         Name of the place,pts,radius,position,fortified/not
//

_place = _this select 0; 
_points = _this select 1;
_size = _this select 2;
_size2 = _this select 3;//Because urban zones aren't symmetrical, _size = _size2 otherwise for normal zones
_trigger = _this select 4;
_fortified = _this select 5;
_prefab = _this select 6;
_compound = _this select 7;
amount_zones_created = amount_zones_created + 1;
publicVariable "amount_zones_created";
zones_created = true; // Tell that at least 1 zone is created

// Add the zone to the array of zones (need for manual placement of zones and WARCOM)
if (isNil ("Array_of_OPFOR_zones")) then {Array_of_OPFOR_zones = [];};
Array_of_OPFOR_zones = Array_of_OPFOR_zones + [_trigger];

// CREATE MARKER (ICON)
_markername = format["%1%2",round(_trigger select 0),round(_trigger select 1)]; // Define marker name
//hint _markername;
_markerstr = createMarker [str(_markername),_trigger];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "hd_objective";
str(_markername) setMarkerColor "ColorRed";
str(_markername) setMarkerText _place;
str(_markername) setMarkerSize [0, 0];

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipse",round(_trigger select 0),round(_trigger select 1)]; // Define marker name
//hint _markername2;
_markerstr2 = createMarker [str(_markername2),_trigger];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "ColorRed";
str(_markername2) setMarkerSize [_size, _size2];
str(_markername2) setMarkerAlpha 0.1; 

// Create QRF trigger
_trgQRF=createTrigger["EmptyDetector",_trigger];
_trgQRF setTriggerArea[_size,_size2,0,false];
_trgQRF setTriggerActivation["WEST","EAST D",true];
_trgQRF setTriggerStatements["this", format["[%1,%2] spawn QRF_zone",_trigger,_size], ""];
_trgQRF setTriggerTimeout [5, 7, 10, true ];

// CREATE ZONE CAPTURABLE TRIGGER
_trg=createTrigger["EmptyDetector",_trigger];
_trg setTriggerArea[_size,_size2,0,false];
_trg setTriggerActivation["WEST SEIZED","PRESENT",false];
_trg setTriggerStatements["this", format["[""%1"",%2,""%3"",""%4"",%5,%6] execvm 'zonescap\captured.sqf'",_place,_points,_markername,_markername2,_trigger,_size], ""];
_trg setTriggerTimeout [30, 60, 90, true ];

// CREATE VARNAME FOR ZONE TRIGGER --> use the pos of the trigger
_triggerName = format["trigger%1%2",round (_trigger select 0),round (_trigger select 1)];
call compile format["%1 = _trg",_triggerName];
_triggerQRFName = format["triggerQRF%1%2",round (_trigger select 0),round (_trigger select 1)];
call compile format["%1 = _trgQRF",_triggerQRFName];

// CREATE PREFAB
_array_of_prefabs = [["Command Outpost",true,"initZones\prefabs\commandOP.sqf"],
["Vehicle Refit Station",false,"initZones\prefabs\vehfittingstation.sqf"],
["Research Bunker",true,"initZones\prefabs\researchBunker.sqf"],
["Recon Outpost",true,"initZones\prefabs\reconOutpost.sqf"],
["Power Relay",true,"initZones\prefabs\powerRelay.sqf"],
["Com. Station",true,"initZones\prefabs\commstation.sqf"],
["Outpost",true,"initZones\prefabs\outpost1.sqf"],
["Outpost",true,"initZones\prefabs\outpost2.sqf"],
["Barracks",true,"initZones\prefabs\barracks.sqf"],
["Research Station",false,"initZones\prefabs\researchStation.sqf"],
["Camp Site",false,"initZones\prefabs\campsite.sqf"]];

_amount_of_prefabs = count _array_of_prefabs;
_indexedAmount = _amount_of_prefabs - 1;
_dice = round random _indexedAmount;

_prefab_array = _array_of_prefabs select _dice;
_place = _prefab_array select 0;
_fortified = _prefab_array select 1;
_path = _prefab_array select 2;

if (_prefab) then {
_prefab_create = [_trigger] execVM _path;
str(_markername) setMarkerText _place;
};
// CREATE ZONE NOTIFICATION TRIGGER
_trg3=createTrigger["EmptyDetector",_trigger];
_trg3 triggerAttachVehicle [player];
_trg3 setTriggerArea[_size,_size2,0,false];
_trg3 setTriggerActivation["VEHICLE","PRESENT",true];
_trg3 setTriggerStatements["this", format["[""%1"",thislist] execvm 'Scripts\enterlocation.sqf'",_place], ""];

// CREATE OPFOR. HEAVY CLUSTERFUCK INCOMING.
// Check if fortified is true
if (_fortified) then  
{
      [_trigger,_size] spawn SoldierSpawn_fnc_createzoneopfortified;
      sleep 2;
};

// Check if radius is 100m or smaller => create 2 patrols then exit the script
if ((_size + _size2)/2 < 101) exitWith  
{
      _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
      _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
};
// Check if radius is 250m-100m => create 2 patrols and 1 fireteam then exit the script
if ((_size + _size2)/2 < 251) exitWith  
{
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
};
// Check if radius is 250m-500m => create 2 patrols and 2 fireteams then exit the script
if ((_size + _size2)/2 < 501) exitWith  
{
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
};
if ((_size + _size2)/2 <= 1000) exitWith                    
{
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehground;
	  waituntil {sleep .1;scriptdone _vehcreate};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  if (_compound) then {
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  };
};      
if ((_size + _size2)/2 <= 1500) exitWith  
{
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehground;
	  waitUntil {sleep .1;scriptDone _vehcreate};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehground;
	  waituntil {sleep .1;scriptdone _vehcreate};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  if (_compound) then {
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  };
};      
if ((_size + _size2)/2 <= 2000) exitWith  
{
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehground;
	  waitUntil {sleep .1;scriptDone _vehcreate};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
      _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehair;
	  waituntil {sleep .1;scriptdone _vehcreate};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  if (_compound) then {
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  };
};        
if ((_size + _size2)/2 <= 3000) exitWith  
{
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehground;
	  waitUntil {sleep .1;scriptDone _vehcreate};
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehground;
	  waitUntil {sleep .1;scriptDone _vehcreate};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehair;
	  waituntil {sleep .1;scriptdone _vehcreate};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  if (_compound) then {
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  };
};

// IF NOT IN PARAMETERS (TOO BIG ZONE)        
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehground;
	  waitUntil {sleep .1;scriptDone _vehcreate};
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehground;
	  waitUntil {sleep .1;scriptDone _vehcreate};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopwpteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneopteam;
      waituntil {sleep .1;scriptdone _handle};
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createzoneoppatrol;
      waituntil {sleep .1;scriptdone _handle};
	  _vehcreate = [_trigger, _size] spawn SoldierSpawn_fnc_createzonevehair;  
	  waituntil {sleep .1;scriptdone _vehcreate};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  if (_compound) then {
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  waituntil {sleep .1;scriptdone _extraprefab};
	  _extraprefab = [_trigger, _size] spawn SoldierSpawn_fnc_createzonecompound;
	  };
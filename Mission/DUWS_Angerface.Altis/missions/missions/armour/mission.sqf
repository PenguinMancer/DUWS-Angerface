_MissionPos = _this select 0;
// define random pos AROUND TARGET. spawn markers at random.
_radius = 300;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];
_cpreward = 35;
_apreward = 25;
_appenalty = 25;
// CREATE NAME
_mission_name = MissionNameCase16;



// CREATE MARKER (ICON)
_markername = format["target%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "selector_selectedEnemy";
str(_markername) setMarkerColor "ColorOPFOR";
str(_markername) setMarkerText "Destroy Tank";
str(_markername) setMarkerSize [1, 1];

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipsetarget",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr2 = createMarker [str(_markername2), _randompos];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "ColorOPFOR";
str(_markername2) setMarkerSize [_radius, _radius];
str(_markername2) setMarkerAlpha 0.5;

// CREATE PATROLS
      sleep 1;
      [_missionpos, 15] spawn SoldierSpawn_fnc_createoppatrol; // <-- around target
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
	  [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
     // "O_APC_Tracked_02_cannon_F" createVehicle ([(_missionpos select 0)+(random 150),(_missionpos select 1)+(random 150)]); //  	O_APC_Wheeled_02_rcws_F
	  _group = [_randompos, EAST, WARCOM_opf_attack_wave_type,[],[],[0.90,1.0]] call BIS_fnc_spawnGroup;
	  _group setCombatMode "RED";
      _wp = _group addWaypoint [_randompos, 50];
      _wp setWaypointType "MOVE";
	  _wp setWaypointBehaviour "SAFE";
	  _wp setWaypointSpeed "LIMITED";
	  _wp setWaypointCompletionRadius 25;
	  _wp = _group addWaypoint [_randompos, 100];
      _wp setWaypointType "MOVE";
	  _wp setWaypointBehaviour "SAFE";
	  _wp setWaypointSpeed "LIMITED";
	  _wp setWaypointCompletionRadius 80;
	  _wp = _group addWaypoint [_randompos, 100];
      _wp setWaypointType "CYCLE";
	  _wp setWaypointBehaviour "SAFE";
	  _wp setWaypointSpeed "LIMITED";
	  _wp setWaypointCompletionRadius 50;

_PatrolOfficer1 = [] call Soldiers_fnc_GetOpforOfficer;
_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSoldier;
_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforSoldier;

_tank1 = "I_mas_BMP2_HQ_AAF_01" createVehicle (_missionpos);

_group = createGroup east;
_target = _group createUnit [_PatrolOfficer1, _missionpos, [], 0, "FORM"];
_unit1 = _group createUnit [_PatrolSoldier1, _missionpos, [], 0, "FORM"];
_unit2 = _group createUnit [_PatrolSoldier2, _missionpos, [], 0, "FORM"];

[_target] remoteExecCall ["Soldiers_fnc_RandomOpforIdentityOfficer", 0, true];
[_unit1] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
[_unit2] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];

_target moveInDriver _tank1;
_unit1 moveInGunner _tank1;
_unit2 moveInCargo _tank1;

// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Kill The Tank Commander<br/>There's an elite tank commander in the area, who has been decimating our forces in one on one combat. Go find him, disable his tank, and kill him.",_mission_name,""],_tasklocation,true,2,true,"kill"] call BIS_fnc_taskCreate;

[["TaskAssigned",["",_mission_name]],"bis_fnc_showNotification"] call BIS_fnc_MP;

waitUntil {sleep 2; !alive _target};  // MISSION COMPLETED --

// remove markers
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;

sleep 1;
//execute reward script
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";

// ADD PERSISTENT STAT
_addmission = call persistent_fnc_incrementCompletedMissions;

_MissionPos = _this select 0;
// define random pos AROUND TARGET. spawn markers at random.
_radius = 300;
_randompos = [(_missionpos select 0), (_missionpos select 1)];
_cpreward = 35;
_apreward = 35;
_appenalty = 35;
// CREATE NAME
_mission_name = MissionNameCase18;



// CREATE MARKER (ICON)
_markername = format["target%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "selector_selectedEnemy";
str(_markername) setMarkerColor "ColorOPFOR";
str(_markername) setMarkerText "Clear the town";
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
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol; // <-- around target
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
	  [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
	  [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;

// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Clear the town<br/>Lots of bad guys, go make dead.",_mission_name,""],_tasklocation,true,2,true,"default"] call BIS_fnc_taskCreate;

[["TaskAssigned",["",_mission_name]],"bis_fnc_showNotification"] call BIS_fnc_MP;

cleared = false;

_trgmission = createTrigger ["EmptyDetector",_MissionPos];
_trgmission setTriggerArea [_radius, _radius, 0, false];
_trgmission setTriggerActivation ["EAST", "NOT PRESENT", false];
_trgmission setTriggerStatements["this","cleared = true;",""];

sleep 1;

// MISSION COMPLETED --   ATTENDRE QUE LE CAMION SOIT ARRIVE A LA BASE OU DETRUIT  
waitUntil {sleep 1; (cleared)};  

// remove markers
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;

deleteVehicle _trgmission;

// Give cookies  (bonus & notifications)
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";

// ADD PERSISTENT STAT
_addmission = call persistent_fnc_incrementCompletedMissions;


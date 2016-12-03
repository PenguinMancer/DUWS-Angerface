_MissionPos = _this select 0;
// define random pos AROUND SOLDIERS. spawn markers at random.
_radius = 200;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];
_cpreward = 35;
_apreward = 35;
_appenalty = 5;

// CREATE NAME
_mission_name = MissionNameCase12;


// CREATE MARKER (ICON)
_markername = format["resc%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "loc_Transmitter";
str(_markername) setMarkerColor "ColorOPFOR";
str(_markername) setMarkerText "Radar";

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipseresc",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr2 = createMarker [str(_markername2), _randompos];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "ColorOPFOR";
str(_markername2) setMarkerSize [_radius, _radius];
str(_markername2) setMarkerAlpha 0.3; 

// CREATE TOWER
_tower = "rhs_p37" createVehicle (_missionpos);
_tower setdamage 0.85;
_tower setVectorUp [0,0,1];

// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Destroy the Anti Air<br/>Find and destroy the Anti Air emplacements<br/><br/>Men, we’ve managed to track down the AA that shot down Hawk last night. It’s time to take blood back for blood. We’re not 100% on the placements or what they have, but whatever it is, it’s defended by at least one ZSU-23-4 Shilka. It’s imperative that this radar’s found and destroyed ASAP.",_mission_name,""],_tasklocation,true,2,true,"destroy"] call BIS_fnc_taskCreate;

["TaskAssigned",["",_mission_name]] call bis_fnc_showNotification;

//Randomizing Units
_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSquadleader;
_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforLightAntiTank;
_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforSoldier;

// CREATE PATROLS
      sleep 1;
      [_missionpos, 15] spawn SoldierSpawn_fnc_createoppatrol; // <-- around target
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
	  [_randompos, 20] spawn SoldierSpawn_fnc_Shilka_Defence;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;

_group = createGroup east;
_unit1 = _group createUnit [_PatrolSoldier1, _missionpos, [], 0, "FORM"];
_unit2 = _group createUnit [_PatrolSoldier2, _missionpos, [], 0, "FORM"];
_unit3 = _group createUnit [_PatrolSoldier3, _missionpos, [], 0, "FORM"];

{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _group);

// MISSION COMPLETED --   ATTENDRE QUE LA TOUR SOIT KO 
waitUntil {sleep 1; !alive _tower};  

// remove markers
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;
 
// Give cookies  (bonus & notifications)
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";

// ADD PERSISTENT STAT
_addmission = call persistent_fnc_incrementCompletedMissions;
                       

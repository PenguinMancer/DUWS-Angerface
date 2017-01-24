_MissionPos = _this select 0;
_initpos = getpos hq_blu1;
// define random pos AROUND TARGET. spawn markers at random.
_radius = 175;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];
_cpreward = 20;
_apreward = 20;
_appenalty = 0;

// CREATE NAME
_mission_name = MissionNameCase7;

// CREATE MARKER (ICON)
_markername = format["pilot%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "mil_unknown";
str(_markername) setMarkerColor "ColorYellow";
str(_markername) setMarkerText "Crash";
str(_markername) setMarkerSize [1, 1];

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipsetarget",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr2 = createMarker [str(_markername2), _randompos];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "ColorYellow";
str(_markername2) setMarkerSize [_radius, _radius];
str(_markername2) setMarkerAlpha 0.5;

// CREATE PATROLS
      sleep 1;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
        
// CREATE WRECK
_choppa = "Land_Wreck_Heli_Attack_01_F" createVehicle (_missionpos);

_group = createGroup west;

_RescueSoldier1 = [] call Soldiers_fnc_GetBluforSoldier;
_RescueSoldier2 = [] call Soldiers_fnc_GetBluforSoldier;
_RescueSoldier3 = [] call Soldiers_fnc_GetBluforSoldier;

_soldier1 = _group createUnit [_RescueSoldier1, [((_missionpos select 0)+1), ((_missionpos select 1)+3)], [], 0, "FORM"];
_soldier2 = _group createUnit [_RescueSoldier2, [((_missionpos select 0)+1), ((_missionpos select 1)+3)], [], 0, "FORM"];
_soldier3 = _group createUnit [_RescueSoldier3, [((_missionpos select 0)+1), ((_missionpos select 1)+3)], [], 0, "FORM"];

_soldier1 setcaptive true; 
_soldier2 setcaptive true; 
_soldier3 setcaptive true; 
_soldier1 switchMove "acts_CrouchingIdleRifle01";
_soldier2 switchMove "acts_CrouchingIdleRifle01";
_soldier3 switchMove "acts_CrouchingIdleRifle01";

{
[_x] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
} forEach (units _group);

// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Rescue the Patrol<br/>Find the downed patrol and bring them home<br/><br/>Black hawk down stuff.",_mission_name,""],_tasklocation,true,2,true,"heal"] call BIS_fnc_taskCreate;

["TaskAssigned",["",_mission_name]] call bis_fnc_showNotification;

rescued = false;

// CREATE TRIGGER ZONES
_missiontrg=createTrigger["EmptyDetector",_MissionPos];
_missiontrg setTriggerArea[10,10,0,false];
_missiontrg setTriggerActivation["WEST","PRESENT",false];
_missiontrg setTriggerStatements["this","rescued = true;",""];
_missiontrg setTriggerTimeout [10, 10, 10, true ];  

waitUntil {sleep 1; (rescued)};  

if (!(alive _soldier1) && !(alive _soldier2) && !(alive _soldier3)) exitWith { // CHECK IF PATROL ALIVE
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;
["TaskFailed",["","The patrol is dead"]] call bis_fnc_showNotification;
}; // END IF FAILED

// JOIN PLAYER
_soldier1 setcaptive false;
_soldier2 setcaptive false;
_soldier3 setcaptive false;
_soldier1 switchMove "AmovPpneMstpSnonWnonDnon";
_soldier2 switchMove "AmovPpneMstpSnonWnonDnon";
_soldier3 switchMove "AmovPpneMstpSnonWnonDnon";
[_soldier1, _soldier2, _soldier3] joinSilent player;
titleText ["Thanks for the rescue, can you give us an escort to base?", "PLAIN DOWN"]; 

waitUntil {sleep 1; ( ((_soldier1 distance _initpos)<50) || ((_soldier2 distance _initpos)<50) || ((_soldier3 distance _initpos)<50) || (!(alive _soldier1) && !(alive _soldier2) && !(alive _soldier3)) )};  

if (!(alive _soldier1) && !(alive _soldier2) && !(alive _soldier3)) exitWith { // CHECK IF PATROL ALIVE
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;
["TaskFailed",["","The patrol is dead"]] call bis_fnc_showNotification;
}; // END IF FAILED

// remove markers
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;

sleep 1;

titleText ["Home, sweet home! Thanks for the rescue.", "PLAIN DOWN"];
deleteVehicle _soldier1;
deleteVehicle _soldier2;
deleteVehicle _soldier3;
rescued = false;
deleteVehicle _missiontrg;

// Give cookies  (bonus & notifications)
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";

// ADD PERSISTENT STAT
_addmission = call persistent_fnc_incrementCompletedMissions;

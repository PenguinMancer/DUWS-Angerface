_exiting = false;
_cpreward = 25;
_apreward = 25;
_appenalty = 0;


if (!isNil "TPH1") then
{
    if (alive TPH1) exitWith {_exiting = true;hint "**YOUR TPH IS STILL INTACT**\n\nOnly 1 TPH is permitted on the map at a time, please choose another mission for now."};

};

if (_exiting) exitWith {true};
_MissionPos = _this select 0;
// define random pos AROUND SOLDIERS. spawn markers at random.
_radius = 500;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];

_initpos = getpos hq_blu1;

// CREATE NAME
_mission_name = MissionNameCase10;


// CREATE MARKER (ICON)
_markername = format["recov%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "mil_pickup";
str(_markername) setMarkerColor "Color3_FD_F";
str(_markername) setMarkerText "Recover Transporter Heli";

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipserecov",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr2 = createMarker [str(_markername2), _randompos];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "Color3_FD_F";
str(_markername2) setMarkerSize [_radius, _radius];
str(_markername2) setMarkerAlpha 0.3;

// CREATE Mobile armory vehicle and give it a name with public variable
_tph1 = "I_Heli_Transport_02_F" createVehicle (_missionpos);
_Varname = "TPH1";
_tph1 SetVehicleVarName _VarName;
_tph1 Call Compile Format ["%1=_This ; PublicVariable ""%1""",_VarName];





// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Recover transport helicopter<br/>Find and capture the CH-49 Mohawk<br/><br/>Eagle, hope the beach mission back in N’Ziwasogo wasn’t a one time thing, because the enemy got their hands on a CH-49 Mohawk. Take it from them, and you’ll be able to parachute into enemy territory.",_mission_name,""],_tasklocation,true,2,true,"default"] call BIS_fnc_taskCreate;

["TaskAssigned",["",_mission_name]] call bis_fnc_showNotification;

//Randomizing Units
_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSquadleader;
_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforLightAntiTank;
_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforSoldier;

// CREATE PATROLS
sleep 1;
[_missionpos, 15] execvm "createoppatrol.sqf"; // <-- around target
[_randompos, _radius] execvm "createoppatrol.sqf";
[_randompos, _radius] execvm "createoppatrol.sqf";
[_randompos, _radius] execvm "createopteam.sqf";
[_randompos, _radius] execvm "createopteam.sqf";

_group = createGroup east;
_unit1 = _group createUnit [_PatrolSoldier1, _missionpos, [], 0, "FORM"];
_unit2 = _group createUnit [_PatrolSoldier2, _missionpos, [], 0, "FORM"];
_unit3 = _group createUnit [_PatrolSoldier3, _missionpos, [], 0, "FORM"];

{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _group);

// MISSION COMPLETED --   ATTENDRE QUE LE CAMION SOIT ARRIVE A LA BASE OU DETRUIT
waitUntil {sleep 2; ((getdammage TPH1)>0.95 OR (TPH1 distance _initpos)<50)};

// remove markers
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;

if (getdammage TPH1>0.95) exitWith
{
  ["TaskFailed",["","The AAF Transport helicopter was destroyed!"]] call bis_fnc_showNotification;
  [[{hint"**Side Mission FAILED**\n\nthe AAF Transport helicopter was destroyed"}],"BIS_fnc_Spawn",true] call BIS_fnc_MP;
};

// IF THE MISSION IS COMPLETE

[[{hint"**Side Mission**\n\nSuccessfuly Completed!"}],"BIS_fnc_Spawn",true] call BIS_fnc_MP;
sleep 2;
//[[{hint"Adding MTV to teleport options..."}],"BIS_fnc_Spawn",true] call BIS_fnc_MP;


// Give cookies  (bonus & notifications)
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";


// ADD PERSISTENT STAT
_addmission = call persistent_fnc_incrementCompletedMissions;

// ADD VEHICLE MARKER

TPH1cap = true;
publicvariable "TPH1cap";
[[{[TPH1, "mil_triangle", "ColorBlue", "2", "2", "TPH-1"] call kndr_assignMarker}],"BIS_fnc_Spawn",true,true] call BIS_fnc_MP;
sleep 1;
// We're not adding anything here, but we can use this heli as transport. Maybe we can configure it as separate MTV, but this will be too OP.
//[[{TPH1 addaction ["<t color='#15ff00'>FOB/Teleport</t>","dialog\fob\FOBmanageropen.sqf", "", 0, true, true, "", "_this == player"]}],"BIS_fnc_Spawn",true,true] call BIS_fnc_MP;



sleep 5;
//[[{hint"...Armory modifications complete!\nYou can now use the Zamak(Armory) as a mobile armory!"}],"BIS_fnc_Spawn",true] call BIS_fnc_MP;

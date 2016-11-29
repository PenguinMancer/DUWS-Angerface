_cpreward = 200;
_apreward = 30;
_appenalty = 0;
_exiting = false;
if (!isNil "GORGON1") then
{
    if (alive GORGON1) exitWith {_exiting = true;hint "**YOUR GORGON VEHICLE IS STILL INTACT**\n\nOnly 1 GORGON is permitted on the map at a time, please choose another mission for now."};
    
};

//Randomizing Units
_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSoldier;
_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforSoldier;
 
if (_exiting) exitWith {true};


[[{[]execVM "missions\missions\roulette\timer.sqf"}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;
	

_MissionPos = _this select 0;

// define random pos AROUND SOLDIERS. spawn markers at random.
_radius = 500;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];


// CREATE NAME
_mission_name = MissionNameCase1;


// CREATE MARKER (ICON)
_markername = format["resc%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "loc_Transmitter";
str(_markername) setMarkerColor "ColorOPFOR";
str(_markername) setMarkerText "Defuse";

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipseresc",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr2 = createMarker [str(_markername2), _randompos];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "ColorOPFOR";
str(_markername2) setMarkerSize [_radius, _radius];
str(_markername2) setMarkerAlpha 0.3;

// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Defuse the Gorgon<br/>Get a Gorgon and 200 spendable CP or lose all CP.<br/><br/>Well, this is an issue. The military APC moving supplies to you seems to have been commandeered by the enemy. They’ve rigged it up to explode, which would severely cut into your supply line for the next week. Go defuse it, men, or risk losing it all. This is a big deal, so drop everything and get on it, or you’ll be on your own until the next supply rig rolls through.",_mission_name,""],_tasklocation,true,2,true,"search"] call BIS_fnc_taskCreate;

[["TaskAssigned",["",_mission_name]],"bis_fnc_showNotification"] call BIS_fnc_MP;

// CREATE vehicle and attach bomb give it a name with public variable
_gorgon1 = "I_APC_Wheeled_03_cannon_F" createVehicle (_missionpos);
_gorgon1 lock true;
_Varname = "GORGON1";
_gorgon1 SetVehicleVarName _VarName;
_gorgon1 Call Compile Format ["%1=_This ; PublicVariable ""%1""",_VarName];
expl1 = "DemoCharge_Remote_Ammo_scripted" createVehicle position GORGON1;
expl1 attachTo [GORGON1, [1.4,-3.0,-1.1],"otochlaven"];
expl1 setVectorDirAndUp [[-0.1,0.0,1],[0,0,1]];
expl2 = "DemoCharge_Remote_Ammo_scripted" createVehicle position GORGON1;
expl2 attachTo [GORGON1, [1.4,-3.0,-1.2],"otochlaven"];
expl2 setVectorDirAndUp [[-0.1,0,1],[0,0,1]];
expl3 = "DemoCharge_Remote_Ammo_scripted" createVehicle position GORGON1;
expl3 attachTo [GORGON1,[1.4,-3.0,-1.3],"otochlaven"];
expl3 setVectorDirAndUp [[-0.1,0,1],[0,0,1]]; 

[[{[GORGON1, 1800] execVM "missions\missions\roulette\bomb\keypad_defuse\BombTimer.sqf"}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;
[[{GORGON1 addAction [("<t color='#E61616'>" + ("Access Bomb Keypad") + "</t>"),"missions\missions\roulette\bomb\keypad_defuse\defuseAction.sqf","",1,true,true,"","(_target distance _this) < 5"]}],"BIS_fnc_Spawn",true,true] call BIS_fnc_MP;



// CREATE PATROLS with secret code
sleep 1;
_bombcode1 = [_randompos, EAST, [_PatrolSoldier1, _PatrolSoldier2],[],[],opfor_ai_skill] call BIS_fnc_spawnGroup;
[_bombcode1, _randompos, 300] call bis_fnc_taskPatrol;
_bombcode1 allowFleeing 0;
_bombcode1 = leader _bombcode1;
_Varname = "BOMBCODE1";
_bombcode1 SetVehicleVarName _VarName;
_bombcode1 Call Compile Format ["%1=_This ; PublicVariable ""%1""",_VarName]; 
waitUntil {alive BOMBCODE1};
[[{leader BOMBCODE1 addAction [("<t color='#ff0011'>" + ("Search his papers") + "</t>"),"missions\missions\roulette\bomb\keypad_defuse\searchAction.sqf","",1,true,true,"","(_target distance _this) < 5"]}],"BIS_fnc_Spawn",true,true] call BIS_fnc_MP;
leader BOMBCODE1 setVariable["persistent",true];
[[{leader BOMBCODE1 addEventHandler ["killed", {[]call deathhint}]}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;

//randomize identity
{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _bombcode1);


// CREATE PATROLS without secret code
sleep 1;
[_missionpos, 15] execvm "createopteam.sqf"; // <-- around target		
[_randompos, _radius] execvm "createoppatrol.sqf";
[_randompos, _radius] execvm "createoppatrol.sqf";
[_randompos, _radius] execvm "createopteam.sqf";
[_randompos, _radius] execvm "createopteam.sqf";
 


// MISSION COMPLETED --   ATTENDRE QUE LA TOUR SOIT KO 
waitUntil {sleep 2; (!alive GORGON1 or DEFUSED)};

// IF MISSION FAILS////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if ((!alive GORGON1) && (!DEFUSED)) exitWith {
	
[["TaskFailed",["","The armored vehicle is destroyed, Command Points Lost!"]],"bis_fnc_showNotification"] call BIS_fnc_MP;
[[{hint"**Side Mission FAILED**\n\n...the vehicle was destroyed\n\nYou Only Have 2 Command Points Remaining!"}],"BIS_fnc_Spawn",true] call BIS_fnc_MP;
commandpointsblu1 = commandpointsblu1 - commandpointsblu1 + 2;
publicVariable "commandpointsblu1";  
sleep 2;
deleteVehicle BOMBCODE1;
deleteMarker str(_markername2);
deleteMarker str(_markername);
["taskhandle"] call BIS_fnc_deleteTask;
};

// IF MISSION SUCCESSFUL////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
if (DEFUSED) then {

sleep 2;
// Give cookies  (bonus & notifications)
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";

sleep 1;
deleteVehicle BOMBCODE1;
removeAllActions GORGON1;
GORGON1 lock false;
deleteMarker str(_markername2);
deleteMarker str(_markername);
["taskhandle"] call BIS_fnc_deleteTask;
sleep 1;
_addmission = call persistent_fnc_incrementCompletedMissions;
[[{hint"**Side Mission**\n\nSuccessfuly Completed!\n\n200 COMMAND POINTS AWARDED!!"}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;
sleep 2;
};
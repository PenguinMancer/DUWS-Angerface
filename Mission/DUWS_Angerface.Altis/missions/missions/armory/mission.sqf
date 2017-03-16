_exiting = false;
_cpreward = 25;
_apreward = 25;
_appenalty = 0;

if (!isNil "ARM1") then
{
    if (alive ARM1) exitWith {_exiting = true;hint "**YOUR ARMORY IS STILL INTACT**\n\nOnly 1 MTV is permitted on the map at a time, please choose another mission for now."};
    
};
 
if (_exiting) exitWith {true};
_MissionPos = _this select 0;
// define random pos AROUND SOLDIERS. spawn markers at random.
_radius = 500;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];

_initpos = getpos hq_blu1;

// CREATE NAME
_mission_name = MissionNameCase9;


// CREATE MARKER (ICON)
_markername = format["recov%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "mil_pickup";
str(_markername) setMarkerColor "Color3_FD_F";
str(_markername) setMarkerText "Recover Mobile Armory";

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipserecov",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr2 = createMarker [str(_markername2), _randompos];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "Color3_FD_F";
str(_markername2) setMarkerSize [_radius, _radius];
str(_markername2) setMarkerAlpha 0.3; 

// CREATE Mobile armory vehicle and give it a name with public variable
_arm1 = "I_Truck_02_ammo_F" createVehicle (_missionpos);
_Varname = "ARM1";
_arm1 SetVehicleVarName _VarName;
_arm1 Call Compile Format ["%1=_This ; PublicVariable ""%1""",_VarName];



// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Recover the mobile armory<br/>Recover the MAB<br/><br/>The enemy managed to get their hands on a Mobile Armory Building. We’re not sure what’s inside it, if anything, but the MAB itself is the prize here. In the back of it is enough secure storage to carry an entire building’s worth of supplies. It’d be worth it to take it out of their hands and put it into ours.",_mission_name,""],_tasklocation,true,2,true,"default"] call BIS_fnc_taskCreate;

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
	  [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
      
      _group = createGroup east;
_unit1 = _group createUnit [_PatrolSoldier1, _missionpos, [], 0, "FORM"];
_unit2 = _group createUnit [_PatrolSoldier2, _missionpos, [], 0, "FORM"];
_unit3 = _group createUnit [_PatrolSoldier3, _missionpos, [], 0, "FORM"];

// MISSION COMPLETED --   ATTENDRE QUE LE CAMION SOIT ARRIVE A LA BASE OU DETRUIT  
waitUntil {sleep 2; ((getdammage ARM1)>0.95 OR (ARM1 distance _initpos)<50)};  

// remove markers
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;

if (getdammage ARM1>0.95) exitWith
{
  ["TaskFailed",["","The AAF Mobile Armory is destroyed"]] call bis_fnc_showNotification;
  [[{hint"**Side Mission FAILED**\n\nthe Mobile Armory was destroyed!"}],"BIS_fnc_Spawn",true] call BIS_fnc_MP;
};

// IF THE MISSION IS COMPLETE

[[{hint"**Side Mission**\n\nSuccessfuly Completed!"}],"BIS_fnc_Spawn",true] call BIS_fnc_MP;
sleep 2;
 
// Give cookies  (bonus & notifications)
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";


// ADD PERSISTENT STAT
_addmission = call persistent_fnc_incrementCompletedMissions;

sleep 1;
[[{ARM1 addaction["<t color='#ff0066'>Armory</t>", {["Open", true] call BIS_fnc_arsenal;}, "", 0, true, true, "", "_this == player"]}],"BIS_fnc_Spawn",true,true] call BIS_fnc_MP;

sleep 5;
[[{hint"...Armory modifications complete!\nYou can now use the Zamak(Armory) as a mobile armory!"}],"BIS_fnc_Spawn",true] call BIS_fnc_MP;

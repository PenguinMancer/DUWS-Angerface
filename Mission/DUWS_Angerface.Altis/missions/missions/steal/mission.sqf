_MissionPos = _this select 0;
// define random pos AROUND SOLDIERS. spawn markers at random.
_radius = 200;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];
_initpos = getpos hq_blu1;
_cpreward = 25;
_apreward = 35;
_appenalty = 5;
// CREATE NAME
_mission_name = MissionNameCase4;


// CREATE MARKER (ICON)
_markername = format["resc%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "mil_pickup";
str(_markername) setMarkerColor "Color3_FD_F";
str(_markername) setMarkerText "Steal";

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipseresc",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr2 = createMarker [str(_markername2), _randompos];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "Color3_FD_F";
str(_markername2) setMarkerSize [_radius, _radius];
str(_markername2) setMarkerAlpha 0.3; 

// CREATE TRUCK & CRATES
_truck1 = "O_Truck_02_transport_F" createVehicle (_missionpos);

_box1 = "O_supplyCrate_F" createVehicle (_missionpos);
_box2 = "O_supplyCrate_F" createVehicle (_missionpos);
_box3 = "O_supplyCrate_F" createVehicle (_missionpos);

_box1 attachTo [_truck1,[0,0.2,-0.8]];
_box1 setDir 90;

_box2 attachTo [_truck1,[0,-1.55,-0.8]];
_box2 setDir 75;

_box3 attachTo [_truck1,[0.1,-3.0,-0.8]];
_box3 setdir 180;


// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Recover the supply truck<br/>Bring the supply truck back to HQ<br/><br/>Men, we may have run into a spot of luck. A recon team has picked up a transport truck carrying supplies of some sort abandoned in the snow. We’re not sure what’s in it, but I know we want it. Go recover it, and bring it back to HQ, but be careful. This may be an ambush.",_mission_name,""],_tasklocation,true,2,true,"rearm"] call BIS_fnc_taskCreate;

["TaskAssigned",["",_mission_name]] call bis_fnc_showNotification;

//Randomizing Units
_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSquadleader;
_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforLightAntiTank;
_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforSoldier;

// CREATE PATROLS
      sleep 1;
      [_missionpos, 15] spawn SoldierSpawn_fnc_createoppatrol; // <-- around target
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
      
_group = createGroup east;
_unit1 = _group createUnit [_PatrolSoldier1, _missionpos, [], 0, "FORM"];
_unit2 = _group createUnit [_PatrolSoldier2, _missionpos, [], 0, "FORM"];
_unit3 = _group createUnit [_PatrolSoldier3, _missionpos, [], 0, "FORM"];

{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _group);

// MISSION COMPLETED --   ATTENDRE QUE LE CAMION SOIT ARRIVE A LA BASE OU DETRUIT  
waitUntil {sleep 2; ((getdammage _truck1)>0.95 OR (_truck1 distance _initpos)<50)};  

// remove markers
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;

if (getdammage _truck1>0.95) exitWith
{
  ["TaskFailed",["","The enemy convoy is destroyed"]] call bis_fnc_showNotification;
};

// IF THE MISSION IS COMPLETE
hint "Unloading the truck...";
 
// Give cookies  (bonus & notifications)
[_cpreward, _apreward] execvm "missions\mission_reward.sqf";

// ADD PERSISTENT STAT
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";

sleep 2;
deleteVehicle _box3;
sleep 2;
deleteVehicle _box2;
sleep 2;
deleteVehicle _box1;
hint "Unloading complete, you can use the truck at your will.";

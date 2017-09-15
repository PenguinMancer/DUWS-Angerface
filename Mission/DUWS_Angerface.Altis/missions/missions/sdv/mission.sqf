_MissionPos = _this select 0;
// define random pos AROUND SOLDIERS. spawn markers at random.
_radius = 200;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];
_initpos = getpos hq_blu1;
_cpreward = 25;
_apreward = 35;
_appenalty = 5;
// CREATE NAME
_mission_name = MissionNameCase14;


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
_truck1 = "O_Truck_03_device_F" createVehicle (_missionpos);

// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Recover the device<br/>Find and capture the strange device<br/><br/>For once, the fog over the urals cleared a little, letting us get some solid pictures with our satellites. We’ve found a couple command points, one in a small town to the east, another in what looks like a russian gulag, and we’ve also found a patrol carrying… Something. We don’t know what it is. It looks like nothing we’ve seen before. Go find it and bring it back, and maybe we can figure out what these people are capable of.",_mission_name,""],_tasklocation,true,2,true,"default"] call BIS_fnc_taskCreate;

["TaskAssigned",["",_mission_name]] call bis_fnc_showNotification;

// CREATE PATROLS
      sleep 1;
      [_missionpos, 15] spawn SoldierSpawn_fnc_createoppatrol; // <-- around target
      [_randompos, _radius] spawn SoldierSpawn_fnc_createoppatrol;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
      
_group = createGroup east;
_unit1 = _group createUnit ["Opfor_SquadLeader_1", _missionpos, [], 0, "FORM"];
_unit2 = _group createUnit ["Opfor_Soldier_1", _missionpos, [], 0, "FORM"];
_unit3 = _group createUnit ["Opfor_Soldier_1", _missionpos, [], 0, "FORM"];

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
//execute reward script
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";

// ADD PERSISTENT STAT
_addmission = call persistent_fnc_incrementCompletedMissions;

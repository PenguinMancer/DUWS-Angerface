_MissionPos = _this select 0;
// define random pos AROUND SOLDIERS. spawn markers at random.
_cpreward = 30;
_apreward = 30;
_appenalty = 30;
_radius = 300;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];

// CREATE NAME
_mission_name = MissionNameCase8;


// CREATE MARKER (ICON)
_markername = format["sabot%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "loc_Transmitter";
str(_markername) setMarkerColor "ColorBrown";
str(_markername) setMarkerText "Sabotage";

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipsesab",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr2 = createMarker [str(_markername2), _randompos];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "ColorBrown";
str(_markername2) setMarkerSize [_radius, _radius];
str(_markername2) setMarkerAlpha 0.3; 

sabotage = false; publicVariable "sabotage";

// create TOWER 
_tower = createVehicle ["Land_dp_transformer_F", _MissionPos, [], 0, "NONE"]; publicvariable "Mistower";
_tower addAction [("<t color='#ff0011'>" + ("SABOTAGE") + "</t>"),"sabotage = true;",[],6,true,true,"","(_target distance _this) < 5"];
_tower allowDamage false; 

// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Destroy power supplies<br/>Sabotage the power supply<br/><br/>The enemy’s been using a power supply for some time now, and the power it’s outputting is pretty intense. We don’t know what it’s going to but with that kind of power consumption, it’d be better for them not to have it Go destroy the power supply.",_mission_name,""],_tasklocation,true,2,true,"repair"] call BIS_fnc_taskCreate;

[["TaskAssigned",["",_mission_name]],"bis_fnc_showNotification"] call BIS_fnc_MP;


// CREATE OPFOR PATROLS
      sleep 1;
      [_randompos, _radius] execvm "createoppatrol.sqf";
      [_randompos, _radius] execvm "createoppatrol.sqf";
	  [_randompos, _radius] execvm "createopteam.sqf";
      [_missionpos, 10] execvm "createoppatrol.sqf"; // <-- around target
      [_missionpos, 15] execvm "createoppatrol.sqf"; // <-- around target
	  [_missionpos, 20] execvm "createopteam.sqf"; // <-- around target
	  
// MISSION COMPLETED --   ATTENDRE QUE LE CAMION SOIT ARRIVE A LA BASE OU DETRUIT  
waitUntil {sleep 1; (sabotage)};  

// remove markers
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;

sabotage = false;

// Give cookies  (bonus & notifications)
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";

// ADD PERSISTENT STAT
_addmission = call persistent_fnc_incrementCompletedMissions;

sleep 300;
_tower allowDamage true; 
_tower setdamage 1;

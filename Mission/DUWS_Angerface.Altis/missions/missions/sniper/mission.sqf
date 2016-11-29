_MissionPos = _this select 0;
// define random pos AROUND TARGET. spawn markers at random.
_radius = 300;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];
_cpreward = 20;
_apreward = 20;
_appenalty = 0;
// CREATE NAME
_mission_name = MissionNameCase13;


// CREATE MARKER (ICON)
_markername = format["target%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "selector_selectedEnemy";
str(_markername) setMarkerColor "ColorOPFOR";
str(_markername) setMarkerText "Assassinate Commander";
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

_group = createGroup east;
_target = _group createUnit ["Blufor_Sniper_1", _missionpos, [], 0, "FORM"]; 
_unit = _group createUnit ["Blufor_Spotter_1", _missionpos, [], 0, "FORM"];

[_target] remoteExecCall ["Soldiers_fnc_RandomOpforIdentitySniper", 0, true];
[_unit] remoteExecCall ["Soldiers_fnc_RandomOpforIdentitySpotter", 0, true];

{
	_x setSkill ["aimingspeed", 0.3];
	_x setSkill ["spotdistance", 0.3];
	_x setSkill ["aimingaccuracy", 0.3];
	_x setSkill ["aimingshake", 0.3];
	_x setSkill ["spottime", 0.5];
	_x setSkill ["spotdistance", 0.8];
	_x setSkill ["commanding", 0.8];
	_x setSkill ["general", 0.9];
} forEach (units _group); 

// TASK AND NOTIFICATION
_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Find and kill the sniper team<br/>Find and eliminate the Taliban sniper team<br/><br/>A pair of Taliban soldiers have set up as snipers, and are making life difficult for another encampment. Go eliminate the sniper and his spotter.",_mission_name,""],_tasklocation,true,2,true,"kill"] call BIS_fnc_taskCreate;

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

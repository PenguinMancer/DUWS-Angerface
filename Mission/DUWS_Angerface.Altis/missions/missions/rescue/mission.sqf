_MissionPos = _this select 0;
// define random pos AROUND SOLDIERS. spawn markers at random.
_cpreward = 20;
_apreward = 20;
_appenalty = 0;
_radius = 150;
_randompos = [(_missionpos select 0)+(random _radius)-(random _radius), (_missionpos select 1)+(random _radius)-(random _radius)];

// CREATE NAME
_mission_name = MissionNameCase3;


// CREATE MARKER (ICON)
_markername = format["resc%1%2",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _randompos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "mil_warning";
str(_markername) setMarkerColor "ColorYellow";
str(_markername) setMarkerText "Rescue";

// CREATE MARKER (ELLIPSE ZONE)
_markername2 = format["%1%2ellipseresc",round(_randompos select 0),round(_randompos select 1)]; // Define marker name
_markerstr2 = createMarker [str(_markername2), _randompos];
_markerstr2 setMarkerShape "ELLIPSE";
str(_markername2) setMarkerBrush "SolidBorder";
str(_markername2) setMarkerColor "ColorYellow";
str(_markername2) setMarkerSize [_radius, _radius];
str(_markername2) setMarkerAlpha 0.3; 

// Create injured soldiers  -- BEGIN
_soldier1 = format ["s1%1%2",round(_MissionPos select 0),round(_Missionpos select 1)];    // Give them names
_soldier2 = format ["s2%1%2",round(_MissionPos select 0),round(_Missionpos select 1)];    
_soldier3 = format ["s3%1%2",round(_MissionPos select 0),round(_Missionpos select 1)];    

_group = createGroup west;

_Rescueleader = [] call Soldiers_fnc_GetBluforLeader;
_RescueSoldier = [] call Soldiers_fnc_GetBluforSoldier;
_Rescueautorifleman = [] call Soldiers_fnc_GetBluforAutoRifleman;

_Rescueleader createUnit [[(_missionpos select 0)+(random 10),(_missionpos select 1)+(random 10)], _group,format["this setcaptive true; this switchMove ""acts_InjuredCoughRifle02""; %1 = this",_soldier1]];
_RescueSoldier createUnit [[(_missionpos select 0),(_missionpos select 1)], _group,format["this setcaptive true; this switchMove ""acts_InjuredLookingRifle02""; %1 = this",_soldier2]];
_Rescueautorifleman createUnit [[(_missionpos select 0)+(random 5),(_missionpos select 1)+(random 5)], _group,format["this setcaptive true; this switchMove ""acts_InjuredLookingRifle03""; %1 = this",_soldier3]];

{
[_x] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
} forEach (units _group);

// END CREATE SOLDIERS

// TASK AND NOTIFICATION
_VARtaskgeneratedName = format ["rescue%1%2",round(_MissionPos select 0),round(_Missionpos select 1)]; // generate variable name for task

_tasklocation = getMarkerPos str(_markername);

[west,["taskhandle"],["Provide fire support<br/>Save the friendly patrol<br/><br/>A local patrol just radioed in, calling for support against an ambush. Now’s a good chance to show that we’re not a force to be reckoned with. Go save the patrol, men, and make sure the enemies don’t make it back to base.",_mission_name,""],_tasklocation,true,2,true,"heal"] call BIS_fnc_taskCreate;

["TaskAssigned",["",_mission_name]] call bis_fnc_showNotification;

rescued = false;

// CREATE TRIGGER ZONES
_trg=createTrigger["EmptyDetector",_MissionPos];
_trg setTriggerArea[25,25,0,false];
_trg setTriggerActivation["WEST","PRESENT",false];
_trg setTriggerStatements["this","rescued = true;",""];
_trg setTriggerTimeout [10, 10, 10, true ];  

//CREATE OPFOR PATROLS
      sleep 1;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
      [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;
	  [_randompos, _radius] spawn SoldierSpawn_fnc_createopteam;

waitUntil {sleep 1; (rescued)};  

// remove markers
deleteMarker str(_markername2);
deleteMarker str(_markername);

["taskhandle"] call BIS_fnc_deleteTask;

// IF SOLDIERS DEAD
if (!(alive _soldier1) && !(alive _soldier2) && !(alive _soldier3)) exitWith
  {
    ["TaskFailed",["","Rescue the friendly troops"]] call bis_fnc_showNotification;
    
  };

// JOIN PLAYER
_soldier1 setcaptive false;
_soldier2 setcaptive false;
_soldier3 setcaptive false;
_soldier1 switchMove "AmovPpneMstpSnonWnonDnon";
_soldier2 switchMove "AmovPpneMstpSnonWnonDnon";
_soldier3 switchMove "AmovPpneMstpSnonWnonDnon";
[_soldier1, _soldier2, _soldier3] joinSilent player;
titleText ["Thanks for the rescue, we'll be fighting with you from now on, lead the way!", "PLAIN DOWN"]; 

rescued = false;
deleteVehicle _trg;


sleep 5;

// Give cookies  (bonus & notifications)
_reward = [_cpreward, _apreward, _appenalty, _mission_name] execvm "missions\mission_reward.sqf";

// ADD PERSISTENT STAT
_addmission = call persistent_fnc_incrementCompletedMissions;
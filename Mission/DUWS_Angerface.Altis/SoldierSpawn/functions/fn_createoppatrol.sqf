_position = _this select 0;
_radius   = _this select 1;

if (isNil "WARCOM_opfor_ap") then {
WARCOM_opfor_ap = 75;
};

//initialize the array and classnames, as you can't do that inside of an if.
_initGroup = [];

if (WARCOM_opfor_ap > 50) then {
	if (WARCOM_opfor_ap > 100) then {
		_initGroup = ["Opfor_SquadLeader_1","Opfor_Autorifleman_1"];
	} else {
		_initGroup = ["Opfor_SquadLeader_1","Opfor_Soldier_1"];
	};
} else{ 
_initGroup = ["Opfor_Soldier_1","Opfor_Soldier_1"];
};

_group = [_position, EAST, _initGroup,[],[],opfor_ai_skill] call BIS_fnc_spawnGroup;
_patrolRadius = round(_radius/2);
[_group, _position, _patrolradius] call bis_fnc_taskPatrol;

// ADD QRF eventhandler
_EH = leader _group addEventHandler ["Fired", {[_this select 0] spawn WARCOM_opf_qrf}];

if (debugmode) then {
_null = [_group,"Squad"] execvm "debuglocation.sqf";
};
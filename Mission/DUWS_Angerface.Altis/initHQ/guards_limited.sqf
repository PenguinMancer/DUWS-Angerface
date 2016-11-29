_centerPos = _this select 0;

//Randomizing Units
_GuardSoldier1 = [] call Soldiers_fnc_GetBluforSoldier;
_GuardSoldier2 = [] call Soldiers_fnc_GetBluforSoldier;
_GuardSoldier3 = [] call Soldiers_fnc_GetBluforGrenadier;

// Create the guards
_groupGuard = createGroup WEST;
_HQguard1 = _groupGuard createUnit [_GuardSoldier1, _centerPos, [], 0, "FORM"]; 
_HQguard1 setpos [(_centerPos select 0)-6.5, (_centerPos select 1)-1.6];
_HQguard1 setdir 270;
[_HQguard1,"STAND","FULL"] call BIS_fnc_ambientAnimCombat;

_HQguard2 = _groupGuard createUnit [_GuardSoldier2, _centerPos, [], 0, "FORM"]; 
_HQguard2 setpos [(_centerPos select 0)-6.5, (_centerPos select 1)-4.7];
_HQguard2 setdir 270;
[_HQguard2,"GUARD","FULL"] call BIS_fnc_ambientAnimCombat;



// patrolling guard
_groupPatrol = createGroup WEST;
_HQguard5 = _groupPatrol createUnit [_GuardSoldier3, _centerPos, [], 0, "FORM"]; 
_HQguard5 setpos [(_centerPos select 0)+10, (_centerPos select 1)+10];


// Setting Identities
_HQunits=units _groupGuard;
{
[_x] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
} forEach _HQunits;

_HQunitpatrol=units _groupPatrol;
{
[_x] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
} forEach _HQunitpatrol;


_groupPatrol setCombatMode "YELLOW";
    _wp = _groupPatrol addWaypoint [[(_centerPos select 0)+10, (_centerPos select 1)+10], 0];
    _wp setWaypointType "MOVE";
_wp setWaypointBehaviour "SAFE";
_wp setWaypointSpeed "LIMITED";

    _wp = _groupPatrol addWaypoint [[(_centerPos select 0)-10, (_centerPos select 1)+10], 0];
    _wp setWaypointType "MOVE";
_wp setWaypointBehaviour "SAFE";
_wp setWaypointSpeed "LIMITED";	
	
    _wp = _groupPatrol addWaypoint [[(_centerPos select 0)-10, (_centerPos select 1)-10], 0];
    _wp setWaypointType "MOVE";
_wp setWaypointBehaviour "SAFE";
_wp setWaypointSpeed "LIMITED";	

    _wp = _groupPatrol addWaypoint [[(_centerPos select 0)+10, (_centerPos select 1)-10], 0];
    _wp setWaypointType "MOVE";
	
    _wp = _groupPatrol addWaypoint [[(_centerPos select 0)+10, (_centerPos select 1)+10], 0];
    _wp setWaypointType "CYCLE";
_wp setWaypointBehaviour "SAFE";
_wp setWaypointSpeed "LIMITED";
	
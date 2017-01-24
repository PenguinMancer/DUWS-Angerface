_unit = _this select 0;
LeaderUID = getPlayerUID _unit;
publicVariable "LeaderUID";
_unit addeventhandler ["respawn",{[this] spawn Recurring_fnc_DeathAPloss}];
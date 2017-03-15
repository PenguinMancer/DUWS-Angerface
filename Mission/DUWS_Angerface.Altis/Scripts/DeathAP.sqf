_unit = _this select 0;
_unit addeventhandler ["respawn",{[this] spawn Recurring_fnc_DeathAPloss}];
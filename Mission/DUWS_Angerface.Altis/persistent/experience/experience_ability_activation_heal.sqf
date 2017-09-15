// Set cooldown, ability name, etc.
_cooldown = 1200;
_ability_name = "Field Surgery";
_radio = "CHARLIE";
_unit = _this select 0;

// Create the trigger
_trg=createTrigger["EmptyDetector",[0,0,0]];
_trg setTriggerArea[5,5,0,false];
_trg setTriggerActivation[_radio,"PRESENT",true];
_trg setTriggerStatements["this", "[_trg,_cooldown,_ability_name,_radio,_unit] execVM 'persistent\experience\experience_ability_heal.sqf'", ""];
_trg setTriggerText format["%1",_ability_name];
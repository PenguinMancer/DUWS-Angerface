_trg = _this select 0;
_cooldown = _this select 1;
_ability_name = _this select 2;
_radio = _this select 3;
_unit = _this select 4;

deleteVehicle _trg;

    titleText [format["%1, patching you up...",_ability_name], "PLAIN DOWN"];
	
	player playmove "AinvPknlMstpSlayWrflDnon_medic";
    sleep 2;
	
	private "_allUsedMedication";
	
	if (alive _unit) {

		_unit setVariable ["ace_medical_pain", 0, true];
		_unit setVariable ["ace_medical_morphine", 0, true];
		_unit setVariable ["ace_medical_bloodvolume", 100, true];

		// tourniquets
		_unit setVariable ["ace_medical_tourniquets", [0,0,0,0,0,0], true];

		// wounds and injuries
		_unit setVariable ["ace_medical_openwounds", [], true];
		_unit setVariable ["ace_medical_bandagedwounds", [], true];
		_unit setVariable ["ace_medical_internalwounds", [], true];

		// vitals
		_unit setVariable ["ace_medical_heartrate", 80];
		_unit setVariable ["ace_medical_heartrateadjustments", []];
		_unit setVariable ["ace_medical_bloodPressure", [80, 120]];
		_unit setVariable ["ace_medical_peripheralresistance", 100];

		// fractures
		_unit setVariable ["ace_medical_fractures", []];

		// IVs
		_unit setVariable ["ace_medical_salineivvolume", 0];
		_unit setVariable ["ace_medical_plasmaivvolume", 0];
		_unit setVariable ["ace_medical_bloodivvolume", 0];

		// damage storage
		_unit setVariable ["ace_medical_bodyPartStatus", [0,0,0,0,0,0], true];

		// airway
		_unit setVariable ["ace_medical_airwaystatus", 100, true];
		_unit setVariable ["ace_medical_airwayoccluded", false, true];
		_unit setVariable ["ace_medical_airwaycollapsed", false, true];

		// generic medical admin
		_unit setVariable ["ace_medical_addedtounitloop", false, true];
		_unit setVariable ["ace_medical_incardiacarrest", false, true];
		_unit setVariable ["ace_medical_inReviveState", false, true];
		_unit setVariable ["ACE_isUnconscious", false, true];
		_unit setVariable ["ace_medical_haslostblood", 0, true];
		_unit setVariable ["ace_medical_isbleeding", false, true];
		_unit setVariable ["ace_medical_haspain", false, true];
		_unit setVariable ["ace_medical_painsuppress", 0, true];

		// medication
		_allUsedMedication = _unit getVariable ["ace_medical_allusedmedication", []];
		{
		   _unit setVariable [_x select 0, nil];
		} forEach _allUsedMedication;

		// Resetting damage
		_unit setDamage 0;
	};
	
    /// ----   ABILITY IS ACTIVATED
    titleText [format["%1 done\nCooldown: 20 minutes",_ability_name,_cooldown], "PLAIN DOWN"];
    sleep _cooldown;
    titleText [format["%1 available",_ability_name], "PLAIN DOWN"];

// AJOUTE L'OPTION AU JOUEUR
_trg=createTrigger["EmptyDetector",[0,0,0]];
_trg setTriggerArea[5,5,0,false];
_trg setTriggerActivation[_radio,"PRESENT",true];
_trg setTriggerStatements["this", "[_trg,_cooldown,_ability_name,_radio,_unit] execVM 'persistent\experience\experience_ability_heal.sqf'", ""];
_trg setTriggerText format["%1",_ability_name];

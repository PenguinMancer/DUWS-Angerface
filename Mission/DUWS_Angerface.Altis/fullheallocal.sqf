/**
 * fn_healLocal.sqf
 * @Descr: N/A
 * @Author: Glowbal
 *
 * @Arguments: []
 * @Return:
 * @PublicAPI: false
 */

private "_allUsedMedication";
_unit = _this select 0;

if (alive _unit) exitWith {

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
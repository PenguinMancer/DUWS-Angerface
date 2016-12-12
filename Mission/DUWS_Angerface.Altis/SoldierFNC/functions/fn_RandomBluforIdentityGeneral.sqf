params ["_unit"];

removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;

[_unit,"ARC_Patch_FR"] call bis_fnc_setUnitInsignia;
_unit setSpeaker "ACE_NoVoice";
_unit setFace "WhiteHead_10";
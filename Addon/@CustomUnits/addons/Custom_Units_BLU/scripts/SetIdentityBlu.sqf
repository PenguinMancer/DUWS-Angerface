_Speakers = ["Male01FRE", "Male02FRE", "Male03FRE", "Male01ENGFRE", "Male02ENGFRE"];
_Faces = ["GreekHead_A3_01", "GreekHead_A3_03", "AfricanHead_03", "Johnson", "Moreau", "Zee_White_Head_07", "PersianHead_A3_03", "Zee_White_Head_16", "WhiteHead_13", "WhiteHead_21"];

_RndSpeaker = _Speakers call BIS_fnc_selectRandom;
_RndFace = _Faces call BIS_fnc_selectRandom;

[_unit,"ARC_Patch_FR"] call bis_fnc_setUnitInsignia;
_unit setSpeaker _RndSpeaker;
_unit setFace _RndFace;
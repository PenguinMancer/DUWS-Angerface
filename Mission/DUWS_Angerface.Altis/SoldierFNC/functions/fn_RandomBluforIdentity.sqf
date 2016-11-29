params ["_unit"];

_Speakers = ["rhs_Male01RUS", "rhs_Male02RUS", "rhs_Male03RUS", "rhs_Male04RUS", "rhs_Male05RUS"];
_Faces = ["GreekHead_A3_03", "GreekHead_A3_08", "WhiteHead_18", "Gibson", "Zee_White_Head_06", "Mason_v2", "WhiteHead_04", "WhiteHead_11"];

_RndSpeaker = _Speakers select floor(random(count _Speakers));
_RndFace = _Faces select floor(random(count _Faces));


[_unit,"ARC_Patch_Deuil"] call bis_fnc_setUnitInsignia;
_unit setSpeaker _RndSpeaker;
_unit setFace _RndFace;
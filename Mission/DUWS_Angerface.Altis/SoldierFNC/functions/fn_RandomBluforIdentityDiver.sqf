params ["_unit"];

_Speakers = ["Male04ENG", "Male01ENG", "Male02ENG", "Male03ENG", "Male06ENG"];
_Faces = ["Zee_White_Head_17", "Zee_White_Head_15", "AfricanHead_03"];

_RndSpeaker = _Speakers call BIS_fnc_selectRandom;
_RndFace = _Faces call BIS_fnc_selectRandom;


[_unit,"GryffinRegiment"] call bis_fnc_setUnitInsignia;
_unit setSpeaker _RndSpeaker;
_unit setFace _RndFace;
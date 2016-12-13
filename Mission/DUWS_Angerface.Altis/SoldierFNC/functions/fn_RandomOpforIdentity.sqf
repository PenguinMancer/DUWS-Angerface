params ["_unit"];

_Speakers = ["CUP_D_Male01_TK", "CUP_D_Male02_TK", "CUP_D_Male03_TK", "CUP_D_Male04_TK", "CUP_D_Male05_TK"];
_Faces = ["PersianHead_A3_01", "PersianHead_A3_02", "PersianHead_A3_03", "GreekHead_A3_02", "WhiteHead_08", "Zee_White_Head_12", "Zee_White_Head_16"];

_RndSpeaker = _Speakers call BIS_fnc_selectRandom;
_RndFace = _Faces call BIS_fnc_selectRandom;


_unit setSpeaker _RndSpeaker;
_unit setFace _RndFace;
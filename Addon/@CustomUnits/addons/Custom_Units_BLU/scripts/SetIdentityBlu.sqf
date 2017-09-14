_Speakers = ["Male01FRE", "Male02FRE", "Male03FRE", "Male01ENGFRE", "Male02ENGFRE"];
_Faces = ["GreekHead_A3_01", "GreekHead_A3_03", "AfricanHead_03", "Johnson", "Moreau", "Zee_White_Head_07", "PersianHead_A3_03", "Zee_White_Head_16", "WhiteHead_13", "WhiteHead_21"];

switch (_typeofUnit) do 
{
	case "general": 
    {
	[_unit,"ARC_Patch_FR"] call bis_fnc_setUnitInsignia;
	_unit setSpeaker "ACE_NoVoice";
	_unit setFace "WhiteHead_10";
    };
	case "mpilot": 
    { 
	[_unit,"GryffinRegiment"] call bis_fnc_setUnitInsignia;
	_unit setSpeaker "Male02ENGB";
	_unit setFace "Zee_White_Head_08";
    }; 
	default
    { 
	[_unit,"ARC_Patch_FR"] call bis_fnc_setUnitInsignia;
	_unit setSpeaker (selectRandom _Speakers);
	_unit setFace (selectRandom _Faces);
    }; 
}; 
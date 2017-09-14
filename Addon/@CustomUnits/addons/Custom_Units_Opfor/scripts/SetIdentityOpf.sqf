_Speakers = ["CUP_D_Male01_TK", "CUP_D_Male02_TK", "CUP_D_Male03_TK", "CUP_D_Male04_TK", "CUP_D_Male05_TK"];
_Faces = ["PersianHead_A3_01", "PersianHead_A3_02", "PersianHead_A3_03", "GreekHead_A3_02", "WhiteHead_08", "Zee_White_Head_12", "Zee_White_Head_16"];

switch (_typeofUnit) do 
{
	case "sniper": 
    { 
	_unit setSpeaker "ACE_NoVoice";
	_unit setFace "PersianHead_A3_01";
    }; 
	case "spotter": 
    { 
	_unit setSpeaker "ACE_NoVoice";
	_unit setFace "WhiteHead_18";
    }; 
	case "officer": 
    { 
	_unit setSpeaker "ACE_NoVoice";
	_unit setFace "PersianHead_A3_01";
    }; 
	default 
    { 
	_unit setSpeaker (selectRandom _Speakers);
	_unit setFace (selectRandom _Faces);
    }; 
}; 
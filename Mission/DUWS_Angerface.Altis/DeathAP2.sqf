	WARCOM_opfor_ap = WARCOM_opfor_ap + 5;
	WARCOM_blufor_ap = WARCOM_blufor_ap - 5;
	publicVariable "WARCOM_opfor_ap";
	publicVariable "WARCOM_blufor_ap";
	
	if (WARCOM_opfor_ap > 200) then {
	WARCOM_opfor_ap = 200;
	publicVariable "WARCOM_opfor_ap";
	} else {};
	if (WARCOM_blufor_ap < 0) then {
	WARCOM_blufor_ap = 0;
	publicVariable "WARCOM_blufor_ap";
	} else {};


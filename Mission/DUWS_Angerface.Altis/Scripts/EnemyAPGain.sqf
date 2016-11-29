while {true} do {
    sleep 900;
WARCOM_opfor_ap = WARCOM_opfor_ap + 5;

	if (WARCOM_opfor_ap > 200) then {
	WARCOM_opfor_ap = 200;
	publicVariable "WARCOM_opfor_ap";
	};
	
publicVariable "WARCOM_opfor_ap";
};
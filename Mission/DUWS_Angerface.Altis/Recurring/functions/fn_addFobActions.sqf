params ["_fob"];

_fob addaction ["<t color='#ff0066'>Armory</t>",{ [] call Recurring_fnc_VA }, "", 0, true, true, "", "_this == player"];
_fob addaction ["<t color='#ffbe1a'>Player Stats</t>","dialog\info\info.sqf", "", 0, true, true, "", "_this == player"];
_fob addAction ["<t color='#ff0066'>Heal (2CP)</t>", "heal.sqf", "", 0, true, true, "", "_this == player"];
if (support_halo_available) then {_fob addAction ["<t color='#15ff00'>HALO Alone (5CP)</t>", "ATM_airdrop\atm_airdrop.sqf", "", 0, true, true, "", "_this == player"];};
if (support_halo_available) then {_fob addAction ["<t color='#15ff00'>HALO Group (5CP)</t>", "COB_HALO\grphalo.sqf", "", 0, true, true, "", "_this == player"];};
if (support_satcom_available) then {_fob addAction ["<t color='#ff0066'>SATCOM</t>", {call PXS_startSatellite;}, "", 0, true, true, "", "_this == player"];};
_fob addaction ["<t color='#15ff00'>FOB/Teleport</t>","dialog\fob\FOBmanageropen.sqf", "", 0, true, true, "", "_this == player"];
_fob addaction ["<t color='#99ff00'>REQUESTS MENU>></t>","dialog\request_fob.sqf", "", 6, true, true, "", "_this == player"];
_fob addaction ["<t color='#ffb700'>Squad Manager</t>","dialog\squad\squadmng.sqf", "", 0, true, true, "", "_this == player"];
_fob addaction ["<t color='#00b7ff'>Rest</t>",{ [] call Recurring_fnc_restClient }, "", 0, true, true, "", "_this == player"];
if (isServer) then {
_fob addaction ["<t color='#00b7ff'>Save and Rest</t>",{ [] call Recurring_fnc_restServer }, "", 0, true, true, "", "_this == player"];
};

params ["_hq"];

_hq addaction ["<t color='#ff0066'>Armory</t>",{ [] call Recurring_fnc_VA }, "", 0, true, true, "", "_this == player"];
_hq addaction ["<t color='#ffb700'>Player Stats</t>","dialog\info\info.sqf", "", 0, true, true, "", "_this == player"];
_hq addAction ["<t color='#ff0066'>Heal (2CP)</t>", { [] call Recurring_fnc_heal }, "", 0, true, true, "", "_this == player"];
_hq addaction ["<t color='#15ff00'>FOB/Teleport</t>","dialog\fob\FOBmanageropen.sqf", "", 0, true, true, "", "_this == player"];
_hq addaction ["<t color='#99ff00'>Request Menu>></t>","dialog\request.sqf", "", 6, true, true, "", "_this == player"];
_hq addaction ["<t color='#ffb700'>Squad Manager</t>","dialog\squad\squadmng.sqf", "", 0, true, true, "", "_this == player"];
_hq addaction ["<t color='#ff0066'>SATCOM</t>", {call PXS_startSatellite;}, "", 0, true, true, "", "_this == player;Satellite == 1"];
_hq addaction ["<t color='#15ff00'>HALO Alone (5CP)</t>", "ATM_airdrop\atm_airdrop.sqf", "", 0, true, true, "", "_this == player;Halojump == 1"];
_hq addaction ["<t color='#15ff00'>HALO Group (5CP)</t>", "COB_HALO\grphalo.sqf", "", 0, true, true, "", "_this == player;Halojump == 1"];
_hq addaction ["<t color='#ffb700'>Rest</t>",{ [] call Recurring_fnc_restClient }, "", 0, true, true, "", "_this == player"];
_hq addaction ["<t color='#ffb700'>Save</t>",{ [] call Recurring_fnc_restServer }, "", 0, true, true, "", "_this == player1"];
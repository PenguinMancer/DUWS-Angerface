_hq = _this select 0;


_hq addaction ["<t color='#ff0066'>Armory</t>",{ [] call Recurring_fnc_VA }, "", 0, true, true, "", "_this == player"];
_hq addaction ["<t color='#ffb700'>Player Stats</t>","dialog\info\info.sqf", "", 0, true, true, "", "_this == player"];
_hq addAction ["<t color='#ff0066'>Heal (2CP)</t>", "heal.sqf", "", 0, true, true, "", "_this == player"];
_hq addaction ["<t color='#15ff00'>FOB/Teleport</t>","dialog\fob\FOBmanageropen.sqf", "", 0, true, true, "", "_this == player"];
_hq addaction ["<t color='#99ff00'>REQUESTS MENU>></t>","dialog\request.sqf", "", 6, true, true, "", "_this == player"];
_hq addaction ["<t color='#ffb700'>Squad Manager</t>","dialog\squad\squadmng.sqf", "", 0, true, true, "", "_this == player"];
_hq addaction ["<t color='#ffb700'>Rest</t>",{ [] call Recurring_fnc_restClient }, "", 0, true, true, "", "_this == player"];
if (isServer) then {
_hq addaction ["<t color='#ffb700'>Save</t>",{ [] call Recurring_fnc_restServer }, "", 0, true, true, "", "_this == player"];
};

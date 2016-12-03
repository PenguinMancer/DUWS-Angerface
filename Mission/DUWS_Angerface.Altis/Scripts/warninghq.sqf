
if (UseSiren==1) then {
[[{playSound "siren"}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;
};
[[{PAPABEAR sidechat "This is HQ, there are enemies near our main base!"}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;
[[{hint "Enemies approaching the main base!"}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;

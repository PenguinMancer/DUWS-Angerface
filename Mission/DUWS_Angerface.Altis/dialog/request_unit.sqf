_index = lbCurSel 2100;

_skill = (blufor_ai_skill select 0)+0.2;
_skillSF = (blufor_ai_skill select 0)+0.5;
_spawnpos = [(getpos player select 0)-78, (getpos player select 1)-73.5];

switch (_index) do
{
    case 0:  
    {
         if (commandpointsblu1 >= 2) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 2;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _blusoldier = call Soldiers_fnc_GetBluforSoldier;
			   _unit = _group createUnit [_blusoldier, _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    };

    case 1:
    {
         if (commandpointsblu1 >= 3) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 3;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _blusoldier = call Soldiers_fnc_GetBluforGrenadier;
			   _unit = _group createUnit [_blusoldier, _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    };

    case 2:
    {
         if (commandpointsblu1 >= 3) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 3;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _blusoldier = call Soldiers_fnc_GetBluforAutoRifleman;
			   _unit = _group createUnit [_blusoldier, _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    };

    case 3:
    {
         if (commandpointsblu1 >= 3) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 3;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _blusoldier = call Soldiers_fnc_GetBluforLightAntiTank;
			   _unit = _group createUnit [_blusoldier, _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    };

    case 4:
    {
         if (commandpointsblu1 >= 4) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 4;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _blusoldier = call Soldiers_fnc_GetBluforMedic;
			   _unit = _group createUnit [_blusoldier, _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    };

    case 5:
    {
         if (commandpointsblu1 >= 4) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 4;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _unit = _group createUnit ["Blufor_AntiAir_1", _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    };
    case 6:
    {
         if (commandpointsblu1 >= 4) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 4;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _unit = _group createUnit ["Blufor_Repair_1", _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    };
    case 7:
    {
         if (commandpointsblu1 >= 4) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 4;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
               _blusoldier = call Soldiers_fnc_GetBluforAntiTank;
			   _unit = _group createUnit [_blusoldier, _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    }; 
    case 8:
    {
         if (commandpointsblu1 >= 3) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 3;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _unit = _group createUnit ["Blufor_Diver_1", _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentityDiver", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    }; 
	    case 9:
    {
         if (commandpointsblu1 >= 3) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 3;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _unit = _group createUnit ["Blufor_Marksman_1", _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    }; 
    case 10:
    {
         if (commandpointsblu1 >= 4) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 4;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _unit = _group createUnit ["Blufor_Sniper_1", _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    }; 
    case 11:
    {
         if (commandpointsblu1 >= 3) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 3;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _unit = _group createUnit ["Blufor_Spotter_1", _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    }; 	
    case 12:
    {
         if (commandpointsblu1 >= 4) then 
             {
               hint "Unit ready !";
               commandpointsblu1 = commandpointsblu1 - 4;
               ctrlSetText [1000, format["%1",commandpointsblu1]];
               _group = group player ;
			   _unit = _group createUnit ["Blufor_Explosives_1", _spawnpos, [], 0, "FORM"];
			   [_unit] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
             } 
          else 
             {
               hint "Not enough command points";
             };
    }; 		
};

{
[_x] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
} forEach (units _group);

//hint format["AI skill: %1",_skill];            
publicVariable "commandpointsblu1";

//hint format["index: %1",_index];
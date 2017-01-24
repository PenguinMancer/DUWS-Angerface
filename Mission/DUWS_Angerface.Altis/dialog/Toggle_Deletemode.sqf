closeDialog 0;
if (isNil "Deletemode") exitwith {Deletemode = 1};
if (Deletemode == 0) exitwith {Deletemode = 1};
if (Deletemode == 1) exitwith {Deletemode = 0};
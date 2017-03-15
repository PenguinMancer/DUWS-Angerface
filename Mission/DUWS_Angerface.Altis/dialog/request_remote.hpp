class ressourceheader3
{
	idd = -1;
	movingenable = true;

	class controls
	{
		class background_request: RscText
		{
			idc = 1660;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 10 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.3};
		};
		class mainframebackground: RscFrame
		{
			idc = 1661;
			moving = 1;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 9 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class emptyvehicleframemobile: RscFrame
		{
			idc = 1662;
			text = "Request Vehicle";
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class requestvehiclebuttonmobile: RscButton
		{
			idc = 1663;
			text = "Request vehicle";
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			tooltip = "Request an empty vehicle to spawn at your position";
			action = "_nil=[]ExecVM ""dialog\request_vehicle_mobile.sqf""";
		};
		class exitbutton: RscButton
		{
			idc = 1664;
			text = "EXIT";
			x = 16 * GUI_GRID_W + GUI_GRID_X;
			y = 24 * GUI_GRID_H + GUI_GRID_Y;
			w = 8 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			action = "closeDialog 0";
		};
		class CPtotal: RscText
		{
			idc = 1665;
			text = "CP: XXX";
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
		};
		class RscFrame_1805: RscFrame
		{
			idc = 1666;
			text = "Command points";
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Command points available";
		};
		class emptyvehiclelist: RscCombo
		{
			idc = 1667;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			sizeEx = 0.025;
		};
	};
};
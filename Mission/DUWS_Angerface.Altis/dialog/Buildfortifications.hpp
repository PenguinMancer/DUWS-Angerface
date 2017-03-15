class ressourceheaderbuildfortifications
{
	idd = -1;
	movingenable = true;

	class controls
	{
		class background_request: RscText
		{
			idc = 9700;
			x = 12.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 15 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.3};
		};
		class mainframebackground: RscFrame
		{
			idc = 9701;
			moving = 1;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 14 * GUI_GRID_W;
			h = 10 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class Fortificationframe: RscFrame
		{
			idc = 9702;
			text = "Build Fortifications";
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class Fortificationbutton: RscButton
		{
			idc = 9703;
			text = "Build Selected";
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			tooltip = "Request an empty vehicle to spawn at your position";
			action = "_nil=[]ExecVM ""dialog\Build_fortifications.sqf""";
		};
		class exitbutton: RscButton
		{
			idc = 9704;
			text = "EXIT";
			x = 16 * GUI_GRID_W + GUI_GRID_X;
			y = 25 * GUI_GRID_H + GUI_GRID_Y;
			w = 8 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			action = "closeDialog 0";
		};
		class toggledeletebutton: RscButton
		{
			idc = 9705;
			text = "Toggle Delete Mode";
			x = 16 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			action = "_nil=[]ExecVM ""dialog\Toggle_Deletemode.sqf""";
		};
		class CPtotal: RscText
		{
			idc = 9706;
			text = "CP: XXX";
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
		};
		class RscFrame_1805: RscFrame
		{
			idc = 9707;
			text = "Command points";
			x = 13.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Command points available";
		};
		class emptyfortificationlist: RscCombo
		{
			idc = 9708;
			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 12 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			sizeEx = 0.025;
		};
	};
};

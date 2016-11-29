// TODO: Localize text in source/dialog/startup/startup.hpp
class startup_advanced_dialog
{
    idd = 326;
    movingenable = false;
    onUnload = "_nul = execVM ""dialog\startup\startup_advanced_closed.sqf"""; // UI event handler

    class controls
    {
        class background_request: RscText
        {
            idc = 1469;
            x = -0.6 * GUI_GRID_W + GUI_GRID_X;
            y = -0.48 * GUI_GRID_H + GUI_GRID_Y;
            w = 41 * GUI_GRID_W;
            h = 11 * GUI_GRID_H;
            colorBackground[] = {0,0,0,0.3};
        };
        class campaign_definer_mainframe: RscFrame
        {
            idc = 1800;
            text = "DEFINE THE PARAMETERS FOR YOUR CAMPAIGN";
            x = 0.1 * GUI_GRID_W + GUI_GRID_X;
            y = 0.02 * GUI_GRID_H + GUI_GRID_Y;
            w = 40 * GUI_GRID_W;
            h = 10 * GUI_GRID_H;
        };
        class zone_max_radius_frame: RscFrame
        {
            idc = 1801;
            text = "Maximum radius of a zone";
            x = 1 * GUI_GRID_W + GUI_GRID_X;
            y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 18.5 * GUI_GRID_W;
            h = 2.5 * GUI_GRID_H;
            tooltip = "Define the maximum possible radius of an enemy zone";
        };
        class zone_min_radius_frame: RscFrame
        {
            idc = 1802;
            text = "Minimum radius of a zone";
            x = 20.5 * GUI_GRID_W + GUI_GRID_X;
            y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 18.5 * GUI_GRID_W;
            h = 2.5 * GUI_GRID_H;
            tooltip = "Define the minimum possible radius of an enemy zone";
        };
        class zone_max_radius_combo: RscCombo
        {
            idc = 2100;
            x = 1.5 * GUI_GRID_W + GUI_GRID_X;
            y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 17.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            tooltip = "Define the maximum possible radius of an enemy zone";
        };
        class zone_min_radius_combo: RscCombo
        {
            idc = 2101;
            x = 21 * GUI_GRID_W + GUI_GRID_X;
            y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 17.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            tooltip = "Define the minimum possible radius of an enemy zone";
        };
		class zone_fortified_frame: RscFrame
        {
            idc = 2801;
            text = "Zone Fortification";
            x = 1 * GUI_GRID_W + GUI_GRID_X;
            y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 18.5 * GUI_GRID_W;
            h = 2.5 * GUI_GRID_H;
            tooltip = "Does the zone have extra enemies";
        };
        class zone_compound_frame: RscFrame
        {
            idc = 2802;
            text = "Zone Compound";
            x = 20.5 * GUI_GRID_W + GUI_GRID_X;
            y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 18.5 * GUI_GRID_W;
            h = 2.5 * GUI_GRID_H;
            tooltip = "Does the zone have extra buildings";
        };
        class zone_fortified_combo: RscCombo
        {
            idc = 3100;
            x = 1.5 * GUI_GRID_W + GUI_GRID_X;
            y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 17.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            tooltip = "Does the zone have extra enemies";
        };
        class zone_compound_combo: RscCombo
        {
            idc = 3101;
            x = 21 * GUI_GRID_W + GUI_GRID_X;
            y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 17.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            tooltip = "Does the zone have extra buildings";
        };
        class start_button: RscButton
        {
            idc = 1600;
            text = "Continue";
            x = 16 * GUI_GRID_W + GUI_GRID_X;
            y = 8 * GUI_GRID_H + GUI_GRID_Y;
            w = 8 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;
            sizeEx = 0.05;
            colorBackground[] = {1, 0, 0,0.5};
            tooltip = "Generate the next zone";
            action = "_nul = [] execvm ""dialog\startup\startup_advanced_continue.sqf""";
        };
    };
};
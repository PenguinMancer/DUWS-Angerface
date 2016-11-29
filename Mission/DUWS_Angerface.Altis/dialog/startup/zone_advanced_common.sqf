// MAX RADIUS
_index = lbCurSel 2100;
switch (_index) do {
    case index_max_radius_500: {
        zones_max_radius = 500
    };
    case index_max_radius_750: {
        zones_max_radius = 750
    };
    case index_max_radius_1000: {
        zones_max_radius = 1000
    };
    case index_max_radius_1250: {
        zones_max_radius = 1250
    };
    case index_max_radius_1500: {
        zones_max_radius = 1500
    };
    case index_max_radius_1750: {
        zones_max_radius = 1750
    };
    case index_max_radius_2000: {
        zones_max_radius = 2000
    };
    case index_max_radius_2500: {
        zones_max_radius = 2500
    };
    case index_max_radius_3000: {
        zones_max_radius = 3000
    };
    case index_max_radius_4000: {
        zones_max_radius = 4000
    };
};

// MIN RADIUS
_index = lbCurSel 2101;
switch (_index) do {
    case index_min_radius_250: {
        zones_min_radius = 250
    };
    case index_min_radius_500: {
        zones_min_radius = 500
    };
    case index_min_radius_750: {
        zones_min_radius = 750
    };
    case index_min_radius_1000: {
        zones_min_radius = 1000
    };
    case index_min_radius_1250: {
        zones_min_radius = 1250
    };
    case index_min_radius_1500: {
        zones_min_radius = 1500
    };
    case index_min_radius_1750: {
        zones_min_radius = 1750
    };
    case index_min_radius_2000: {
        zones_min_radius = 2000
    };
    case index_min_radius_2500: {
        zones_min_radius = 2500
    };
    case index_min_radius_3000: {
        zones_min_radius = 3000
    };
};

// MIN RADIUS
_index = lbCurSel 3100;
switch (_index) do {
    case index_zone_fortified_1: {
        zone_fortified = true;
    };
    case index_zone_fortified_0: {
        zone_fortified = false;
    };
};

// MIN RADIUS
_index = lbCurSel 3101;
switch (_index) do {
    case index_zone_compound_1: {
        zone_compound = true;
    };
    case index_zone_compound_0: {
        zone_compound = false;
    };
};

 // CHECK IF MAX/MIN RADIUS PARAMETERS CORRECT
if (zones_max_radius <= zones_min_radius) exitWith {Hint "Zone Max Radius must be larger than Min Radius!"};


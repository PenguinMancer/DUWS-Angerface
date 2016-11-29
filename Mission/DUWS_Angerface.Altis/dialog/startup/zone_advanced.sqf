_handle2 = createDialog "startup_advanced_dialog";
waitUntil {dialog};

/// MAX RADIUS
index_max_radius_4000 = lbAdd [2100, "4000 meters"];
index_max_radius_3000 = lbAdd [2100, "3000 meters"];
index_max_radius_2500 = lbAdd [2100, "2500 meters"];
index_max_radius_2000 = lbAdd [2100, "2000 meters"];
index_max_radius_1750 = lbAdd [2100, "1750 meters"];
index_max_radius_1500 = lbAdd [2100, "1500 meters"];
index_max_radius_1250 = lbAdd [2100, "1250 meters"];
index_max_radius_1000 = lbAdd [2100, "1000 meters (default)"];
index_max_radius_750 = lbAdd [2100, "750 meters"];
index_max_radius_500 = lbAdd [2100, "500 meters"];
lbSetCurSel [2100, index_max_radius_1000];

// MIN RADIUS
index_min_radius_3000 = lbAdd [2101, "3000 meters"];
index_min_radius_2500 = lbAdd [2101, "2500 meters"];
index_min_radius_2000 = lbAdd [2101, "2000 meters"];
index_min_radius_1750 = lbAdd [2101, "1750 meters"];
index_min_radius_1500 = lbAdd [2101, "1500 meters"];
index_min_radius_1250 = lbAdd [2101, "1250 meters"];
index_min_radius_1000 = lbAdd [2101, "1000 meters"];
index_min_radius_750 = lbAdd [2101, "750 meters"];
index_min_radius_500 = lbAdd [2101, "500 meters"];
index_min_radius_250 = lbAdd [2101, "250 meters (default)"];
lbSetCurSel [2101, index_min_radius_250];

index_zone_fortified_1 = lbAdd [3100, "True"];
index_zone_fortified_0 = lbAdd [3100, "False"];
lbSetCurSel [3100, index_zone_fortified_0];

index_zone_compound_1 = lbAdd [3101, "True"];
index_zone_compound_0 = lbAdd [3101, "False"];
lbSetCurSel [3101, index_zone_compound_0];
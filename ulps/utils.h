string debugLocation = "/Users/harry/Desktop/debug.txt";

string deleteLayerContents(int Layer) {
    string _s;
    string _cmd;

	// need to reset the selection filter to be able to delete layer contents
	_cmd += "SET selectlayers all;\n";
	sprintf(_s, "DISPLAY None %u;\n", Layer);
	_cmd += _s;
	_cmd += "GROUP all;\n";
	_cmd += "DELETE (>0 0);\n";
	_cmd += "DISPLAY last;\n";

    return _cmd;
}
/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i









{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case '1': goto yy4;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
	{ return -1; }
yy4:
	++YYCURSOR;
	{ return 1; }
}



{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case '2': goto yy10;
		default: goto yy8;
	}
yy8:
	++YYCURSOR;
	{ return -1; }
yy10:
	++YYCURSOR;
	{ return 2; }
}



{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case '0': goto yy16;
		default: goto yy14;
	}
yy14:
	++YYCURSOR;
	{ return -1; }
yy16:
	++YYCURSOR;
	{ return 0; }
}


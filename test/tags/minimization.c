/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i
// Rules are the same except for the tag in the 2nd case.
// In the 1st case common tail "a" is deduplicated after DFA minimization.
// In the 2nd case tag prevents minimization.


{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b':
		case 'c': goto yy4;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy5;
		default: goto yy3;
	}
yy5:
	++YYCURSOR;
	{}
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy11;
		case 'c': goto yy12;
		default: goto yy9;
	}
yy9:
	++YYCURSOR;
yy10:
	{}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy13;
		default: goto yy10;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy15;
		default: goto yy10;
	}
yy13:
	++YYCURSOR;
yy14:
	p = yyt1;
	{ p }
yy15:
	++YYCURSOR;
	yyt1 = NULL;
	goto yy14;
}


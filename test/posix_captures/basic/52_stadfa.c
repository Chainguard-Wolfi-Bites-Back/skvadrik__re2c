/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy3;
		default: goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'b':
		case 'c': goto yy5;
		case 'd': goto yy7;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b':
		case 'c': goto yy5;
		case 'd': goto yy7;
		default: goto yy4;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy5;
		case 'c': goto yy9;
		case 'd': goto yy7;
		default: goto yy4;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt2;
	switch (yych) {
		case 'b':
		case 'c': goto yy5;
		case 'd': goto yy10;
		default: goto yy4;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt4 = yyt3;
	switch (yych) {
		case 'b': goto yy5;
		case 'c': goto yy11;
		case 'd': goto yy7;
		default: goto yy4;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt2;
	yyt1 = yyt4;
	switch (yych) {
		case 'b':
		case 'c': goto yy5;
		case 'd': goto yy12;
		default: goto yy4;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt4 = yyt3;
	switch (yych) {
		case 'b': goto yy5;
		case 'c': goto yy11;
		case 'd': goto yy7;
		case 'e': goto yy13;
		default: goto yy4;
	}
yy13:
	++YYCURSOR;
	yynmatch = 1;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	{}
}

posix_captures/basic/52_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]

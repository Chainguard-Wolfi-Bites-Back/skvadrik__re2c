/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'y': goto yy3;
		default: goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'y': goto yy5;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'y': goto yy6;
		default: goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	yyt1 = yyt3;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'y': goto yy8;
		default:
			yyt3 = YYCURSOR;
			goto yy7;
	}
yy7:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	yyt1 = yyt3;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'y': goto yy9;
		default:
			yyt3 = YYCURSOR;
			goto yy7;
	}
yy9:
	yych = *++YYCURSOR;
	yyt1 = yyt3;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'y': goto yy10;
		default:
			yyt3 = YYCURSOR;
			goto yy7;
	}
yy10:
	++YYCURSOR;
	yyt1 = yyt3;
	yyt3 = YYCURSOR;
	goto yy7;
}

posix_captures/other/26_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]

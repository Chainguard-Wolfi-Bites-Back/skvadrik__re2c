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
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy4;
		case 'a': goto yy7;
		default: goto yy5;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
	yyt1 = yyt2;
yy6:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 2;
	yypmatch[3] = YYCURSOR;
	{}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = yyt3;
	yyt3 = yyt2;
	switch (yych) {
		case 0x00: goto yy6;
		case 'a': goto yy7;
		default: goto yy5;
	}
}

posix_captures/basic/09_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]

/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy5;
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
		case 'a': goto yy6;
		case 'b': goto yy8;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		default: goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy9;
		default: goto yy7;
	}
yy7:
	yynmatch = 3;
	yypmatch[2] = yyt2;
	yypmatch[4] = yyt1;
	yypmatch[0] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt1;
	yypmatch[5] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy10;
		default: goto yy4;
	}
yy9:
	++YYCURSOR;
	goto yy7;
yy10:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy9;
		default: goto yy4;
	}
}

posix_captures/glennfowler/24_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]

/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt3 = NULL;
			yyt1 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt3 = NULL;
			yyt1 = yyt2 = YYCURSOR;
			goto yy5;
		default: goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy7;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy7;
		default: goto yy6;
	}
yy6:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[5] = yyt2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = YYCURSOR - 1;
	yypmatch[4] = yyt2;
	yypmatch[6] = YYCURSOR - 1;
	yypmatch[7] = YYCURSOR;
	{}
yy7:
	++YYCURSOR;
	yyt2 = yyt3;
	goto yy6;
}

posix_captures/osxbsdcritical/02.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]

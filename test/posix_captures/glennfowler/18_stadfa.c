/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy4;
		default:
			yyt4 = NULL;
			yyt1 = yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy2:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[7] = yyt4;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[6] = yyt4;
	if (yyt4 != NULL) yypmatch[6] -= 2;
	{}
yy3:
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy7;
		default:
			yyt4 = NULL;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy4:
	++YYCURSOR;
	yyt4 = NULL;
	yyt1 = yyt2 = yyt3 = YYCURSOR - 1;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy8;
		default: goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	yyt4 = NULL;
	yyt2 = yyt3 = YYCURSOR;
	goto yy2;
yy7:
	yych = *++YYCURSOR;
	yyt4 = NULL;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy9;
		default: goto yy2;
	}
yy8:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	switch (yych) {
		case 'b': goto yy9;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy9:
	++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = yyt4 = YYCURSOR - 1;
	goto yy2;
}

posix_captures/glennfowler/18_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/18_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/18_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]

/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default:
			yyt1 = yyt5 = NULL;
			yyt2 = YYCURSOR;
			goto yy2;
	}
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt2;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt5;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = yyt3 = yyt4 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy4;
		case 'b': goto yy6;
		default:
			yyt5 = YYCURSOR;
			goto yy2;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt4 = yyt3;
	yyt1 = yyt5 = YYCURSOR - 1;
	yyt3 = yyt2;
	switch (yych) {
		case 'a': goto yy4;
		case 'b': goto yy6;
		default:
			yyt5 = YYCURSOR;
			goto yy2;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = yyt5;
	yyt3 = yyt4;
	yyt6 = yyt4;
	yyt2 = yyt4;
	switch (yych) {
		case 'a': goto yy7;
		default:
			yyt5 = YYCURSOR;
			goto yy2;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = yyt5;
	yyt2 = yyt6;
	yyt4 = yyt3;
	yyt5 = YYCURSOR - 1;
	yyt3 = yyt6;
	switch (yych) {
		case 'a': goto yy4;
		case 'b': goto yy6;
		default:
			yyt5 = YYCURSOR;
			goto yy2;
	}
}

posix_captures/glennfowler/33_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/33_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/33_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]

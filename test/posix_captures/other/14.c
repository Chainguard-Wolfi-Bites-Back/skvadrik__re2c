/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'y':
			yyt1 = YYCURSOR;
			goto yy3;
		default:
			yyt2 = NULL;
			yyt1 = YYCURSOR;
			goto yy2;
	}
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt2;
	if (yyt2 != NULL) yypmatch[2] -= 1;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'y': goto yy4;
		default:
			yyt2 = YYCURSOR;
			goto yy2;
	}
yy4:
	++YYCURSOR;
	yyt2 = YYCURSOR;
	goto yy2;
}

posix_captures/other/14.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/14.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/14.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]

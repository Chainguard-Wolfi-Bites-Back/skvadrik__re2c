/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e': goto yy3;
		default: goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	yynmatch = 1;
	yypmatch[0] = YYCURSOR - 1;
	yypmatch[1] = YYCURSOR;
	{}
}

posix_captures/basic/44_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]

/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt1 = yyt4 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt1 = yyt4 = YYCURSOR;
			goto yy6;
		case 'c':
			yyt1 = yyt4 = YYCURSOR;
			goto yy8;
		default: goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt3 = YYCURSOR;
			goto yy10;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy8;
		case 'd':
			yyt3 = YYCURSOR;
			goto yy11;
		default:
			yyt2 = yyt4;
			yyt3 = YYCURSOR;
			goto yy5;
	}
yy5:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt3;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy13;
		default: goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		yyt3 = YYCURSOR;
		goto yy5;
	}
yy8:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt2 = yyt4;
			yyt4 = YYCURSOR;
			goto yy6;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy8;
		case 'd':
			yyt3 = YYCURSOR;
			goto yy11;
		default:
			yyt2 = yyt4;
			yyt3 = YYCURSOR;
			goto yy5;
	}
yy10:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt2 = yyt4;
			yyt4 = YYCURSOR;
			goto yy6;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy14;
		case 'd':
			yyt3 = YYCURSOR;
			goto yy11;
		default:
			yyt2 = yyt4;
			yyt3 = YYCURSOR;
			goto yy5;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy11;
		default:
			yyt2 = yyt4;
			goto yy5;
	}
yy13:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy8;
		default: goto yy7;
	}
yy14:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy6;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy8;
		case 'd':
			yyt4 = yyt3;
			goto yy8;
		default:
			yyt3 = YYCURSOR;
			goto yy5;
	}
}

posix_captures/repetition/69.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]

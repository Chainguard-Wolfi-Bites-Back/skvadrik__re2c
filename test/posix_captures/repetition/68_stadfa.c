/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy4;
		case 'c': goto yy6;
		case 'd': goto yy7;
		default:
			yyt2 = yyt3 = NULL;
			yyt1 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy2:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy10;
		case 'c': goto yy11;
		case 'd': goto yy13;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy4:
	yych = *++YYCURSOR;
	yyt3 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy14;
		default: goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt3 = NULL;
		yyt1 = yyt4 = YYCURSOR;
		goto yy2;
	} else {
		yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy15;
		case 'c': goto yy11;
		case 'd': goto yy13;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy7:
	yych = *++YYCURSOR;
	yyt2 = yyt3 = NULL;
	yyt1 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy16;
		default: goto yy2;
	}
yy8:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt5 = yyt1;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy10;
		case 'c': goto yy11;
		case 'd': goto yy13;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy10:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt3 = yyt1;
	yyt1 = yyt5;
	yyt4 = YYCURSOR - 1;
	yyt1 = yyt5;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy15;
		case 'c': goto yy18;
		case 'd': goto yy13;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy11:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy15;
		case 'c': goto yy11;
		case 'd': goto yy13;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy13:
	yych = *++YYCURSOR;
	yyt3 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy16;
		default: goto yy2;
	}
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy19;
		default: goto yy5;
	}
yy15:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt1;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy14;
		default: goto yy5;
	}
yy16:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy16;
		default: goto yy2;
	}
yy18:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy15;
		case 'c': goto yy11;
		case 'd': goto yy19;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy19:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt1 = yyt3;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy15;
		case 'c': goto yy11;
		case 'd': goto yy13;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy2;
	}
}

posix_captures/repetition/68_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/68_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/68_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]

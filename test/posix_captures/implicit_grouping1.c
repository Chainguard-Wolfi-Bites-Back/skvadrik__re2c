/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures


{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default: goto yy2;
	}
yy4:
	++YYCURSOR;
	yynmatch = 1;
	yypmatch[0] = YYCURSOR - 2;
	yypmatch[1] = YYCURSOR;
	{}
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		default: goto yy6;
	}
yy6:
	++YYCURSOR;
yy7:
	{}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'b': goto yy9;
		default: goto yy7;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy11;
		default: goto yy10;
	}
yy10:
	YYCURSOR = YYMARKER;
	goto yy7;
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy12;
		default: goto yy10;
	}
yy12:
	++YYCURSOR;
	yynmatch = 1;
	yypmatch[0] = YYCURSOR - 4;
	yypmatch[1] = YYCURSOR;
	{}
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy16;
		default: goto yy14;
	}
yy14:
	++YYCURSOR;
yy15:
	{}
yy16:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'b': goto yy17;
		default: goto yy15;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy19;
		default: goto yy18;
	}
yy18:
	YYCURSOR = YYMARKER;
	goto yy15;
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy20;
		default: goto yy18;
	}
yy20:
	++YYCURSOR;
	yynmatch = 3;
	yypmatch[0] = YYCURSOR - 4;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 3;
	yypmatch[3] = YYCURSOR - 2;
	yypmatch[4] = YYCURSOR - 1;
	yypmatch[5] = YYCURSOR;
	{}
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
		case 'b': goto yy24;
		default: goto yy22;
	}
yy22:
	++YYCURSOR;
yy23:
	{}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
		case 'b': goto yy25;
		default: goto yy23;
	}
yy25:
	++YYCURSOR;
	yynmatch = 1;
	yypmatch[0] = YYCURSOR - 2;
	yypmatch[1] = YYCURSOR;
	{}
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy29;
		case 'b': goto yy30;
		default: goto yy27;
	}
yy27:
	++YYCURSOR;
yy28:
	{}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = NULL;
			goto yy31;
		case 'b':
			yyt1 = NULL;
			goto yy33;
		default: goto yy28;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy31;
		case 'b':
			yyt1 = YYCURSOR;
			goto yy33;
		default: goto yy28;
	}
yy31:
	++YYCURSOR;
	yyt2 = NULL;
yy32:
	yynmatch = 3;
	yypmatch[3] = yyt1;
	yypmatch[5] = yyt2;
	yypmatch[0] = YYCURSOR - 2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt1;
	if (yyt1 != NULL) yypmatch[2] -= 1;
	yypmatch[4] = yyt2;
	if (yyt2 != NULL) yypmatch[4] -= 1;
	{}
yy33:
	++YYCURSOR;
	yyt2 = YYCURSOR;
	goto yy32;
}



{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR;
	switch (yych) {
		case 'a': goto yy36;
		default: goto yy35;
	}
yy35:
	yynmatch = 1;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	{}
yy36:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy36;
		default: goto yy35;
	}
}



{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy39;
		default:
			yyt2 = NULL;
			yyt1 = YYCURSOR;
			goto yy38;
	}
yy38:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt2;
	if (yyt2 != NULL) yypmatch[2] -= 2;
	yypmatch[4] = yyt2;
	if (yyt2 != NULL) yypmatch[4] -= 2;
	{}
yy39:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy39;
		default:
			yyt2 = NULL;
			goto yy38;
	}
}

posix_captures/implicit_grouping1.re:35:9: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/implicit_grouping1.re:40:9: warning: rule matches empty string [-Wmatch-empty-string]

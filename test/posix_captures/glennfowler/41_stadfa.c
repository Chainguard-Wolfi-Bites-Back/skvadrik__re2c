/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy5;
		default:
			yyt2 = yyt3 = NULL;
			yyt1 = YYCURSOR;
			goto yy2;
	}
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt3 = yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy4;
		case 'z': goto yy8;
		default: goto yy6;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt3 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	} else {
		yyt3 = YYCURSOR;
		goto yy2;
	}
yy5:
	yych = *++YYCURSOR;
	yyt5 = yyt6 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy4;
		case 'y': goto yy12;
		default: goto yy10;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy4;
		case 'z': goto yy8;
		default: goto yy6;
	}
yy8:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt1 = yyt3;
	switch (yych) {
		case 0x00:
			yyt3 = YYCURSOR;
			goto yy2;
		case 'b': goto yy14;
		case 'z': goto yy8;
		default: goto yy6;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy4;
		case 'y': goto yy12;
		default: goto yy10;
	}
yy12:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt6;
	yyt1 = yyt5;
	switch (yych) {
		case 0x00:
			yyt3 = YYCURSOR;
			goto yy2;
		case 'a': goto yy15;
		case 'y': goto yy12;
		default: goto yy10;
	}
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt5 = yyt1;
	yyt6 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy4;
		case 'y': goto yy18;
		case 'z': goto yy20;
		default: goto yy16;
	}
yy15:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt1;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy4;
		case 'y': goto yy24;
		case 'z': goto yy26;
		default: goto yy22;
	}
yy16:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy4;
		case 'y': goto yy18;
		case 'z': goto yy20;
		default: goto yy16;
	}
yy18:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt6;
	yyt1 = yyt5;
	switch (yych) {
		case 0x00:
			yyt3 = YYCURSOR;
			goto yy2;
		case 'y': goto yy18;
		case 'z': goto yy20;
		default: goto yy16;
	}
yy20:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt1 = yyt3;
	switch (yych) {
		case 0x00:
			yyt3 = YYCURSOR;
			goto yy2;
		case 'b': goto yy14;
		case 'y': goto yy18;
		case 'z': goto yy20;
		default: goto yy16;
	}
yy22:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy4;
		case 'y': goto yy24;
		case 'z': goto yy26;
		default: goto yy22;
	}
yy24:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt6;
	yyt1 = yyt5;
	switch (yych) {
		case 0x00:
			yyt3 = YYCURSOR;
			goto yy2;
		case 'a': goto yy15;
		case 'y': goto yy24;
		case 'z': goto yy26;
		default: goto yy22;
	}
yy26:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt4;
	yyt1 = yyt3;
	switch (yych) {
		case 0x00:
			yyt3 = YYCURSOR;
			goto yy2;
		case 'y': goto yy24;
		case 'z': goto yy26;
		default: goto yy22;
	}
}

posix_captures/glennfowler/41_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/41_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/41_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]

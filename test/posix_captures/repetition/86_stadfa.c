/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 32) YYFILL(32);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy5;
		case 'c': goto yy7;
		default: goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy9;
		case 'c': goto yy10;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy4:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy5:
	yych = *++YYCURSOR;
	yyt2 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy12;
		default: goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		yyt1 = yyt5;
		yyt3 = yyt4 = YYCURSOR;
		goto yy4;
	}
yy7:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt2 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy13;
		case 'c': goto yy10;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy8:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy15;
		case 'c': goto yy16;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt3 = yyt1;
	yyt5 = yyt1;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy13;
		case 'c': goto yy17;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy10:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt5 = yyt1;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy18;
		case 'c': goto yy16;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy11:
	yych = *++YYCURSOR;
	yyt1 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy19;
		default:
			yyt4 = yyt3;
			yyt3 = yyt1;
			yyt1 = yyt5;
			goto yy4;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy21;
		default: goto yy6;
	}
yy13:
	yych = *++YYCURSOR;
	yyt3 = yyt1;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy22;
		default: goto yy6;
	}
yy14:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy23;
		case 'b': goto yy24;
		case 'c': goto yy25;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy15:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt3 = yyt5;
	yyt4 = YYCURSOR - 1;
	yyt5 = yyt1;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy18;
		case 'c': goto yy26;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy16:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy23;
		case 'b': goto yy27;
		case 'c': goto yy25;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy17:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt5 = yyt1;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy18;
		case 'c': goto yy16;
		case 'd': goto yy28;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy18:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy29;
		default: goto yy6;
	}
yy19:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy19;
		default:
			yyt4 = yyt3;
			yyt3 = yyt1;
			yyt1 = yyt5;
			goto yy4;
	}
yy21:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	switch (yych) {
		case 'a': goto yy8;
		case 'b': goto yy13;
		case 'c': goto yy10;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy28;
		default: goto yy6;
	}
yy23:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy30;
		case 'b': goto yy31;
		case 'c': goto yy32;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy24:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
		case 'a': goto yy23;
		case 'b': goto yy27;
		case 'c': goto yy33;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy25:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy30;
		case 'b': goto yy34;
		case 'c': goto yy32;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy26:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy23;
		case 'b': goto yy27;
		case 'c': goto yy25;
		case 'd': goto yy35;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy27:
	yych = *++YYCURSOR;
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy36;
		default: goto yy6;
	}
yy28:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt4;
	yyt5 = yyt3;
	switch (yych) {
		case 'a': goto yy14;
		case 'b': goto yy18;
		case 'c': goto yy16;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy35;
		default: goto yy6;
	}
yy30:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy37;
		case 'b': goto yy38;
		case 'c': goto yy39;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy31:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
		case 'a': goto yy30;
		case 'b': goto yy34;
		case 'c': goto yy40;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy32:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy37;
		case 'b': goto yy41;
		case 'c': goto yy39;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy33:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy30;
		case 'b': goto yy34;
		case 'c': goto yy32;
		case 'd': goto yy42;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy34:
	yych = *++YYCURSOR;
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy43;
		default: goto yy6;
	}
yy35:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt4;
	yyt5 = yyt3;
	switch (yych) {
		case 'a': goto yy23;
		case 'b': goto yy27;
		case 'c': goto yy25;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy42;
		default: goto yy6;
	}
yy37:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy44;
		case 'b': goto yy45;
		case 'c': goto yy46;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy38:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
		case 'a': goto yy37;
		case 'b': goto yy41;
		case 'c': goto yy47;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy39:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy44;
		case 'b': goto yy48;
		case 'c': goto yy46;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy40:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy37;
		case 'b': goto yy41;
		case 'c': goto yy39;
		case 'd': goto yy49;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy41:
	yych = *++YYCURSOR;
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy50;
		default: goto yy6;
	}
yy42:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt3;
	yyt5 = yyt1;
	switch (yych) {
		case 'a': goto yy30;
		case 'b': goto yy34;
		case 'c': goto yy32;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy49;
		default: goto yy6;
	}
yy44:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy51;
		case 'b': goto yy52;
		case 'c': goto yy53;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy45:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
		case 'a': goto yy44;
		case 'b': goto yy48;
		case 'c': goto yy54;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy46:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy51;
		case 'b': goto yy55;
		case 'c': goto yy53;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy47:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy44;
		case 'b': goto yy48;
		case 'c': goto yy46;
		case 'd': goto yy56;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy48:
	yych = *++YYCURSOR;
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy57;
		default: goto yy6;
	}
yy49:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt3;
	yyt5 = yyt1;
	switch (yych) {
		case 'a': goto yy37;
		case 'b': goto yy41;
		case 'c': goto yy39;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy56;
		default: goto yy6;
	}
yy51:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy58;
		case 'b': goto yy59;
		case 'c': goto yy60;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy52:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
		case 'a': goto yy51;
		case 'b': goto yy55;
		case 'c': goto yy61;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy53:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy58;
		case 'b': goto yy62;
		case 'c': goto yy60;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy54:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy51;
		case 'b': goto yy55;
		case 'c': goto yy53;
		case 'd': goto yy63;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy55:
	yych = *++YYCURSOR;
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy64;
		default: goto yy6;
	}
yy56:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt3;
	yyt5 = yyt1;
	switch (yych) {
		case 'a': goto yy44;
		case 'b': goto yy48;
		case 'c': goto yy46;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy63;
		default: goto yy6;
	}
yy58:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy65;
		case 'b': goto yy66;
		case 'c': goto yy67;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy59:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
		case 'a': goto yy58;
		case 'b': goto yy62;
		case 'c': goto yy68;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy60:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy65;
		case 'b': goto yy69;
		case 'c': goto yy67;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy61:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy58;
		case 'b': goto yy62;
		case 'c': goto yy60;
		case 'd': goto yy70;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy62:
	yych = *++YYCURSOR;
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy71;
		default: goto yy6;
	}
yy63:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt3;
	yyt5 = yyt1;
	switch (yych) {
		case 'a': goto yy51;
		case 'b': goto yy55;
		case 'c': goto yy53;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy70;
		default: goto yy6;
	}
yy65:
	yych = *++YYCURSOR;
	yyt1 = yyt5;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy72;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy66:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
		case 'a': goto yy65;
		case 'b': goto yy69;
		case 'c': goto yy73;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy67:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy68:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy65;
		case 'b': goto yy69;
		case 'c': goto yy67;
		case 'd': goto yy74;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy69:
	yych = *++YYCURSOR;
	yyt1 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'c': goto yy75;
		default: goto yy6;
	}
yy70:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt3;
	yyt5 = yyt1;
	switch (yych) {
		case 'a': goto yy58;
		case 'b': goto yy62;
		case 'c': goto yy60;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy74;
		default: goto yy6;
	}
yy72:
	yych = *++YYCURSOR;
	yyt5 = yyt1;
	switch (yych) {
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy73:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy76;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy74:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt3;
	yyt5 = yyt1;
	switch (yych) {
		case 'a': goto yy65;
		case 'b': goto yy69;
		case 'c': goto yy67;
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
yy75:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy76;
		default: goto yy6;
	}
yy76:
	yych = *++YYCURSOR;
	yyt2 = yyt3;
	yyt5 = yyt1;
	switch (yych) {
		case 'd': goto yy11;
		default:
			yyt3 = yyt4 = YYCURSOR;
			yyt1 = yyt5;
			goto yy4;
	}
}

posix_captures/repetition/86_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]

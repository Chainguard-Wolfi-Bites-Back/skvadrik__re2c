/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 31) YYFILL(31);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt1 = yyt4 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt1 = yyt4 = YYCURSOR;
			goto yy4;
		case 'c':
			yyt1 = yyt4 = YYCURSOR;
			goto yy6;
		case 'd':
			yyt2 = yyt4 = NULL;
			yyt1 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt4 = NULL;
			yyt1 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy2:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt4;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy9;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy10;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy11;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy12;
		default: goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0:
			yyt2 = yyt4 = NULL;
			yyt1 = yyt3 = YYCURSOR;
			goto yy2;
		case 1:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
		case 2:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
		default:
			yyt4 = yyt3;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy9;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy13;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy11;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy8:
	switch (yych) {
		case 'd': goto yy7;
		default: goto yy2;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy14;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy15;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy16;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy10:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy9;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy13;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy17;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy11:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy14;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy18;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy16;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy6;
		default: goto yy5;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy19;
		default: goto yy5;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy20;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy21;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy22;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy15:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy14;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy18;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy23;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy16:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy20;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy24;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy22;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy17:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy14;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy18;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy16;
		case 'd': goto yy11;
		default:
			yyt4 = yyt3;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy25;
		default: goto yy5;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy11;
		default: goto yy5;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy26;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy27;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy28;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy21:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy20;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy24;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy29;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy22:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy26;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy30;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy28;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy23:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy20;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy24;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy22;
		case 'd': goto yy16;
		default:
			yyt4 = yyt3;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy31;
		default: goto yy5;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy16;
		default: goto yy5;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy32;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy33;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy34;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy27:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy26;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy30;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy35;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy28:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy32;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy36;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy34;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy29:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy26;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy30;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy28;
		case 'd': goto yy22;
		default:
			yyt4 = yyt3;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy37;
		default: goto yy5;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy22;
		default: goto yy5;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy38;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy39;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy40;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy33:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy32;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy36;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy41;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy34:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy38;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy42;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy40;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy35:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy32;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy36;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy34;
		case 'd': goto yy28;
		default:
			yyt4 = yyt3;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy43;
		default: goto yy5;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy28;
		default: goto yy5;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy44;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy45;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy46;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy39:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy38;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy42;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy47;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy40:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy44;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy48;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy46;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy41:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy38;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy42;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy40;
		case 'd': goto yy34;
		default:
			yyt4 = yyt3;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy49;
		default: goto yy5;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy34;
		default: goto yy5;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy50;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy51;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy52;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy45:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy44;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy48;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy53;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy46:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy50;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy54;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy52;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy47:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy44;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy48;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy46;
		case 'd': goto yy40;
		default:
			yyt4 = yyt3;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy55;
		default: goto yy5;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy40;
		default: goto yy5;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy56;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy57;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy58;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy51:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy50;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy54;
		case 'c':
			yyt3 = YYCURSOR;
			goto yy59;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy52:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy56;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy60;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy58;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy53:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy50;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy54;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy52;
		case 'd': goto yy46;
		default:
			yyt4 = yyt3;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy61;
		default: goto yy5;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy46;
		default: goto yy5;
	}
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy58;
		case 'd':
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt4 = yyt2;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy57:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy56;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy60;
		case 'c':
			yyt4 = YYCURSOR;
			goto yy62;
		case 'd':
			yyt2 = yyt3 = YYCURSOR;
			goto yy7;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy58:
	yych = *++YYCURSOR;
	yyt4 = yyt2;
	yyt2 = yyt3 = YYCURSOR;
	goto yy8;
yy59:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			goto yy56;
		case 'b':
			yyt2 = YYCURSOR;
			goto yy60;
		case 'c':
			yyt2 = YYCURSOR;
			goto yy58;
		case 'd': goto yy52;
		default:
			yyt4 = yyt3;
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy63;
		default: goto yy5;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy52;
		default: goto yy5;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy58;
		default:
			yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'd': goto yy58;
		default: goto yy5;
	}
}

posix_captures/repetition/85.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/85.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/85.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]

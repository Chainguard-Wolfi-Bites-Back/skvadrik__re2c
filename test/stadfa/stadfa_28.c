/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy5;
		case 'c': goto yy7;
		default: goto yy2;
	}
yy2:
	{}
yy3:
	yych = *++YYCURSOR;
	yytm4 = yytm1;
	switch (yych) {
		case 'a':
		case 'c': goto yy9;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0: goto yy2;
		case 1: goto yy8;
		default:
			yytm2 = yytm1;
			yytm1 = yytm3;
			YYMTAGN(yytm1);
			goto yy6;
	}
yy5:
	yych = *++YYCURSOR;
	yytm3 = yytm2;
	switch (yych) {
		case 'b': goto yy10;
		case 'c': goto yy12;
		default:
			yytm2 = yytm1;
			YYMTAGN(yytm2);
			yytm1 = yytm3;
			YYMTAGP(yytm1);
			goto yy6;
	}
yy6:
	x = yytm1;
	y = yytm2;
	{}
yy7:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yytm4 = yytm1;
	yytm3 = yytm2;
	YYMTAGP(yytm1);
	YYSHIFTMTAG(yytm1, -1);
	switch (yych) {
		case 'a': goto yy9;
		case 'c': goto yy13;
		default: goto yy8;
	}
yy8:
	{}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
		case 'c': goto yy14;
		default: goto yy4;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yytm3 = yytm2;
	YYMTAGP(yytm3);
	YYSHIFTMTAG(yytm3, -1);
	YYMTAGP(yytm2);
	YYSHIFTMTAG(yytm2, -1);
	switch (yych) {
		case 'b': goto yy10;
		case 'c': goto yy12;
		default:
			yytm2 = yytm1;
			YYMTAGN(yytm2);
			yytm1 = yytm3;
			YYMTAGP(yytm1);
			goto yy6;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yytm2 = yytm3;
	switch (yych) {
		case 'b': goto yy15;
		default:
			yytm2 = yytm1;
			YYMTAGN(yytm2);
			yytm1 = yytm3;
			YYMTAGN(yytm1);
			goto yy6;
	}
yy13:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
		case 'c': goto yy14;
		default:
			yytm2 = yytm1;
			yytm1 = yytm3;
			YYMTAGN(yytm1);
			goto yy6;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
		case 'c': goto yy16;
		default: goto yy4;
	}
yy15:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yytm3 = yytm2;
	YYMTAGN(yytm3);
	YYMTAGN(yytm2);
	switch (yych) {
		case 'b': goto yy10;
		case 'c': goto yy12;
		default:
			yytm2 = yytm1;
			YYMTAGN(yytm2);
			yytm1 = yytm3;
			YYMTAGP(yytm1);
			goto yy6;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
		case 'c': goto yy17;
		default: goto yy4;
	}
yy17:
	++YYCURSOR;
	yytm1 = yytm4;
	yytm3 = yytm2;
	yytm2 = yytm1;
	YYMTAGN(yytm2);
	yytm1 = yytm3;
	YYMTAGN(yytm1);
	goto yy6;
}


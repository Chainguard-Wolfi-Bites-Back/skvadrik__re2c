/* Generated by re2c */

{
	YYCTYPE yych;
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	case 'x':	goto yy5;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (YYFILL() == 0) goto yyFillLabel0;
			goto yyeof1;
		}
		goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ err }
yy4:
	++YYCURSOR;
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy6;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (YYFILL() == 0) goto yyFillLabel1;
		}
		goto yy3;
	}
yy5:
	++YYCURSOR;
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
	case 'y':	goto yy8;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (YYFILL() == 0) goto yyFillLabel2;
		}
		goto yy3;
	}
yy6:
	++YYCURSOR;
yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':
		yyt1 = YYCURSOR;
		goto yy10;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (YYFILL() == 0) goto yyFillLabel3;
		}
		yyt1 = NULL;
		goto yy7;
	}
yy7:
	c = yyt1;
	{ one }
yy8:
	++YYCURSOR;
yyFillLabel4:
	yych = *YYCURSOR;
	yyt1 = YYCURSOR;
	if (yych >= 0x01) goto yy13;
	if (YYLIMIT <= YYCURSOR) {
		if (YYFILL() == 0) goto yyFillLabel4;
	}
yy9:
	z = yyt1;
	{ two }
yy10:
	++YYCURSOR;
yyFillLabel5:
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':
		yyt1 = YYCURSOR;
		goto yy10;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (YYFILL() == 0) goto yyFillLabel5;
		}
		goto yy7;
	}
yy12:
	++YYCURSOR;
yyFillLabel6:
	yych = *YYCURSOR;
yy13:
	switch (yych) {
	case 'z':	goto yy12;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (YYFILL() == 0) goto yyFillLabel6;
		}
		goto yy9;
	}
yyeofrule1:
	{ eof }
}

/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -if
// This test is for autogenerated state switch without `getstate:re2c`
// and with mixed `use:re2c` and non-use blocks (named or anonymous).

// rules block


// local block y (with start label)
// (expect a global state switch here with a start label in y
// including blocks y, z and the unnamed blocks)


	switch (YYGETSTATE()) {
		default: goto yy0;
		case 0: goto yyFillLabel0;
		case 2: goto yyFillLabel2;
		case 3: goto yyFillLabel3;
		case 5: goto yyFillLabel5;
	}
yy0:
	YYSETSTATE(0);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel0:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ y }


// use block (expect a local state switch for this block only)


	switch (YYGETSTATE()) {
		default: goto yy5;
		case 1: goto yyFillLabel1;
	}
yy5:
	YYSETSTATE(1);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel1:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ x }


// global block z that includes x (no start label)


	YYSETSTATE(2);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel2:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ x }


// unnamed local block that includes x (no start label)


	YYSETSTATE(3);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel3:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ x }


// use block (expect a local state switch for this block only)


	switch (YYGETSTATE()) {
		default: goto yy20;
		case 4: goto yyFillLabel4;
	}
yy20:
	YYSETSTATE(4);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel4:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ x }


// unnamed global block (no start label)


	YYSETSTATE(5);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel5:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ ? }


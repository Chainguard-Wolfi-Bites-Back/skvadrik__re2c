/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -if
// This test is for autogenerated state switch without `getstate:re2c`.

// global block w (no rules)


// global block x
// expect a global state switch here that includes blocks
// x, y and z (default case should go to start label of x).


	switch (YYGETSTATE()) {
		default: goto yy0;
		case 0: goto yyFillLabel0;
		case 1: goto yyFillLabel1;
		case 2: goto yyFillLabel2;
	}
yy0:
	YYSETSTATE(0);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel0:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ x }


// global block y (no start label)


	YYSETSTATE(1);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel1:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ y }


// local block z (no start label)


	YYSETSTATE(2);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel2:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ z }


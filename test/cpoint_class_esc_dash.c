/* Generated by re2c */
#line 1 "cpoint_class_esc_dash.re"
// re2c $INPUT -o $OUTPUT 

#line 6 "cpoint_class_esc_dash.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '-':
		case 'a':
		case 'c': goto yy3;
		default: goto yy2;
	}
yy2:
yy3:
	++YYCURSOR;
#line 3 "cpoint_class_esc_dash.re"
	{}
#line 22 "cpoint_class_esc_dash.c"
}
#line 4 "cpoint_class_esc_dash.re"

cpoint_class_esc_dash.re:2:0: warning: control flow is undefined for strings that match '[\x0-\x2C\x2E-\x60\x62\x64-\xFF]', use default rule '*' [-Wundefined-control-flow]

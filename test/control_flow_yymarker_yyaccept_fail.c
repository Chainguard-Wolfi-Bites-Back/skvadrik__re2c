/* Generated by re2c */
#line 1 "control_flow_yymarker_yyaccept_fail.re"
// re2c $INPUT -o $OUTPUT 

#line 6 "control_flow_yymarker_yyaccept_fail.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *YYCURSOR++;
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy5;
		default: goto yy3;
	}
yy3:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	goto yy6;
yy4:
#line 6 "control_flow_yymarker_yyaccept_fail.re"
	{ action3 }
#line 24 "control_flow_yymarker_yyaccept_fail.c"
yy5:
	yych = *++YYCURSOR;
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		default: goto yy7;
	}
yy7:
	yych = *++YYCURSOR;
	goto yy10;
yy8:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	goto yy10;
yy9:
#line 5 "control_flow_yymarker_yyaccept_fail.re"
	{ action2 }
#line 43 "control_flow_yymarker_yyaccept_fail.c"
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy12;
		default: goto yy11;
	}
yy11:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy4;
	} else {
		goto yy9;
	}
yy12:
	++YYCURSOR;
#line 4 "control_flow_yymarker_yyaccept_fail.re"
	{ action1 }
#line 61 "control_flow_yymarker_yyaccept_fail.c"
}
#line 8 "control_flow_yymarker_yyaccept_fail.re"

control_flow_yymarker_yyaccept_fail.re:2:0: warning: control flow is undefined for strings that match '[\x0-\xFF] \x61 [\x0-\xFF] [\x0-\x60\x62-\xFF] [\x0-\xFF] [\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]

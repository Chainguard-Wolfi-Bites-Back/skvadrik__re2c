/* Generated by re2c */
#line 1 "conditions/condtype_single_cg.re"
// re2c $INPUT -o $OUTPUT -cg

#line 6 "conditions/condtype_single_cg.c"
{
	YYCTYPE yych;
	static void *yyctable[1] = {
		&&yyc_a,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_a:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 'a') goto yy3;
yy3:
	++YYCURSOR;
#line 3 "conditions/condtype_single_cg.re"
	{}
#line 22 "conditions/condtype_single_cg.c"
}
#line 4 "conditions/condtype_single_cg.re"

conditions/condtype_single_cg.re:4:2: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condtype_single_cg.re:4:2: warning: looks like you use hardcoded numbers instead of autogenerated condition names: better add '/*!types:re2c*/' directive or '-t, --type-header' option and don't rely on fixed condition order. [-Wcondition-order]
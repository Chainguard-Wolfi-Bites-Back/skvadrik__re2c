/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy3;
		default:
			yyt1 = YYCURSOR;
			goto yy2;
	}
yy2:
	t = yyt1;
	{}
yy3:
	++YYCURSOR;
	yyt1 = NULL;
	goto yy2;
}

stadfa/stadfa_03.re:3:9: warning: rule matches empty string [-Wmatch-empty-string]
stadfa/stadfa_03.re:4:3: warning: unreachable rule (shadowed by rule at line 3) [-Wunreachable-rules]

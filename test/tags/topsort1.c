/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy3;
		default: goto yy2;
	}
yy2:
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt3 = YYCURSOR;
			goto yy5;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy6;
		default: goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt5 = YYCURSOR;
			goto yy7;
		default: goto yy4;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = yyt2;
			yyt2 = yyt3;
			yyt3 = yyt4;
			yyt4 = yyt5;
			yyt5 = YYCURSOR;
			goto yy7;
		default: goto yy9;
	}
yy9:
	p = yyt1;
	{}
}

tags/topsort1.re:4:21: warning: tag 'p' has 5th degree of nondeterminism [-Wnondeterministic-tags]

/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures --dump-interf --fixed-tags toplevel

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy4;
		case 'b':
			yyt1 = yyt2 = NULL;
			yyt3 = YYCURSOR;
			goto yy6;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
	{}
yy4:
	++YYCURSOR;
	yyt3 = yyt4 = NULL;
	yyt2 = YYCURSOR;
yy5:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[0] = YYCURSOR - 1;
	yypmatch[1] = YYCURSOR;
	{}
yy6:
	++YYCURSOR;
	yyt4 = YYCURSOR;
	goto yy5;
}

 1  2  3  4  5  6  7  8 
 .  *  *  *  .  .  .  . 
 *  .  *  *  .  *  .  . 
 *  *  .  *  .  *  *  . 
 *  *  *  .  .  .  .  . 
 .  .  .  .  .  .  .  . 
 .  *  *  .  .  .  .  * 
 .  .  *  .  .  .  .  * 
 .  .  .  .  .  *  *  . 
 1  2  3  4 
 .  *  *  * 
 *  .  *  * 
 *  *  .  * 
 *  *  *  . 

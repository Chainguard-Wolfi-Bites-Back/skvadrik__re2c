/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --case-insensitive

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'A':
		case 'a': goto yy3;
		case 'B':
		case 'b': goto yy5;
		default: goto yy2;
	}
yy2:
yy3:
	++YYCURSOR;
	{return 'a';}
yy5:
	++YYCURSOR;
	{return 'b';}
}

}
casing-flags.re:2:0: warning: control flow is undefined for strings that match '[\x0-\x40\x43-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]

/* Generated by re2c */
#line 1 "config/config4f.re"
// re2c $INPUT -o $OUTPUT -f
#define	NULL		((char*) 0)
#define	YYCTYPE		char
#define	YYCURSOR	p
#define	YYLIMIT		p
#define	YYMARKER	q
#define	YYFILL(n)

char *scan(char *p)
{
	char *q;
#line 14 "config/config4f.re"

#line 17 "config/config4f.c"
	switch (YYGETSTATE()) {
		default: goto yy0;
		case 0: goto yyFillLabel0;
		case 1: goto yyFillLabel1;
	}
#line 15 "config/config4f.re"


	// after getstate


#line 29 "config/config4f.c"

yy0:
	YYSETSTATE(0);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy5;
		default: goto yy3;
	}
yy3:
	++YYCURSOR;
	YYSETSTATE(-1);
#line 23 "config/config4f.re"
	{ return NULL; }
#line 54 "config/config4f.c"
yy5:
	++YYCURSOR;
	YYSETSTATE(1);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy5;
		default: goto yy7;
	}
yy7:
	YYSETSTATE(-1);
#line 22 "config/config4f.re"
	{ return YYCURSOR; }
#line 78 "config/config4f.c"
#line 24 "config/config4f.re"

}

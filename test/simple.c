/* Generated by re2c */
#line 1 "simple.re"
// re2c $INPUT -o $OUTPUT 
#define	NULL		((char*) 0)
char *scan(char *p){
char *q;
#define	YYCTYPE		char
#define	YYCURSOR	p
#define	YYLIMIT		p
#define	YYMARKER	q
#define	YYFILL(n)

#line 14 "simple.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
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
		case '9': goto yy4;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
#line 12 "simple.re"
	{return NULL;}
#line 36 "simple.c"
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
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
		case '9': goto yy4;
		default: goto yy6;
	}
yy6:
#line 11 "simple.re"
	{return YYCURSOR;}
#line 57 "simple.c"
}
#line 13 "simple.re"

}

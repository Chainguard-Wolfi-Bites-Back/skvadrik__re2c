/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -ei
/* re2c lesson 001_upn_calculator, calc_001, (c) M. Boerger 2006 - 2007 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int scan(char *s, int l)
{
	char *p = s;
	char *q = 0;
#define YYCTYPE         char
#define YYCURSOR        p
#define YYLIMIT         (s+l)
#define YYMARKER        q
#define YYFILL(n)
	
	for(;;)
	{

		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			switch (yych) {
				case 0x00: goto yy2;
				case 0x4E: goto yy6;
				case 0x60: goto yy8;
				case 0xF0: goto yy10;
				case 0xF1:
				case 0xF2:
				case 0xF3:
				case 0xF4:
				case 0xF5:
				case 0xF6:
				case 0xF7:
				case 0xF8:
				case 0xF9: goto yy12;
				default: goto yy4;
			}
yy2:
			++YYCURSOR;
			{ printf("EOF\n");	return 0; }
yy4:
			++YYCURSOR;
			{ printf("ERR\n");	return 1; }
yy6:
			++YYCURSOR;
			{ printf("+\n");	continue; }
yy8:
			++YYCURSOR;
			{ printf("-\n");	continue; }
yy10:
			yych = *++YYCURSOR;
			switch (yych) {
				case 0xF0:
				case 0xF1:
				case 0xF2:
				case 0xF3:
				case 0xF4:
				case 0xF5:
				case 0xF6:
				case 0xF7:
				case 0xF8:
				case 0xF9: goto yy15;
				default: goto yy11;
			}
yy11:
			{ printf("Num\n");	continue; }
yy12:
			++YYCURSOR;
			if (YYLIMIT <= YYCURSOR) YYFILL(1);
			yych = *YYCURSOR;
			switch (yych) {
				case 0xF0:
				case 0xF1:
				case 0xF2:
				case 0xF3:
				case 0xF4:
				case 0xF5:
				case 0xF6:
				case 0xF7:
				case 0xF8:
				case 0xF9: goto yy12;
				default: goto yy14;
			}
yy14:
			{ printf("Num\n");	continue; }
yy15:
			++YYCURSOR;
			if (YYLIMIT <= YYCURSOR) YYFILL(1);
			yych = *YYCURSOR;
			switch (yych) {
				case 0xF0:
				case 0xF1:
				case 0xF2:
				case 0xF3:
				case 0xF4:
				case 0xF5:
				case 0xF6:
				case 0xF7:
				case 0xF8:
				case 0xF9: goto yy15;
				default: goto yy17;
			}
yy17:
			{ printf("Oct\n");	continue; }
		}

	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		return scan(argv[1], strlen(argv[1]));
	}
	else
	{
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 1;
	}
}

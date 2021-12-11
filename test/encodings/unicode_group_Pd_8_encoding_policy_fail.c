/* Generated by re2c */
#line 1 "encodings/unicode_group_Pd_8_encoding_policy_fail.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy fail
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Pd:
	
#line 14 "encodings/unicode_group_Pd_8_encoding_policy_fail.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case '-': goto yy4;
		case 0xD6: goto yy6;
		case 0xE1: goto yy7;
		case 0xE2: goto yy8;
		case 0xE3: goto yy9;
		case 0xEF: goto yy10;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 14 "encodings/unicode_group_Pd_8_encoding_policy_fail.re"
	{ return YYCURSOR == limit; }
#line 32 "encodings/unicode_group_Pd_8_encoding_policy_fail.c"
yy4:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Pd_8_encoding_policy_fail.re"
	{ goto Pd; }
#line 37 "encodings/unicode_group_Pd_8_encoding_policy_fail.c"
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8A:
		case 0xBE: goto yy4;
		default: goto yy3;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x90: goto yy11;
		case 0xA0: goto yy13;
		default: goto yy3;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80: goto yy14;
		case 0xB8: goto yy15;
		case 0xB9: goto yy11;
		default: goto yy3;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80: goto yy16;
		case 0x82: goto yy17;
		default: goto yy3;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xB8: goto yy18;
		case 0xB9: goto yy19;
		case 0xBC: goto yy20;
		default: goto yy3;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80: goto yy4;
		default: goto yy12;
	}
yy12:
	YYCURSOR = YYMARKER;
	goto yy3;
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x86: goto yy4;
		default: goto yy12;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95: goto yy4;
		default: goto yy12;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x97:
		case 0x9A:
		case 0xBA:
		case 0xBB: goto yy4;
		default: goto yy12;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9C:
		case 0xB0: goto yy4;
		default: goto yy12;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0: goto yy4;
		default: goto yy12;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB1:
		case 0xB2: goto yy4;
		default: goto yy12;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x98:
		case 0xA3: goto yy4;
		default: goto yy12;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8D: goto yy4;
		default: goto yy12;
	}
}
#line 15 "encodings/unicode_group_Pd_8_encoding_policy_fail.re"

}
static const unsigned int chars_Pd [] = {0x2d,0x2d,  0x58a,0x58a,  0x5be,0x5be,  0x1400,0x1400,  0x1806,0x1806,  0x2010,0x2015,  0x2e17,0x2e17,  0x2e1a,0x2e1a,  0x2e3a,0x2e3b,  0x2e40,0x2e40,  0x301c,0x301c,  0x3030,0x3030,  0x30a0,0x30a0,  0xfe31,0xfe32,  0xfe58,0xfe58,  0xfe63,0xfe63,  0xff0d,0xff0d,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	unsigned int * buffer_Pd = new unsigned int [100];
	YYCTYPE * s = (YYCTYPE *) buffer_Pd;
	unsigned int buffer_len = encode_utf8 (chars_Pd, sizeof (chars_Pd) / sizeof (unsigned int), buffer_Pd);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Pd[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Pd' failed\n");
	delete [] buffer_Pd;
	return 0;
}

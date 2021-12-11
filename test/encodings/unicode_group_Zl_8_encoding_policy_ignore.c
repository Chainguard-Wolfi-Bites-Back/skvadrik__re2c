/* Generated by re2c */
#line 1 "encodings/unicode_group_Zl_8_encoding_policy_ignore.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy ignore
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Zl:
	
#line 14 "encodings/unicode_group_Zl_8_encoding_policy_ignore.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 0xE2: goto yy4;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 14 "encodings/unicode_group_Zl_8_encoding_policy_ignore.re"
	{ return YYCURSOR == limit; }
#line 27 "encodings/unicode_group_Zl_8_encoding_policy_ignore.c"
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80: goto yy5;
		default: goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA8: goto yy7;
		default: goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Zl_8_encoding_policy_ignore.re"
	{ goto Zl; }
#line 47 "encodings/unicode_group_Zl_8_encoding_policy_ignore.c"
}
#line 15 "encodings/unicode_group_Zl_8_encoding_policy_ignore.re"

}
static const unsigned int chars_Zl [] = {0x2028,0x2028,  0x0,0x0};
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
	unsigned int * buffer_Zl = new unsigned int [8];
	YYCTYPE * s = (YYCTYPE *) buffer_Zl;
	unsigned int buffer_len = encode_utf8 (chars_Zl, sizeof (chars_Zl) / sizeof (unsigned int), buffer_Zl);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Zl[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Zl' failed\n");
	delete [] buffer_Zl;
	return 0;
}

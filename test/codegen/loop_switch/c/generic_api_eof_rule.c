/* Generated by re2c */
// re2c $INPUT -o $OUTPUT --loop-switch -i
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// expect a string without terminating null
static int lex(const char *str, unsigned int len)
{
    const char *cur = str, *lim = str + len, *mar;
    int count = 0;

loop:
    
{
	char yych;
	unsigned int yystate = 0;
	for (;;) {
		switch (yystate) {
			case 0:
				yych = cur < lim ? *cur : 0;
				switch (yych) {
					case ' ':
						++cur;
						yystate = 3;
						continue;
					case '\'':
						++cur;
						yystate = 6;
						continue;
					default:
						if (cur >= lim) {
							yystate = 12;
							continue;
						}
						++cur;
						yystate = 1;
						continue;
				}
			case 1:
				yystate = 2;
				continue;
			case 2:
				{ return -1; }
			case 3:
				yych = cur < lim ? *cur : 0;
				yystate = 4;
				continue;
			case 4:
				switch (yych) {
					case ' ':
						++cur;
						yystate = 3;
						continue;
					default:
						yystate = 5;
						continue;
				}
			case 5:
				{ goto loop; }
			case 6:
				mar = cur;
				yych = cur < lim ? *cur : 0;
				if (yych >= 0x01) {
					yystate = 8;
					continue;
				}
				if (cur >= lim) {
					yystate = 2;
					continue;
				}
				++cur;
				yystate = 7;
				continue;
			case 7:
				yych = cur < lim ? *cur : 0;
				yystate = 8;
				continue;
			case 8:
				switch (yych) {
					case '\'':
						++cur;
						yystate = 9;
						continue;
					case '\\':
						++cur;
						yystate = 11;
						continue;
					default:
						if (cur >= lim) {
							yystate = 13;
							continue;
						}
						++cur;
						yystate = 7;
						continue;
				}
			case 9:
				yystate = 10;
				continue;
			case 10:
				{ ++count; goto loop; }
			case 11:
				yych = cur < lim ? *cur : 0;
				if (yych <= 0x00) {
					if (cur >= lim) {
						yystate = 13;
						continue;
					}
					++cur;
					yystate = 7;
					continue;
				}
				++cur;
				yystate = 7;
				continue;
			case 12:
				{ return count; }
			case 13:
				cur = mar;
				yystate = 2;
				continue;
		}
	}
}

}

// make a copy of the string without terminating null
static void test(const char *str, unsigned int len, int res)
{
    char *s = (char*) malloc(len);
    memcpy(s, str, len);
    int r = lex(s, len);
    free(s);
    assert(r == res);
}

#define TEST(s, r) test(s, sizeof(s) - 1, r)
int main()
{
    TEST("", 0);
    TEST("'qu\0tes' 'are' 'fine: \\'' ", 3);
    TEST("'unterminated\\'", -1);
    return 0;
}

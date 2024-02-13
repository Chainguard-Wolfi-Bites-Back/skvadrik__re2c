/* Generated by re2c 3.0 */
#line 1 "../src/parse/syntax_lexer.re"
#include <stdint.h>

#include "src/msg/msg.h"
#include "src/options/opt.h"
#include "src/parse/input.h"
#include "src/parse/syntax_parser.h"
#include "src/util/string_utils.h"

#define YYFILL(n) do { \
    if (!fill(n)) RET_FAIL(error_at_cur("unexpected end of input in configuration")); \
} while(0)

#line 27 "../src/parse/syntax_lexer.re"


namespace re2c {

#line 21 "src/parse/syntax_lexer.cc"
size_t LexerState::maxfill_syntax() { return 30; }
#line 31 "../src/parse/syntax_lexer.re"


#define RET_TOK(t) do { token = t; return Ret::OK; } while(0)

#define RET_GOPT(b) do { token = STX_GOPT; yylval->gopt = b; return Ret::OK; } while(0)
#define RET_LOPT(b) do { token = STX_LOPT; yylval->lopt = b; return Ret::OK; } while(0)

Ret Input::lex_syntax_token(STX_STYPE* yylval, Opt& opts, int& token) {
    const uint8_t* p;
    
#line 34 "src/parse/syntax_lexer.cc"
const uint8_t* yyt1;
#line 40 "../src/parse/syntax_lexer.re"


start:
    tok = cur;
    location = cur_loc();

#line 43 "src/parse/syntax_lexer.cc"
{
	uint8_t yych;
	unsigned int yyaccept = 0;
	static const unsigned char yybm[] = {
		  0, 128, 128, 128, 128, 128, 128, 128, 
		128, 144,   0, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		144, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 192, 192, 128, 
		224, 224, 224, 224, 224, 224, 224, 224, 
		224, 224, 128, 128, 128, 128, 128, 128, 
		128, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 128, 128, 128, 128, 192, 
		128, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 192, 192, 192, 192, 192, 
		192, 192, 192, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
	};
	if ((lim - cur) < 6) YYFILL(6);
	yych = *cur;
	if (yybm[0+yych] & 16) {
		goto yy4;
	}
	if (yych <= '>') {
		if (yych <= ')') {
			if (yych <= '!') {
				if (yych <= 0x00) goto yy1;
				if (yych <= 0x08) goto yy2;
				if (yych <= '\n') goto yy5;
				goto yy2;
			} else {
				if (yych <= '"') goto yy6;
				if (yych <= '\'') goto yy2;
				if (yych <= '(') goto yy7;
				goto yy8;
			}
		} else {
			if (yych <= '.') {
				if (yych <= '+') goto yy2;
				if (yych <= ',') goto yy8;
				if (yych <= '-') goto yy9;
				goto yy2;
			} else {
				if (yych <= '/') goto yy10;
				if (yych <= '9') goto yy11;
				if (yych <= ';') goto yy8;
				goto yy2;
			}
		}
	} else {
		if (yych <= '_') {
			if (yych <= '[') {
				if (yych <= '?') goto yy8;
				if (yych <= '@') goto yy2;
				if (yych <= 'Z') goto yy12;
				goto yy8;
			} else {
				if (yych == ']') goto yy8;
				if (yych <= '^') goto yy2;
				goto yy12;
			}
		} else {
			if (yych <= 'z') {
				if (yych <= '`') goto yy2;
				if (yych == 'c') goto yy15;
				goto yy12;
			} else {
				if (yych == '|') goto yy2;
				if (yych <= '}') goto yy8;
				goto yy2;
			}
		}
	}
yy1:
	++cur;
#line 46 "../src/parse/syntax_lexer.re"
	{ RET_TOK(STX_EOF); }
#line 140 "src/parse/syntax_lexer.cc"
yy2:
	++cur;
yy3:
#line 77 "../src/parse/syntax_lexer.re"
	{ RET_FAIL(error_at_tok("unexpected character: '%c'", cur[-1])); }
#line 146 "src/parse/syntax_lexer.cc"
yy4:
	++cur;
	if (lim <= cur) YYFILL(1);
	yych = *cur;
	if (yybm[0+yych] & 16) {
		goto yy4;
	}
#line 51 "../src/parse/syntax_lexer.re"
	{ goto start; }
#line 156 "src/parse/syntax_lexer.cc"
yy5:
	++cur;
#line 47 "../src/parse/syntax_lexer.re"
	{
        next_line();
        goto start;
    }
#line 164 "src/parse/syntax_lexer.cc"
yy6:
	++cur;
#line 74 "../src/parse/syntax_lexer.re"
	{ tmp_str.clear(); goto str; }
#line 169 "src/parse/syntax_lexer.cc"
yy7:
	++cur;
	if (lim <= cur) YYFILL(1);
	yych = *cur;
	if (yych == '\t') goto yy7;
	if (yych == ' ') goto yy7;
#line 75 "../src/parse/syntax_lexer.re"
	{ goto opt; }
#line 178 "src/parse/syntax_lexer.cc"
yy8:
	++cur;
#line 76 "../src/parse/syntax_lexer.re"
	{ RET_TOK(cur[-1]); }
#line 183 "src/parse/syntax_lexer.cc"
yy9:
	yych = *++cur;
	if (yybm[0+yych] & 32) {
		goto yy11;
	}
	goto yy3;
yy10:
	yyaccept = 0;
	yych = *(mar = ++cur);
	if (yych == '/') goto yy16;
	goto yy3;
yy11:
	++cur;
	if (lim <= cur) YYFILL(1);
	yych = *cur;
	if (yybm[0+yych] & 32) {
		goto yy11;
	}
#line 68 "../src/parse/syntax_lexer.re"
	{
        if (s_to_i32_unsafe(tok, cur, yylval->num)) {
            RET_TOK(STX_NUMBER);
        }
        RET_FAIL(error_at_tok("configuration value overflow"));
    }
#line 209 "src/parse/syntax_lexer.cc"
yy12:
	yyaccept = 1;
	mar = ++cur;
	if (lim <= cur) YYFILL(1);
	yych = *cur;
yy13:
	if (yybm[0+yych] & 64) {
		goto yy12;
	}
	if (yych <= 0x1F) {
		if (yych == '\t') {
			yyt1 = cur;
			goto yy18;
		}
	} else {
		if (yych <= ' ') {
			yyt1 = cur;
			goto yy18;
		}
		if (yych == '=') {
			yyt1 = cur;
			goto yy19;
		}
	}
yy14:
#line 64 "../src/parse/syntax_lexer.re"
	{
        yylval->str = newcstr(tok, cur, alc);
        RET_TOK(STX_NAME);
    }
#line 240 "src/parse/syntax_lexer.cc"
yy15:
	yyaccept = 1;
	yych = *(mar = ++cur);
	if (yych == 'o') goto yy20;
	goto yy13;
yy16:
	++cur;
	if (lim <= cur) YYFILL(1);
	yych = *cur;
	if (yybm[0+yych] & 128) {
		goto yy16;
	}
	if (yych >= 0x01) goto yy5;
yy17:
	cur = mar;
	if (yyaccept == 0) {
		goto yy3;
	} else {
		goto yy14;
	}
yy18:
	++cur;
	if (lim <= cur) YYFILL(1);
	yych = *cur;
	if (yych <= 0x1F) {
		if (yych == '\t') goto yy18;
		goto yy17;
	} else {
		if (yych <= ' ') goto yy18;
		if (yych != '=') goto yy17;
	}
yy19:
	++cur;
	p = yyt1;
#line 60 "../src/parse/syntax_lexer.re"
	{
        yylval->str = newcstr(tok, p, alc);
        RET_TOK(STX_CONF);
    }
#line 280 "src/parse/syntax_lexer.cc"
yy20:
	yyaccept = 1;
	yych = *(mar = ++cur);
	if (yych == 'd') goto yy21;
	if (yych == 'n') goto yy22;
	goto yy13;
yy21:
	yyaccept = 1;
	yych = *(mar = ++cur);
	if (yych == 'e') goto yy23;
	goto yy13;
yy22:
	yyaccept = 1;
	yych = *(mar = ++cur);
	if (yych == 'f') goto yy24;
	goto yy13;
yy23:
	yyaccept = 1;
	yych = *(mar = ++cur);
	if (yych == ':') goto yy25;
	goto yy13;
yy24:
	yyaccept = 1;
	yych = *(mar = ++cur);
	if (yych == ':') goto yy26;
	goto yy13;
yy25:
	yych = *++cur;
	if (yych <= '^') {
		if (yych <= '@') goto yy17;
		if (yych <= 'Z') goto yy27;
		goto yy17;
	} else {
		if (yych == '`') goto yy17;
		if (yych <= 'z') goto yy27;
		goto yy17;
	}
yy26:
	++cur;
#line 52 "../src/parse/syntax_lexer.re"
	{
        CHECK_RET(lex_conf(opts));
        goto start;
    }
#line 325 "src/parse/syntax_lexer.cc"
yy27:
	++cur;
	if (lim <= cur) YYFILL(1);
	yych = *cur;
	if (yych <= '9') {
		if (yych <= ' ') {
			if (yych == '\t') {
				yyt1 = cur;
				goto yy28;
			}
			if (yych <= 0x1F) goto yy17;
			yyt1 = cur;
		} else {
			if (yych <= ',') goto yy17;
			if (yych == '/') goto yy17;
			goto yy27;
		}
	} else {
		if (yych <= 'Z') {
			if (yych == '=') {
				yyt1 = cur;
				goto yy29;
			}
			if (yych <= '@') goto yy17;
			goto yy27;
		} else {
			if (yych <= '_') {
				if (yych <= '^') goto yy17;
				goto yy27;
			} else {
				if (yych <= '`') goto yy17;
				if (yych <= 'z') goto yy27;
				goto yy17;
			}
		}
	}
yy28:
	++cur;
	if (lim <= cur) YYFILL(1);
	yych = *cur;
	if (yych <= 0x1F) {
		if (yych == '\t') goto yy28;
		goto yy17;
	} else {
		if (yych <= ' ') goto yy28;
		if (yych != '=') goto yy17;
	}
yy29:
	++cur;
	p = yyt1;
#line 56 "../src/parse/syntax_lexer.re"
	{
        yylval->str = newcstr(tok, p, alc);
        RET_TOK(STX_CONF_CODE);
    }
#line 381 "src/parse/syntax_lexer.cc"
}
#line 78 "../src/parse/syntax_lexer.re"


str: 
#line 387 "src/parse/syntax_lexer.cc"
{
	uint8_t yych;
	if ((lim - cur) < 4) YYFILL(4);
	yych = *cur;
	if (yych <= '!') {
		if (yych <= 0x00) goto yy31;
		if (yych != '\n') goto yy33;
	} else {
		if (yych <= '"') goto yy34;
		if (yych == '\\') goto yy35;
		goto yy33;
	}
yy31:
	++cur;
yy32:
#line 97 "../src/parse/syntax_lexer.re"
	{
        tok = cur - 1;
        RET_FAIL(error_at_tok("syntax error in string literal"));
    }
#line 408 "src/parse/syntax_lexer.cc"
yy33:
	++cur;
#line 91 "../src/parse/syntax_lexer.re"
	{ tmp_str += static_cast<char>(cur[-1]); goto str; }
#line 413 "src/parse/syntax_lexer.cc"
yy34:
	++cur;
#line 92 "../src/parse/syntax_lexer.re"
	{
        yylval->str = copystr(tmp_str, alc);
        tmp_str.clear();
        RET_TOK(STX_STRING);
    }
#line 422 "src/parse/syntax_lexer.cc"
yy35:
	yych = *(mar = ++cur);
	if (yych <= 'm') {
		if (yych <= '`') {
			if (yych <= '"') {
				if (yych <= '!') goto yy32;
			} else {
				if (yych == '\\') goto yy36;
				goto yy32;
			}
		} else {
			if (yych <= 'b') {
				if (yych <= 'a') goto yy37;
				goto yy38;
			} else {
				if (yych == 'f') goto yy39;
				goto yy32;
			}
		}
	} else {
		if (yych <= 't') {
			if (yych <= 'q') {
				if (yych <= 'n') goto yy40;
				goto yy32;
			} else {
				if (yych <= 'r') goto yy41;
				if (yych <= 's') goto yy32;
				goto yy42;
			}
		} else {
			if (yych <= 'v') {
				if (yych <= 'u') goto yy32;
				goto yy43;
			} else {
				if (yych == 'x') goto yy44;
				goto yy32;
			}
		}
	}
	++cur;
#line 82 "../src/parse/syntax_lexer.re"
	{ tmp_str += '"'; goto str; }
#line 465 "src/parse/syntax_lexer.cc"
yy36:
	++cur;
#line 81 "../src/parse/syntax_lexer.re"
	{ tmp_str += '\\'; goto str; }
#line 470 "src/parse/syntax_lexer.cc"
yy37:
	++cur;
#line 83 "../src/parse/syntax_lexer.re"
	{ tmp_str += '\a'; goto str; }
#line 475 "src/parse/syntax_lexer.cc"
yy38:
	++cur;
#line 84 "../src/parse/syntax_lexer.re"
	{ tmp_str += '\b'; goto str; }
#line 480 "src/parse/syntax_lexer.cc"
yy39:
	++cur;
#line 85 "../src/parse/syntax_lexer.re"
	{ tmp_str += '\f'; goto str; }
#line 485 "src/parse/syntax_lexer.cc"
yy40:
	++cur;
#line 86 "../src/parse/syntax_lexer.re"
	{ tmp_str += '\n'; goto str; }
#line 490 "src/parse/syntax_lexer.cc"
yy41:
	++cur;
#line 87 "../src/parse/syntax_lexer.re"
	{ tmp_str += '\r'; goto str; }
#line 495 "src/parse/syntax_lexer.cc"
yy42:
	++cur;
#line 88 "../src/parse/syntax_lexer.re"
	{ tmp_str += '\t'; goto str; }
#line 500 "src/parse/syntax_lexer.cc"
yy43:
	++cur;
#line 89 "../src/parse/syntax_lexer.re"
	{ tmp_str += '\v'; goto str; }
#line 505 "src/parse/syntax_lexer.cc"
yy44:
	yych = *++cur;
	if (yych <= '/') goto yy45;
	if (yych <= '9') goto yy46;
yy45:
	cur = mar;
	goto yy32;
yy46:
	yych = *++cur;
	if (yych <= '/') goto yy45;
	if (yych >= ':') goto yy45;
	++cur;
#line 90 "../src/parse/syntax_lexer.re"
	{ tmp_str += static_cast<char>(unesc_hex(cur - 4, cur)); goto str; }
#line 520 "src/parse/syntax_lexer.cc"
}
#line 101 "../src/parse/syntax_lexer.re"


opt:
    tok = cur;

#line 528 "src/parse/syntax_lexer.cc"
{
	uint8_t yych;
	if ((lim - cur) < 30) YYFILL(30);
	yych = *cur;
	switch (yych) {
		case 'a': goto yy50;
		case 'c': goto yy51;
		case 'd': goto yy52;
		case 'h': goto yy53;
		case 'l': goto yy54;
		case 'm': goto yy55;
		case 's': goto yy56;
		case 'u': goto yy57;
		case 'v': goto yy58;
		default: goto yy48;
	}
yy48:
	++cur;
yy49:
#line 137 "../src/parse/syntax_lexer.re"
	{ RET_FAIL(error_at_cur("unknown option")); }
#line 550 "src/parse/syntax_lexer.cc"
yy50:
	yych = *(mar = ++cur);
	if (yych == 'p') goto yy59;
	goto yy49;
yy51:
	yych = *(mar = ++cur);
	if (yych == 'a') goto yy61;
	if (yych == 'o') goto yy62;
	goto yy49;
yy52:
	yych = *(mar = ++cur);
	if (yych == 'a') goto yy63;
	goto yy49;
yy53:
	yych = *(mar = ++cur);
	if (yych == 'a') goto yy64;
	goto yy49;
yy54:
	yych = *(mar = ++cur);
	if (yych == 'o') goto yy65;
	goto yy49;
yy55:
	yych = *(mar = ++cur);
	if (yych == 'u') goto yy66;
	goto yy49;
yy56:
	yych = *(mar = ++cur);
	if (yych == 't') goto yy67;
	goto yy49;
yy57:
	yych = *(mar = ++cur);
	if (yych == 'n') goto yy68;
	goto yy49;
yy58:
	yych = *(mar = ++cur);
	if (yych == 'e') goto yy69;
	goto yy49;
yy59:
	yych = *++cur;
	if (yych == 'i') goto yy70;
yy60:
	cur = mar;
	goto yy49;
yy61:
	yych = *++cur;
	if (yych == 's') goto yy71;
	goto yy60;
yy62:
	yych = *++cur;
	if (yych == 'd') goto yy72;
	goto yy60;
yy63:
	yych = *++cur;
	if (yych == 't') goto yy73;
	goto yy60;
yy64:
	yych = *++cur;
	if (yych == 'v') goto yy74;
	goto yy60;
yy65:
	yych = *++cur;
	if (yych == 'o') goto yy75;
	goto yy60;
yy66:
	yych = *++cur;
	if (yych == 'l') goto yy76;
	goto yy60;
yy67:
	yych = *++cur;
	if (yych == 'a') goto yy77;
	if (yych == 'o') goto yy78;
	goto yy60;
yy68:
	yych = *++cur;
	if (yych == 's') goto yy79;
	goto yy60;
yy69:
	yych = *++cur;
	if (yych == 'r') goto yy80;
	goto yy60;
yy70:
	yych = *++cur;
	if (yych == '.') goto yy81;
	if (yych == '_') goto yy82;
	goto yy60;
yy71:
	yych = *++cur;
	if (yych == 'e') goto yy83;
	goto yy60;
yy72:
	yych = *++cur;
	if (yych == 'e') goto yy84;
	goto yy60;
yy73:
	yych = *++cur;
	if (yych == 'e') goto yy85;
	goto yy60;
yy74:
	yych = *++cur;
	if (yych == 'e') goto yy86;
	goto yy60;
yy75:
	yych = *++cur;
	if (yych == 'p') goto yy87;
	goto yy60;
yy76:
	yych = *++cur;
	if (yych == 't') goto yy88;
	goto yy60;
yy77:
	yych = *++cur;
	if (yych == 'r') goto yy89;
	goto yy60;
yy78:
	yych = *++cur;
	if (yych == 'r') goto yy90;
	goto yy60;
yy79:
	yych = *++cur;
	if (yych == 'a') goto yy91;
	goto yy60;
yy80:
	yych = *++cur;
	if (yych == 's') goto yy92;
	goto yy60;
yy81:
	yych = *++cur;
	if (yych == 'g') goto yy93;
	if (yych == 'p') goto yy94;
	goto yy60;
yy82:
	yych = *++cur;
	if (yych == 's') goto yy95;
	goto yy60;
yy83:
	yych = *++cur;
	if (yych == '_') goto yy96;
	goto yy60;
yy84:
	yych = *++cur;
	if (yych == '_') goto yy97;
	goto yy60;
yy85:
	++cur;
#line 123 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::DATE); }
#line 697 "src/parse/syntax_lexer.cc"
yy86:
	yych = *++cur;
	if (yych == '_') goto yy98;
	goto yy60;
yy87:
	yych = *++cur;
	if (yych == '_') goto yy99;
	goto yy60;
yy88:
	yych = *++cur;
	if (yych == 'i') goto yy100;
	goto yy60;
yy89:
	yych = *++cur;
	if (yych == 't') goto yy101;
	goto yy60;
yy90:
	yych = *++cur;
	if (yych == 'a') goto yy102;
	goto yy60;
yy91:
	yych = *++cur;
	if (yych == 'f') goto yy103;
	goto yy60;
yy92:
	yych = *++cur;
	if (yych == 'i') goto yy104;
	goto yy60;
yy93:
	yych = *++cur;
	if (yych == 'e') goto yy105;
	goto yy60;
yy94:
	yych = *++cur;
	if (yych == 'o') goto yy106;
	goto yy60;
yy95:
	yych = *++cur;
	if (yych == 't') goto yy107;
	goto yy60;
yy96:
	yych = *++cur;
	if (yych == 'r') goto yy108;
	goto yy60;
yy97:
	yych = *++cur;
	if (yych == 'm') goto yy109;
	goto yy60;
yy98:
	yych = *++cur;
	switch (yych) {
		case 'a': goto yy110;
		case 'c': goto yy111;
		case 'i': goto yy112;
		case 't': goto yy113;
		default: goto yy60;
	}
yy99:
	yych = *++cur;
	if (yych == 'l') goto yy114;
	goto yy60;
yy100:
	yych = *++cur;
	if (yych == 'v') goto yy115;
	goto yy60;
yy101:
	yych = *++cur;
	if (yych == '_') goto yy116;
	goto yy60;
yy102:
	yych = *++cur;
	if (yych == 'b') goto yy117;
	goto yy60;
yy103:
	yych = *++cur;
	if (yych == 'e') goto yy118;
	goto yy60;
yy104:
	yych = *++cur;
	if (yych == 'o') goto yy119;
	goto yy60;
yy105:
	yych = *++cur;
	if (yych == 'n') goto yy120;
	goto yy60;
yy106:
	yych = *++cur;
	if (yych == 'i') goto yy121;
	goto yy60;
yy107:
	yych = *++cur;
	if (yych == 'y') goto yy122;
	goto yy60;
yy108:
	yych = *++cur;
	if (yych == 'a') goto yy123;
	goto yy60;
yy109:
	yych = *++cur;
	if (yych == 'o') goto yy124;
	goto yy60;
yy110:
	yych = *++cur;
	if (yych == 'r') goto yy125;
	goto yy60;
yy111:
	yych = *++cur;
	if (yych == 'o') goto yy126;
	goto yy60;
yy112:
	yych = *++cur;
	if (yych == 'n') goto yy127;
	goto yy60;
yy113:
	yych = *++cur;
	if (yych == 'y') goto yy128;
	goto yy60;
yy114:
	yych = *++cur;
	if (yych == 'a') goto yy129;
	goto yy60;
yy115:
	yych = *++cur;
	if (yych == 'a') goto yy130;
	goto yy60;
yy116:
	yych = *++cur;
	if (yych == 'c') goto yy131;
	goto yy60;
yy117:
	yych = *++cur;
	if (yych == 'l') goto yy132;
	goto yy60;
yy118:
	++cur;
#line 126 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::UNSAFE); }
#line 835 "src/parse/syntax_lexer.cc"
yy119:
	yych = *++cur;
	if (yych == 'n') goto yy133;
	goto yy60;
yy120:
	yych = *++cur;
	if (yych == 'e') goto yy134;
	goto yy60;
yy121:
	yych = *++cur;
	if (yych == 'n') goto yy135;
	goto yy60;
yy122:
	yych = *++cur;
	if (yych == 'l') goto yy136;
	goto yy60;
yy123:
	yych = *++cur;
	if (yych == 'n') goto yy137;
	goto yy60;
yy124:
	yych = *++cur;
	if (yych == 'd') goto yy138;
	goto yy60;
yy125:
	yych = *++cur;
	if (yych == 'g') goto yy139;
	goto yy60;
yy126:
	yych = *++cur;
	if (yych == 'n') goto yy140;
	goto yy60;
yy127:
	yych = *++cur;
	if (yych == 'i') goto yy141;
	goto yy60;
yy128:
	yych = *++cur;
	if (yych == 'p') goto yy142;
	goto yy60;
yy129:
	yych = *++cur;
	if (yych == 'b') goto yy143;
	goto yy60;
yy130:
	yych = *++cur;
	if (yych == 'l') goto yy144;
	goto yy60;
yy131:
	yych = *++cur;
	if (yych == 'o') goto yy145;
	goto yy60;
yy132:
	yych = *++cur;
	if (yych == 'e') goto yy146;
	goto yy60;
yy133:
	++cur;
#line 124 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::VER); }
#line 896 "src/parse/syntax_lexer.cc"
yy134:
	yych = *++cur;
	if (yych == 'r') goto yy147;
	goto yy60;
yy135:
	yych = *++cur;
	if (yych == 't') goto yy148;
	goto yy60;
yy136:
	yych = *++cur;
	if (yych == 'e') goto yy149;
	goto yy60;
yy137:
	yych = *++cur;
	if (yych == 'g') goto yy150;
	goto yy60;
yy138:
	yych = *++cur;
	if (yych == 'e') goto yy151;
	goto yy60;
yy139:
	yych = *++cur;
	if (yych == 's') goto yy152;
	goto yy60;
yy140:
	yych = *++cur;
	if (yych == 'd') goto yy153;
	goto yy60;
yy141:
	yych = *++cur;
	if (yych == 't') goto yy154;
	goto yy60;
yy142:
	yych = *++cur;
	if (yych == 'e') goto yy155;
	goto yy60;
yy143:
	yych = *++cur;
	if (yych == 'e') goto yy156;
	goto yy60;
yy144:
	++cur;
#line 135 "../src/parse/syntax_lexer.re"
	{ RET_LOPT(StxLOpt::MULTIVAL); }
#line 941 "src/parse/syntax_lexer.cc"
yy145:
	yych = *++cur;
	if (yych == 'n') goto yy157;
	goto yy60;
yy146:
	yych = *++cur;
	if (yych == '_') goto yy158;
	goto yy60;
yy147:
	yych = *++cur;
	if (yych == 'i') goto yy159;
	goto yy60;
yy148:
	yych = *++cur;
	if (yych == 'e') goto yy160;
	goto yy60;
yy149:
	yych = *++cur;
	if (yych == '.') goto yy161;
	goto yy60;
yy150:
	yych = *++cur;
	if (yych == 'e') goto yy162;
	goto yy60;
yy151:
	yych = *++cur;
	if (yych == 'l') goto yy163;
	goto yy60;
yy152:
	++cur;
#line 134 "../src/parse/syntax_lexer.re"
	{ RET_LOPT(StxLOpt::HAVE_ARGS); }
#line 974 "src/parse/syntax_lexer.cc"
yy153:
	++cur;
#line 132 "../src/parse/syntax_lexer.re"
	{ RET_LOPT(StxLOpt::HAVE_COND); }
#line 979 "src/parse/syntax_lexer.cc"
yy154:
	++cur;
#line 131 "../src/parse/syntax_lexer.re"
	{ RET_LOPT(StxLOpt::HAVE_INIT); }
#line 984 "src/parse/syntax_lexer.cc"
yy155:
	++cur;
#line 133 "../src/parse/syntax_lexer.re"
	{ RET_LOPT(StxLOpt::HAVE_TYPE); }
#line 989 "src/parse/syntax_lexer.cc"
yy156:
	yych = *++cur;
	if (yych == 'l') goto yy164;
	goto yy60;
yy157:
	yych = *++cur;
	if (yych == 'd') goto yy165;
	goto yy60;
yy158:
	yych = *++cur;
	if (yych == 's') goto yy166;
	goto yy60;
yy159:
	yych = *++cur;
	if (yych == 'c') goto yy167;
	goto yy60;
yy160:
	yych = *++cur;
	if (yych == 'r') goto yy168;
	goto yy60;
yy161:
	yych = *++cur;
	if (yych == 'f') goto yy169;
	goto yy60;
yy162:
	yych = *++cur;
	if (yych == 's') goto yy170;
	goto yy60;
yy163:
	yych = *++cur;
	if (yych == '.') goto yy171;
	goto yy60;
yy164:
	++cur;
#line 127 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::LOOP_LABEL); }
#line 1026 "src/parse/syntax_lexer.cc"
yy165:
	yych = *++cur;
	if (yych == 'i') goto yy172;
	goto yy60;
yy166:
	yych = *++cur;
	if (yych == 't') goto yy173;
	goto yy60;
yy167:
	++cur;
#line 115 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::API_CUSTOM); }
#line 1039 "src/parse/syntax_lexer.cc"
yy168:
	yych = *++cur;
	if (yych == 's') goto yy174;
	goto yy60;
yy169:
	yych = *++cur;
	if (yych == 'r') goto yy175;
	if (yych == 'u') goto yy176;
	goto yy60;
yy170:
	++cur;
#line 125 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::CASE_RANGES); }
#line 1053 "src/parse/syntax_lexer.cc"
yy171:
	yych = *++cur;
	if (yych <= 'k') {
		if (yych == 'g') goto yy177;
		goto yy60;
	} else {
		if (yych <= 'l') goto yy178;
		if (yych == 'r') goto yy179;
		goto yy60;
	}
yy172:
	yych = *++cur;
	if (yych == 't') goto yy180;
	goto yy60;
yy173:
	yych = *++cur;
	if (yych == 'a') goto yy181;
	goto yy60;
yy174:
	++cur;
#line 114 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::API_DEFAULT); }
#line 1076 "src/parse/syntax_lexer.cc"
yy175:
	yych = *++cur;
	if (yych == 'e') goto yy182;
	goto yy60;
yy176:
	yych = *++cur;
	if (yych == 'n') goto yy183;
	goto yy60;
yy177:
	yych = *++cur;
	if (yych == 'o') goto yy184;
	goto yy60;
yy178:
	yych = *++cur;
	if (yych == 'o') goto yy185;
	goto yy60;
yy179:
	yych = *++cur;
	if (yych == 'e') goto yy186;
	goto yy60;
yy180:
	yych = *++cur;
	if (yych == 'i') goto yy187;
	goto yy60;
yy181:
	yych = *++cur;
	if (yych == 't') goto yy188;
	goto yy60;
yy182:
	yych = *++cur;
	if (yych == 'e') goto yy189;
	goto yy60;
yy183:
	yych = *++cur;
	if (yych == 'c') goto yy190;
	goto yy60;
yy184:
	yych = *++cur;
	if (yych == 't') goto yy191;
	goto yy60;
yy185:
	yych = *++cur;
	if (yych == 'o') goto yy192;
	goto yy60;
yy186:
	yych = *++cur;
	if (yych == 'c') goto yy193;
	goto yy60;
yy187:
	yych = *++cur;
	if (yych == 'o') goto yy194;
	goto yy60;
yy188:
	yych = *++cur;
	if (yych == 'e') goto yy195;
	goto yy60;
yy189:
	yych = *++cur;
	if (yych == 'f') goto yy196;
	goto yy60;
yy190:
	yych = *++cur;
	if (yych == 't') goto yy197;
	goto yy60;
yy191:
	yych = *++cur;
	if (yych == 'o') goto yy198;
	goto yy60;
yy192:
	yych = *++cur;
	if (yych == 'p') goto yy199;
	goto yy60;
yy193:
	yych = *++cur;
	if (yych == 'u') goto yy200;
	goto yy60;
yy194:
	yych = *++cur;
	if (yych == 'n') goto yy201;
	goto yy60;
yy195:
	++cur;
#line 122 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::STORABLE_STATE); }
#line 1161 "src/parse/syntax_lexer.cc"
yy196:
	yych = *++cur;
	if (yych == 'o') goto yy202;
	goto yy60;
yy197:
	yych = *++cur;
	if (yych == 'i') goto yy203;
	goto yy60;
yy198:
	yych = *++cur;
	if (yych == '_') goto yy204;
	goto yy60;
yy199:
	yych = *++cur;
	if (yych == '_') goto yy205;
	goto yy60;
yy200:
	yych = *++cur;
	if (yych == 'r') goto yy206;
	goto yy60;
yy201:
	yych = *++cur;
	if (yych == 's') goto yy207;
	goto yy60;
yy202:
	yych = *++cur;
	if (yych == 'r') goto yy208;
	goto yy60;
yy203:
	yych = *++cur;
	if (yych == 'o') goto yy209;
	goto yy60;
yy204:
	yych = *++cur;
	if (yych == 'l') goto yy210;
	goto yy60;
yy205:
	yych = *++cur;
	if (yych == 's') goto yy211;
	goto yy60;
yy206:
	yych = *++cur;
	if (yych == 's') goto yy212;
	goto yy60;
yy207:
	++cur;
#line 121 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::START_CONDITIONS); }
#line 1210 "src/parse/syntax_lexer.cc"
yy208:
	yych = *++cur;
	if (yych == 'm') goto yy213;
	goto yy60;
yy209:
	yych = *++cur;
	if (yych == 'n') goto yy214;
	goto yy60;
yy210:
	yych = *++cur;
	if (yych == 'a') goto yy215;
	goto yy60;
yy211:
	yych = *++cur;
	if (yych == 'w') goto yy216;
	goto yy60;
yy212:
	yych = *++cur;
	if (yych == 'i') goto yy217;
	goto yy60;
yy213:
	++cur;
#line 117 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::API_STYLE_FREEFORM); }
#line 1235 "src/parse/syntax_lexer.cc"
yy214:
	yych = *++cur;
	if (yych == 's') goto yy218;
	goto yy60;
yy215:
	yych = *++cur;
	if (yych == 'b') goto yy219;
	goto yy60;
yy216:
	yych = *++cur;
	if (yych == 'i') goto yy220;
	goto yy60;
yy217:
	yych = *++cur;
	if (yych == 'v') goto yy221;
	goto yy60;
yy218:
	++cur;
#line 116 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::API_STYLE_FUNCTIONS); }
#line 1256 "src/parse/syntax_lexer.cc"
yy219:
	yych = *++cur;
	if (yych == 'e') goto yy222;
	goto yy60;
yy220:
	yych = *++cur;
	if (yych == 't') goto yy223;
	goto yy60;
yy221:
	yych = *++cur;
	if (yych == 'e') goto yy224;
	goto yy60;
yy222:
	yych = *++cur;
	if (yych == 'l') goto yy225;
	goto yy60;
yy223:
	yych = *++cur;
	if (yych == 'c') goto yy226;
	goto yy60;
yy224:
	yych = *++cur;
	if (yych == '_') goto yy227;
	goto yy60;
yy225:
	++cur;
#line 118 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::CODE_MODEL_GOTO_LABEL); }
#line 1285 "src/parse/syntax_lexer.cc"
yy226:
	yych = *++cur;
	if (yych == 'h') goto yy228;
	goto yy60;
yy227:
	yych = *++cur;
	if (yych == 'f') goto yy229;
	goto yy60;
yy228:
	++cur;
#line 119 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::CODE_MODEL_LOOP_SWITCH); }
#line 1298 "src/parse/syntax_lexer.cc"
yy229:
	yych = *++cur;
	if (yych != 'u') goto yy60;
	yych = *++cur;
	if (yych != 'n') goto yy60;
	yych = *++cur;
	if (yych != 'c') goto yy60;
	yych = *++cur;
	if (yych != 't') goto yy60;
	yych = *++cur;
	if (yych != 'i') goto yy60;
	yych = *++cur;
	if (yych != 'o') goto yy60;
	yych = *++cur;
	if (yych != 'n') goto yy60;
	yych = *++cur;
	if (yych != 's') goto yy60;
	++cur;
#line 120 "../src/parse/syntax_lexer.re"
	{ RET_GOPT(StxGOpt::CODE_MODEL_REC_FUNC); }
#line 1319 "src/parse/syntax_lexer.cc"
}
#line 138 "../src/parse/syntax_lexer.re"


    UNREACHABLE();
    return Ret::FAIL; // unreachable
}

#undef RET_TOK
#undef RET_GOPT
#undef RET_LOPT

} // namespace re2c
/* Generated by re2c */
// re2c $INPUT -o $OUTPUT --case-ranges -i

int lex(const char *YYCURSOR) {       // C/C++ code

{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 'A' ... 'Z':
		case 'a' ... 'z': goto yy4;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
	{ return 1; }
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0' ... '9':
		case 'A' ... 'Z':
		case 'a' ... 'z': goto yy4;
		default: goto yy6;
	}
yy6:
	{ return 0; }
}

}                                     //
                                      //
int main() {                          // C/C++ code
    return lex("qwerty42");           //
}                                     //

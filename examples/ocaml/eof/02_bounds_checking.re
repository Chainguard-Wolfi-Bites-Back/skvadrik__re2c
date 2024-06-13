(* re2ocaml $INPUT -o $OUTPUT *)

open String

exception Fill

type state = {
    str: string;
    mutable cur: int;
    lim: int;
}

/*!max:re2c*/
/*!re2c
    re2c:define:YYFN = ["lex;int", "yyrecord;state", "count;int"];
    re2c:define:YYFILL = "raise Fill;";

    str = ['] ([^'\\] | [\\][^])* ['];

    [\x00] {
        (* check that it is the sentinel, not some unexpected null *)
        if yyrecord.cur = String.length yyrecord.str - yymaxfill + 1 then count else -1
    }
    str  { lex yyrecord (count + 1) }
    [ ]+ { lex yyrecord count }
    *    { -1 }
*/

let test(str, count) =
    let buf = String.cat str (String.make yymaxfill '\x00') in
    let st = {str = buf; cur = 0; lim = String.length buf} in
    let result = try lex st 0 with Fill -> -1 in
    if not (result = count) then raise (Failure "error")

let main () =
    test("", 0);
    test("'unterminated\\'", -1);
    test("'qu\x00tes' 'are' 'fine: \\'' ", 3);
    test("'unexpected \x00 null", -1)

let _ = main ()

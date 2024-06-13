(* Generated by re2c *)
#1 "ocaml/eof/02_bounds_checking.re"
(* re2ocaml $INPUT -o $OUTPUT *)

open String

exception Fill

type state = {
    str: string;
    mutable cur: int;
    lim: int;
}

#16 "ocaml/eof/02_bounds_checking.ml"
let yymaxfill = 1
#13 "ocaml/eof/02_bounds_checking.re"


#21 "ocaml/eof/02_bounds_checking.ml"
let rec yy0 (yyrecord : state) (count : int) : int =
	if (yyrecord.lim <= yyrecord.cur) then raise Fill;
	let yych = get yyrecord.str yyrecord.cur in
	yyrecord.cur <- yyrecord.cur + 1;
	match yych with
		| '\x00' -> (yy1 [@tailcall]) yyrecord count
		| ' ' -> (yy3 [@tailcall]) yyrecord count
		| '\'' -> (yy5 [@tailcall]) yyrecord count
		| _ -> (yy2 [@tailcall]) yyrecord count

and yy1 (yyrecord : state) (count : int) : int =
#20 "ocaml/eof/02_bounds_checking.re"
	
        (* check that it is the sentinel, not some unexpected null *)
        if yyrecord.cur = String.length yyrecord.str - yymaxfill + 1 then count else -1

#38 "ocaml/eof/02_bounds_checking.ml"

and yy2 (yyrecord : state) (count : int) : int =
#26 "ocaml/eof/02_bounds_checking.re"
	-1
#43 "ocaml/eof/02_bounds_checking.ml"

and yy3 (yyrecord : state) (count : int) : int =
	if (yyrecord.lim <= yyrecord.cur) then raise Fill;
	let yych = get yyrecord.str yyrecord.cur in
	match yych with
		| ' ' ->
			yyrecord.cur <- yyrecord.cur + 1;
			(yy3 [@tailcall]) yyrecord count
		| _ -> (yy4 [@tailcall]) yyrecord count

and yy4 (yyrecord : state) (count : int) : int =
#25 "ocaml/eof/02_bounds_checking.re"
	lex yyrecord count
#57 "ocaml/eof/02_bounds_checking.ml"

and yy5 (yyrecord : state) (count : int) : int =
	if (yyrecord.lim <= yyrecord.cur) then raise Fill;
	let yych = get yyrecord.str yyrecord.cur in
	yyrecord.cur <- yyrecord.cur + 1;
	match yych with
		| '\'' -> (yy6 [@tailcall]) yyrecord count
		| '\\' -> (yy7 [@tailcall]) yyrecord count
		| _ -> (yy5 [@tailcall]) yyrecord count

and yy6 (yyrecord : state) (count : int) : int =
#24 "ocaml/eof/02_bounds_checking.re"
	lex yyrecord (count + 1)
#71 "ocaml/eof/02_bounds_checking.ml"

and yy7 (yyrecord : state) (count : int) : int =
	if (yyrecord.lim <= yyrecord.cur) then raise Fill;
	yyrecord.cur <- yyrecord.cur + 1;
	(yy5 [@tailcall]) yyrecord count

and lex (yyrecord : state) (count : int) : int =
	(yy0 [@tailcall]) yyrecord count

#27 "ocaml/eof/02_bounds_checking.re"


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

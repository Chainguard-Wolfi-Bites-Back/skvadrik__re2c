(* Generated by re2c *)
#1 "ocaml/fill/01_fill.re"
(* re2ocaml $INPUT -o $OUTPUT *)

open Bytes

let bufsize = 4096

type state = {
    file: in_channel;
    str: bytes;
    mutable cur: int;
    mutable mar: int;
    mutable tok: int;
    mutable lim: int;
    mutable eof: bool;
}

type status = Ok | Eof | LongLexeme

let fill(st: state) : status =
    if st.eof then Eof else

    (* Error: lexeme too long. In real life could reallocate a larger buffer. *)
    if st.tok < 1 then LongLexeme else (

    (* Shift buffer contents (discard everything up to the current token). *)
    blit st.str st.tok st.str 0 (st.lim - st.tok);
    st.cur <- st.cur - st.tok;
    st.mar <- st.mar - st.tok;
    st.lim <- st.lim - st.tok;
    st.tok <- 0;

    (* Fill free space at the end of buffer with new data from file. *)
    let n = input st.file st.str st.lim (bufsize - st.lim - 1) in (* -1 for sentinel *)
    st.lim <- st.lim + n;
    if n = 0 then
        st.eof <- true; (* end of file *)
        set st.str st.lim '\x00'; (* append sentinel *)

    Ok)


#45 "ocaml/fill/01_fill.ml"
let rec yy0 (yyrecord : state) (count : int) : int =
	let yych = get yyrecord.str yyrecord.cur in
	match yych with
		| ' ' ->
			yyrecord.cur <- yyrecord.cur + 1;
			(yy3 [@tailcall]) yyrecord count
		| '\'' ->
			yyrecord.cur <- yyrecord.cur + 1;
			(yy5 [@tailcall]) yyrecord count
		| _ ->
			if (yyrecord.lim <= yyrecord.cur) then (
				if (fill yyrecord = Ok) then (yy0 [@tailcall]) yyrecord count
				else (yy10 [@tailcall]) yyrecord count
			) else (
				yyrecord.cur <- yyrecord.cur + 1;
				(yy1 [@tailcall]) yyrecord count
			)

and yy1 (yyrecord : state) (count : int) : int =
	(yy2 [@tailcall]) yyrecord count

and yy2 (yyrecord : state) (count : int) : int =
#49 "ocaml/fill/01_fill.re"
	-1
#70 "ocaml/fill/01_fill.ml"

and yy3 (yyrecord : state) (count : int) : int =
	let yych = get yyrecord.str yyrecord.cur in
	match yych with
		| ' ' ->
			yyrecord.cur <- yyrecord.cur + 1;
			(yy3 [@tailcall]) yyrecord count
		| _ ->
			if (yyrecord.lim <= yyrecord.cur) then (
				if (fill yyrecord = Ok) then (yy3 [@tailcall]) yyrecord count
				else (yy4 [@tailcall]) yyrecord count
			) else (
				(yy4 [@tailcall]) yyrecord count
			)

and yy4 (yyrecord : state) (count : int) : int =
#52 "ocaml/fill/01_fill.re"
	lex_loop yyrecord count
#89 "ocaml/fill/01_fill.ml"

and yy5 (yyrecord : state) (count : int) : int =
	yyrecord.mar <- yyrecord.cur;
	let yych = get yyrecord.str yyrecord.cur in
	if (yych <= '\x00') then (
		if (yyrecord.lim <= yyrecord.cur) then (
			if (fill yyrecord = Ok) then (yy5 [@tailcall]) yyrecord count
			else (yy2 [@tailcall]) yyrecord count
		) else (
			yyrecord.cur <- yyrecord.cur + 1;
			(yy6 [@tailcall]) yyrecord count
		)
	) else (
		(yy7 [@tailcall]) yyrecord count yych
	)

and yy6 (yyrecord : state) (count : int) : int =
	let yych = get yyrecord.str yyrecord.cur in
	(yy7 [@tailcall]) yyrecord count yych

and yy7 (yyrecord : state) (count : int) (yych : char) : int =
	match yych with
		| '\'' ->
			yyrecord.cur <- yyrecord.cur + 1;
			(yy8 [@tailcall]) yyrecord count
		| '\\' ->
			yyrecord.cur <- yyrecord.cur + 1;
			(yy9 [@tailcall]) yyrecord count
		| _ ->
			if (yyrecord.lim <= yyrecord.cur) then (
				if (fill yyrecord = Ok) then (yy6 [@tailcall]) yyrecord count
				else (yy11 [@tailcall]) yyrecord count
			) else (
				yyrecord.cur <- yyrecord.cur + 1;
				(yy6 [@tailcall]) yyrecord count
			)

and yy8 (yyrecord : state) (count : int) : int =
#51 "ocaml/fill/01_fill.re"
	lex_loop yyrecord (count + 1)
#130 "ocaml/fill/01_fill.ml"

and yy9 (yyrecord : state) (count : int) : int =
	let yych = get yyrecord.str yyrecord.cur in
	if (yych <= '\x00') then (
		if (yyrecord.lim <= yyrecord.cur) then (
			if (fill yyrecord = Ok) then (yy9 [@tailcall]) yyrecord count
			else (yy11 [@tailcall]) yyrecord count
		) else (
			yyrecord.cur <- yyrecord.cur + 1;
			(yy6 [@tailcall]) yyrecord count
		)
	) else (
		yyrecord.cur <- yyrecord.cur + 1;
		(yy6 [@tailcall]) yyrecord count
	)

and yy10 (yyrecord : state) (count : int) : int =
#50 "ocaml/fill/01_fill.re"
	count
#150 "ocaml/fill/01_fill.ml"

and yy11 (yyrecord : state) (count : int) : int =
	yyrecord.cur <- yyrecord.mar;
	(yy2 [@tailcall]) yyrecord count

and lex (yyrecord : state) (count : int) : int =
	(yy0 [@tailcall]) yyrecord count

#53 "ocaml/fill/01_fill.re"


and lex_loop st count =
    st.tok <- st.cur;
    lex st count

let main () =
    let fname = "input" in

    (* Prepare input file. *)
    Out_channel.with_open_bin fname
        (fun oc -> for i = 1 to bufsize do
            output_string oc "'qu\x00tes' 'are' 'fine: \\'' "
        done);

    (* Run lexer on the prepared file. *)
    In_channel.with_open_bin fname
        (fun ic ->
            let lim = bufsize - 1 in
            let st = {
                file = ic;
                str = create bufsize;
                cur = lim;
                mar = lim;
                tok = lim;
                lim = lim;
                eof = false;
            } in if not (lex_loop st 0 = 3 * bufsize) then
                raise (Failure "error"));

    (* Cleanup. *)
    Sys.remove fname

let _ = main ()

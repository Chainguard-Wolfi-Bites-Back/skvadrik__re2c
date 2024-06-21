#include "src/parse/conf_parser.h"
const char* DEFAULT_SYNTAX_V =
    "supported_apis = [\"generic\", \"record\"];\n"
    "supported_api_styles = [\"free-form\"];\n"
    "supported_code_models = [\"goto_label\", \"loop_switch\", \"recursive_functions\"];\n"
    "supported_targets = [\"code\", \"dot\"];\n"
    "supported_features = [\"nested_ifs\", \"bitmaps\", \"case_ranges\", \"unsafe\"];\n"
    "\n"
    "semicolons = 0;\n"
    "implicit_bool_conversion = 0;\n"
    "backtick_quoted_strings = 0;\n"
    "standalone_single_quotes = 0;\n"
    "indentation_sensitive = 0;\n"
    "wrap_blocks_in_braces = 0;\n"
    "\n"
    "conf:api = custom;\n"
    "conf:api:style = free-form;\n"
    "conf:api:sigil = \"@@\";\n"
    "conf:define:YYGETCOND:naked = 0;\n"
    "conf:define:YYSETCOND:naked = 0;\n"
    "conf:define:YYSETCOND@cond = \"@@\";\n"
    "conf:define:YYGETSTATE:naked = 0;\n"
    "conf:define:YYSETSTATE:naked = 0;\n"
    "conf:define:YYSETSTATE@state = \"@@\";\n"
    "conf:define:YYFILL@len = \"@@\";\n"
    "conf:define:YYFILL:naked = 0;\n"
    "conf:define:YYFN = [\"<undefined-function-name>;<undefined-function-type>\"];\n"
    "conf:yyfn:sep = \";\";\n"
    "conf:variable:yycond = \"yycond\";\n"
    "conf:variable:yyctable = \"yyctable\";\n"
    "conf:variable:yyaccept = \"yyaccept\";\n"
    "conf:variable:yytarget = \"yytarget\";\n"
    "conf:variable:yystate = \"yystate\";\n"
    "conf:variable:yynmatch = \"yynmatch\";\n"
    "conf:variable:yypmatch = \"yypmatch\";\n"
    "conf:variable:yyrecord = \"yyrecord\";\n"
    "conf:variable:yych = \"yych\";\n"
    "conf:variable:yych:conversion = 0;\n"
    "conf:variable:yych:literals = hex;\n"
    "conf:variable:yych:emit = (code_model.recursive_functions ? 0 : 1);\n"
    "conf:variable:yybm = \"yybm\";\n"
    "conf:variable:yybm:hex = 0;\n"
    "conf:variable:yyfill = \"\";\n"
    "conf:variable:yystable = \"\"; // deprecated\n"
    "conf:header = \"\";\n"
    "conf:eof = -1;\n"
    "conf:sentinel = -1;\n"
    "conf:yyfill:enable = 1;\n"
    "conf:yyfill:parameter = 1;\n"
    "conf:yyfill:check = 1;\n"
    "conf:tags = 0;\n"
    "conf:leftmost-captures = 0;\n"
    "conf:posix-captures = 0;\n"
    "conf:tags:prefix = \"yyt\";\n"
    "conf:invert-captures = 0;\n"
    "conf:cond:abort = 0;\n"
    "conf:cond:prefix = \"yyc_\";\n"
    "conf:cond:enumprefix = \"yyc\";\n"
    "conf:cond:divider@cond = \"@@\";\n"
    "conf:cond:goto@cond = \"@@\";\n"
    "conf:state:abort = (code_model.goto_label ? 0 : 1); // historically disabled for goto/label\n"
    "conf:state:nextlabel = 0;\n"
    "conf:bit-vectors = 0;\n"
    "conf:debug-output = 0;\n"
    "conf:computed-gotos = 0;\n"
    "conf:computed-gotos:threshold = 9;\n"
    "conf:nested-ifs = 0;\n"
    "conf:case-insensitive = 0;\n"
    "conf:case-inverted = 0;\n"
    "conf:case-ranges = 1;\n"
    "conf:unsafe = 0;\n"
    "conf:monadic = 0;\n"
    "conf:encoding:ebcdic = 0;\n"
    "conf:encoding:utf32 = 0;\n"
    "conf:encoding:ucs2 = 0;\n"
    "conf:encoding:utf16 = 0;\n"
    "conf:encoding:utf8 = 0;\n"
    "conf:encoding-policy = ignore;\n"
    "conf:empty-class = match-empty;\n"
    "conf:indent:string = \"    \";\n"
    "conf:indent:top = 0;\n"
    "conf:label:prefix = \"yy\";\n"
    "conf:label:yyfill = \"yyFillLabel\";\n"
    "conf:label:yyloop = \"yyl\";\n"
    "conf:label:yyNext = \"yyNext\";\n"
    "conf:label:start = 0;\n"
    "\n"
    "conf:define:YYBACKUP = \"yybackup\";\n"
    "conf:define:YYBACKUPCTX = \"yybackupctx\";\n"
    "conf:define:YYCONDTYPE = \"YYCONDTYPE\";\n"
    "conf:define:YYCOPYMTAG = sigil \"{lhs} = \" sigil \"{rhs}\";\n"
    "conf:define:YYCOPYSTAG = sigil \"{lhs} = \" sigil \"{rhs}\";\n"
    "conf:define:YYCTYPE = \"YYCTYPE\";\n"
    "conf:define:YYCTXMARKER = \"yyctxmarker\";\n"
    "conf:define:YYCURSOR = \"yycursor\";\n"
    "conf:define:YYDEBUG = \"yydebug\";\n"
    "conf:define:YYFILL = \"yyfill\";\n"
    "conf:define:YYGETACCEPT = sigil \"{var}\";\n"
    "conf:define:YYGETCOND = \"yygetcond\";\n"
    "conf:define:YYGETSTATE = \"yygetstate\";\n"
    "conf:define:YYLESSTHAN = \"yylessthan\";\n"
    "conf:define:YYLIMIT = \"yylimit\";\n"
    "conf:define:YYMARKER = \"yymarker\";\n"
    "conf:define:YYMAXFILL = \"yymaxfill\";\n"
    "conf:define:YYMAXNMATCH = \"yymaxnmatch\";\n"
    "conf:define:YYMTAGN = \"yymtagn\";\n"
    "conf:define:YYMTAGP = \"yymtagp\";\n"
    "conf:define:YYPEEK = \"yypeek\";\n"
    "conf:define:YYRESTORE = \"yyrestore\";\n"
    "conf:define:YYRESTORECTX = \"yyrestorectx\";\n"
    "conf:define:YYRESTORETAG = \"yyrestoretag\";\n"
    "conf:define:YYSETACCEPT = sigil \"{var} = \" sigil \"{val}\";\n"
    "conf:define:YYSETCOND = \"yysetcond\";\n"
    "conf:define:YYSETSTATE = \"yysetstate\";\n"
    "conf:define:YYSHIFT = \"yyshift\";\n"
    "conf:define:YYSHIFTSTAG = \"yyshiftstag\";\n"
    "conf:define:YYSHIFTMTAG = \"yyshiftmtag\";\n"
    "conf:define:YYSKIP = \"yyskip\";\n"
    "conf:define:YYSTAGN = \"yystagn\";\n"
    "conf:define:YYSTAGP = \"yystagp\";\n"
    "conf:tags:expression = (api.record ? record \".\") sigil;\n"
    "conf:cond:divider = \"/* *********************************** */\";\n"
    "conf:cond:goto = \"unsafe { goto \" sigil \" }\";\n"
    "\n"
    "code:var_local = topindent \"mut \" name \" := \" init nl;\n"
    "// code:var_global\n"
    "\n"
    "code:const_local = topindent \"const \" name \" = \" init nl;\n"
    "code:const_global = code:const_local;\n"
    "\n"
    "code:array_local =\n"
    "    topindent name \" := [\" nl indent\n"
    "        [row: topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem \",\"] nl]\n"
    "    dedent topindent \"]\" nl;\n"
    "// code:array_global\n"
    "code:array_elem = array \"[\" index \"]\";\n"
    "\n"
    "code:type_int = \"int\";\n"
    "code:type_uint = \"u32\";\n"
    "// code:type_cond_enum\n"
    "code:type_yybm = \"u8\";\n"
    "// code:type_yytarget\n"
    "\n"
    "code:assign = topindent lhs \" = \" rhs nl;\n"
    "\n"
    "code:if_then_else =\n"
    "    [branch{0}: topindent \"if \" cond \" {\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    [branch{1:-1}: topindent \"} else \" (have_cond? \"if \" cond \" \") \"{\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:switch =\n"
    "    topindent \"match \" expr \" {\" nl\n"
    "        indent [case: case] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:switch_cases = topindent\n"
    "    [case{0:-2}: case \", \"]\n"
    "    [case{-1}:   case \" {\"] nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:switch_cases_oneline = topindent\n"
    "    [case{0:-2}: case \", \"]\n"
    "    [case{-1}:   case \" { \"] [stmt: stmt] \" }\" nl;\n"
    "\n"
    "code:switch_case_range = [val{0}: val] (many ? \"...\" [val{-1}: val]);\n"
    "\n"
    "code:switch_case_default = \"else\";\n"
    "\n"
    "code:loop =\n"
    "    (loop_label? label \":\" nl)\n"
    "    topindent \"for {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:goto = topindent \"unsafe { goto \" label \" }\" nl;\n"
    "\n"
    "// Don't use enum in loop/switch mode, as conditions are assigned to `yystate`.\n"
    "code:enum = (code_model.loop_switch\n"
    "    ? [elem: \"const \" elem \" = \" init nl]\n"
    "    : \"enum \" name \" {\" nl\n"
    "        indent [elem: topindent elem (have_init ? \" = \" init) nl] dedent\n"
    "    \"}\" nl);\n"
    "\n"
    "code:enum_elem = (code_model.loop_switch ? \"\" : \".\") name;\n"
    "\n"
    "code:fndef =\n"
    "    topindent \"fn \" name \"(\"\n"
    "        [arg{0:-2}: argname \" \" argtype \", \"]\n"
    "        [arg{-1}:   argname \" \" argtype]\n"
    "    \")\" (have_type ? \" \" type) \" {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    \"}\" nl;\n"
    "\n"
    "code:fncall =\n"
    "    topindent (have_retval ? retval \" = \") name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \")\" nl;\n"
    "\n"
    "code:tailcall =\n"
    "    topindent (have_retval ? \"return \") name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \")\" nl;\n"
    "\n"
    "code:recursive_functions = [fn: fndef nl];\n"
    "\n"
    "code:fingerprint =\n"
    "    \"// Code generated by re2c\"\n"
    "    (have_version? \" \" version)\n"
    "    (have_date? \" on \" date)\n"
    "    \", DO NOT EDIT.\" nl;\n"
    "\n"
    "code:line_info = \"//line \\\"\" file \"\\\":\" line nl;\n"
    "\n"
    "code:abort = topindent \"panic(\\\"internal lexer error\\\")\" nl;\n"
    "\n"
    "code:yydebug =\n"
    "    topindent (api.record\n"
    "        ? debug \"(\" record \")\"\n"
    "        : debug\n"
    "    ) nl;\n"
    "\n"
    "code:yypeek =\n"
    "    topindent char (code_model.recursive_functions ? \" := \" : \" = \") (api.record\n"
    "        ? record \".str[\" record \".cur]\"\n"
    "        : peek\n"
    "    ) nl;\n"
    "\n"
    "code:yyskip =\n"
    "    topindent (api.record\n"
    "        ? record \".cur += 1\"\n"
    "        : skip\n"
    "    ) nl;\n"
    "\n"
    "code:yybackup =\n"
    "    topindent (api.record\n"
    "        ? record \".mar = \" record \".cur\"\n"
    "        : backup\n"
    "    ) nl;\n"
    "\n"
    "code:yybackupctx =\n"
    "    topindent (api.record\n"
    "        ? record \".ctx = \" record \".cur\"\n"
    "        : backupctx\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestore =\n"
    "    topindent (api.record\n"
    "        ? record \".cur = \" record \".mar\"\n"
    "        : restore\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestorectx =\n"
    "    topindent (api.record\n"
    "        ? record \".cur = \" record \".ctx\"\n"
    "        : restorectx\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestoretag =\n"
    "    topindent (api.record\n"
    "        ? record \".cur = \" tag\n"
    "        : restoretag\n"
    "    ) nl;\n"
    "\n"
    "code:yyshift =\n"
    "    topindent (api.record\n"
    "        ? record \".cur -= \" offset\n"
    "        : shift\n"
    "    ) nl;\n"
    "\n"
    "code:yyshiftstag =\n"
    "    (nested ? topindent \"if \" tag \" != \" neg \" {\" nl indent)\n"
    "        topindent (api.record\n"
    "            ? tag \"-= \" offset\n"
    "            : shiftstag\n"
    "        ) nl\n"
    "    (nested ? dedent topindent \"}\" nl);\n"
    "\n"
    "code:yyshiftmtag = topindent shiftmtag nl;\n"
    "\n"
    "code:yystagp =\n"
    "    topindent (api.record\n"
    "        ? tag \" = \" record \".cur\"\n"
    "        : stagp\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagp = topindent mtagp nl;\n"
    "\n"
    "code:yystagn =\n"
    "    topindent (api.record\n"
    "        ? tag \" = -1\"\n"
    "        : stagn\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagn = topindent mtagn nl;\n"
    "\n"
    "code:yycopystag =\n"
    "    topindent (api.record\n"
    "        ? lhs \" = \" rhs\n"
    "        : copystag\n"
    "    ) nl;\n"
    "\n"
    "code:yycopymtag =\n"
    "    topindent (api.record\n"
    "        ? lhs \" = \" rhs\n"
    "        : copymtag\n"
    "    ) nl;\n"
    "\n"
    "code:yygetaccept = (api.record ? record \".accept\" : getaccept);\n"
    "\n"
    "code:yysetaccept =\n"
    "    topindent (api.record\n"
    "        ? record \".accept = \" val\n"
    "        : setaccept\n"
    "    ) nl;\n"
    "\n"
    "code:yygetcond = (api.record ? record \".cond\" : getcond);\n"
    "\n"
    "code:yysetcond =\n"
    "    topindent (api.record\n"
    "        ? record \".cond = \" cond\n"
    "        : setcond\n"
    "    ) nl;\n"
    "\n"
    "code:yygetstate = (api.record ? record \".state\" : getstate);\n"
    "\n"
    "code:yysetstate =\n"
    "    topindent (api.record\n"
    "        ? record \".state = \" state\n"
    "        : setstate\n"
    "    ) nl;\n"
    "\n"
    "code:yylessthan =\n"
    "    (api.record\n"
    "        ? (many\n"
    "            ? \"(\" record \".lim - \" record \".cur) < \" need\n"
    "            : record \".lim <= \" record \".cur\")\n"
    "        : lessthan);\n"
    ;

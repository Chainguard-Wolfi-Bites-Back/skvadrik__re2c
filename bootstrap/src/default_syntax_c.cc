#include "src/parse/conf_parser.h"
const char* DEFAULT_SYNTAX_C =
    "supported_apis = [\"default\", \"generic\", \"record\"];\n"
    "supported_api_styles = [\"functions\", \"free-form\"];\n"
    "supported_code_models = [\"goto_label\", \"loop_switch\", \"recursive_functions\"];\n"
    "supported_targets = [\"code\", \"dot\", \"skeleton\"];\n"
    "supported_features = [\"nested_ifs\", \"bitmaps\", \"computed_gotos\", \"case_ranges\"];\n"
    "\n"
    "semicolons = 1;\n"
    "implicit_bool_conversion = 1;\n"
    "backtick_quoted_strings = 0;\n"
    "standalone_single_quotes = 0;\n"
    "indentation_sensitive = 0;\n"
    "wrap_blocks_in_braces = 1;\n"
    "\n"
    "conf:api = default;\n"
    "conf:api:style = functions;\n"
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
    "conf:variable:yych:literals = char_or_hex;\n"
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
    "conf:cond:abort = (code_model.recursive_functions ? 1 : 0); // `abort()` requires include\n"
    "conf:cond:prefix = \"yyc_\";\n"
    "conf:cond:enumprefix = \"yyc\";\n"
    "conf:cond:divider@cond = \"@@\";\n"
    "conf:cond:goto@cond = \"@@\";\n"
    "conf:state:abort = (code_model.recursive_functions ? 1 : 0); // `abort()` requires include\n"
    "conf:state:nextlabel = 0;\n"
    "conf:bit-vectors = 0;\n"
    "conf:debug-output = 0;\n"
    "conf:computed-gotos = 0;\n"
    "conf:computed-gotos:threshold = 9;\n"
    "conf:nested-ifs = 0;\n"
    "conf:case-insensitive = 0;\n"
    "conf:case-inverted = 0;\n"
    "conf:case-ranges = 0;\n"
    "conf:unsafe = 0;\n"
    "conf:monadic = 0;\n"
    "conf:encoding:ebcdic = 0;\n"
    "conf:encoding:utf32 = 0;\n"
    "conf:encoding:ucs2 = 0;\n"
    "conf:encoding:utf16 = 0;\n"
    "conf:encoding:utf8 = 0;\n"
    "conf:encoding-policy = ignore;\n"
    "conf:empty-class = match-empty;\n"
    "conf:indent:string = \"\\t\";\n"
    "conf:indent:top = 0;\n"
    "conf:label:prefix = \"yy\";\n"
    "conf:label:yyfill = \"yyFillLabel\";\n"
    "conf:label:yyloop = \"\";\n"
    "conf:label:yyNext = \"yyNext\";\n"
    "conf:label:start = 0;\n"
    "\n"
    "conf:define:YYBACKUP = \"YYBACKUP\";\n"
    "conf:define:YYBACKUPCTX = \"YYBACKUPCTX\";\n"
    "conf:define:YYCONDTYPE = \"YYCONDTYPE\";\n"
    "conf:define:YYCOPYMTAG = sigil \"{lhs} = \" sigil \"{rhs};\";\n"
    "conf:define:YYCOPYSTAG = sigil \"{lhs} = \" sigil \"{rhs};\";\n"
    "conf:define:YYCTXMARKER = (api.record ? record \"->ctx\" : \"YYCTXMARKER\");\n"
    "conf:define:YYCTYPE = \"YYCTYPE\";\n"
    "conf:define:YYCURSOR = (api.record ? record \"->cur\" : \"YYCURSOR\");\n"
    "conf:define:YYDEBUG = \"YYDEBUG\";\n"
    "conf:define:YYFILL = \"YYFILL\";\n"
    "conf:define:YYGETACCEPT = sigil \"{var}\";\n"
    "conf:define:YYGETCOND = \"YYGETCONDITION\"; // historic default\n"
    "conf:define:YYGETSTATE = \"YYGETSTATE\";\n"
    "conf:define:YYLESSTHAN = \"YYLESSTHAN\";\n"
    "conf:define:YYLIMIT = (api.record ? record \"->lim\" : \"YYLIMIT\");\n"
    "conf:define:YYMARKER = (api.record ? record \"->mar\" : \"YYMARKER\");\n"
    "conf:define:YYMAXFILL = \"YYMAXFILL\";\n"
    "conf:define:YYMAXNMATCH = \"YYMAXNMATCH\";\n"
    "conf:define:YYMTAGN = \"YYMTAGN\";\n"
    "conf:define:YYMTAGP = \"YYMTAGP\";\n"
    "conf:define:YYPEEK = \"YYPEEK\";\n"
    "conf:define:YYRESTORE = \"YYRESTORE\";\n"
    "conf:define:YYRESTORECTX = \"YYRESTORECTX\";\n"
    "conf:define:YYRESTORETAG = \"YYRESTORETAG\";\n"
    "conf:define:YYSETACCEPT = sigil \"{var} = \" sigil \"{val};\";\n"
    "conf:define:YYSETCOND = \"YYSETCONDITION\"; // historic default\n"
    "conf:define:YYSETSTATE = \"YYSETSTATE\";\n"
    "conf:define:YYSHIFT = \"YYSHIFT\";\n"
    "conf:define:YYSHIFTSTAG = \"YYSHIFTSTAG\";\n"
    "conf:define:YYSHIFTMTAG = \"YYSHIFTMTAG\";\n"
    "conf:define:YYSKIP = \"YYSKIP\";\n"
    "conf:define:YYSTAGN = \"YYSTAGN\";\n"
    "conf:define:YYSTAGP = \"YYSTAGP\";\n"
    "conf:tags:expression = (api.record ? record \"->\") sigil;\n"
    "conf:cond:divider = \"/* *********************************** */\";\n"
    "conf:cond:goto = \"goto \" sigil \";\";\n"
    "\n"
    "code:var_local = topindent type \" \" name (have_init? \" = \" init) \";\" nl;\n"
    "code:var_global = code:var_local;\n"
    "\n"
    "code:const_local = topindent type \" \" name \" = \" init \";\" nl;\n"
    "code:const_global = topindent \"#define \" name \" \" init nl;\n"
    "\n"
    "code:array_local =\n"
    "    topindent type \" \" name \"[\" size \"] = {\" nl indent\n"
    "        [row{0:-2}: topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem \",\"] nl]\n"
    "        [row{-1}:   topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem]     nl]\n"
    "    dedent topindent \"};\" nl;\n"
    "code:array_global = code:array_local;\n"
    "code:array_elem = array \"[\" index \"]\";\n"
    "\n"
    "code:type_int = \"int\";\n"
    "code:type_uint = \"unsigned int\";\n"
    "// code:type_cond_enum\n"
    "code:type_yybm = \"static const unsigned char\";\n"
    "code:type_yytarget = \"static const void*\";\n"
    "\n"
    "code:assign = topindent lhs \" = \" rhs \";\" nl;\n"
    "\n"
    "code:if_then_else =\n"
    "    [branch{0}: topindent \"if (\" cond \") {\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    [branch{1:-1}: topindent \"} else \" (have_cond? \"if (\" cond \") \") \"{\" nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:if_then_else_oneline =\n"
    "    [branch{0}:    topindent \"if (\" cond \") \" [stmt: stmt] nl]\n"
    "    [branch{1:-1}: topindent \"else \" (have_cond? \"if (\" cond \") \") [stmt: stmt] nl];\n"
    "\n"
    "code:switch =\n"
    "    topindent \"switch (\" expr \") {\" nl\n"
    "        indent [case: case] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:switch_cases =\n"
    "    [case: case nl]\n"
    "        indent [stmt: stmt] dedent;\n"
    "\n"
    "code:switch_cases_oneline =\n"
    "    [case{0:-2}: case nl]\n"
    "    [case{-1}:   case \" \" [stmt: stmt] nl];\n"
    "\n"
    "code:switch_case_range = (case_ranges\n"
    "    ? topindent \"case \" [val{0}: val] (many ? \" ... \" [val{-1}: val]) \":\"\n"
    "    : [val{0:-2}: topindent \"case \" val \":\" nl]\n"
    "      [val{-1}:   topindent \"case \" val \":\"]);\n"
    "\n"
    "code:switch_case_default =\n"
    "    topindent \"default:\";\n"
    "\n"
    "code:loop =\n"
    "    topindent \"for (;;) {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    topindent \"}\" nl;\n"
    "\n"
    "code:goto = topindent \"goto \" label \";\" nl;\n"
    "\n"
    "code:enum =\n"
    "    \"enum \" name \" {\" nl indent\n"
    "        [elem{0:-2}: topindent elem (have_init? \" = \" init) \",\" nl]\n"
    "        [elem{-1}:   topindent elem (have_init? \" = \" init) nl]\n"
    "    dedent \"};\" nl;\n"
    "\n"
    "code:enum_elem = name;\n"
    "\n"
    "code:fndecl =\n"
    "    topindent type \" \" name \"(\"\n"
    "        [arg{0:-2}: argtype \" \" argname \", \"]\n"
    "        [arg{-1}:   argtype \" \" argname]\n"
    "    \");\" nl;\n"
    "\n"
    "code:fndef =\n"
    "    topindent type \" \" name \"(\"\n"
    "        [arg{0:-2}: argtype \" \" argname \", \"]\n"
    "        [arg{-1}:   argtype \" \" argname]\n"
    "    \") {\" nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    \"}\" nl;\n"
    "\n"
    "code:fncall =\n"
    "    topindent (have_retval ? retval \" = \") name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \");\" nl;\n"
    "\n"
    "code:tailcall =\n"
    "    topindent (have_retval ? \"return \") name \"(\" [arg{0:-2}: arg \", \"] [arg{-1}: arg] \");\" nl;\n"
    "\n"
    "code:recursive_functions =\n"
    "    [fn: fndecl] nl\n"
    "    [fn: fndef nl];\n"
    "\n"
    "code:fingerprint =\n"
    "    \"/* Generated by re2c\" (have_version? \" \" version) (have_date? \" on \" date) \" */\" nl;\n"
    "\n"
    "code:line_info = \"#line \" line \" \\\"\" file \"\\\"\" nl;\n"
    "\n"
    "code:abort = topindent \"abort();\" nl;\n"
    "\n"
    "code:yydebug =\n"
    "    topindent (api.generic\n"
    "        ? debug (api_style.functions ? \"();\")\n"
    "    : (api.record\n"
    "        ? debug \"(\" record \");\"\n"
    "        : debug \"(\" state \", \" char \");\"\n"
    "    )) nl;\n"
    "\n"
    "code:yypeek =\n"
    "    topindent (code_model.recursive_functions ? ctype \" \") char \" = \" (api.generic\n"
    "        ? peek (api_style.functions ? \"()\")\n"
    "        : typecast \"*\" cursor\n"
    "    ) \";\" nl;\n"
    "\n"
    "code:yyskip =\n"
    "    topindent (api.generic\n"
    "        ? skip (api_style.functions ? \"();\")\n"
    "        : \"++\" cursor \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yybackup =\n"
    "    topindent (api.generic\n"
    "        ? backup (api_style.functions ? \"();\")\n"
    "        : marker \" = \" cursor \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yybackupctx =\n"
    "    topindent (api.generic\n"
    "        ? backupctx (api_style.functions ? \"();\")\n"
    "        : ctxmarker \" = \" cursor \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestore =\n"
    "    topindent (api.generic\n"
    "        ? restore (api_style.functions ? \"();\")\n"
    "        : cursor \" = \" marker \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestorectx =\n"
    "    topindent (api.generic\n"
    "        ? restorectx (api_style.functions ? \"();\")\n"
    "        : cursor \" = \" ctxmarker \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestoretag =\n"
    "    topindent (api.generic\n"
    "        ? restoretag (api_style.functions ? \"(\" tag \");\")\n"
    "        : cursor \" = \" tag \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyshift =\n"
    "    topindent (api.generic\n"
    "        ? shift (api_style.functions ? \"(-\" offset \");\")\n"
    "        : cursor \" -= \" offset \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyshiftstag =\n"
    "    topindent (nested ? \"if (\" tag \" != \" (api.generic ? neg : \"NULL\") \") \") (api.generic\n"
    "        ? shiftstag (api_style.functions ? \"(\" tag \", -\" offset \");\")\n"
    "        : tag \" -= \" offset \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyshiftmtag = topindent shiftmtag (api_style.functions ? \"(\" tag \", -\" offset \");\") nl;\n"
    "\n"
    "code:yystagp =\n"
    "    topindent (api.generic\n"
    "        ? stagp (api_style.functions ? \"(\" tag \");\")\n"
    "        : tag \" = \" cursor \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagp = topindent mtagp (api_style.functions ? \"(\" tag \");\") nl;\n"
    "\n"
    "code:yystagn =\n"
    "    topindent (api.generic\n"
    "        ? stagn (api_style.functions ? \"(\" tag \");\")\n"
    "        : tag \" = NULL;\"\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagn = topindent mtagn (api_style.functions ? \"(\" tag \");\") nl;\n"
    "\n"
    "code:yycopystag =\n"
    "    topindent (api.generic\n"
    "        ? copystag // function style is not supported, as there's no sensible default\n"
    "        : lhs \" = \" rhs \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yycopymtag =\n"
    "    topindent (api.generic\n"
    "        ? copymtag // function style is not supported, as there's no sensible default\n"
    "        : lhs \" = \" rhs \";\"\n"
    "    ) nl;\n"
    "\n"
    "code:yyskip_yypeek =\n"
    "    topindent (code_model.recursive_functions ? ctype \" \") char \" = \"\n"
    "        typecast \"*++\" cursor \";\" nl;\n"
    "\n"
    "code:yypeek_yyskip =\n"
    "    topindent (code_model.recursive_functions ? ctype \" \") char \" = \"\n"
    "        typecast \"*\" cursor \"++;\" nl;\n"
    "\n"
    "code:yyskip_yybackup = topindent marker \" = ++\" cursor \";\" nl;\n"
    "\n"
    "code:yybackup_yyskip = topindent marker \" = \" cursor \"++;\" nl;\n"
    "\n"
    "code:yybackup_yypeek =\n"
    "    topindent (code_model.recursive_functions ? ctype \" \") char \" = \"\n"
    "        typecast \"*(\" marker \" = \" cursor \");\" nl;\n"
    "\n"
    "code:yyskip_yybackup_yypeek =\n"
    "    topindent (code_model.recursive_functions ? ctype \" \") char \" = \"\n"
    "        typecast \"*(\" marker \" = ++\" cursor \");\" nl;\n"
    "\n"
    "code:yybackup_yypeek_yyskip =\n"
    "    topindent (code_model.recursive_functions ? ctype \" \") char \" = \"\n"
    "        typecast \"*(\" marker \" = \" cursor \"++);\" nl;\n"
    "\n"
    "code:yygetaccept =\n"
    "    (api.generic\n"
    "        ? getaccept // function style is not supported, as there's no sensible default\n"
    "    : (api.record\n"
    "        ? record \"->\" var\n"
    "        : var));\n"
    "\n"
    "code:yysetaccept =\n"
    "    topindent (api.generic\n"
    "        ? setaccept // function style is not supported, as there's no sensible default\n"
    "    : (api.record\n"
    "        ? record \"->\" var \" = \" val \";\"\n"
    "        : var \" = \" val \";\"\n"
    "    )) nl;\n"
    "\n"
    "code:yygetcond =\n"
    "    (api.record\n"
    "        ? record \"->cond\"\n"
    "        : getcond (api_style.functions ? \"()\"));\n"
    "\n"
    "code:yysetcond =\n"
    "    topindent (api.record\n"
    "        ? record \"->cond = \" cond \";\"\n"
    "        : setcond (api_style.functions ? \"(\" cond \");\")\n"
    "    ) nl;\n"
    "\n"
    "code:yygetstate =\n"
    "    (api.record\n"
    "        ? record \"->state\"\n"
    "        : getstate (api_style.functions ? \"()\"));\n"
    "\n"
    "code:yysetstate =\n"
    "    topindent (api.record\n"
    "        ? record \"->state = \" state \";\"\n"
    "        : setstate (api_style.functions ? \"(\" state \");\")\n"
    "    ) nl;\n"
    "\n"
    "code:yylessthan =\n"
    "    (api.generic\n"
    "        ? lessthan (api_style.functions ? \"(\" need \")\")\n"
    "        : (many\n"
    "            ? \"(\" limit \" - \" cursor \") < \" need\n"
    "            : limit \" <= \" cursor));\n"
    ;

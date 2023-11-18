const char* DEFAULT_SYNTAX_C =
    "api = [pointers, generic];\n"
    "api_style = [functions, freeform];\n"
    "jump_model = [goto_label, loop_switch];\n"
    "target = [code, dot, skeleton];\n"
    "\n"
    "computed_goto = optional;\n"
    "case_ranges = optional;\n"
    "constants = snake_case;\n"
    "char_literals = (encoding.ebcdic ? hexadecimal : symbolic);\n"
    "semicolons = yes;\n"
    "label_indent = zero;\n"
    "abort_requires_include = yes;\n"
    "\n"
    "code:var_defn_local = type \" \" name (have_init? \" = \" init) \";\" nl;\n"
    "code:var_defn_global = \"#define \" name \" \" init nl;\n"
    "code:array_defn = \"static const \" type \" \" name \"[] = {\" init \"};\" nl;\n"
    "\n"
    "code:type_int = \"int\";\n"
    "code:type_uint = \"unsigned int\";\n"
    "code:type_yyctype = type;\n"
    "code:type_yybm = \"unsigned char\";\n"
    "\n"
    "code:if_then_else =\n"
    "    \"if (\" then_cond \") {\" nl\n"
    "        [then_stmt: indent then_stmt nl]\n"
    "    (have_else_part? \"} else \" (have_else_cond? \"if (\" else_cond \") \") \"{\" nl\n"
    "        [else_stmt: indent else_stmt nl])\n"
    "    \"}\" nl;\n"
    "\n"
    "code:if_then_else_oneline =\n"
    "    \"if (\" then_cond \") \" then_stmt\n"
    "    (have_else_part? \" else \" (have_else_cond? \"(\" else_cond \") \") else_stmt)\n"
    "    nl;\n"
    "\n"
    "code:switch =\n"
    "    \"switch (\" expr \") {\" nl\n"
    "        [case: indent case]\n"
    "    \"}\" nl;\n"
    "\n"
    "code:switch_cases =\n"
    "    [case: case nl]\n"
    "    [stmt: indent stmt nl];\n"
    "\n"
    "code:switch_cases_oneline =\n"
    "    [case{0:-2}: case nl]\n"
    "    [case{-1}:   case stmt nl];\n"
    "\n"
    "code:switch_case_single =\n"
    "    \"case \" val \":\";\n"
    "\n"
    "code:switch_case_range =\n"
    "    \"case \" [val{0}: val] \"..\" [val{-1}: val] \":\";\n"
    "\n"
    "code:switch_case_default =\n"
    "    \"default:\";\n"
    "\n"
    "code:loop =\n"
    "    \"for (;;) {\" nl\n"
    "        [stmt: indent stmt nl]\n"
    "    \"}\" nl;\n"
    "\n"
    "code:cond_enum =\n"
    "    \"enum \" name \" {\" nl\n"
    "        [elem{0:-2}: indent elem (jump_model.loop_switch? \" = \" init) \",\" nl]\n"
    "        [elem{-1}:   indent elem (jump_model.loop_switch? \" = \" init) nl]\n"
    "    \"};\" nl;\n"
    "\n"
    "code:autogen_comment = \"/* Generated by re2c\" (version? \" \" version) (date? \" on \" date) \" */\";\n"
    "\n"
    "code:line_directive = \"#line \" line \" \\\"\" file \"\\\"\" nl;\n"
    "\n"
    "code:label = name;\n"
    "\n"
    "code:bitmap_check = table \"[\" offset \" + \" char \"] & \" mask;\n"
    "\n"
    "code:abort_expr = \"abort()\";\n"
    "\n"
    "code:yypeek_expr = (api.generic\n"
    "    ? expr (api_style.functions ? \"()\")\n"
    "    : \"*\" expr );\n"
    ;

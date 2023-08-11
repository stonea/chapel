/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0

/* Substitute the type names.  */
#define YYSTYPE         YYCHPL_STYPE
#define YYLTYPE         YYCHPL_LTYPE
/* Substitute the variable and function names.  */
#define yypush_parse    yychpl_push_parse
#define yypstate_new    yychpl_pstate_new
#define yypstate_clear  yychpl_pstate_clear
#define yypstate_delete yychpl_pstate_delete
#define yypstate        yychpl_pstate
#define yylex           yychpl_lex
#define yyerror         yychpl_error
#define yydebug         yychpl_debug
#define yynerrs         yychpl_nerrs


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison-chpl-lib.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIDENT = 3,                     /* TIDENT  */
  YYSYMBOL_TQUERIEDIDENT = 4,              /* TQUERIEDIDENT  */
  YYSYMBOL_INTLITERAL = 5,                 /* INTLITERAL  */
  YYSYMBOL_REALLITERAL = 6,                /* REALLITERAL  */
  YYSYMBOL_IMAGLITERAL = 7,                /* IMAGLITERAL  */
  YYSYMBOL_STRINGLITERAL = 8,              /* STRINGLITERAL  */
  YYSYMBOL_BYTESLITERAL = 9,               /* BYTESLITERAL  */
  YYSYMBOL_CSTRINGLITERAL = 10,            /* CSTRINGLITERAL  */
  YYSYMBOL_EXTERNCODE = 11,                /* EXTERNCODE  */
  YYSYMBOL_TALIGN = 12,                    /* TALIGN  */
  YYSYMBOL_TAS = 13,                       /* TAS  */
  YYSYMBOL_TATOMIC = 14,                   /* TATOMIC  */
  YYSYMBOL_TBEGIN = 15,                    /* TBEGIN  */
  YYSYMBOL_TBREAK = 16,                    /* TBREAK  */
  YYSYMBOL_TBOOL = 17,                     /* TBOOL  */
  YYSYMBOL_TBORROWED = 18,                 /* TBORROWED  */
  YYSYMBOL_TBY = 19,                       /* TBY  */
  YYSYMBOL_TBYTES = 20,                    /* TBYTES  */
  YYSYMBOL_TCATCH = 21,                    /* TCATCH  */
  YYSYMBOL_TCLASS = 22,                    /* TCLASS  */
  YYSYMBOL_TCOBEGIN = 23,                  /* TCOBEGIN  */
  YYSYMBOL_TCOFORALL = 24,                 /* TCOFORALL  */
  YYSYMBOL_TCOMPLEX = 25,                  /* TCOMPLEX  */
  YYSYMBOL_TCONFIG = 26,                   /* TCONFIG  */
  YYSYMBOL_TCONST = 27,                    /* TCONST  */
  YYSYMBOL_TCONTINUE = 28,                 /* TCONTINUE  */
  YYSYMBOL_TDEFER = 29,                    /* TDEFER  */
  YYSYMBOL_TDELETE = 30,                   /* TDELETE  */
  YYSYMBOL_TDMAPPED = 31,                  /* TDMAPPED  */
  YYSYMBOL_TDO = 32,                       /* TDO  */
  YYSYMBOL_TDOMAIN = 33,                   /* TDOMAIN  */
  YYSYMBOL_TELSE = 34,                     /* TELSE  */
  YYSYMBOL_TENUM = 35,                     /* TENUM  */
  YYSYMBOL_TEXCEPT = 36,                   /* TEXCEPT  */
  YYSYMBOL_TEXPORT = 37,                   /* TEXPORT  */
  YYSYMBOL_TEXTERN = 38,                   /* TEXTERN  */
  YYSYMBOL_TFALSE = 39,                    /* TFALSE  */
  YYSYMBOL_TFOR = 40,                      /* TFOR  */
  YYSYMBOL_TFORALL = 41,                   /* TFORALL  */
  YYSYMBOL_TFOREACH = 42,                  /* TFOREACH  */
  YYSYMBOL_TFORWARDING = 43,               /* TFORWARDING  */
  YYSYMBOL_TIF = 44,                       /* TIF  */
  YYSYMBOL_TIMAG = 45,                     /* TIMAG  */
  YYSYMBOL_TIMPORT = 46,                   /* TIMPORT  */
  YYSYMBOL_TIN = 47,                       /* TIN  */
  YYSYMBOL_TINCLUDE = 48,                  /* TINCLUDE  */
  YYSYMBOL_TINDEX = 49,                    /* TINDEX  */
  YYSYMBOL_TINLINE = 50,                   /* TINLINE  */
  YYSYMBOL_TINOUT = 51,                    /* TINOUT  */
  YYSYMBOL_TINT = 52,                      /* TINT  */
  YYSYMBOL_TITER = 53,                     /* TITER  */
  YYSYMBOL_TINITEQUALS = 54,               /* TINITEQUALS  */
  YYSYMBOL_TIMPLEMENTS = 55,               /* TIMPLEMENTS  */
  YYSYMBOL_TINTERFACE = 56,                /* TINTERFACE  */
  YYSYMBOL_TLABEL = 57,                    /* TLABEL  */
  YYSYMBOL_TLAMBDA = 58,                   /* TLAMBDA  */
  YYSYMBOL_TLET = 59,                      /* TLET  */
  YYSYMBOL_TLIFETIME = 60,                 /* TLIFETIME  */
  YYSYMBOL_TLOCAL = 61,                    /* TLOCAL  */
  YYSYMBOL_TLOCALE = 62,                   /* TLOCALE  */
  YYSYMBOL_TMANAGE = 63,                   /* TMANAGE  */
  YYSYMBOL_TMINUSMINUS = 64,               /* TMINUSMINUS  */
  YYSYMBOL_TMODULE = 65,                   /* TMODULE  */
  YYSYMBOL_TNEW = 66,                      /* TNEW  */
  YYSYMBOL_TNIL = 67,                      /* TNIL  */
  YYSYMBOL_TNOINIT = 68,                   /* TNOINIT  */
  YYSYMBOL_TNONE = 69,                     /* TNONE  */
  YYSYMBOL_TNOTHING = 70,                  /* TNOTHING  */
  YYSYMBOL_TON = 71,                       /* TON  */
  YYSYMBOL_TONLY = 72,                     /* TONLY  */
  YYSYMBOL_TOPERATOR = 73,                 /* TOPERATOR  */
  YYSYMBOL_TOTHERWISE = 74,                /* TOTHERWISE  */
  YYSYMBOL_TOUT = 75,                      /* TOUT  */
  YYSYMBOL_TOVERRIDE = 76,                 /* TOVERRIDE  */
  YYSYMBOL_TOWNED = 77,                    /* TOWNED  */
  YYSYMBOL_TPARAM = 78,                    /* TPARAM  */
  YYSYMBOL_TPLUSPLUS = 79,                 /* TPLUSPLUS  */
  YYSYMBOL_TPRAGMA = 80,                   /* TPRAGMA  */
  YYSYMBOL_TPRIMITIVE = 81,                /* TPRIMITIVE  */
  YYSYMBOL_TPRIVATE = 82,                  /* TPRIVATE  */
  YYSYMBOL_TPROC = 83,                     /* TPROC  */
  YYSYMBOL_TPROTOTYPE = 84,                /* TPROTOTYPE  */
  YYSYMBOL_TPUBLIC = 85,                   /* TPUBLIC  */
  YYSYMBOL_TPROCLP = 86,                   /* TPROCLP  */
  YYSYMBOL_TREAL = 87,                     /* TREAL  */
  YYSYMBOL_TRECORD = 88,                   /* TRECORD  */
  YYSYMBOL_TREDUCE = 89,                   /* TREDUCE  */
  YYSYMBOL_TREF = 90,                      /* TREF  */
  YYSYMBOL_TREQUIRE = 91,                  /* TREQUIRE  */
  YYSYMBOL_TRETURN = 92,                   /* TRETURN  */
  YYSYMBOL_TSCAN = 93,                     /* TSCAN  */
  YYSYMBOL_TSELECT = 94,                   /* TSELECT  */
  YYSYMBOL_TSERIAL = 95,                   /* TSERIAL  */
  YYSYMBOL_TSHARED = 96,                   /* TSHARED  */
  YYSYMBOL_TSINGLE = 97,                   /* TSINGLE  */
  YYSYMBOL_TSPARSE = 98,                   /* TSPARSE  */
  YYSYMBOL_TSTRING = 99,                   /* TSTRING  */
  YYSYMBOL_TSUBDOMAIN = 100,               /* TSUBDOMAIN  */
  YYSYMBOL_TSYNC = 101,                    /* TSYNC  */
  YYSYMBOL_TTHEN = 102,                    /* TTHEN  */
  YYSYMBOL_TTHIS = 103,                    /* TTHIS  */
  YYSYMBOL_TTHROW = 104,                   /* TTHROW  */
  YYSYMBOL_TTHROWS = 105,                  /* TTHROWS  */
  YYSYMBOL_TTRUE = 106,                    /* TTRUE  */
  YYSYMBOL_TTRY = 107,                     /* TTRY  */
  YYSYMBOL_TTRYBANG = 108,                 /* TTRYBANG  */
  YYSYMBOL_TTYPE = 109,                    /* TTYPE  */
  YYSYMBOL_TUINT = 110,                    /* TUINT  */
  YYSYMBOL_TUNDERSCORE = 111,              /* TUNDERSCORE  */
  YYSYMBOL_TUNION = 112,                   /* TUNION  */
  YYSYMBOL_TUNMANAGED = 113,               /* TUNMANAGED  */
  YYSYMBOL_TUSE = 114,                     /* TUSE  */
  YYSYMBOL_TVAR = 115,                     /* TVAR  */
  YYSYMBOL_TVOID = 116,                    /* TVOID  */
  YYSYMBOL_TWHEN = 117,                    /* TWHEN  */
  YYSYMBOL_TWHERE = 118,                   /* TWHERE  */
  YYSYMBOL_TWHILE = 119,                   /* TWHILE  */
  YYSYMBOL_TWITH = 120,                    /* TWITH  */
  YYSYMBOL_TYIELD = 121,                   /* TYIELD  */
  YYSYMBOL_TZIP = 122,                     /* TZIP  */
  YYSYMBOL_TDEINIT = 123,                  /* TDEINIT  */
  YYSYMBOL_TALIAS = 124,                   /* TALIAS  */
  YYSYMBOL_TAND = 125,                     /* TAND  */
  YYSYMBOL_TASSIGN = 126,                  /* TASSIGN  */
  YYSYMBOL_TASSIGNBAND = 127,              /* TASSIGNBAND  */
  YYSYMBOL_TASSIGNBOR = 128,               /* TASSIGNBOR  */
  YYSYMBOL_TASSIGNBXOR = 129,              /* TASSIGNBXOR  */
  YYSYMBOL_TASSIGNDIVIDE = 130,            /* TASSIGNDIVIDE  */
  YYSYMBOL_TASSIGNEXP = 131,               /* TASSIGNEXP  */
  YYSYMBOL_TASSIGNLAND = 132,              /* TASSIGNLAND  */
  YYSYMBOL_TASSIGNLOR = 133,               /* TASSIGNLOR  */
  YYSYMBOL_TASSIGNMINUS = 134,             /* TASSIGNMINUS  */
  YYSYMBOL_TASSIGNMOD = 135,               /* TASSIGNMOD  */
  YYSYMBOL_TASSIGNMULTIPLY = 136,          /* TASSIGNMULTIPLY  */
  YYSYMBOL_TASSIGNPLUS = 137,              /* TASSIGNPLUS  */
  YYSYMBOL_TASSIGNREDUCE = 138,            /* TASSIGNREDUCE  */
  YYSYMBOL_TASSIGNSL = 139,                /* TASSIGNSL  */
  YYSYMBOL_TASSIGNSR = 140,                /* TASSIGNSR  */
  YYSYMBOL_TATMARK = 141,                  /* TATMARK  */
  YYSYMBOL_TBANG = 142,                    /* TBANG  */
  YYSYMBOL_TBAND = 143,                    /* TBAND  */
  YYSYMBOL_TBNOT = 144,                    /* TBNOT  */
  YYSYMBOL_TBOR = 145,                     /* TBOR  */
  YYSYMBOL_TBXOR = 146,                    /* TBXOR  */
  YYSYMBOL_TCOLON = 147,                   /* TCOLON  */
  YYSYMBOL_TCOMMA = 148,                   /* TCOMMA  */
  YYSYMBOL_TDIVIDE = 149,                  /* TDIVIDE  */
  YYSYMBOL_TDOT = 150,                     /* TDOT  */
  YYSYMBOL_TDOTDOT = 151,                  /* TDOTDOT  */
  YYSYMBOL_TDOTDOTDOT = 152,               /* TDOTDOTDOT  */
  YYSYMBOL_TEQUAL = 153,                   /* TEQUAL  */
  YYSYMBOL_TEXP = 154,                     /* TEXP  */
  YYSYMBOL_TGREATER = 155,                 /* TGREATER  */
  YYSYMBOL_TGREATEREQUAL = 156,            /* TGREATEREQUAL  */
  YYSYMBOL_THASH = 157,                    /* THASH  */
  YYSYMBOL_TLESS = 158,                    /* TLESS  */
  YYSYMBOL_TLESSEQUAL = 159,               /* TLESSEQUAL  */
  YYSYMBOL_TMINUS = 160,                   /* TMINUS  */
  YYSYMBOL_TMOD = 161,                     /* TMOD  */
  YYSYMBOL_TNOTEQUAL = 162,                /* TNOTEQUAL  */
  YYSYMBOL_TOR = 163,                      /* TOR  */
  YYSYMBOL_TPLUS = 164,                    /* TPLUS  */
  YYSYMBOL_TQUESTION = 165,                /* TQUESTION  */
  YYSYMBOL_TSEMI = 166,                    /* TSEMI  */
  YYSYMBOL_TSHIFTLEFT = 167,               /* TSHIFTLEFT  */
  YYSYMBOL_TSHIFTRIGHT = 168,              /* TSHIFTRIGHT  */
  YYSYMBOL_TSTAR = 169,                    /* TSTAR  */
  YYSYMBOL_TSWAP = 170,                    /* TSWAP  */
  YYSYMBOL_TLCBR = 171,                    /* TLCBR  */
  YYSYMBOL_TRCBR = 172,                    /* TRCBR  */
  YYSYMBOL_TLP = 173,                      /* TLP  */
  YYSYMBOL_TRP = 174,                      /* TRP  */
  YYSYMBOL_TLSBR = 175,                    /* TLSBR  */
  YYSYMBOL_TRSBR = 176,                    /* TRSBR  */
  YYSYMBOL_TNOELSE = 177,                  /* TNOELSE  */
  YYSYMBOL_TDOTDOTOPENHIGH = 178,          /* TDOTDOTOPENHIGH  */
  YYSYMBOL_TUPLUS = 179,                   /* TUPLUS  */
  YYSYMBOL_TUMINUS = 180,                  /* TUMINUS  */
  YYSYMBOL_TLNOT = 181,                    /* TLNOT  */
  YYSYMBOL_YYACCEPT = 182,                 /* $accept  */
  YYSYMBOL_program = 183,                  /* program  */
  YYSYMBOL_toplevel_stmt_ls = 184,         /* toplevel_stmt_ls  */
  YYSYMBOL_toplevel_stmt = 185,            /* toplevel_stmt  */
  YYSYMBOL_pragma_ls = 186,                /* pragma_ls  */
  YYSYMBOL_stmt = 187,                     /* stmt  */
  YYSYMBOL_stmt_base = 188,                /* stmt_base  */
  YYSYMBOL_tryable_stmt = 189,             /* tryable_stmt  */
  YYSYMBOL_decl_base = 190,                /* decl_base  */
  YYSYMBOL_collect_attributes = 191,       /* collect_attributes  */
  YYSYMBOL_attribute_receiver = 192,       /* attribute_receiver  */
  YYSYMBOL_attribute_group = 193,          /* attribute_group  */
  YYSYMBOL_attribute_decl_stmt_ls = 194,   /* attribute_decl_stmt_ls  */
  YYSYMBOL_attribute_decl_stmt = 195,      /* attribute_decl_stmt  */
  YYSYMBOL_attribute_decl_begin = 196,     /* attribute_decl_begin  */
  YYSYMBOL_opt_attribute_decl_toolspace = 197, /* opt_attribute_decl_toolspace  */
  YYSYMBOL_opt_attribute_actuals = 198,    /* opt_attribute_actuals  */
  YYSYMBOL_attribute_actuals_ls = 199,     /* attribute_actuals_ls  */
  YYSYMBOL_attribute_actual = 200,         /* attribute_actual  */
  YYSYMBOL_module_decl_start = 201,        /* module_decl_start  */
  YYSYMBOL_module_decl_stmt = 202,         /* module_decl_stmt  */
  YYSYMBOL_opt_access_control = 203,       /* opt_access_control  */
  YYSYMBOL_opt_prototype = 204,            /* opt_prototype  */
  YYSYMBOL_include_module_stmt = 205,      /* include_module_stmt  */
  YYSYMBOL_block_stmt_body = 206,          /* block_stmt_body  */
  YYSYMBOL_block_stmt = 207,               /* block_stmt  */
  YYSYMBOL_stmt_ls = 208,                  /* stmt_ls  */
  YYSYMBOL_renames_ls = 209,               /* renames_ls  */
  YYSYMBOL_use_renames_ls = 210,           /* use_renames_ls  */
  YYSYMBOL_opt_only_ls = 211,              /* opt_only_ls  */
  YYSYMBOL_use_stmt = 212,                 /* use_stmt  */
  YYSYMBOL_import_stmt = 213,              /* import_stmt  */
  YYSYMBOL_import_internal_type_ident = 214, /* import_internal_type_ident  */
  YYSYMBOL_import_expr = 215,              /* import_expr  */
  YYSYMBOL_import_ls = 216,                /* import_ls  */
  YYSYMBOL_require_stmt = 217,             /* require_stmt  */
  YYSYMBOL_assignment_stmt = 218,          /* assignment_stmt  */
  YYSYMBOL_opt_label_ident = 219,          /* opt_label_ident  */
  YYSYMBOL_reserved_word_ident = 220,      /* reserved_word_ident  */
  YYSYMBOL_ident_def = 221,                /* ident_def  */
  YYSYMBOL_ident_use = 222,                /* ident_use  */
  YYSYMBOL_internal_type_ident_def = 223,  /* internal_type_ident_def  */
  YYSYMBOL_scalar_type = 224,              /* scalar_type  */
  YYSYMBOL_reserved_type_ident_use = 225,  /* reserved_type_ident_use  */
  YYSYMBOL_do_stmt = 226,                  /* do_stmt  */
  YYSYMBOL_return_stmt = 227,              /* return_stmt  */
  YYSYMBOL_class_level_stmt = 228,         /* class_level_stmt  */
  YYSYMBOL_229_1 = 229,                    /* $@1  */
  YYSYMBOL_230_2 = 230,                    /* $@2  */
  YYSYMBOL_inner_class_level_stmt = 231,   /* inner_class_level_stmt  */
  YYSYMBOL_forwarding_decl_stmt = 232,     /* forwarding_decl_stmt  */
  YYSYMBOL_forwarding_decl_start = 233,    /* forwarding_decl_start  */
  YYSYMBOL_extern_or_export = 234,         /* extern_or_export  */
  YYSYMBOL_extern_export_decl_stmt_start = 235, /* extern_export_decl_stmt_start  */
  YYSYMBOL_extern_export_decl_stmt = 236,  /* extern_export_decl_stmt  */
  YYSYMBOL_237_3 = 237,                    /* $@3  */
  YYSYMBOL_238_4 = 238,                    /* $@4  */
  YYSYMBOL_extern_block_stmt = 239,        /* extern_block_stmt  */
  YYSYMBOL_loop_stmt = 240,                /* loop_stmt  */
  YYSYMBOL_zippered_iterator = 241,        /* zippered_iterator  */
  YYSYMBOL_if_stmt = 242,                  /* if_stmt  */
  YYSYMBOL_ifvar = 243,                    /* ifvar  */
  YYSYMBOL_interface_stmt = 244,           /* interface_stmt  */
  YYSYMBOL_ifc_formal_ls = 245,            /* ifc_formal_ls  */
  YYSYMBOL_ifc_formal = 246,               /* ifc_formal  */
  YYSYMBOL_implements_type_ident = 247,    /* implements_type_ident  */
  YYSYMBOL_implements_type_error_ident = 248, /* implements_type_error_ident  */
  YYSYMBOL_implements_stmt = 249,          /* implements_stmt  */
  YYSYMBOL_ifc_constraint = 250,           /* ifc_constraint  */
  YYSYMBOL_try_stmt = 251,                 /* try_stmt  */
  YYSYMBOL_catch_expr_ls = 252,            /* catch_expr_ls  */
  YYSYMBOL_catch_expr = 253,               /* catch_expr  */
  YYSYMBOL_catch_expr_inner = 254,         /* catch_expr_inner  */
  YYSYMBOL_throw_stmt = 255,               /* throw_stmt  */
  YYSYMBOL_select_stmt = 256,              /* select_stmt  */
  YYSYMBOL_when_stmt_ls = 257,             /* when_stmt_ls  */
  YYSYMBOL_when_stmt = 258,                /* when_stmt  */
  YYSYMBOL_manager_expr = 259,             /* manager_expr  */
  YYSYMBOL_manager_expr_ls = 260,          /* manager_expr_ls  */
  YYSYMBOL_manage_stmt = 261,              /* manage_stmt  */
  YYSYMBOL_class_decl_stmt = 262,          /* class_decl_stmt  */
  YYSYMBOL_class_start = 263,              /* class_start  */
  YYSYMBOL_class_tag = 264,                /* class_tag  */
  YYSYMBOL_opt_inherit = 265,              /* opt_inherit  */
  YYSYMBOL_class_level_stmt_ls = 266,      /* class_level_stmt_ls  */
  YYSYMBOL_enum_decl_stmt = 267,           /* enum_decl_stmt  */
  YYSYMBOL_enum_header_lcbr = 268,         /* enum_header_lcbr  */
  YYSYMBOL_enum_ls = 269,                  /* enum_ls  */
  YYSYMBOL_270_5 = 270,                    /* $@5  */
  YYSYMBOL_271_6 = 271,                    /* $@6  */
  YYSYMBOL_enum_item = 272,                /* enum_item  */
  YYSYMBOL_lambda_decl_start = 273,        /* lambda_decl_start  */
  YYSYMBOL_lambda_decl_expr = 274,         /* lambda_decl_expr  */
  YYSYMBOL_275_7 = 275,                    /* $@7  */
  YYSYMBOL_linkage_spec_empty = 276,       /* linkage_spec_empty  */
  YYSYMBOL_linkage_spec = 277,             /* linkage_spec  */
  YYSYMBOL_opt_fn_type_formal_ls = 278,    /* opt_fn_type_formal_ls  */
  YYSYMBOL_fn_type_formal_ls = 279,        /* fn_type_formal_ls  */
  YYSYMBOL_fn_type_formal = 280,           /* fn_type_formal  */
  YYSYMBOL_opt_fn_type_ret_type = 281,     /* opt_fn_type_ret_type  */
  YYSYMBOL_fn_type = 282,                  /* fn_type  */
  YYSYMBOL_fn_expr = 283,                  /* fn_expr  */
  YYSYMBOL_284_8 = 284,                    /* $@8  */
  YYSYMBOL_285_9 = 285,                    /* $@9  */
  YYSYMBOL_fn_decl_stmt_complete = 286,    /* fn_decl_stmt_complete  */
  YYSYMBOL_fn_decl_stmt = 287,             /* fn_decl_stmt  */
  YYSYMBOL_288_10 = 288,                   /* $@10  */
  YYSYMBOL_fn_decl_stmt_inner = 289,       /* fn_decl_stmt_inner  */
  YYSYMBOL_fn_decl_stmt_start = 290,       /* fn_decl_stmt_start  */
  YYSYMBOL_fn_decl_receiver_expr = 291,    /* fn_decl_receiver_expr  */
  YYSYMBOL_fn_ident = 292,                 /* fn_ident  */
  YYSYMBOL_op_ident = 293,                 /* op_ident  */
  YYSYMBOL_assignop_ident = 294,           /* assignop_ident  */
  YYSYMBOL_all_op_name = 295,              /* all_op_name  */
  YYSYMBOL_formal_var_arg_expr = 296,      /* formal_var_arg_expr  */
  YYSYMBOL_opt_formal_ls = 297,            /* opt_formal_ls  */
  YYSYMBOL_req_formal_ls = 298,            /* req_formal_ls  */
  YYSYMBOL_formal_ls_inner = 299,          /* formal_ls_inner  */
  YYSYMBOL_formal_ls = 300,                /* formal_ls  */
  YYSYMBOL_formal = 301,                   /* formal  */
  YYSYMBOL_formal_ident_def = 302,         /* formal_ident_def  */
  YYSYMBOL_named_formal = 303,             /* named_formal  */
  YYSYMBOL_opt_formal_intent_tag = 304,    /* opt_formal_intent_tag  */
  YYSYMBOL_required_intent_tag = 305,      /* required_intent_tag  */
  YYSYMBOL_opt_this_intent_tag = 306,      /* opt_this_intent_tag  */
  YYSYMBOL_proc_iter_or_op = 307,          /* proc_iter_or_op  */
  YYSYMBOL_opt_ret_tag = 308,              /* opt_ret_tag  */
  YYSYMBOL_opt_throws_error = 309,         /* opt_throws_error  */
  YYSYMBOL_opt_function_body_stmt = 310,   /* opt_function_body_stmt  */
  YYSYMBOL_function_body_stmt = 311,       /* function_body_stmt  */
  YYSYMBOL_query_expr = 312,               /* query_expr  */
  YYSYMBOL_opt_lifetime_where = 313,       /* opt_lifetime_where  */
  YYSYMBOL_lifetime_components_expr = 314, /* lifetime_components_expr  */
  YYSYMBOL_lifetime_expr = 315,            /* lifetime_expr  */
  YYSYMBOL_lifetime_ident = 316,           /* lifetime_ident  */
  YYSYMBOL_type_alias_decl_stmt = 317,     /* type_alias_decl_stmt  */
  YYSYMBOL_type_alias_decl_stmt_start = 318, /* type_alias_decl_stmt_start  */
  YYSYMBOL_type_alias_decl_stmt_inner_ls = 319, /* type_alias_decl_stmt_inner_ls  */
  YYSYMBOL_type_alias_decl_stmt_inner = 320, /* type_alias_decl_stmt_inner  */
  YYSYMBOL_opt_init_type = 321,            /* opt_init_type  */
  YYSYMBOL_var_decl_type = 322,            /* var_decl_type  */
  YYSYMBOL_var_decl_stmt = 323,            /* var_decl_stmt  */
  YYSYMBOL_324_11 = 324,                   /* $@11  */
  YYSYMBOL_var_decl_stmt_inner_ls = 325,   /* var_decl_stmt_inner_ls  */
  YYSYMBOL_var_decl_stmt_inner = 326,      /* var_decl_stmt_inner  */
  YYSYMBOL_tuple_var_decl_component = 327, /* tuple_var_decl_component  */
  YYSYMBOL_tuple_var_decl_stmt_inner_ls = 328, /* tuple_var_decl_stmt_inner_ls  */
  YYSYMBOL_opt_init_expr = 329,            /* opt_init_expr  */
  YYSYMBOL_formal_or_ret_type_expr = 330,  /* formal_or_ret_type_expr  */
  YYSYMBOL_ret_type = 331,                 /* ret_type  */
  YYSYMBOL_colon_ret_type = 332,           /* colon_ret_type  */
  YYSYMBOL_opt_ret_type = 333,             /* opt_ret_type  */
  YYSYMBOL_opt_type = 334,                 /* opt_type  */
  YYSYMBOL_formal_type = 335,              /* formal_type  */
  YYSYMBOL_colon_formal_type = 336,        /* colon_formal_type  */
  YYSYMBOL_opt_colon_formal_type = 337,    /* opt_colon_formal_type  */
  YYSYMBOL_expr_ls = 338,                  /* expr_ls  */
  YYSYMBOL_tuple_component = 339,          /* tuple_component  */
  YYSYMBOL_tuple_expr_ls = 340,            /* tuple_expr_ls  */
  YYSYMBOL_opt_actual_ls = 341,            /* opt_actual_ls  */
  YYSYMBOL_actual_ls = 342,                /* actual_ls  */
  YYSYMBOL_actual_expr = 343,              /* actual_expr  */
  YYSYMBOL_ident_expr = 344,               /* ident_expr  */
  YYSYMBOL_sub_type_level_expr = 345,      /* sub_type_level_expr  */
  YYSYMBOL_for_expr = 346,                 /* for_expr  */
  YYSYMBOL_bracket_loop_expr = 347,        /* bracket_loop_expr  */
  YYSYMBOL_cond_expr = 348,                /* cond_expr  */
  YYSYMBOL_nil_expr = 349,                 /* nil_expr  */
  YYSYMBOL_stmt_level_expr = 350,          /* stmt_level_expr  */
  YYSYMBOL_opt_task_intent_ls = 351,       /* opt_task_intent_ls  */
  YYSYMBOL_task_intent_clause = 352,       /* task_intent_clause  */
  YYSYMBOL_task_intent_ls = 353,           /* task_intent_ls  */
  YYSYMBOL_forall_intent_clause = 354,     /* forall_intent_clause  */
  YYSYMBOL_forall_intent_ls = 355,         /* forall_intent_ls  */
  YYSYMBOL_intent_expr = 356,              /* intent_expr  */
  YYSYMBOL_task_var_prefix = 357,          /* task_var_prefix  */
  YYSYMBOL_new_maybe_decorated = 358,      /* new_maybe_decorated  */
  YYSYMBOL_new_expr = 359,                 /* new_expr  */
  YYSYMBOL_let_expr = 360,                 /* let_expr  */
  YYSYMBOL_range_literal_expr = 361,       /* range_literal_expr  */
  YYSYMBOL_cast_expr = 362,                /* cast_expr  */
  YYSYMBOL_tuple_expand_expr = 363,        /* tuple_expand_expr  */
  YYSYMBOL_super_expr = 364,               /* super_expr  */
  YYSYMBOL_expr = 365,                     /* expr  */
  YYSYMBOL_opt_expr = 366,                 /* opt_expr  */
  YYSYMBOL_opt_try_expr = 367,             /* opt_try_expr  */
  YYSYMBOL_lhs_expr = 368,                 /* lhs_expr  */
  YYSYMBOL_call_base_expr = 369,           /* call_base_expr  */
  YYSYMBOL_call_expr = 370,                /* call_expr  */
  YYSYMBOL_dot_expr = 371,                 /* dot_expr  */
  YYSYMBOL_parenthesized_expr = 372,       /* parenthesized_expr  */
  YYSYMBOL_bool_literal = 373,             /* bool_literal  */
  YYSYMBOL_str_bytes_literal = 374,        /* str_bytes_literal  */
  YYSYMBOL_literal_expr = 375,             /* literal_expr  */
  YYSYMBOL_assoc_expr_ls = 376,            /* assoc_expr_ls  */
  YYSYMBOL_binary_op_expr = 377,           /* binary_op_expr  */
  YYSYMBOL_unary_op_expr = 378,            /* unary_op_expr  */
  YYSYMBOL_reduce_expr = 379,              /* reduce_expr  */
  YYSYMBOL_scan_expr = 380,                /* scan_expr  */
  YYSYMBOL_reduce_scan_op_expr = 381       /* reduce_scan_op_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 328 "chpl.ypp"

  // include the definition of methods for ParserContext
  #include "ParserContextImpl.h"
  // include helper macros for use in writing productions
  #include "parser-help.h"
  // include implementation of error logging hook
  #include "parser-yyerror.h"

#line 505 "bison-chpl-lib.cpp"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYCHPL_LTYPE_IS_TRIVIAL && YYCHPL_LTYPE_IS_TRIVIAL \
             && defined YYCHPL_STYPE_IS_TRIVIAL && YYCHPL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   19865

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  182
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  200
/* YYNRULES -- Number of rules.  */
#define YYNRULES  743
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1314

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   436


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181
};

#if YYCHPL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   638,   638,   642,   643,   648,   649,   657,   661,   671,
     676,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   706,   707,   708,   717,   726,   730,   737,   745,
     746,   747,   748,   749,   750,   751,   752,   766,   781,   789,
     801,   812,   824,   836,   847,   863,   864,   868,   878,   879,
     880,   884,   888,   889,   893,   897,   904,   916,   924,   927,
     937,   939,   946,   951,   960,   964,   984,   999,  1014,  1030,
    1031,  1033,  1038,  1039,  1044,  1062,  1066,  1070,  1081,  1100,
    1101,  1105,  1109,  1113,  1118,  1122,  1126,  1136,  1141,  1147,
    1154,  1159,  1166,  1177,  1178,  1182,  1187,  1195,  1204,  1214,
    1222,  1231,  1244,  1252,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,
    1280,  1284,  1289,  1294,  1300,  1309,  1310,  1314,  1323,  1327,
    1331,  1335,  1339,  1343,  1352,  1353,  1357,  1358,  1359,  1360,
    1361,  1362,  1366,  1367,  1379,  1380,  1385,  1386,  1387,  1388,
    1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,  1400,  1401,  1402,  1403,  1407,  1408,  1409,  1410,  1411,
    1412,  1413,  1414,  1415,  1416,  1417,  1418,  1425,  1426,  1427,
    1428,  1432,  1433,  1437,  1444,  1454,  1458,  1464,  1464,  1470,
    1470,  1479,  1480,  1481,  1482,  1483,  1484,  1485,  1489,  1494,
    1499,  1504,  1511,  1519,  1520,  1524,  1533,  1539,  1547,  1566,
    1565,  1575,  1574,  1587,  1594,  1614,  1629,  1644,  1648,  1652,
    1656,  1660,  1664,  1668,  1672,  1693,  1697,  1701,  1705,  1709,
    1713,  1717,  1721,  1725,  1729,  1733,  1737,  1741,  1745,  1749,
    1753,  1757,  1761,  1765,  1769,  1773,  1777,  1781,  1786,  1794,
    1803,  1807,  1811,  1815,  1819,  1823,  1827,  1831,  1835,  1840,
    1845,  1850,  1858,  1873,  1891,  1895,  1902,  1903,  1908,  1913,
    1914,  1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,  1923,
    1924,  1925,  1934,  1935,  1936,  1937,  1946,  1947,  1951,  1955,
    1959,  1966,  1970,  1974,  1981,  1985,  1989,  1993,  2000,  2001,
    2005,  2009,  2013,  2020,  2033,  2049,  2057,  2061,  2070,  2071,
    2075,  2079,  2084,  2092,  2097,  2101,  2108,  2109,  2113,  2122,
    2127,  2138,  2145,  2146,  2147,  2151,  2152,  2156,  2160,  2164,
    2168,  2172,  2179,  2196,  2209,  2216,  2221,  2228,  2227,  2237,
    2243,  2242,  2257,  2264,  2276,  2294,  2291,  2319,  2323,  2324,
    2326,  2331,  2332,  2336,  2337,  2341,  2344,  2346,  2351,  2352,
    2363,  2383,  2382,  2398,  2397,  2415,  2425,  2422,  2456,  2464,
    2472,  2483,  2494,  2503,  2518,  2519,  2523,  2524,  2525,  2534,
    2535,  2536,  2537,  2538,  2539,  2540,  2541,  2542,  2543,  2544,
    2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,  2553,  2554,
    2555,  2556,  2557,  2558,  2562,  2563,  2564,  2565,  2566,  2567,
    2568,  2569,  2570,  2571,  2572,  2573,  2578,  2579,  2583,  2584,
    2588,  2589,  2593,  2594,  2598,  2599,  2603,  2604,  2608,  2612,
    2613,  2617,  2621,  2626,  2631,  2636,  2641,  2649,  2653,  2661,
    2662,  2663,  2664,  2665,  2666,  2667,  2668,  2669,  2673,  2674,
    2675,  2676,  2677,  2678,  2682,  2683,  2684,  2688,  2689,  2690,
    2691,  2692,  2693,  2694,  2698,  2699,  2702,  2703,  2707,  2708,
    2709,  2713,  2718,  2719,  2721,  2723,  2725,  2730,  2732,  2737,
    2739,  2741,  2743,  2745,  2747,  2749,  2754,  2755,  2759,  2768,
    2772,  2780,  2784,  2791,  2812,  2813,  2818,  2819,  2820,  2821,
    2822,  2827,  2826,  2835,  2843,  2847,  2854,  2872,  2891,  2895,
    2899,  2906,  2908,  2910,  2917,  2918,  2919,  2923,  2927,  2928,
    2929,  2933,  2934,  2938,  2939,  2943,  2944,  2945,  2946,  2950,
    2951,  2955,  2959,  2960,  2966,  2967,  2971,  2972,  2976,  2980,
    2987,  2988,  2992,  2997,  3006,  3007,  3011,  3012,  3019,  3020,
    3021,  3022,  3023,  3024,  3026,  3028,  3030,  3032,  3038,  3040,
    3043,  3045,  3047,  3049,  3051,  3053,  3055,  3057,  3059,  3061,
    3066,  3077,  3088,  3098,  3114,  3130,  3146,  3155,  3164,  3172,
    3186,  3200,  3217,  3221,  3225,  3229,  3233,  3237,  3241,  3248,
    3266,  3274,  3275,  3276,  3277,  3278,  3279,  3280,  3284,  3285,
    3289,  3298,  3299,  3303,  3312,  3313,  3317,  3331,  3335,  3342,
    3343,  3344,  3345,  3346,  3347,  3351,  3353,  3355,  3357,  3359,
    3365,  3372,  3384,  3396,  3409,  3426,  3433,  3438,  3443,  3448,
    3454,  3460,  3490,  3497,  3504,  3505,  3509,  3511,  3512,  3514,
    3516,  3517,  3518,  3519,  3522,  3523,  3524,  3525,  3526,  3527,
    3528,  3529,  3530,  3534,  3535,  3539,  3540,  3541,  3545,  3546,
    3547,  3548,  3557,  3558,  3561,  3562,  3563,  3567,  3579,  3591,
    3598,  3600,  3602,  3604,  3606,  3612,  3625,  3626,  3630,  3634,
    3641,  3642,  3646,  3647,  3651,  3652,  3653,  3654,  3655,  3656,
    3657,  3658,  3663,  3668,  3672,  3676,  3680,  3688,  3693,  3702,
    3703,  3704,  3705,  3706,  3707,  3708,  3709,  3710,  3711,  3712,
    3713,  3714,  3715,  3716,  3717,  3718,  3719,  3720,  3721,  3722,
    3723,  3724,  3728,  3729,  3730,  3731,  3732,  3733,  3736,  3740,
    3744,  3748,  3752,  3759,  3763,  3767,  3771,  3779,  3780,  3781,
    3782,  3783,  3784,  3785
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYCHPL_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TIDENT",
  "TQUERIEDIDENT", "INTLITERAL", "REALLITERAL", "IMAGLITERAL",
  "STRINGLITERAL", "BYTESLITERAL", "CSTRINGLITERAL", "EXTERNCODE",
  "TALIGN", "TAS", "TATOMIC", "TBEGIN", "TBREAK", "TBOOL", "TBORROWED",
  "TBY", "TBYTES", "TCATCH", "TCLASS", "TCOBEGIN", "TCOFORALL", "TCOMPLEX",
  "TCONFIG", "TCONST", "TCONTINUE", "TDEFER", "TDELETE", "TDMAPPED", "TDO",
  "TDOMAIN", "TELSE", "TENUM", "TEXCEPT", "TEXPORT", "TEXTERN", "TFALSE",
  "TFOR", "TFORALL", "TFOREACH", "TFORWARDING", "TIF", "TIMAG", "TIMPORT",
  "TIN", "TINCLUDE", "TINDEX", "TINLINE", "TINOUT", "TINT", "TITER",
  "TINITEQUALS", "TIMPLEMENTS", "TINTERFACE", "TLABEL", "TLAMBDA", "TLET",
  "TLIFETIME", "TLOCAL", "TLOCALE", "TMANAGE", "TMINUSMINUS", "TMODULE",
  "TNEW", "TNIL", "TNOINIT", "TNONE", "TNOTHING", "TON", "TONLY",
  "TOPERATOR", "TOTHERWISE", "TOUT", "TOVERRIDE", "TOWNED", "TPARAM",
  "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE", "TPRIVATE", "TPROC", "TPROTOTYPE",
  "TPUBLIC", "TPROCLP", "TREAL", "TRECORD", "TREDUCE", "TREF", "TREQUIRE",
  "TRETURN", "TSCAN", "TSELECT", "TSERIAL", "TSHARED", "TSINGLE",
  "TSPARSE", "TSTRING", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHIS", "TTHROW",
  "TTHROWS", "TTRUE", "TTRY", "TTRYBANG", "TTYPE", "TUINT", "TUNDERSCORE",
  "TUNION", "TUNMANAGED", "TUSE", "TVAR", "TVOID", "TWHEN", "TWHERE",
  "TWHILE", "TWITH", "TYIELD", "TZIP", "TDEINIT", "TALIAS", "TAND",
  "TASSIGN", "TASSIGNBAND", "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE",
  "TASSIGNEXP", "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNREDUCE", "TASSIGNSL",
  "TASSIGNSR", "TATMARK", "TBANG", "TBAND", "TBNOT", "TBOR", "TBXOR",
  "TCOLON", "TCOMMA", "TDIVIDE", "TDOT", "TDOTDOT", "TDOTDOTDOT", "TEQUAL",
  "TEXP", "TGREATER", "TGREATEREQUAL", "THASH", "TLESS", "TLESSEQUAL",
  "TMINUS", "TMOD", "TNOTEQUAL", "TOR", "TPLUS", "TQUESTION", "TSEMI",
  "TSHIFTLEFT", "TSHIFTRIGHT", "TSTAR", "TSWAP", "TLCBR", "TRCBR", "TLP",
  "TRP", "TLSBR", "TRSBR", "TNOELSE", "TDOTDOTOPENHIGH", "TUPLUS",
  "TUMINUS", "TLNOT", "$accept", "program", "toplevel_stmt_ls",
  "toplevel_stmt", "pragma_ls", "stmt", "stmt_base", "tryable_stmt",
  "decl_base", "collect_attributes", "attribute_receiver",
  "attribute_group", "attribute_decl_stmt_ls", "attribute_decl_stmt",
  "attribute_decl_begin", "opt_attribute_decl_toolspace",
  "opt_attribute_actuals", "attribute_actuals_ls", "attribute_actual",
  "module_decl_start", "module_decl_stmt", "opt_access_control",
  "opt_prototype", "include_module_stmt", "block_stmt_body", "block_stmt",
  "stmt_ls", "renames_ls", "use_renames_ls", "opt_only_ls", "use_stmt",
  "import_stmt", "import_internal_type_ident", "import_expr", "import_ls",
  "require_stmt", "assignment_stmt", "opt_label_ident",
  "reserved_word_ident", "ident_def", "ident_use",
  "internal_type_ident_def", "scalar_type", "reserved_type_ident_use",
  "do_stmt", "return_stmt", "class_level_stmt", "$@1", "$@2",
  "inner_class_level_stmt", "forwarding_decl_stmt",
  "forwarding_decl_start", "extern_or_export",
  "extern_export_decl_stmt_start", "extern_export_decl_stmt", "$@3", "$@4",
  "extern_block_stmt", "loop_stmt", "zippered_iterator", "if_stmt",
  "ifvar", "interface_stmt", "ifc_formal_ls", "ifc_formal",
  "implements_type_ident", "implements_type_error_ident",
  "implements_stmt", "ifc_constraint", "try_stmt", "catch_expr_ls",
  "catch_expr", "catch_expr_inner", "throw_stmt", "select_stmt",
  "when_stmt_ls", "when_stmt", "manager_expr", "manager_expr_ls",
  "manage_stmt", "class_decl_stmt", "class_start", "class_tag",
  "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt",
  "enum_header_lcbr", "enum_ls", "$@5", "$@6", "enum_item",
  "lambda_decl_start", "lambda_decl_expr", "$@7", "linkage_spec_empty",
  "linkage_spec", "opt_fn_type_formal_ls", "fn_type_formal_ls",
  "fn_type_formal", "opt_fn_type_ret_type", "fn_type", "fn_expr", "$@8",
  "$@9", "fn_decl_stmt_complete", "fn_decl_stmt", "$@10",
  "fn_decl_stmt_inner", "fn_decl_stmt_start", "fn_decl_receiver_expr",
  "fn_ident", "op_ident", "assignop_ident", "all_op_name",
  "formal_var_arg_expr", "opt_formal_ls", "req_formal_ls",
  "formal_ls_inner", "formal_ls", "formal", "formal_ident_def",
  "named_formal", "opt_formal_intent_tag", "required_intent_tag",
  "opt_this_intent_tag", "proc_iter_or_op", "opt_ret_tag",
  "opt_throws_error", "opt_function_body_stmt", "function_body_stmt",
  "query_expr", "opt_lifetime_where", "lifetime_components_expr",
  "lifetime_expr", "lifetime_ident", "type_alias_decl_stmt",
  "type_alias_decl_stmt_start", "type_alias_decl_stmt_inner_ls",
  "type_alias_decl_stmt_inner", "opt_init_type", "var_decl_type",
  "var_decl_stmt", "$@11", "var_decl_stmt_inner_ls", "var_decl_stmt_inner",
  "tuple_var_decl_component", "tuple_var_decl_stmt_inner_ls",
  "opt_init_expr", "formal_or_ret_type_expr", "ret_type", "colon_ret_type",
  "opt_ret_type", "opt_type", "formal_type", "colon_formal_type",
  "opt_colon_formal_type", "expr_ls", "tuple_component", "tuple_expr_ls",
  "opt_actual_ls", "actual_ls", "actual_expr", "ident_expr",
  "sub_type_level_expr", "for_expr", "bracket_loop_expr", "cond_expr",
  "nil_expr", "stmt_level_expr", "opt_task_intent_ls",
  "task_intent_clause", "task_intent_ls", "forall_intent_clause",
  "forall_intent_ls", "intent_expr", "task_var_prefix",
  "new_maybe_decorated", "new_expr", "let_expr", "range_literal_expr",
  "cast_expr", "tuple_expand_expr", "super_expr", "expr", "opt_expr",
  "opt_try_expr", "lhs_expr", "call_base_expr", "call_expr", "dot_expr",
  "parenthesized_expr", "bool_literal", "str_bytes_literal",
  "literal_expr", "assoc_expr_ls", "binary_op_expr", "unary_op_expr",
  "reduce_expr", "scan_expr", "reduce_scan_op_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-744)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1105,   136,  4208, -1105,   -21,   110, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105, 11776,    39,   177,   137, 14016,   189, 19612,
      39, 11776,   198,   157,   193,   177,  5616, 11776,  5616,   200,
   19667, -1105,   378,   350,  9312, 10192, 10192, -1105,  9488,   357,
      22,   244, -1105,   403, 19667, 19667, 19667, -1105,  2632, 10368,
     426, 11776, 11776,   261, -1105,   438,   445, 11776, -1105, 14016,
   -1105, 11776,   425,   295,   288,   424,  3926,   446, 19742, -1105,
   11776,  8784, 11776, 10368, 14016, 11776,   430,   519,   382,  5616,
     542, 11776,   550,  7728,  7728, -1105,   553, -1105, 14016, -1105,
     560,  9488,  9664, -1105,   588, 11776, -1105, 11776, -1105, -1105,
   13843, 11776, -1105, 11776, -1105, -1105, -1105,  4560,  8080,  9840,
   11776, -1105,  5264, -1105, -1105, -1105, -1105, 19163,   513, -1105,
      61,   452, -1105,   214, -1105, -1105, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105, -1105, -1105, -1105, -1105,  7904, -1105, 10544,
   -1105, -1105, -1105, -1105, -1105,   612, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105, -1105,   527, 19667, -1105, 19352,   495,   462,
   -1105,   311, -1105, -1105, -1105,   300,   232, -1105, -1105, 19667,
    2632, -1105,   515,   517, -1105, -1105, -1105,   523,   524, 11776,
     526,   528, -1105, -1105, -1105, 18828,  2013,    59,   530,   532,
   -1105, -1105,   133, -1105, -1105, -1105, -1105, -1105,   317, -1105,
   -1105, -1105, 11776, 11776, 11776, 19667, -1105, 11776, 11776, 10720,
     638,   173, -1105, -1105, -1105, -1105, 18828,   413, -1105, -1105,
     529,  5616, -1105, -1105,   534,   212,   535, 15771, -1105,   235,
   -1105,   537, -1105,   106, 18828,   580,  9664, -1105, -1105, -1105,
   -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105,   538, -1105, -1105, 19667,   539,    68, 15346,
      13,  3445,    13,  4009, 19667, 19667,   -30, 14505, -1105, -1105,
     617,  9664,   547,   398,  5616,  3020,   104,    29, -1105,  5616,
   -1105, -1105, 15853, -1105,    60,  3555,   829, -1105,   548,   549,
   -1105, 15853,   212,   829, -1105,  9664,  1830,  1830,    38,    -6,
   -1105,    63, -1105, -1105, -1105, -1105, 11776, 11776, -1105,   531,
   -1105,   541,   557, -1105, -1105,  3302,   577, -1105, -1105, 18828,
     146, 11776, 11776, -1105,    -7, -1105, -1105, 18828,   544, 16524,
   -1105, 15853,   212, 18828,   552,  9664, -1105, 18828, 16607, -1105,
   -1105, -1105, -1105,   212,    68, 15853,   562, -1105,   216,   216,
    1153,   829,   829,    89, -1105, -1105,  4736,   204, -1105, 11776,
       8,    26, -1105, 14160,   -39,     5, 16689,    -8,  1153,   696,
   -1105, -1105, 19667, -1105, -1105,  4560, -1105,    90, -1105,   617,
   -1105, -1105, -1105,   708,   558,  4912, 11776, -1105, 11776,   661,
   -1105, -1105,  2847,    67,   527, 18828,   563, 19667, 11776,   561,
   -1105,   565, 19407,   603,   318, -1105,    64,   300, -1105, -1105,
   -1105, -1105,   643, -1105, -1105, -1105, -1105,   111,   646, -1105,
   -1105, -1105, 13672,   615,   250, -1105,   312,   482, -1105,   592,
   11776, 11776, 11776, 10192, 10192, 11776,   491, 11776, 11776, 11776,
   11776, 11776,   268, 13843, 11776, 11776, 11776, 11776, 11776, 11776,
   11776, 11776, 11776, 11776, 11776, 11776, 11776, 11776, 11776, 11776,
     670, -1105, -1105, -1105, -1105, -1105,  9664,  9664, -1105, -1105,
   -1105, -1105,  9664, -1105, -1105,  9664,  9664,  9664,  9664, 10192,
   10192, 15936, 16018, 16771,   570,     9, 19667,  8256, -1105, -1105,
   -1105, 10192,    68,  2632, -1105, 11776, -1105, 11776,   618,   579,
     607, -1105, -1105, -1105,   709, 11776, -1105,  5792, 10192, -1105,
     584, -1105,    68,  5968, 10192, -1105,    68, -1105,    68, 10192,
   -1105,    68,   635,   640,  5616,   730,  5616, -1105,   733, 11776,
     703,   596,  9664, 19667, -1105, -1105, -1105,  3020, -1105, -1105,
     163, -1105, 11952,   649, 11776,  2632, -1105, -1105, 11776, -1105,
   19482, 11776, 11776, -1105,   608, -1105, -1105, -1105, -1105, 19537,
   -1105,   300, 13535, -1105,  3020, -1105,   632, 11952, -1105, 18828,
   18828, -1105,   535, -1105,    46, -1105,  9664,   613, -1105,   765,
     765, -1105, -1105, -1105, -1105, -1105, -1105, 10896, -1105, 16853,
    8432, -1105,  8608, -1105, 18828,  5616,   616, 10192, 11072,  4384,
     620, 11776, 11248, -1105, -1105,  9312, 10192, 10192, -1105,   641,
    8960, -1105,   313, -1105,  5088, -1105,   332, 16935,   347, 15439,
   19667,  7552,  7552, -1105,   527,   622, -1105,   235, -1105,   103,
     650,  1989, -1105, -1105, 11776,   239, -1105, -1105,   185, -1105,
   -1105,   128, -1105, -1105,  7376, -1105,   689, -1105,   624,   654,
   -1105,   656, -1105,   657,   659,   660,   663, -1105,   664,   665,
     666,   668,   669,   671,   673, -1105, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105, -1105, -1105, -1105, -1105, 11776,   658,   675,
     624, -1105,   624, -1105, 11776, -1105, 19667, -1105, -1105,  3728,
    3728,   470, -1105,   470, -1105,   470, 19134,   393,  1252,   634,
     212,   216, -1105,   500, -1105, -1105, -1105, -1105, -1105,  1153,
    3292,   470,  2615,  2615,  3728,  2615,  2615,   254,   216,  3292,
   13405,   254,   829,   829,   216,  1153,   633,   645,   662,   672,
     676,   680,   653,   644, -1105,   470, -1105,   470, 12128, 10192,
   12304, 10192, 11776,  9664, 10192, 14160,   674,   166, -1105, -1105,
   -1105,   194, -1105,  1578, 18910,   521,    39, 17017, -1105,   348,
   18828, 17099,  9664, -1105,  9664, 11776,   217,  9488, 18828,    69,
   16100,  8256, -1105,  9488, 18828,    41, 15521, -1105, -1105,    13,
   15604, -1105, 11776, 11776,   795,  5616,   796, 17181,  5616, 16183,
   19667, -1105,   219, -1105,   233, -1105,   240,  3020,   104, -1105,
   18828,  9136, -1105, 18828, -1105, -1105, -1105, 19667, 17263, 17345,
   -1105,   632,   685, -1105,   291, 11952, -1105,   345, -1105, 11776,
   -1105,   677,     6,   678, -1105,  2350, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105, -1105,  5616,   -14, 16267, -1105, -1105, 18828,
    5616, 18828, -1105, 17427, 15688, 15263,   102, -1105, -1105,   335,
   -1105, -1105, -1105, -1105, 11776, -1105,    99, 14262, 11776, -1105,
   11424,  7552,  7552, -1105, 11776,   533, 11776,   536,   545, 11776,
   10016,   556,   367, -1105, -1105, -1105, 17509,   686,   684,   687,
   -1105, 19667,  2632, -1105,  9664,   683,  1403, 18828, 19667,   513,
     605, -1105,   689, -1105, -1105, -1105, -1105, -1105,    17,   246,
   -1105, 17591, -1105, 14422, -1105, -1105, 18828, -1105,   682,   681,
   -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, 11776,   803,
   17673, 11776,   805, 17755,   343,   688, 17837,  9664, -1105, -1105,
    8256, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105,    50, 10192, 10192,    68,    68, -1105, -1105,
   -1105, -1105, 15853, -1105, 14589,  6144, -1105,  6320, -1105,   372,
   -1105, 14673,  6496, -1105,    68,  6672, -1105,    68, -1105,    68,
   -1105,    68, 18828, 18828,  5616, -1105,  5616, 11776, -1105,  5616,
     825,   700,   704, 19667,   535, -1105, -1105,   649, -1105, -1105,
   -1105,   701,   702,   345, 11776,   689,   632, -1105, 11776, -1105,
   -1105, 18828, -1105,  6848, 11776, -1105, -1105, -1105, 19667, -1105,
     715,   535, -1105,  7024,   705,  7200,   706, -1105, 11776, 10192,
   10192, 10192,  5616,  9664, -1105, -1105, -1105, -1105, -1105,   500,
   -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105,
   -1105, -1105, -1105, -1105,  7552, -1105, -1105, 17919,    80, 16360,
     384,   712,  7552, -1105, 11776, -1105, -1105, 19004,   386,   417,
     377, -1105, -1105, -1105, -1105, 19278,  2183, -1105, -1105, 19407,
   -1105,    17,    83, 11776, -1105,   731,   711, -1105,   624,   624,
   -1105, -1105, 18002, 12480, 12656, 18084, 12832, 13008, -1105, 13184,
   13360,   383, -1105,   649,   389,   405, -1105, -1105, -1105,  5616,
    9488, 18828,  9488, 18828,  8256, -1105,  5616,  9488, 18828, -1105,
    9488, 18828, -1105, -1105, -1105, -1105, -1105, 18828,   846,  5616,
   -1105, -1105, -1105, -1105, -1105,  9664,  9664, -1105, -1105, -1105,
   -1105,   345, 18828,  5616, -1105,    71,   713, 11776, -1105,  9488,
   -1105, 18828,  5616,  9488, -1105, 18828,  5616, 18828,    68, 15853,
      13, 15604,     7, 16442, -1105,   396, 11600,  7552,  7552,  7552,
    7552, -1105, -1105, -1105, 18166, 18828, 19071, -1105, -1105, -1105,
     720,  2183, -1105, -1105, -1105, -1105, -1105,   118, -1105,   119,
   -1105,   131, 18254,    77, -1105, -1105, -1105, 11776, 11776, 11776,
   11776, 11776, 11776, 11776, 11776, -1105, -1105, 17181, 14757, 14841,
   -1105, 17181, 14925, 15009,  5616, -1105,   714,   716, -1105, -1105,
     580, -1105,   535, 18828, 15093, -1105, 15177, -1105,  5616,  5616,
   -1105, -1105, 18828,   419,   723,   427,   726, 11776, -1105, -1105,
   -1105,    78, -1105, 11776,    83,   118,   118,   118,   118,   118,
     118,    83,  5440, -1105, -1105, -1105, -1105, -1105, 18336, 18418,
   18500, 18582, 18664, 18746,  5616,  5616,  5616,  5616, -1105,   728,
     729, -1105,  5616,  5616, -1105, -1105, -1105, -1105, 18828, -1105,
   18828, -1105, -1105, -1105, -1105, -1105, -1105, -1105,   747, -1105,
   11776, 11776, 11776, 11776, 11776, 11776, 17181, 17181, 17181, 17181,
   -1105, -1105, 17181, 17181
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   144,   471,   686,   687,   688,
     682,   683,   689,     0,   598,   134,   165,   566,   172,   568,
     598,     0,   171,   501,   499,   134,     0,     0,     0,   286,
     166,   204,   203,   680,     0,     0,     0,   202,     0,   170,
      69,   287,   349,   167,     0,     0,     0,   344,     0,     0,
     174,     0,     0,   615,   590,   690,   175,     0,   350,   560,
     496,     0,     0,     0,   189,   187,   437,   169,   569,   498,
       0,     0,     0,     0,   564,     0,     0,   173,     0,     0,
     145,     0,   681,     0,     0,   489,   168,   324,   562,   500,
     176,     0,     0,   739,     0,     0,   741,     0,   742,   743,
     631,     0,   740,   737,   639,   185,   738,     0,     0,     0,
       0,     4,     0,     5,    10,    11,    12,    47,    51,    52,
      58,     0,    45,    72,    13,    78,    14,    15,    16,    17,
      29,   546,   547,    23,    46,   186,   196,     0,   205,   653,
     197,    18,    31,    30,    20,     0,   281,    19,   649,    22,
      35,    32,    33,   195,   325,     0,   193,     0,     0,   646,
     348,     0,   643,   191,   365,   457,   448,   641,   194,     0,
       0,   192,   658,   637,   636,   640,   550,   548,     0,     0,
     647,   648,   652,   651,   650,     0,   549,     0,   659,   660,
     661,   684,   685,   642,   552,   551,   644,   645,     0,    28,
     568,   166,     0,     0,     0,     0,   569,     0,     0,     0,
       0,   646,   658,   548,   647,   648,   558,   549,   659,   660,
       0,     0,   599,   135,     0,   567,     0,   598,   490,     0,
     497,     0,    21,     0,   534,     0,   540,   142,   146,   158,
     152,   151,   160,   138,   150,   161,   147,   162,   136,   163,
     156,   149,   157,   155,   153,   154,   137,   139,   148,   159,
     164,   140,   143,     0,   141,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    70,
      72,   540,     0,     0,     0,     0,     0,     0,   504,     0,
     182,    40,     0,   316,     0,   315,   724,   619,   616,   617,
     618,     0,   561,   725,     7,   540,   347,   347,   444,   179,
     439,   180,   440,   441,   445,   446,   178,   177,   447,   437,
     530,     0,   352,   353,   355,     0,   438,   529,   357,   517,
       0,     0,     0,   183,   643,   634,   657,   635,     0,     0,
      43,     0,   565,   553,     0,   540,    44,   559,     0,   294,
     298,   295,   298,   563,     0,     0,     0,    57,   726,   728,
     629,   723,   722,     0,    75,    79,     0,     0,   536,     0,
       0,     0,   537,   582,     0,     0,   534,     0,   630,     0,
       6,   322,     0,   203,   323,     0,    49,     0,     9,    72,
      50,    53,    56,     0,    55,     0,     0,    73,     0,     0,
     501,   201,     0,   682,   325,   654,   209,     0,     0,     0,
     321,     0,     0,   342,     0,   335,   437,   457,   455,   456,
     454,   373,   459,   458,   462,   461,   463,     0,   452,   449,
     450,   453,     0,   494,     0,   491,     0,   638,    34,   620,
       0,     0,     0,     0,     0,     0,   727,     0,     0,     0,
       0,     0,     0,   628,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     404,   411,   412,   413,   408,   410,     0,     0,   406,   409,
     407,   405,     0,   415,   414,     0,     0,   540,   540,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    24,
      37,     0,     0,     0,    25,     0,    38,     0,   546,     0,
     541,   542,   545,   334,     0,     0,   223,     0,     0,   222,
       0,   231,     0,     0,     0,   229,     0,   239,     0,     0,
     237,     0,     0,     0,     0,   255,     0,   404,   251,     0,
       0,     0,     0,     0,   265,    26,   508,     0,   509,   511,
       0,   528,     0,   514,     0,     0,   181,    39,     0,   318,
       0,     0,     0,    41,     0,   190,   188,   442,   443,     0,
     438,   457,   437,   430,     0,   429,   532,     0,   127,   655,
     656,   363,     0,   184,     0,    42,     0,     0,   305,   296,
     297,   216,   215,    27,    77,    76,    80,     0,   691,     0,
       0,   676,     0,   678,   583,     0,     0,     0,     0,     0,
       0,     0,     0,   695,     8,     0,     0,     0,    48,    58,
       0,    54,     0,    66,     0,   125,     0,   120,     0,    87,
       0,     0,    93,   198,   325,     0,   211,     0,   208,   292,
     326,     0,   333,   339,     0,   337,   332,   422,     0,   424,
     428,     0,   460,   522,     0,   524,   464,   451,   420,   142,
     400,   146,   398,   152,   151,   150,   147,   402,   162,   163,
     149,   153,   137,   148,   164,   397,   379,   382,   380,   381,
     403,   392,   383,   396,   388,   386,   399,   387,   385,   390,
     395,   384,   389,   393,   394,   391,   401,     0,   376,     0,
     420,   377,   420,   374,     0,   493,     0,   488,   503,   719,
     718,   721,   730,   729,   734,   733,   715,   712,   713,   714,
     632,   702,   144,     0,   672,   673,   145,   671,   670,   626,
     706,   717,   711,   709,   720,   710,   708,   700,   705,   707,
     716,   699,   703,   704,   701,   627,     0,     0,     0,     0,
       0,     0,     0,     0,   732,   731,   736,   735,     0,     0,
       0,     0,     0,     0,     0,   693,   292,   609,   610,   612,
     614,     0,   601,     0,     0,     0,   598,   598,   219,     0,
     535,     0,     0,   555,     0,     0,     0,     0,   572,     0,
       0,     0,   232,     0,   578,     0,     0,   230,   240,     0,
       0,   238,     0,     0,   254,     0,   250,     0,     0,     0,
       0,   554,     0,   268,     0,   266,     0,   512,     0,   527,
     526,     0,   506,   625,   505,   317,   314,     0,     0,     0,
     669,   532,   358,   354,     0,     0,   533,   514,   356,     0,
     362,     0,     0,     0,   556,     0,   299,   692,   633,   677,
     538,   679,   539,   247,     0,     0,     0,   694,   245,   584,
       0,   697,   696,     0,     0,     0,     0,    59,    60,     0,
      62,    64,    68,    67,     0,   102,     0,     0,     0,    95,
       0,     0,    93,    65,   397,   379,   382,   380,   381,   390,
     389,   391,     0,   416,   417,    82,    81,    94,     0,     0,
     327,     0,     0,   289,     0,     0,   347,   343,     0,     0,
     437,   423,   464,   520,   519,   518,   521,   465,   472,   437,
     372,     0,   378,     0,   368,   369,   495,   492,     0,     0,
     133,   131,   132,   130,   129,   128,   667,   668,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   611,   613,
       0,   600,   165,   172,   171,   170,   167,   174,   175,   169,
     173,   168,   176,     0,     0,     0,     0,     0,   502,   214,
     544,   543,     0,   249,     0,     0,   221,     0,   220,     0,
     604,     0,     0,   227,     0,     0,   225,     0,   235,     0,
     233,     0,   263,   262,     0,   257,     0,     0,   253,     0,
     259,     0,   291,     0,     0,   510,   513,   514,   515,   516,
     313,     0,     0,   514,     0,   464,   532,   531,   418,   433,
     431,   364,   307,     0,     0,   306,   309,   557,     0,   300,
     303,     0,   248,     0,     0,     0,     0,   246,     0,     0,
       0,     0,     0,     0,    61,   126,   123,   103,   115,   109,
     108,   107,   117,   104,   118,   113,   106,   114,   112,   110,
     111,   105,   116,   119,     0,   122,   121,    90,    89,    88,
       0,     0,     0,   199,     0,   200,   327,   347,     0,     0,
       0,   320,   189,   187,   319,   347,   347,   328,   338,     0,
     425,   472,     0,     0,   366,   427,     0,   375,   420,   420,
     674,   675,     0,     0,     0,     0,     0,     0,   291,     0,
       0,     0,   602,   514,   658,   658,   218,   217,   224,     0,
       0,   571,     0,   570,     0,   603,     0,     0,   577,   228,
       0,   576,   226,   236,   234,   256,   252,   589,   258,     0,
      74,   288,   267,   264,   507,   540,   540,   434,   432,   359,
     360,   514,   419,     0,   311,     0,     0,     0,   301,     0,
     243,   586,     0,     0,   241,   585,     0,   698,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,    93,     0,
      93,    96,    99,    85,    84,    83,   347,   206,   212,   210,
     293,   347,   330,   329,   341,   345,   486,     0,   487,   474,
     477,     0,   473,     0,   421,   370,   371,     0,     0,     0,
       0,     0,     0,     0,     0,   293,   606,   575,     0,     0,
     605,   581,     0,     0,     0,   261,     0,     0,   436,   435,
     312,   310,     0,   304,     0,   244,     0,   242,     0,     0,
     124,    92,    91,     0,     0,     0,     0,     0,   207,   290,
     331,     0,   485,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   466,   468,   470,   367,   467,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   260,   621,
     622,   302,     0,     0,    98,   101,    97,   100,    86,   346,
     476,   478,   479,   482,   483,   484,   480,   481,   475,   469,
       0,     0,     0,     0,     0,     0,   574,   573,   580,   579,
     623,   624,   588,   587
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1105, -1105, -1105,     3,   -65,  2661, -1105,   497,   779, -1105,
   -1105, -1105,  -144,  -116, -1105,   278, -1105, -1105,  -145, -1105,
   -1105,    31,   621, -1105,  -573,  2971,   507,  -607, -1105,  -849,
   -1105, -1105, -1105,    30, -1105, -1105, -1105,   878, -1105,   947,
    -207, -1105, -1105,  -482,  2878, -1104,  -871, -1105, -1105,   344,
   -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105,   518,  1217,
   -1105,   815, -1105, -1105,   -96,  2513, -1105, -1105, -1105, -1105,
     559, -1105,  -120, -1105, -1105, -1105, -1105,   351, -1105, -1105,
   -1105,  -112, -1105,  -370,  -859, -1105, -1105, -1105, -1105, -1105,
    -402, -1105,   651, -1105, -1105, -1105, -1105, -1105,   340, -1105,
     231, -1105, -1105, -1105, -1105,   508, -1105, -1105, -1105, -1105,
     -10,  -420,  -169,  -837,  -946,  -637, -1105,    -4, -1105,    10,
     352,   -51,   597,   -50, -1105, -1105,  -367,  -857, -1105,  -334,
   -1105,  -172,  -338,  -330,  -597, -1105, -1105,    25,   221, -1105,
    -211,   792, -1105,  -163,   376,   115,  -428,  -806,  -628, -1105,
   -1105, -1105,  -619,  -540, -1105,  -789,   -16,    86, -1105,  -262,
    -522,  -556,   564, -1105, -1105, -1105, -1105,   961, -1105,   -17,
   -1105, -1105,    44, -1105,  -763, -1105, -1105,  1278,  1365, -1105,
   -1105, -1105, -1105,   -13, -1105,    42,  1588, -1105,  1938,  2301,
   -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105, -1105,  -491
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,   365,   112,   806,   114,   115,   116,   387,
     388,   117,   118,   119,   120,   394,   621,   869,   870,   121,
     122,   123,   399,   124,   125,   126,   366,   897,   628,   898,
     127,   128,  1065,   625,   626,   129,   130,   224,   262,   286,
     131,   264,   132,   320,   519,   133,   134,   307,   306,   135,
     136,   137,   138,   139,   140,   637,   901,   141,   142,   268,
     143,   276,   144,   814,   815,   210,   146,   147,   148,   149,
     589,   846,  1031,   150,   151,   842,  1026,   293,   294,   152,
     153,   154,   155,   409,   906,   156,   157,   414,   908,   909,
     415,   158,   211,  1251,   160,   161,   321,   322,   323,  1015,
     162,   335,   582,   839,   163,   164,  1203,   165,   166,   699,
     700,   893,   894,   895,  1019,   920,   417,   648,  1096,   649,
     576,   650,   325,   570,   432,   421,   427,   918,  1266,  1267,
     167,  1094,  1199,  1200,  1201,   168,   169,   434,   435,   705,
     170,   171,   229,   287,   288,   549,   550,   822,   327,   916,
     655,   656,   553,   328,   836,   837,   367,   370,   371,   509,
     510,   511,   212,   173,   174,   175,   176,   213,   178,   221,
     222,   771,   526,   979,   772,   773,   179,   214,   215,   182,
     183,   184,   336,   185,   406,   512,   217,   187,   218,   219,
     190,   191,   192,   193,   377,   194,   195,   196,   197,   198
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     216,   319,   391,   226,   225,   111,   775,   436,   227,   840,
     643,   233,   701,   412,   234,   324,   326,   486,   503,   541,
     812,   269,   271,   273,   892,   277,   915,   404,   980,   508,
     843,  1020,   912,  1071,   635,  1087,   292,   838,   295,   296,
    1066,  1077,  1013,   564,   301,   289,   302,   841,   303,  -286,
     651,   551,   607,   329,   330,  1091,   764,   234,   337,   339,
     341,   342,   343,   924,   871,   925,   347,  1147,   348,   392,
     819,   280,   534,   982,   508,   353,   554,  1092,   355,   337,
    1023,   520,   358,   587,   359,   567,  1196,   360,   361,   381,
     362,   308,   289,   375,   234,   337,   376,   378,   508,  1265,
     289,   975,   722,   289,   278,   551,   520,   279,   539,  1262,
    1262,   310,   653,   338,    21,   312,  1177,   581,  -287,   816,
    -308,  1196,    28,  1024,   402,   520,   405,   520,   568,   551,
     615,   616,    36,   520,   356,  1093,     3,   605,   508,   313,
     612,   385,   314,  -523,    62,   199,   834,  1265,   389,  1041,
     372,  -525,  1178,   608,   315,   384,   600,   608,  1150,   220,
    -525,   520,  1033,  -308,  -361,  -269,   439,   236,   613,    71,
      71,  -523,   914,   318,   602,  1197,  -525,   555,  1025,    87,
     223,   609,   601,  1238,   385,   765,  1198,  1112,  -525,   491,
     492,   493,  -270,   495,   347,   234,   376,   552,  -525,  1007,
     603,  1144,   726,  -523,   832,  1228,  1087,  1148,   558,    91,
     502,   393,   385,   948,  1192,  1193,  -523,  1186,  -308,   505,
    -525,  1198,   520,   337,  -525,   752,   753,  1151,   971,  -523,
    -525,   385,   487,  -525,   488,  1183,   281,  1253,   647,   385,
     385,   944,   385,  1263,  -276,   728,  -525,   442,   385,   385,
     505,   552,  -525,  -275,   505,   199,   949,  1255,   654,   428,
     396,   594,    24,   702,   899,   617,   228,  1254,   337,   903,
    -525,   722,   506,   308,  1070,   552,   904,  -523,  1042,   297,
     508,   508,  -523,   230,  1256,   442,  1257,  1258,   723,  1259,
    1260,   634,   337,   310,   505,  1017,   391,   312,   397,  -525,
     775,   724,   334,   343,   347,   443,  -666,  1216,  -666,   444,
     429,   817,   578,    60,   522,  1087,   528,   531,   579,   580,
    1250,   313,   430,   334,   314,    69,    62,   422,   398,  1244,
     725,  1246,   337,   910,   -71,   508,   315,   818,   298,   334,
     779,   431,   950,   443,  1113,  1229,  -665,   444,  -665,   827,
      89,   319,   597,   -71,   446,   318,   599,   299,   446,   911,
     604,  1220,   452,   450,   418,   505,   452,   784,   951,   596,
     455,   726,   -71,   236,   300,   423,   598,   727,   424,   508,
    -340,  1003,  1080,   627,   419,   629,  1149,  -336,   817,   265,
     425,   973,   640,  1002,   420,   234,   446,   447,   706,   448,
     449,   450,   -71,   451,   452,  -284,   489,  1004,   455,   426,
     490,  -336,  -274,   508,  1005,   462,   707,   281,   606,   610,
    -426,   466,   467,   468,   442,  1111,   902,   709,   710,   711,
     713,   715,   716,   304,   717,   718,   719,   720,   721,   817,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   745,  1175,  -271,   775,
     555,  1205,  1206,   337,   337,  1016,   645,   334,   305,   337,
     -70,   821,   337,   337,   337,   337,   755,   757,   708,   199,
     874,  -278,   443,  1043,   774,   872,   444,   871,   777,   -70,
     646,   784,   780,  -282,   781,   878,   555,  1018,   875,   786,
    -279,  -273,   234,   701,   788,   790,  1088,   319,   -70,  1044,
     794,   796,   334,   879,   968,  1072,   800,  1108,   747,   748,
    1124,   324,   326,   807,   749,   784,   809,   750,   751,   337,
     344,   784,  1072,  1073,   706,   446,   334,  -608,   -70,   820,
     450,   823,   451,   452,  1072,   295,  1125,   455,   828,   829,
    1181,  1190,  1188,  -607,   462,   345,   508,  1215,   308,   329,
     466,   467,   468,  -608,   329,   555,   172,  1072,  1240,   385,
    1243,   543,  1245,   337,  -277,  1072,   334,   508,   310,  -607,
     349,   351,   312,  1189,   780,  1284,  -662,   337,  -662,   337,
     172,   357,   172,  1286,   856,   780,   859,  -283,   861,   863,
    1252,   866,   864,   865,   234,  -285,   313,   337,  -272,   314,
     965,   379,   446,    42,   490,  -280,  -347,   450,   896,   896,
     452,   315,  -741,   395,   455,  -742,  -741,   596,  -595,  -742,
    1264,   907,   308,   775,  -743,  -665,  -347,  -665,  -743,    58,
     318,   329,   372,   172,   372,  -738,  -347,   172,   172,  -738,
     565,   566,   310,   159,    94,  -664,   312,  -664,  1292,  1293,
    1294,  1295,  1296,  1297,  -663,   442,  -663,   407,   416,  1046,
     728,   172,   636,   928,   408,   929,   172,   159,  1264,   159,
     313,  -592,   437,   314,   921,    62,   850,  1194,   852,  -591,
     438,   926,  -596,   496,  -597,   315,  -594,   508,  -593,   507,
     499,   397,   497,   504,   614,   572,   385,   334,   334,   513,
     583,   619,   515,   334,   318,   571,   334,   334,   334,   334,
     542,   561,   562,   443,   577,   586,   630,   444,   593,   644,
     159,   620,   641,   652,   159,   159,   657,   642,   746,  1079,
     508,   704,   452,   763,   782,   788,   940,   794,   943,   807,
     337,   946,   859,   783,  1099,   784,   785,   791,   159,   966,
     967,   802,  1086,   159,   805,  1089,   803,   808,   810,   337,
     811,   337,   972,   334,   974,   821,   446,   447,   774,   835,
     981,   450,   830,   451,   452,   172,   845,   844,   455,   992,
     993,   393,   854,   900,   917,   462,   860,   919,   505,   930,
     922,   466,   467,   468,  -144,   539,  -165,  -172,   337,  -171,
    -170,   931,   539,  -167,  -174,  -175,  -169,   334,  -173,  -145,
     937,  -168,   329,  -176,   970,   923,  1021,   936,   932,   994,
     996,   334,  1014,   334,  1072,  1103,   508,  1106,   933,   984,
     987,  1085,   934,   989,   991,   319,   935,   947,   172,  1022,
    1075,   334,  1027,   172,   319,  1081,  1100,  1101,  1076,  1139,
     442,   627,  1157,  1009,  1109,  1067,  1140,  1069,   896,   896,
    1141,   358,   159,   359,  1145,  1146,   361,   362,  1182,   910,
    1224,  1162,  1166,  1226,  1227,  1204,  1249,  1232,  1279,  1285,
    1280,   337,  1287,  1310,  1311,  1254,   386,   867,  1174,  1034,
    1036,   540,   624,   231,  1045,   618,   354,  1142,  1156,   825,
     610,   590,   833,  1098,   638,  1095,   569,  1289,   443,  1195,
    1090,   831,   444,  1298,  1291,  1102,  1078,   927,  1105,   401,
     172,   824,  1006,  1086,   337,   159,     0,   774,   508,   508,
     159,  1191,     0,     0,     0,     0,     0,     0,     0,   172,
       0,   713,   755,     0,     0,     0,     0,     0,     0,   172,
       0,     0,  1121,   177,  1123,     0,     0,     0,     0,  1128,
     391,   446,  1131,   391,     0,     0,   450,   263,   451,   452,
       0,     0,     0,   455,  1137,     0,     0,   177,     0,   177,
     462,   282,   283,   284,   334,     0,   703,     0,   468,     0,
       0,   329,     0,     0,     0,  1152,     0,     0,  1155,     0,
       0,   234,  1085,   334,     0,   334,     0,   159,     0,     0,
    1161,     0,  1165,     0,     0,  1167,  1169,  1171,  1173,     0,
     337,     0,     0,     0,     0,     0,   159,     0,     0,     0,
     177,     0,  1086,     0,   177,   177,   159,     0,     0,   539,
     539,   896,   334,   539,   539,     0,     0,     0,     0,  1184,
       0,  1185,     0,     0,     0,   539,     0,   539,   177,     0,
       0,     0,     0,   177,     0,   391,     0,     0,     0,     0,
    1202,   172,     0,     0,     0,     0,     0,   172,     0,     0,
    1121,  1123,     0,  1128,  1131,     0,  1161,  1165,   172,     0,
     172,     0,   410,     0,   413,     0,  1217,  1218,     0,  1219,
       0,   774,     0,  1221,  1222,     0,   433,  1223,     0,     0,
       0,  1085,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   337,   337,     0,   334,     0,     0,     0,     0,
       0,     0,     0,     0,  1233,     0,  1234,     0,     0,     0,
    1236,     0,   494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1242,   896,   896,   896,   896,   159,   172,
       0,     0,     0,   172,   159,     0,     0,     0,   334,     0,
       0,     0,   177,     0,   442,   159,     0,   159,   172,     0,
       0,     0,     0,     0,  1217,  1268,  1269,  1221,  1270,  1271,
    1272,  1273,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   514,   984,   987,  1034,  1036,     0,     0,
       0,   532,   533,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   548,     0,  1288,     0,     0,     0,     0,     0,
    1290,     0,   443,     0,     0,   177,   444,     0,     0,     0,
     177,     0,   270,   272,     0,     0,   159,     0,     0,     0,
     159,  1306,  1307,  1308,  1309,  1299,     0,     0,     0,  1312,
    1313,     0,   575,     0,   334,   159,     0,     0,     0,     0,
     180,     0,     0,   442,     0,     0,     0,  1306,  1307,  1308,
    1309,  1312,  1313,     0,     0,   446,   447,     0,   448,   449,
     450,     0,   451,   452,   180,     0,   180,   455,     0,     0,
       0,     0,     0,   461,   462,     0,     0,   465,     0,     0,
     466,   467,   468,     0,     0,     0,   374,   177,     0,   263,
       0,     0,     0,     0,     0,     0,     0,   963,     0,     0,
       0,   443,     0,     0,     0,   444,   177,     0,     0,     0,
       0,     0,     0,     0,   639,     0,   177,   180,     0,   413,
       0,   180,   180,     0,     0,     0,     0,   181,     0,   172,
       0,     0,   172,     0,     0,     0,   334,   334,     0,   698,
       0,     0,     0,     0,     0,   180,     0,     0,     0,     0,
     180,   181,     0,   181,   446,   447,     0,     0,   449,   450,
       0,   451,   452,     0,     0,     0,   455,     0,     0,     0,
       0,     0,     0,   462,     0,     0,     0,     0,   172,   466,
     467,   468,     0,     0,   172,   381,     0,     0,     0,    23,
      24,     0,     0,     0,     0,     0,     0,     0,   382,     0,
      31,   383,     0,   766,   181,     0,    37,     0,   181,   181,
       0,     0,     0,    42,     0,     0,   159,     0,     0,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,     0,     0,     0,     0,   181,   177,    58,
       0,    60,     0,    62,   177,  1082,     0,     0,  1083,     0,
     813,   384,     0,    69,   548,   177,     0,   177,     0,   180,
       0,     0,     0,     0,     0,   159,     0,   826,     0,     0,
       0,   159,    85,     0,     0,    87,   575,     0,    89,     0,
       0,   548,     0,     0,     0,     0,     0,     0,  1114,  1115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   172,
       0,   172,     0,     0,    94,     0,   172,     0,     0,   172,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
     172,     0,   180,   172,     0,     0,   177,   180,     0,   105,
     177,     0,     0,     0,     0,  1084,     0,   883,     0,     0,
       0,   722,     0,     0,     0,   177,   181,   172,     0,     0,
     186,     0,     0,     0,     0,   952,     0,   172,   953,   172,
       0,     0,     0,   954,     0,     0,   172,     0,     0,     0,
       0,     0,     0,   201,   186,     0,   186,     0,     0,     0,
       0,     0,     0,   955,     0,     0,   159,     0,   159,     0,
     956,     0,     0,   159,     0,     0,   159,     0,     0,     0,
     957,     0,     0,     0,   180,   159,     0,   159,   958,   181,
     159,     0,     0,   433,   181,     0,     0,     0,     0,     0,
     712,   714,     0,   180,     0,   959,     0,   186,     0,     0,
       0,   186,   186,   180,   159,     0,     0,   960,     0,     0,
       0,   726,     0,   172,   159,     0,   159,     0,   961,     0,
     172,     0,     0,   159,   962,   186,     0,     0,     0,     0,
     186,     0,     0,   172,     0,     0,   754,   756,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   172,   776,     0,
       0,     0,     0,     0,     0,     0,   172,     0,     0,     0,
     172,   181,     0,     0,     0,   789,     0,     0,     0,     0,
       0,   795,     0,     0,     0,     0,   799,     0,     0,     0,
     181,     0,     0,     0,     0,     0,     0,  1001,     0,     0,
     181,     0,     0,     0,   548,     0,   177,     0,     0,   177,
     159,     0,     0,     0,  1010,     0,     0,   159,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
     159,     0,  1030,     0,     0,   180,     0,     0,     0,     0,
       0,   180,   172,   172,   159,     0,     0,     0,     0,   186,
       0,     0,   180,   159,   180,   177,     0,   159,     0,     0,
       0,   177,     0,     0,   855,     0,   172,     0,     0,     0,
       0,     0,     0,   270,   374,     0,     0,     0,   172,   172,
     172,   172,     0,     0,     0,     0,   172,   172,   433,     0,
       0,     0,   381,     0,     0,   413,    23,    24,     0,     0,
       0,     0,     0,     0,     0,   382,     0,    31,   383,     0,
     698,     0,   186,    37,     0,   159,     0,   186,     0,     0,
      42,     0,   181,   180,     0,     0,     0,   180,   181,   159,
     159,     0,     0,     0,     0,     0,     0,     0,     0,   181,
       0,   181,   180,     0,     0,     0,    58,     0,    60,     0,
       0,     0,     0,   159,     0,     0,     0,     0,   384,     0,
      69,     0,     0,     0,     0,   159,   159,   159,   159,     0,
       0,     0,     0,   159,   159,     0,   177,     0,   177,    85,
     188,     0,    87,   177,     0,    89,   177,     0,     0,     0,
     813,     0,     0,     0,   186,   177,     0,   177,     0,     0,
     177,     0,     0,     0,   188,     0,   188,     0,     0,     0,
     181,     0,     0,   186,   181,  1030,   939,     0,   942,     0,
       0,   945,     0,   186,   177,     0,     0,     0,     0,   181,
     905,     0,     0,     0,   177,     0,   177,     0,     0,     0,
       0,     0,     0,   177,     0,     0,     0,     0,     0,     0,
       0,  -327,     0,     0,     0,  -327,  -327,   188,     0,     0,
       0,   188,   188,     0,  -327,     0,  -327,  -327,     0,     0,
       0,     0,  -327,     0,     0,     0,   413,     0,     0,  -327,
       0,     0,  -327,     0,     0,   188,     0,     0,     0,     0,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -327,     0,     0,  -327,     0,  -327,     0,  -327,
       0,  -327,  -327,     0,  -327,     0,     0,  -327,     0,  -327,
     177,     0,     0,   180,     0,     0,   180,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -327,     0,
     177,  -327,     0,     0,  -327,   186,     0,     0,     0,     0,
       0,   186,     0,     0,   177,     0,     0,     0,     0,     0,
       0,     0,   186,   177,   186,     0,     0,   177,     0,     0,
    -327,     0,   180,     0,     0,     0,     0,     0,   180,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,     0,  -327,     0,     0,     0,   188,
       0,  -327,     0,     0,     0,     0,     0,     0,     0,     0,
     181,     0,     0,   181,     0,     0,     0,     0,     0,     0,
       0,   712,   754,   485,     0,   177,  -662,     0,  -662,     0,
       0,     0,     0,   186,     0,     0,     0,   186,     0,   177,
     177,     0,     0,     0,     0,   381,     0,     0,     0,    23,
      24,     0,   186,     0,     0,     0,     0,     0,   382,   181,
      31,   383,   188,   177,     0,   181,    37,   188,     0,     0,
       0,     0,     0,    42,     0,   177,   177,   177,   177,     0,
       0,     0,     0,   177,   177,     0,     0,     0,     0,     0,
       0,     0,     0,   180,     0,   180,  1168,  1170,  1172,    58,
     180,    60,     0,   180,     0,  1082,     0,     0,  1083,     0,
       0,   384,   180,    69,   180,     0,     0,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    87,     0,     0,    89,     0,
       0,   180,     0,   189,   188,     0,     0,     0,     0,     0,
       0,   180,     0,   180,     0,     0,     0,     0,     0,     0,
     180,     0,     0,   188,    94,     0,     0,   189,     0,   189,
       0,     0,     0,   188,     0,     0,     0,     0,     0,     0,
     181,     0,   181,     0,     0,     0,     0,   181,     0,   105,
     181,     0,     0,   237,     0,     0,     0,     0,     0,   181,
       0,   181,     0,     0,   181,     0,     0,   238,   239,     0,
     240,     0,     0,     0,     0,   241,     0,     0,     0,     0,
     189,     0,     0,   242,   189,   189,     0,     0,   181,   243,
       0,     0,     0,   186,     0,   244,   186,   180,   181,   245,
     181,     0,   246,     0,   180,     0,     0,   181,   189,     0,
       0,     0,   247,   189,     0,     0,     0,   180,     0,   248,
     249,     0,     0,     0,     0,     0,     0,   250,     0,     0,
       0,   180,     0,     0,     0,     0,     0,   251,     0,     0,
     180,     0,   186,     0,   180,     0,   252,   253,   186,   254,
       0,   255,     0,   256,     0,   188,   257,     0,     0,     0,
     258,   188,     0,   259,     0,     0,   260,     0,     0,     0,
       0,     0,   188,   261,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,     0,     0,     0,     0,     0,
       0,   181,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   180,     0,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   145,   180,   180,   181,     0,
       0,   385,   189,  1028,     0,     0,     0,   181,     0,     0,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   145,
     180,   145,     0,   188,     0,     0,     0,   188,     0,     0,
       0,     0,   180,   180,   180,   180,     0,     0,     0,     0,
     180,   180,   188,   186,     0,   186,     0,     0,     0,     0,
     186,     0,     0,   186,     0,     0,     0,     0,     0,     0,
       0,     0,   186,     0,   186,   189,     0,   186,     0,   181,
     189,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   181,     0,     0,     0,     0,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
     145,   186,     0,   186,     0,   145,     0,   181,     0,     0,
     186,     0,     0,     0,     0,   237,     0,     0,     0,   181,
     181,   181,   181,     0,     0,     0,   442,   181,   181,   238,
     239,     0,   240,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,   113,     0,   242,     0,   189,     0,     0,
       0,   243,     0,     0,     0,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,     0,   189,   232,     0,   235,
       0,     0,     0,     0,   247,     0,   189,     0,     0,     0,
       0,   248,   249,     0,   443,     0,     0,   186,   444,   250,
       0,     0,     0,     0,   186,     0,     0,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,   186,   252,   253,
       0,   254,     0,   255,   145,   256,     0,     0,   257,     0,
     346,   186,   258,   188,     0,   259,   188,     0,   260,     0,
     186,     0,     0,     0,   186,   261,     0,   446,   447,     0,
     448,   449,   450,     0,   451,   452,   453,     0,   113,   455,
       0,     0,     0,   380,     0,   461,   462,     0,     0,   465,
       0,     0,   466,   467,   468,     0,     0,     0,     0,     0,
       0,     0,   188,   469,     0,     0,     0,   145,   188,     0,
       0,     0,   145,     0,     0,   285,     0,     0,     0,     0,
       0,     0,   186,     0,     0,     0,     0,     0,   189,     0,
       0,     0,     0,     0,   189,     0,   186,   186,     0,     0,
       0,     0,     0,     0,     0,   189,     0,   189,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     186,     0,     0,     0,     0,     0,     0,     0,     0,   440,
       0,     0,   186,   186,   186,   186,   441,     0,     0,     0,
     186,   186,     0,     0,     0,     0,     0,     0,   442,   145,
       0,     0,   498,   631,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
       0,     0,     0,     0,     0,     0,   189,     0,   145,     0,
     189,     0,     0,   188,     0,   188,     0,     0,     0,   632,
     188,     0,     0,   188,     0,   189,     0,   291,     0,     0,
       0,     0,   188,     0,   188,     0,   443,   188,     0,     0,
     444,     0,     0,     0,     0,   545,     0,     0,     0,     0,
     556,   340,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   188,   445,   188,     0,     0,     0,     0,     0,     0,
     188,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     447,     0,   448,   449,   450,     0,   451,   452,   453,     0,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,   633,   466,   467,   468,     0,     0,     0,
     290,     0,     0,   237,     0,   469,     0,   113,     0,     0,
     145,     0,     0,     0,     0,     0,   145,   238,   239,     0,
     240,     0,     0,     0,   290,   241,   113,   145,     0,   145,
       0,     0,     0,   242,   350,   352,   113,   188,     0,   243,
       0,     0,     0,     0,   188,   244,     0,     0,     0,   245,
       0,     0,   246,     0,     0,     0,     0,   188,     0,     0,
       0,     0,   247,     0,     0,     0,     0,     0,   390,   248,
     249,   188,     0,     0,     0,     0,     0,   250,     0,     0,
     188,     0,     0,     0,   188,     0,   189,   251,     0,   189,
       0,     0,     0,     0,     0,     0,   252,   253,   145,   254,
       0,   255,   145,   256,     0,     0,   257,     0,     0,     0,
     258,   546,     0,   259,     0,     0,   260,   145,     0,     0,
       0,     0,     0,   261,     0,     0,   516,     0,   521,   525,
     527,   530,     0,     0,     0,   189,     0,     0,     0,     0,
       0,   189,   188,     0,     0,     0,     0,     0,     0,     0,
     557,     0,   559,     0,     0,     0,   188,   188,   556,   563,
       0,     0,     0,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,   547,     0,   804,     0,   500,     0,     0,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   188,   188,   188,   188,     0,     0,     0,   585,
     188,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   591,   592,     0,     0,     0,     0,     0,   290,
     290,   290,   290,   290,   290,     0,     0,   535,   538,     0,
       0,     0,     0,     0,   544,     0,     0,     0,     0,     0,
       0,     0,     0,   290,     0,   290,   853,     0,     0,     0,
     858,     0,   290,     0,     0,     0,   189,     0,   189,     0,
       0,     0,     0,   189,     0,   113,   189,     0,     0,     0,
       0,     0,     0,     0,     0,   189,     0,   189,     0,     0,
     189,     0,     0,     0,     0,   237,     0,     0,     0,     0,
       0,     0,   290,     0,     0,     0,     0,     0,   145,   238,
     239,   145,   240,   442,   189,   290,   290,   241,     0,     0,
       0,     0,     0,     0,   189,   242,   189,     0,     0,     0,
       0,   243,     0,   189,     0,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,     0,     0,   145,     0,     0,
       0,   248,   249,   145,     0,     0,     0,     0,     0,   250,
     778,   443,     0,     0,     0,   444,     0,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,     0,   252,   253,
     792,   254,     0,   255,   797,   256,   798,     0,   257,   801,
       0,     0,   258,   573,     0,   259,     0,     0,   260,     0,
     189,     0,     0,     0,     0,   261,     0,   189,     0,     0,
       0,     0,     0,     0,   446,   447,     0,   448,   449,   450,
     189,   451,   452,   453,     0,     0,   455,   456,   457,     0,
     459,   460,   461,   462,   189,     0,   465,   440,     0,   466,
     467,   468,     0,   189,   441,     0,   995,   189,     0,   998,
     469,     0,     0,   290,     0,   574,   442,   523,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
     145,     0,   524,   290,     0,   145,     0,   290,   145,   290,
       0,     0,   290,     0,     0,     0,     0,   145,     0,   145,
       0,     0,   145,     0,     0,  1032,     0,     0,     0,     0,
       0,  1037,     0,     0,     0,   189,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,   145,     0,   444,   189,
     189,     0,     0,     0,     0,     0,   145,     0,   145,     0,
       0,     0,     0,     0,     0,   145,     0,     0,     0,     0,
       0,     0,     0,   189,     0,   520,     0,   440,   560,     0,
     445,     0,     0,     0,   441,   189,   189,   189,   189,     0,
       0,     0,     0,   189,   189,     0,   442,   446,   447,     0,
     448,   449,   450,     0,   451,   452,   453,     0,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   466,   467,   468,     0,   385,     0,     0,     0,
       0,     0,     0,   469,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,   556,     0,   556,   145,
       0,     0,     0,   556,   443,     0,   556,     0,   444,     0,
       0,     0,   145,     0,     0,  1135,     0,  1136,     0,     0,
    1138,     0,     0,     0,     0,     0,   145,   976,   978,     0,
       0,     0,     0,   983,   986,   145,     0,   988,   990,   145,
     445,     0,     0,     0,  1154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1160,     0,  1164,   446,   447,     0,
     448,   449,   450,   858,   451,   452,   453,     0,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   466,   467,   468,     0,     0,     0,     0,     0,
       0,     0,     0,   469,     0,     0,     0,   145,     0,     0,
       0,     0,     0,   525,     0,     0,     0,     0,     0,     0,
       0,   145,   145,     0,     0,     0,     0,     0,     0,   442,
     290,   290,     0,     0,     0,     0,   290,   290,     0,     0,
     290,   290,     0,     0,     0,   145,     0,     0,     0,     0,
    1000,     0,     0,     0,     0,     0,     0,   145,   145,   145,
     145,     0,     0,     0,     0,   145,   145,     0,     0,     0,
    1225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1230,     0,  1029,   443,     0,     0,
       0,   444,     0,  1235,     0,     0,     0,  1237,     0,     0,
       0,     0,     0,     0,     0,   290,   290,     0,     0,     0,
       0,     0,     0,     0,  1116,  1117,     0,     0,     0,     0,
    1118,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,  1129,     0,     0,  1132,     0,  1133,     0,  1134,
     446,   447,     0,   448,   449,   450,     0,   451,   452,   453,
       0,   454,   455,   456,   457,  1278,   459,   460,   461,   462,
     463,   464,   465,     0,     0,   466,   467,   468,     0,  1160,
    1164,     0,     0,     0,     0,     0,   469,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,   290,   290,     0,
      13,     0,     0,   290,    17,   538,     0,     0,   200,     0,
       0,     0,   538,   308,     0,   290,     0,     0,   290,     0,
     290,   201,   290,     0,     0,     0,   202,   203,     0,     0,
     204,     0,     0,   310,     0,  1143,     0,   312,     0,     0,
       0,   205,     0,     0,    47,    48,     0,     0,     0,     0,
      52,     0,    53,    54,     0,     0,     0,     0,     0,     0,
       0,   313,  1158,    59,   314,    61,    62,    63,     0,     0,
       0,     0,    66,     0,   206,     0,   315,     0,     0,     0,
       0,   440,    74,     0,    76,     0,    78,     0,   441,     0,
       0,     0,     0,  1231,     0,   318,     0,     0,     0,    88,
     442,   289,     0,     0,     0,     0,   976,   978,   983,   986,
       0,    93,     0,     0,     0,     0,   529,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,   443,   108,
    -351,   209,   444,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   290,     0,     0,   520,
       0,     0,     0,     0,   445,     0,     0,     0,     0,   290,
     290,   290,   290,     0,     0,     0,     0,     0,     0,     0,
       0,   446,   447,     0,   448,   449,   450,     0,   451,   452,
     453,     0,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,   466,   467,   468,     0,
     385,     0,     0,     0,     0,     0,     0,   469,     0,   538,
     538,     0,     0,   538,   538,     0,     0,     0,     0,     0,
       0,     0,     0,  1281,     0,   538,     0,   538,    -2,     4,
       0,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,    14,    15,    16,    17,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,     0,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   -69,     0,    40,    41,    42,     0,
      43,  -347,     0,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,   -69,    53,    54,     0,    55,    56,    57,
       0,  -347,     0,     0,    58,    59,    60,    61,    62,    63,
      64,  -347,   -69,    65,    66,    67,    68,     0,    69,    70,
      71,     0,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,    82,    83,    84,    85,    86,     0,
      87,    88,   -69,    89,    90,     0,     0,    91,     0,    92,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,  -693,     0,    13,    14,
      15,    16,    17,  -693,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,  -693,    28,    29,  -693,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     -69,     0,    40,    41,    42,     0,    43,  -347,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -347,     0,     0,
      58,    59,    60,    61,     0,    63,    64,  -347,   -69,    65,
      66,    67,    68,  -693,    69,    70,    71,  -693,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,     0,  -693,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,  -693,    97,  -693,
    -693,  -693,  -693,  -693,  -693,  -693,     0,  -693,  -693,  -693,
    -693,  -693,  -693,  -693,  -693,  -693,  -693,  -693,  -693,   104,
     105,  -693,  -693,  -693,     0,   107,  -693,   108,     0,   109,
       0,   363,  -693,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,    14,    15,    16,    17,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,     0,    30,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,   -69,     0,    40,    41,
      42,     0,    43,  -347,     0,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,   -69,    53,    54,     0,    55,
      56,    57,     0,  -347,     0,     0,    58,    59,    60,    61,
      62,    63,    64,  -347,   -69,    65,    66,    67,    68,     0,
      69,    70,    71,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,    82,    83,    84,    85,
      86,     0,    87,    88,   -69,    89,    90,     0,     0,    91,
       0,    92,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,   105,     0,     0,   106,
       0,   107,   364,   108,     0,   109,     0,     4,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    14,    15,    16,    17,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
       0,    30,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,   -69,     0,    40,    41,    42,     0,    43,  -347,
       0,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,   -69,    53,    54,     0,    55,    56,    57,     0,  -347,
       0,     0,    58,    59,    60,    61,    62,    63,    64,  -347,
     -69,    65,    66,    67,    68,     0,    69,    70,    71,     0,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,    82,    83,    84,    85,    86,     0,    87,    88,
     -69,    89,    90,     0,     0,    91,     0,    92,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,   595,   108,
       0,   109,     0,   622,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -69,     0,
      40,    41,    42,     0,    43,  -347,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -347,     0,     0,    58,    59,
      60,    61,    62,    63,    64,  -347,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,   105,     0,
       0,   106,     0,   107,   623,   108,     0,   109,     0,     4,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,    14,    15,    16,    17,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,     0,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   -69,     0,    40,    41,    42,     0,
      43,  -347,     0,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,   -69,    53,    54,     0,    55,    56,    57,
       0,  -347,     0,     0,    58,    59,    60,    61,    62,    63,
      64,  -347,   -69,    65,    66,    67,    68,     0,    69,    70,
      71,     0,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,    82,    83,    84,    85,    86,     0,
      87,    88,   -69,    89,    90,     0,     0,    91,     0,    92,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
     873,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     -69,     0,    40,    41,    42,     0,    43,  -347,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -347,     0,     0,
      58,    59,    60,    61,   379,    63,    64,  -347,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
     105,     0,     0,   106,     0,   107,     0,   108,     0,   109,
       0,     4,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,    14,    15,    16,    17,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,     0,    30,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,   -69,     0,    40,    41,
      42,     0,    43,  -347,     0,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,   -69,    53,    54,     0,    55,
      56,    57,     0,  -347,     0,     0,    58,    59,    60,    61,
      62,    63,    64,  -347,   -69,    65,    66,    67,    68,     0,
      69,    70,    71,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,    82,    83,    84,    85,
      86,     0,    87,    88,   -69,    89,    90,     0,     0,    91,
       0,    92,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,   105,     0,     0,   106,
       0,   107,     0,   108,     0,   109,     0,     4,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    14,    15,    16,    17,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
       0,    30,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,   -69,     0,    40,    41,    42,     0,    43,  -347,
       0,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,   -69,    53,    54,     0,    55,    56,    57,     0,  -347,
       0,     0,    58,    59,    60,    61,     0,    63,    64,  -347,
     -69,    65,    66,    67,    68,     0,    69,    70,    71,     0,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,    82,    83,    84,    85,    86,     0,    87,    88,
     -69,    89,    90,     0,     0,    91,     0,    92,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,   787,    39,   -69,     0,
      40,    41,    42,     0,    43,  -347,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -347,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -347,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,   105,     0,
       0,   106,     0,   107,     0,   108,     0,   109,     0,     4,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,    14,    15,    16,    17,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,     0,    30,     0,    31,    32,    33,    34,    35,
      36,    37,   793,    39,   -69,     0,    40,    41,    42,     0,
      43,  -347,     0,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,   -69,    53,    54,     0,    55,    56,    57,
       0,  -347,     0,     0,    58,    59,    60,    61,     0,    63,
      64,  -347,   -69,    65,    66,    67,    68,     0,    69,    70,
      71,     0,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,    82,    83,    84,    85,    86,     0,
      87,    88,   -69,    89,    90,     0,     0,    91,     0,    92,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,  1120,    39,
     -69,     0,    40,    41,    42,     0,    43,  -347,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -347,     0,     0,
      58,    59,    60,    61,     0,    63,    64,  -347,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
     105,     0,     0,   106,     0,   107,     0,   108,     0,   109,
       0,     4,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,    14,    15,    16,    17,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,     0,    30,     0,    31,    32,    33,
      34,    35,    36,    37,  1122,    39,   -69,     0,    40,    41,
      42,     0,    43,  -347,     0,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,   -69,    53,    54,     0,    55,
      56,    57,     0,  -347,     0,     0,    58,    59,    60,    61,
       0,    63,    64,  -347,   -69,    65,    66,    67,    68,     0,
      69,    70,    71,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,    82,    83,    84,    85,
      86,     0,    87,    88,   -69,    89,    90,     0,     0,    91,
       0,    92,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,   105,     0,     0,   106,
       0,   107,     0,   108,     0,   109,     0,     4,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,    14,    15,    16,    17,     0,    18,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
       0,    30,     0,    31,    32,    33,    34,    35,    36,    37,
    1127,    39,   -69,     0,    40,    41,    42,     0,    43,  -347,
       0,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,   -69,    53,    54,     0,    55,    56,    57,     0,  -347,
       0,     0,    58,    59,    60,    61,     0,    63,    64,  -347,
     -69,    65,    66,    67,    68,     0,    69,    70,    71,     0,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,    82,    83,    84,    85,    86,     0,    87,    88,
     -69,    89,    90,     0,     0,    91,     0,    92,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,   105,     0,     0,   106,     0,   107,     0,   108,
       0,   109,     0,     4,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,    14,    15,    16,
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,  1130,    39,   -69,     0,
      40,    41,    42,     0,    43,  -347,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -69,    53,    54,
       0,    55,    56,    57,     0,  -347,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -347,   -69,    65,    66,    67,
      68,     0,    69,    70,    71,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    88,   -69,    89,    90,     0,
       0,    91,     0,    92,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,   105,     0,
       0,   106,     0,   107,     0,   108,     0,   109,     0,     4,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,    14,    15,    16,    17,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
    1153,    29,     0,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   -69,     0,    40,    41,    42,     0,
      43,  -347,     0,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,   -69,    53,    54,     0,    55,    56,    57,
       0,  -347,     0,     0,    58,    59,    60,    61,     0,    63,
      64,  -347,   -69,    65,    66,    67,    68,     0,    69,    70,
      71,     0,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,    82,    83,    84,    85,    86,     0,
      87,    88,   -69,    89,    90,     0,     0,    91,     0,    92,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,   105,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,     4,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,    14,
      15,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,  1159,    39,
     -69,     0,    40,    41,    42,     0,    43,  -347,     0,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,   -69,
      53,    54,     0,    55,    56,    57,     0,  -347,     0,     0,
      58,    59,    60,    61,     0,    63,    64,  -347,   -69,    65,
      66,    67,    68,     0,    69,    70,    71,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    87,    88,   -69,    89,
      90,     0,     0,    91,     0,    92,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
     105,     0,     0,   106,     0,   107,     0,   108,     0,   109,
       0,     4,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,    14,    15,    16,    17,     0,
      18,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,     0,    30,     0,    31,    32,    33,
      34,    35,    36,    37,  1163,    39,   -69,     0,    40,    41,
      42,     0,    43,  -347,     0,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,   -69,    53,    54,     0,    55,
      56,    57,     0,  -347,     0,     0,    58,    59,    60,    61,
       0,    63,    64,  -347,   -69,    65,    66,    67,    68,     0,
      69,    70,    71,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,    82,    83,    84,    85,
      86,     0,    87,    88,   -69,    89,    90,     0,     0,    91,
       0,    92,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,   105,     0,     0,   106,
       0,   107,     0,   108,     0,   109,     0,   913,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,     0,    16,    17,     0,    18,     0,   200,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,   309,
       0,   201,     0,     0,     0,    33,   202,   203,     0,     0,
     204,    39,     0,     0,     0,   311,     0,     0,    43,     0,
       0,   205,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,    67,   206,     0,     0,     0,     0,     0,
       0,     0,    74,   316,    76,    77,    78,   317,     0,    80,
       0,     0,    82,     0,     0,     0,    86,     0,     0,    88,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,   660,     0,    13,     0,     0,    16,
      17,   662,    18,     0,   200,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   201,     0,     0,
       0,    33,   202,   203,     0,     0,   204,    39,     0,     0,
       0,    41,     0,     0,    43,     0,   667,   205,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    93,   537,   471,
     472,   473,   474,   475,     0,     0,   478,   479,   480,   481,
       0,   483,   484,     0,   884,   885,   886,   887,   888,   680,
       0,   681,     0,   100,     0,   682,   683,   684,   685,   686,
     687,   688,   889,   690,   691,   102,   890,   104,     0,   693,
     694,   891,   696,   208,     0,   108,     0,   209,     0,     0,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,    14,     0,    16,    17,     0,    18,     0,
     200,    20,    21,    22,     0,     0,     0,     0,    27,     0,
      28,    29,     0,   201,     0,     0,     0,    33,    34,    35,
      36,     0,    38,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   205,     0,     0,    47,    48,     0,    49,
      50,    51,    52,     0,    53,    54,     0,    55,    56,    57,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,    67,   206,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,    82,     0,     0,     0,    86,     0,
       0,    88,     0,     0,    90,     0,     0,    91,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   107,
       0,   108,     0,   109,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   200,     0,     0,    22,
     400,    24,     0,     0,     0,     0,     0,    29,     0,   201,
       0,     0,     0,    33,   202,   203,     0,     0,   204,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   205,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,    60,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   206,     0,    69,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   207,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
       0,     0,     0,   106,     0,   208,     0,   108,     0,   209,
       0,     0,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,     0,   200,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   201,     0,     0,     0,    33,
     202,   203,     0,     0,   204,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   205,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   206,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   207,     0,    80,     0,     0,    82,   331,   332,     0,
      86,   368,     0,    88,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,   369,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,     0,     0,     0,   106,
       0,   208,     0,   108,     0,   209,     0,     0,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,     0,    16,    17,     0,    18,     0,   200,     0,
       0,    22,     0,   767,     0,     0,     0,     0,     0,    29,
       0,   201,     0,     0,     0,    33,   202,   203,     0,     0,
     204,    39,     0,   768,     0,    41,     0,     0,    43,     0,
       0,   205,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,    67,   206,     0,   769,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,   207,     0,    80,
       0,     0,    82,     0,     0,     0,    86,     0,     0,    88,
       0,   770,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   200,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   201,     0,     0,
       0,    33,   202,   203,     0,     0,   204,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   205,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,   331,
     332,     0,    86,   368,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,     0,     0,
       0,   106,     0,   208,     0,   108,   849,   209,     0,     0,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,    16,    17,     0,    18,     0,
     200,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    29,     0,   201,     0,     0,     0,    33,   202,   203,
       0,     0,   204,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   205,     0,     0,    47,    48,     0,     0,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,    67,   206,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,   207,
       0,    80,     0,     0,    82,   331,   332,     0,    86,   368,
       0,    88,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   208,
       0,   108,   851,   209,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   200,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   201,
       0,     0,     0,    33,   202,   203,     0,     0,   204,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   205,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   206,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   207,     0,    80,     0,     0,
      82,   331,   332,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
     333,     0,     0,   106,     0,   208,     0,   108,     0,   209,
       0,     0,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,     0,   200,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   201,     0,     0,     0,    33,
     202,   203,     0,     0,   204,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   205,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   206,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   207,     0,    80,     0,     0,    82,   331,   332,     0,
      86,     0,     0,    88,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,     0,     0,     0,   106,
       0,   208,     0,   108,   868,   209,     0,     0,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,     0,    16,    17,     0,    18,     0,   200,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    29,
       0,   201,     0,     0,     0,    33,   202,   203,     0,     0,
     204,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   205,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,  1008,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,    67,   206,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,   207,     0,    80,
       0,     0,    82,   331,   332,     0,    86,     0,     0,    88,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   200,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   201,     0,     0,
       0,    33,   202,   203,     0,     0,   204,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   205,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
     266,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,   267,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,     0,     0,
       0,   106,     0,   208,     0,   108,     0,   209,     0,     0,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,    16,    17,     0,    18,     0,
     200,     0,     0,    22,     0,   274,     0,     0,     0,     0,
       0,    29,     0,   201,     0,     0,     0,    33,   202,   203,
       0,     0,   204,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   205,     0,     0,    47,    48,     0,     0,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,    67,   206,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,   207,
       0,    80,     0,     0,    82,     0,     0,     0,    86,     0,
       0,    88,     0,   275,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   208,
       0,   108,     0,   209,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   200,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   201,
       0,     0,     0,    33,   202,   203,     0,     0,   204,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   205,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   206,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   207,     0,    80,     0,     0,
      82,   331,   332,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
       0,     0,     0,   106,     0,   208,     0,   108,     0,   209,
       0,     0,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,     0,   200,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   201,     0,     0,     0,    33,
     202,   203,     0,     0,   204,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   205,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   206,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   207,     0,    80,     0,     0,    82,     0,     0,     0,
      86,     0,     0,    88,     0,     0,    90,     0,     0,     0,
       0,     0,   267,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,     0,     0,     0,   106,
       0,   208,     0,   108,     0,   209,   373,     0,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,     0,    16,    17,     0,    18,     0,   200,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    29,
       0,   201,     0,     0,     0,    33,   202,   203,     0,     0,
     204,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   205,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,    67,   206,  -737,     0,     0,     0,  -737,
       0,     0,    74,    75,    76,    77,    78,   207,     0,    80,
       0,     0,    82,     0,     0,     0,    86,     0,     0,    88,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   200,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   201,     0,     0,
       0,    33,   202,   203,     0,     0,   204,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   205,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,   267,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,     0,     0,
       0,   106,     0,   208,     0,   108,     0,   209,     0,     0,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,    16,    17,     0,    18,     0,
     200,     0,     0,    22,     0,     0,     0,     0,     0,     0,
     289,    29,     0,   201,     0,     0,     0,    33,   202,   203,
       0,     0,   204,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   205,     0,     0,    47,    48,     0,     0,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,    67,   206,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,   207,
       0,    80,     0,     0,    82,     0,     0,     0,    86,     0,
       0,    88,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   107,
       0,   108,     0,   209,     0,     0,   110,     5,     6,     7,
       8,     9,   403,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,    19,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   201,
       0,     0,     0,    33,   202,   203,     0,     0,   204,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   205,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   207,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,    87,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
       0,     0,     0,   106,     0,   208,     0,   108,     0,   209,
       0,     0,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,     0,   200,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   201,     0,     0,     0,    33,
     202,   203,     0,     0,   204,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   205,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   206,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   207,     0,    80,     0,     0,    82,     0,     0,     0,
      86,     0,     0,    88,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,     0,     0,     0,   106,
       0,   208,     0,   108,     0,   209,   373,     0,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,     0,    16,    17,     0,    18,     0,   200,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    29,
       0,   201,     0,     0,     0,    33,   202,   203,     0,     0,
     204,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   205,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,    67,   206,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,   207,     0,    80,
       0,     0,    82,     0,     0,     0,    86,     0,     0,    88,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,   847,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   200,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   201,     0,     0,
       0,    33,   202,   203,     0,     0,   204,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   205,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,     0,     0,
       0,   106,     0,   208,     0,   108,     0,   209,   857,     0,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,    16,    17,     0,    18,     0,
     200,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    29,     0,   201,     0,     0,     0,    33,   202,   203,
       0,     0,   204,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   205,     0,     0,    47,    48,     0,     0,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,    67,   206,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,   207,
       0,    80,     0,     0,    82,     0,     0,     0,    86,     0,
       0,    88,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   208,
       0,   108,     0,   209,   862,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   200,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   201,
       0,     0,     0,    33,   202,   203,     0,     0,   204,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   205,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   206,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   207,     0,    80,     0,     0,
      82,     0,     0,     0,    86,  1068,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
       0,     0,     0,   106,     0,   208,     0,   108,     0,   209,
       0,     0,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,     0,   200,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   201,     0,     0,     0,    33,
     202,   203,     0,     0,   204,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   205,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   206,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   207,     0,    80,     0,     0,    82,     0,     0,     0,
      86,  1241,     0,    88,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,     0,     0,     0,   106,
       0,   208,     0,   108,     0,   209,     0,     0,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,     0,    16,    17,     0,    18,     0,   200,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    29,
       0,   201,     0,     0,     0,    33,   202,   203,     0,     0,
     204,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   205,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,    67,   206,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,   207,     0,    80,
       0,     0,    82,     0,     0,     0,    86,     0,     0,    88,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   200,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,   309,     0,   201,     0,     0,
       0,    33,   202,   203,     0,     0,   204,    39,     0,     0,
       0,   311,     0,     0,    43,     0,     0,   205,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,   316,
      76,    77,    78,   317,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,     0,     0,
       0,   106,     0,   208,     0,   108,     0,   209,     0,     0,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,    16,    17,     0,    18,     0,
     200,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    29,     0,   201,     0,     0,     0,    33,   202,   203,
       0,     0,   938,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   205,     0,     0,    47,    48,     0,     0,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,    67,   206,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,   207,
       0,    80,     0,     0,    82,     0,     0,     0,    86,     0,
       0,    88,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   208,
       0,   108,     0,   209,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   200,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   201,
       0,     0,     0,    33,   202,   203,     0,     0,   941,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   205,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   206,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   207,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
       0,     0,     0,   106,     0,   208,     0,   108,     0,   209,
       0,     0,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,     0,   200,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   201,     0,     0,     0,    33,
     202,   203,     0,     0,  1208,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   205,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   206,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   207,     0,    80,     0,     0,    82,     0,     0,     0,
      86,     0,     0,    88,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,     0,     0,     0,   106,
       0,   208,     0,   108,     0,   209,     0,     0,   110,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,     0,    16,    17,     0,    18,     0,   200,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    29,
       0,   201,     0,     0,     0,    33,   202,   203,     0,     0,
    1209,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   205,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,    67,   206,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,   207,     0,    80,
       0,     0,    82,     0,     0,     0,    86,     0,     0,    88,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,   102,
     103,   104,     0,     0,     0,   106,     0,   208,     0,   108,
       0,   209,     0,     0,   110,     5,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    13,     0,     0,    16,
      17,     0,    18,     0,   200,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   201,     0,     0,
       0,    33,   202,   203,     0,     0,  1211,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   205,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,    67,
     206,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,   207,     0,    80,     0,     0,    82,     0,
       0,     0,    86,     0,     0,    88,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   102,   103,   104,     0,     0,
       0,   106,     0,   208,     0,   108,     0,   209,     0,     0,
     110,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,    16,    17,     0,    18,     0,
     200,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    29,     0,   201,     0,     0,     0,    33,   202,   203,
       0,     0,  1212,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   205,     0,     0,    47,    48,     0,     0,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,    67,   206,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,   207,
       0,    80,     0,     0,    82,     0,     0,     0,    86,     0,
       0,    88,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,   103,   104,     0,     0,     0,   106,     0,   208,
       0,   108,     0,   209,     0,     0,   110,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,     0,   200,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   201,
       0,     0,     0,    33,   202,   203,     0,     0,  1213,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   205,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   206,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   207,     0,    80,     0,     0,
      82,     0,     0,     0,    86,     0,     0,    88,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,   102,   103,   104,
       0,     0,     0,   106,     0,   208,     0,   108,     0,   209,
       0,     0,   110,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,     0,   200,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   201,     0,     0,     0,    33,
     202,   203,     0,     0,  1214,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   205,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,   442,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   206,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   207,     0,    80,     0,     0,    82,     0,     0,     0,
      86,     0,     0,    88,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,   444,     0,
       0,     0,    95,    96,    97,    98,    99,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   102,   103,   104,     0,     0,     0,   106,
     445,   208,     0,   108,     0,   209,     0,     0,   110,     6,
       7,     8,     9,    10,    11,    12,     0,   446,   447,    13,
     448,   449,   450,    17,   451,   452,   453,   200,   454,   455,
     456,   457,   308,   459,   460,   461,   462,   463,     0,   465,
     201,     0,   466,   467,   468,   202,   203,     0,     0,   204,
       0,     0,   310,   469,     0,     0,   312,     0,     0,     0,
     205,     0,     0,    47,    48,     0,     0,     0,     0,    52,
       0,    53,    54,     0,     0,     0,     0,     0,     0,     0,
     313,     0,    59,   314,    61,    62,    63,     0,     0,     0,
       0,    66,     0,   206,     0,   315,     0,     0,     0,     0,
       0,    74,     0,    76,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,   318,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   658,     0,   659,     0,    95,    96,    97,
      98,    99,     0,     0,   660,     0,   100,     0,     0,   661,
     239,   662,   663,     0,     0,   101,     0,   664,   102,   103,
     104,     0,     0,     0,   106,   242,   208,   201,   108,     0,
     209,   243,     0,   110,     0,     0,     0,   665,     0,     0,
       0,   245,     0,     0,   666,     0,   667,     0,     0,     0,
       0,     0,     0,     0,   668,     0,     0,     0,     0,     0,
       0,   248,   669,     0,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   670,
       0,     0,     0,     0,     0,     0,     0,     0,   252,   253,
       0,   671,     0,   255,     0,   672,     0,     0,   257,     0,
       0,     0,   673,     0,     0,   259,     0,     0,   674,     0,
       0,     0,     0,     0,     0,   261,     0,     0,   537,   471,
     472,   473,   474,   475,     0,     0,   478,   479,   480,   481,
       0,   483,   484,     0,   675,   676,   677,   678,   679,   680,
       0,   681,     0,     0,     0,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,     0,   692,     0,     0,   693,
     694,   695,   696,     0,     0,   697,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,   200,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   201,     0,
       0,     0,    33,   202,   203,     0,     0,   204,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   205,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
      67,   206,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   207,     0,    80,     0,     0,    82,
       0,     0,     0,    86,     0,     0,    88,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,    97,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,     0,   103,   104,     0,
       0,     0,   106,     0,   208,     0,   108,     0,   209,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
      13,     0,     0,    16,    17,     0,    18,     0,   200,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    29,
       0,   201,     0,     0,     0,    33,   202,   203,     0,     0,
     204,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   205,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,    67,   206,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,   207,     0,    80,
       0,     0,    82,     0,     0,     0,    86,     0,     0,    88,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
      97,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,   104,   200,     0,     0,    22,     0,   208,     0,   108,
       0,   209,     0,    29,     0,   201,     0,     0,     0,    33,
     202,   203,     0,     0,   204,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   205,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   206,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   207,     0,    80,     0,   722,    82,     0,     0,     0,
      86,     0,     0,    88,   660,     0,    90,     0,     0,  1047,
    1048,   662,  1049,     0,     0,     0,     0,  1050,     0,     0,
       0,     0,     0,     0,     0,   724,     0,     0,     0,     0,
       0,     0,    95,     0,    97,     0,     0,  1051,     0,     0,
       0,  1052,     0,     0,  1053,     0,   667,     0,     0,     0,
       0,     0,     0,     0,   725,   104,     0,     0,     0,     0,
       0,     0,  1054,   108,     0,   209,     0,     0,     0,  1055,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1056,
       0,     0,     0,     0,     0,     0,     0,     0,  1057,  1058,
       0,  1059,     0,  1060,     0,   726,     0,     0,     0,     0,
       0,   727,  1061,     0,     0,  1062,     0,     0,  1063,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   537,   471,
     472,   473,   474,   475,     0,     0,   478,   479,   480,   481,
       0,   483,   484,     0,   675,   676,   677,   678,   679,   680,
       0,   681,     0,     0,     0,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,   237,   692,     0,     0,   693,
     694,   695,   696,  1064,   660,     0,     0,     0,     0,   238,
     239,   662,   240,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,     0,     0,   242,     0,     0,     0,     0,
       0,   243,     0,     0,     0,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,     0,   667,     0,     0,     0,
       0,     0,     0,     0,   247,     0,     0,     0,     0,     0,
       0,   248,   249,     0,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,   440,   252,   253,
       0,   254,     0,   255,   441,   256,     0,     0,   257,     0,
       0,     0,   258,     0,     0,   259,   442,     0,   260,     0,
       0,     0,     0,     0,     0,   261,     0,     0,   537,   471,
     472,   473,   474,   475,     0,     0,   478,   479,   480,   481,
       0,   483,   484,     0,   675,   676,   677,   678,   679,   680,
       0,   681,     0,     0,     0,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,     0,   692,     0,     0,   693,
     694,   695,   696,     0,   443,     0,     0,     0,   444,     0,
       0,   440,     0,     0,     0,     0,     0,   536,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     445,   537,   471,   472,   473,   474,   475,     0,     0,   478,
     479,   480,   481,     0,   483,   484,     0,   446,   447,     0,
     448,   449,   450,     0,   451,   452,   453,     0,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   466,   467,   468,     0,   385,     0,   443,     0,
       0,     0,   444,   469,     0,   440,     0,     0,     0,     0,
       0,  1119,   441,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,   537,   471,   472,   473,   474,
     475,     0,     0,   478,   479,   480,   481,     0,   483,   484,
       0,   446,   447,     0,   448,   449,   450,     0,   451,   452,
     453,     0,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,   466,   467,   468,     0,
     385,     0,   443,     0,     0,     0,   444,   469,     0,   440,
       0,     0,     0,     0,     0,  1126,   441,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   445,   537,
     471,   472,   473,   474,   475,     0,     0,   478,   479,   480,
     481,     0,   483,   484,     0,   446,   447,     0,   448,   449,
     450,     0,   451,   452,   453,     0,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
     466,   467,   468,     0,   385,     0,   443,     0,     0,     0,
     444,   469,     0,   440,     0,     0,     0,     0,     0,  1274,
     441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   445,   537,   471,   472,   473,   474,   475,     0,
       0,   478,   479,   480,   481,     0,   483,   484,     0,   446,
     447,     0,   448,   449,   450,     0,   451,   452,   453,     0,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,   466,   467,   468,     0,   385,     0,
     443,     0,     0,     0,   444,   469,     0,   440,     0,     0,
       0,     0,     0,  1275,   441,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,   537,   471,   472,
     473,   474,   475,     0,     0,   478,   479,   480,   481,     0,
     483,   484,     0,   446,   447,     0,   448,   449,   450,     0,
     451,   452,   453,     0,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   466,   467,
     468,     0,   385,     0,   443,     0,     0,     0,   444,   469,
       0,   440,     0,     0,     0,     0,     0,  1276,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     445,   537,   471,   472,   473,   474,   475,     0,     0,   478,
     479,   480,   481,     0,   483,   484,     0,   446,   447,     0,
     448,   449,   450,     0,   451,   452,   453,     0,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   466,   467,   468,     0,   385,     0,   443,     0,
       0,     0,   444,   469,     0,   440,     0,     0,     0,     0,
       0,  1277,   441,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,   537,   471,   472,   473,   474,
     475,     0,     0,   478,   479,   480,   481,     0,   483,   484,
       0,   446,   447,     0,   448,   449,   450,     0,   451,   452,
     453,     0,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,   466,   467,   468,     0,
     385,     0,   443,     0,     0,     0,   444,   469,     0,   440,
       0,     0,     0,     0,     0,  1282,   441,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   445,   537,
     471,   472,   473,   474,   475,     0,     0,   478,   479,   480,
     481,     0,   483,   484,     0,   446,   447,     0,   448,   449,
     450,     0,   451,   452,   453,     0,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
     466,   467,   468,     0,   385,     0,   443,     0,     0,     0,
     444,   469,     0,     0,     0,   440,     0,     0,     0,  1283,
       0,     0,   441,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,   289,     0,     0,     0,     0,
       0,     0,   445,   537,   471,   472,   473,   474,   475,     0,
    1040,   478,   479,   480,   481,     0,   483,   484,     0,   446,
     447,     0,   448,   449,   450,     0,   451,   452,   453,     0,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,   466,   467,   468,     0,   385,     0,
       0,     0,   443,     0,     0,   469,   444,     0,   440,     0,
       0,     0,     0,     0,     0,   441,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,   517,     0,
       0,     0,     0,   520,     0,     0,     0,     0,   445,     0,
       0,     0,     0,   518,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   447,     0,   448,   449,
     450,     0,   451,   452,   453,     0,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
     466,   467,   468,     0,   385,   443,     0,     0,     0,   444,
       0,   469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   440,   880,     0,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,   445,     0,     0,     0,   881,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,   447,
       0,   448,   449,   450,     0,   451,   452,   453,     0,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   882,     0,   466,   467,   468,     0,   385,     0,     0,
       0,     0,     0,     0,   469,     0,     0,     0,   443,     0,
       0,     0,   444,   440,     0,     0,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   442,   985,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,   447,     0,   448,   449,   450,     0,   451,   452,
     453,     0,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,   466,   467,   468,     0,
     443,     0,     0,     0,   444,     0,   440,   469,     0,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   442,   289,     0,     0,     0,
       0,   520,     0,     0,     0,     0,   445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,   447,     0,   448,   449,   450,     0,
     451,   452,   453,     0,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   466,   467,
     468,     0,   385,   443,     0,     0,     0,   444,     0,   469,
     440,     0,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
     289,     0,     0,     0,   520,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,  1039,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,   447,     0,   448,
     449,   450,     0,   451,   452,   453,     0,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,   466,   467,   468,     0,   385,     0,   443,     0,     0,
       0,   444,   469,   440,     0,     0,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,   501,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,   447,     0,   448,   449,   450,     0,   451,   452,   453,
       0,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,   466,   467,   468,     0,   385,
     443,     0,     0,     0,   444,   440,   469,     0,     0,     0,
       0,     0,   441,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,   289,     0,     0,     0,     0,
       0,   220,     0,     0,     0,     0,   445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,   447,     0,   448,   449,   450,     0,
     451,   452,   453,     0,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   466,   467,
     468,     0,   443,     0,     0,     0,   444,     0,   440,   469,
       0,     0,     0,     0,     0,   441,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,   758,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   445,     0,
       0,     0,     0,   759,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   447,     0,   448,   449,
     450,     0,   451,   452,   453,     0,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
     466,   467,   468,     0,   385,   443,     0,     0,     0,   444,
     440,   469,     0,     0,     0,     0,     0,   441,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
     760,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   445,     0,     0,     0,   761,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,   447,
       0,   448,   449,   450,     0,   451,   452,   453,     0,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,   466,   467,   468,     0,   443,     0,     0,
       0,   444,   440,     0,   469,     0,     0,     0,     0,   441,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   442,   977,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,   447,     0,   448,   449,   450,     0,   451,   452,   453,
       0,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,   466,   467,   468,     0,   443,
       0,     0,     0,   444,     0,   440,   469,     0,     0,     0,
       0,     0,   441,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   447,     0,   448,   449,   450,     0,   451,
     452,   453,     0,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   466,   467,   468,
       0,   385,   443,     0,     0,     0,   444,     0,   469,   440,
       0,     0,     0,     0,     0,   999,   441,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   447,     0,   448,   449,
     450,     0,   451,   452,   453,     0,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
     466,   467,   468,     0,   385,     0,   443,     0,     0,     0,
     444,   469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   440,     0,     0,     0,     0,     0,     0,   441,
       0,     0,     0,     0,     0,     0,     0,   520,     0,     0,
       0,   442,   445,     0,     0,     0,  1179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     447,     0,   448,   449,   450,     0,   451,   452,   453,     0,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,  1180,     0,   466,   467,   468,     0,     0,     0,
       0,     0,     0,  1035,     0,   469,     0,     0,     0,   443,
       0,     0,     0,   444,   440,     0,     0,     0,     0,     0,
       0,   441,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   447,     0,   448,   449,   450,     0,   451,
     452,   453,     0,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   466,   467,   468,
       0,   443,     0,     0,     0,   444,   440,     0,   469,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   442,     0,     0,     0,     0,
       0,     0,   520,     0,     0,     0,     0,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   447,     0,   448,   449,   450,
       0,   451,   452,   453,     0,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,   466,
     467,   468,     0,   443,     0,     0,     0,   444,  1239,   440,
     469,     0,     0,     0,     0,     0,   441,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,   447,     0,   448,
     449,   450,     0,   451,   452,   453,     0,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,   466,   467,   468,     0,   584,   443,     0,     0,     0,
     444,   440,   469,     0,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     447,     0,   448,   449,   450,     0,   451,   452,   453,     0,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,   588,   466,   467,   468,     0,   443,     0,
       0,     0,   444,   440,     0,   469,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   611,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,   447,     0,   448,   449,   450,     0,   451,   452,
     453,     0,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,   466,   467,   468,     0,
     443,     0,     0,     0,   444,   440,     0,   469,     0,     0,
       0,     0,   441,   762,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,   447,     0,   448,   449,   450,     0,
     451,   452,   453,     0,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   466,   467,
     468,     0,   443,     0,     0,     0,   444,   440,   876,   469,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   447,     0,   448,   449,
     450,     0,   451,   452,   453,     0,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
     466,   467,   468,     0,   443,     0,     0,   848,   444,   440,
       0,   469,     0,     0,     0,     0,   441,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     445,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   447,     0,
     448,   449,   450,     0,   451,   877,   453,     0,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   466,   467,   468,     0,   443,     0,     0,     0,
     444,   440,     0,   469,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,   220,     0,     0,
       0,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     447,     0,   448,   449,   450,     0,   451,   452,   453,     0,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,   466,   467,   468,     0,   443,     0,
       0,     0,   444,   440,     0,   469,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   442,     0,     0,   997,     0,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,   447,     0,   448,   449,   450,     0,   451,   452,
     453,     0,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,   969,   466,   467,   468,     0,
     443,     0,     0,     0,   444,   440,     0,   469,     0,     0,
       0,     0,   441,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,   447,     0,   448,   449,   450,     0,
     451,   452,   453,     0,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   466,   467,
     468,     0,   443,     0,     0,     0,   444,   440,     0,   469,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   447,     0,   448,   449,
     450,     0,   451,   452,   453,     0,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
     466,   467,   468,     0,   443,     0,     0,  1011,   444,   440,
       0,   469,     0,     0,     0,     0,   441,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     445,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   447,     0,
     448,   449,   450,     0,   451,   452,   453,     0,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   466,   467,   468,     0,   443,     0,     0,  1012,
     444,   440,  1074,   469,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1038,   445,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     447,     0,   448,   449,   450,     0,   451,   452,   453,     0,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,   466,   467,   468,     0,   443,     0,
       0,     0,   444,   440,     0,   469,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,   447,     0,   448,   449,   450,     0,   451,   452,
     453,     0,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,   466,   467,   468,     0,
     443,     0,     0,     0,   444,   440,     0,   469,     0,     0,
       0,     0,   441,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,  1104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,   447,     0,   448,   449,   450,     0,
     451,   452,   453,     0,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,     0,     0,   466,   467,
     468,     0,   443,     0,     0,  1097,   444,   440,     0,   469,
       0,     0,     0,     0,   441,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   442,  1107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   447,     0,   448,   449,
     450,     0,   451,   452,   453,     0,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,     0,     0,
     466,   467,   468,     0,   443,     0,     0,     0,   444,   440,
       0,   469,     0,     0,     0,     0,   441,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     445,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   447,     0,
     448,   449,   450,     0,   451,   452,   453,     0,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
       0,     0,   466,   467,   468,     0,   443,     0,     0,     0,
     444,   440,  1176,   469,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   445,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     447,     0,   448,   449,   450,     0,   451,   452,   453,     0,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,     0,     0,   466,   467,   468,     0,   443,     0,
       0,     0,   444,  1110,   440,   469,     0,     0,     0,     0,
       0,   441,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,   447,     0,   448,   449,   450,     0,   451,   452,
     453,     0,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,     0,     0,   466,   467,   468,     0,
       0,   443,     0,     0,     0,   444,   440,   469,     0,     0,
       0,     0,     0,   441,  1207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   442,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   447,     0,   448,   449,   450,
       0,   451,   452,   453,     0,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,   466,
     467,   468,     0,   443,     0,     0,     0,   444,   440,  1247,
     469,     0,     0,     0,     0,   441,  1210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,   447,     0,   448,
     449,   450,     0,   451,   452,   453,     0,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,   466,   467,   468,     0,   443,     0,     0,     0,   444,
       0,     0,   469,     0,     0,     0,   440,     0,     0,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   442,     0,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,   447,
       0,   448,   449,   450,  1261,   451,   452,   453,     0,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,   466,   467,   468,     0,     0,     0,     0,
       0,     0,     0,   443,   469,     0,     0,   444,   440,     0,
       0,     0,     0,     0,     0,   441,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,   447,     0,   448,
     449,   450,     0,   451,   452,   453,     0,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,   466,   467,   468,     0,   443,     0,     0,     0,   444,
     440,     0,   469,     0,     0,     0,     0,   441,  1300,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,   447,
       0,   448,   449,   450,     0,   451,   452,   453,     0,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,   466,   467,   468,     0,   443,     0,     0,
       0,   444,   440,     0,   469,     0,     0,     0,     0,   441,
    1301,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,   447,     0,   448,   449,   450,     0,   451,   452,   453,
       0,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,   466,   467,   468,     0,   443,
       0,     0,     0,   444,   440,     0,   469,     0,     0,     0,
       0,   441,  1302,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,   447,     0,   448,   449,   450,     0,   451,
     452,   453,     0,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   466,   467,   468,
       0,   443,     0,     0,     0,   444,   440,     0,   469,     0,
       0,     0,     0,   441,  1303,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   442,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   447,     0,   448,   449,   450,
       0,   451,   452,   453,     0,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,     0,     0,   466,
     467,   468,     0,   443,     0,     0,     0,   444,   440,     0,
     469,     0,     0,     0,     0,   441,  1304,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,   447,     0,   448,
     449,   450,     0,   451,   452,   453,     0,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,     0,
       0,   466,   467,   468,     0,   443,     0,     0,     0,   444,
     440,     0,   469,     0,     0,     0,     0,   441,  1305,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,   447,
       0,   448,   449,   450,     0,   451,   452,   453,     0,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,     0,     0,   466,   467,   468,     0,   443,     0,     0,
       0,   444,   440,     0,   469,     0,     0,     0,     0,   441,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,   447,     0,   448,   449,   450,     0,   451,   452,   453,
       0,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,     0,     0,   466,   467,   468,     0,   964,
       0,     0,     0,   444,     0,     0,   469,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   381,     0,     0,     0,
      23,    24,     0,     0,     0,   445,     0,     0,     0,   382,
       0,    31,   383,     0,     0,     0,     0,    37,     0,     0,
       0,     0,   446,   447,    42,   448,   449,   450,     0,   451,
     452,   453,     0,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,     0,     0,   466,   467,   468,
      58,     0,    60,     0,    62,     0,  1082,     0,   469,  1083,
       0,     0,   384,   381,    69,     0,     0,    23,    24,     0,
       0,     0,     0,     0,     0,     0,   382,     0,    31,   383,
       0,     0,     0,    85,    37,     0,    87,     0,     0,    89,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,    58,     0,    60,
       0,    62,     0,  1082,     0,     0,  1083,     0,     0,   384,
       0,    69,     0,     0,     0,   442,     0,     0,     0,     0,
     105,     0,     0,     0,     0,     0,  1187,     0,     0,     0,
      85,     0,     0,    87,     0,   381,    89,     0,     0,    23,
      24,     0,     0,     0,     0,     0,     0,     0,   382,     0,
      31,   383,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,    94,    42,     0,     0,  -347,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,   444,   -69,     0,
       0,     0,     0,     0,     0,     0,  -347,   105,     0,    58,
       0,    60,     0,  1248,     0,    64,  -347,   -69,    65,     0,
       0,   384,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    87,   446,   447,    89,   448,
     449,   450,     0,   451,   452,   453,     0,   454,   455,   456,
     457,     0,   459,   460,   461,   462,   463,     0,   465,     0,
     381,   466,   467,   468,    23,    24,     0,     0,     0,     0,
       0,     0,   469,   382,     0,    31,   383,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,    42,   105,
       0,     0,     0,     0,   385,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,    58,   237,    60,     0,   379,     0,
    1082,     0,     0,  1083,     0,     0,   384,     0,    69,   238,
     239,     0,   240,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,     0,     0,   242,     0,    85,     0,     0,
      87,   243,     0,    89,     0,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,     0,     0,     0,     0,     0,
     237,     0,     0,     0,   247,     0,     0,     0,     0,    94,
       0,   248,   249,     0,   238,   239,     0,   240,     0,   250,
       0,     0,   241,     0,     0,     0,     0,     0,     0,   251,
     242,     0,     0,     0,   105,     0,   243,     0,   252,   253,
       0,   254,   244,   255,     0,   256,   245,     0,   257,   246,
       0,     0,   258,     0,     0,   259,     0,     0,   260,   247,
       0,     0,     0,     0,     0,   261,   248,   249,     0,     0,
       0,     0,     0,     0,   250,   237,     0,     0,     0,     0,
       0,     0,     0,    94,   251,     0,     0,     0,     0,   238,
     239,     0,   240,   252,   253,     0,   254,   241,   255,    24,
     256,     0,     0,   257,     0,   242,     0,   258,     0,     0,
     259,   243,     0,   260,     0,     0,     0,   244,     0,     0,
     261,   245,     0,     0,   246,     0,     0,     0,     0,     0,
     237,     0,     0,     0,   247,     0,     0,     0,    94,     0,
       0,   248,   249,     0,   238,   239,     0,   240,     0,   250,
      60,     0,   241,     0,     0,     0,     0,     0,     0,   251,
     242,     0,    69,     0,     0,     0,   243,     0,   252,   253,
       0,   254,   244,   255,     0,   256,   245,     0,   257,   246,
       0,     0,   258,     0,     0,   259,     0,    89,   260,   247,
       0,     0,     0,     0,     0,   261,   248,   249,     0,     0,
       0,     0,     0,     0,   250,  -322,     0,     0,     0,     0,
       0,     0,     0,     0,   251,     0,     0,     0,     0,  -322,
    -322,     0,  -322,   252,   253,     0,   254,  -322,   255,     0,
     256,     0,     0,   257,     0,  -322,     0,   258,   573,     0,
     259,  -322,     0,   260,     0,     0,     0,  -322,     0,     0,
     261,  -322,     0,     0,  -322,     0,     0,     0,     0,     0,
     237,     0,     0,     0,  -322,     0,     0,     0,     0,     0,
       0,  -322,  -322,     0,   238,   239,     0,   240,     0,  -322,
       0,     0,   241,     0,     0,     0,     0,     0,     0,  -322,
     242,     0,     0,     0,     0,     0,   243,     0,  -322,  -322,
       0,  -322,   244,  -322,     0,  -322,   245,     0,  -322,   246,
       0,     0,  -322,     0,     0,  -322,     0,     0,  -322,   247,
       0,     0,     0,     0,     0,  -322,   248,   249,     0,     0,
       0,     0,     0,     0,   250,  -323,     0,     0,     0,     0,
       0,     0,     0,     0,   251,     0,     0,     0,     0,  -323,
    -323,     0,  -323,   252,   253,     0,   254,  -323,   255,     0,
     256,     0,     0,   257,     0,  -323,     0,   258,     0,     0,
     259,  -323,     0,   260,     0,     0,     0,  -323,     0,     0,
     261,  -323,     0,     0,  -323,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -323,     0,     0,     0,     0,     0,
       0,  -323,  -323,     0,     0,     0,     0,     0,     0,  -323,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -323,
       0,     0,     0,     0,     0,     0,     0,     0,  -323,  -323,
       0,  -323,     0,  -323,     0,  -323,     0,     0,  -323,     0,
       0,     0,  -323,     0,     0,  -323,     0,     0,  -323,     0,
       0,     0,     0,     0,     0,  -323
};

static const yytype_int16 yycheck[] =
{
      13,    66,   118,    20,    17,     2,   497,   170,    21,   582,
     412,    27,   432,   157,    27,    66,    66,   186,   229,   281,
     542,    34,    35,    36,   631,    38,   654,   139,   791,   236,
     586,   837,   651,   882,   404,   906,    49,   577,    51,    52,
     877,   900,   831,   305,    57,    32,    59,     1,    61,    55,
     417,     1,    47,    66,    70,   912,    47,    70,    71,    72,
      73,    74,    75,   700,   620,   702,    79,  1013,    81,     8,
     552,    40,   102,    32,   281,    88,    47,    60,    91,    92,
      74,   120,    95,   345,    97,    47,     3,   100,   101,    22,
     103,    27,    32,   109,   107,   108,   109,   110,   305,  1203,
      32,    32,     3,    32,    82,     1,   120,    85,   277,    32,
      32,    47,     1,    71,    24,    51,    36,   124,    55,   547,
      74,     3,    32,   117,   137,   120,   139,   120,    90,     1,
      40,    41,    42,   120,    92,   118,     0,   176,   345,    75,
     148,   171,    78,    32,    80,   166,   574,  1251,   117,    47,
     108,    47,    72,   148,    90,    88,   148,   148,  1015,   120,
      32,   120,   176,   117,   171,    55,   179,   173,   176,    92,
      92,    60,   654,   109,   148,    92,   126,   148,   172,   112,
       3,   176,   174,   176,   171,   176,   103,   950,    60,   202,
     203,   204,    55,   209,   207,   208,   209,   147,   148,   818,
     174,  1007,   103,    92,   571,  1151,  1077,  1013,   148,   119,
     227,   150,   171,    47,  1085,  1086,   105,  1076,   172,   148,
      92,   103,   120,   236,   174,   487,   488,  1016,   784,   118,
     126,   171,   173,   105,   175,  1072,   173,   118,   174,   171,
     171,   763,   171,   166,    55,   452,   118,    31,   171,   171,
     148,   147,   148,    55,   148,   166,    90,   126,   147,    27,
      46,   172,    27,   432,   634,   175,   109,   148,   281,   166,
     166,     3,   166,    27,   881,   147,   173,   166,   176,    18,
     487,   488,   171,    90,   153,    31,   155,   156,    20,   158,
     159,   403,   305,    47,   148,   835,   412,    51,    84,   171,
     791,    33,    71,   316,   317,    89,   173,  1113,   175,    93,
      78,   148,   166,    78,   270,  1186,   272,   273,   331,   332,
    1191,    75,    90,    92,    78,    90,    80,    27,   114,  1178,
      62,  1180,   345,   148,    46,   542,    90,   174,    77,   108,
     503,   109,   148,    89,   963,  1151,   173,    93,   175,   560,
     115,   416,   148,    65,   142,   109,   369,    96,   142,   174,
     373,  1124,   150,   147,    53,   148,   150,   148,   174,   366,
     154,   103,    84,   173,   113,    75,   172,   109,    78,   586,
     141,   148,   904,   396,    73,   398,  1014,   148,   148,    11,
      90,   174,   408,   174,    83,   408,   142,   143,   148,   145,
     146,   147,   114,   149,   150,    55,    89,   174,   154,   109,
      93,   172,    55,   620,   174,   161,   166,   173,   374,   375,
     174,   167,   168,   169,    31,   947,   637,   440,   441,   442,
     443,   444,   445,     8,   447,   448,   449,   450,   451,   148,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,  1064,    55,   950,
     148,  1098,  1099,   476,   477,   174,   148,   236,   173,   482,
      46,   126,   485,   486,   487,   488,   489,   490,   166,   166,
     148,    55,    89,   148,   497,   172,    93,  1043,   501,    65,
     172,   148,   505,    55,   507,   148,   148,   152,   166,   515,
      55,    55,   515,   923,   517,   518,   908,   572,    84,   174,
     523,   524,   281,   166,   166,   148,   529,   174,   476,   477,
     148,   572,   572,   536,   482,   148,   539,   485,   486,   542,
     100,   148,   148,   166,   148,   142,   305,   148,   114,   552,
     147,   554,   149,   150,   148,   558,   174,   154,   561,   562,
     166,   174,   166,   148,   161,   173,   763,   174,    27,   572,
     167,   168,   169,   174,   577,   148,     2,   148,   172,   171,
    1177,   173,  1179,   586,    55,   148,   345,   784,    47,   174,
      83,    84,    51,   166,   597,   166,   173,   600,   175,   602,
      26,     3,    28,   166,   607,   608,   609,    55,   611,   612,
    1197,   617,   615,   616,   617,    55,    75,   620,    55,    78,
      89,    80,   142,    50,    93,    55,    53,   147,   631,   632,
     150,    90,    89,   171,   154,    89,    93,   624,   166,    93,
    1203,   644,    27,  1124,    89,   173,    73,   175,    93,    76,
     109,   654,   600,    79,   602,    89,    83,    83,    84,    93,
     306,   307,    47,     2,   141,   173,    51,   175,  1255,  1256,
    1257,  1258,  1259,  1260,   173,    31,   175,    55,   173,   876,
     877,   107,   109,   173,   147,   175,   112,    26,  1251,    28,
      75,   166,   165,    78,   697,    80,   600,  1089,   602,   166,
     166,   704,   166,    55,   166,    90,   166,   904,   166,   119,
     166,    84,   173,   166,     8,   148,   171,   476,   477,   171,
     166,     3,   173,   482,   109,   174,   485,   486,   487,   488,
     173,   173,   173,    89,   147,   173,    65,    93,   166,   126,
      79,   173,   171,    90,    83,    84,    90,   172,    68,   902,
     947,   126,   150,   173,   126,   758,   759,   760,   761,   762,
     763,   764,   765,   174,   923,   148,    47,   173,   107,   776,
     777,   126,   906,   112,    34,   909,   126,    34,    65,   782,
     174,   784,   785,   542,   787,   126,   142,   143,   791,   147,
     793,   147,   174,   149,   150,   221,    21,   174,   154,   802,
     803,   150,   176,   171,   105,   161,   176,   173,   148,   166,
     142,   167,   168,   169,   150,   974,   150,   150,   821,   150,
     150,   166,   981,   150,   150,   150,   150,   586,   150,   150,
     176,   150,   835,   150,   782,   150,   839,   174,   166,    34,
      34,   600,   147,   602,   148,    32,  1043,    32,   166,   795,
     796,   906,   166,   799,   800,   910,   166,   173,   284,   172,
     166,   620,   174,   289,   919,   172,   174,   176,   171,    34,
      31,   874,   147,   821,   176,   878,   166,   880,   881,   882,
     166,   884,   221,   886,   173,   173,   889,   890,   166,   148,
      34,   176,   176,  1145,  1146,   174,   166,   174,   174,   166,
     174,   904,   166,   165,   165,   148,   117,   619,  1043,   855,
     856,   280,   395,    25,   874,   387,    91,  1003,  1028,   558,
     866,   352,   572,   923,   406,   919,   319,  1251,    89,  1091,
     910,   569,    93,  1261,  1254,   938,   901,   706,   941,   137,
     366,   555,   817,  1077,   947,   284,    -1,   950,  1145,  1146,
     289,  1085,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,
      -1,   964,   965,    -1,    -1,    -1,    -1,    -1,    -1,   395,
      -1,    -1,   975,     2,   977,    -1,    -1,    -1,    -1,   982,
    1086,   142,   985,  1089,    -1,    -1,   147,    30,   149,   150,
      -1,    -1,    -1,   154,   997,    -1,    -1,    26,    -1,    28,
     161,    44,    45,    46,   763,    -1,   432,    -1,   169,    -1,
      -1,  1014,    -1,    -1,    -1,  1018,    -1,    -1,  1024,    -1,
      -1,  1024,  1077,   782,    -1,   784,    -1,   366,    -1,    -1,
    1033,    -1,  1035,    -1,    -1,  1038,  1039,  1040,  1041,    -1,
    1043,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,
      79,    -1,  1186,    -1,    83,    84,   395,    -1,    -1,  1218,
    1219,  1064,   821,  1222,  1223,    -1,    -1,    -1,    -1,  1072,
      -1,  1074,    -1,    -1,    -1,  1234,    -1,  1236,   107,    -1,
      -1,    -1,    -1,   112,    -1,  1191,    -1,    -1,    -1,    -1,
    1093,   517,    -1,    -1,    -1,    -1,    -1,   523,    -1,    -1,
    1103,  1104,    -1,  1106,  1107,    -1,  1109,  1110,   534,    -1,
     536,    -1,   155,    -1,   157,    -1,  1119,  1120,    -1,  1122,
      -1,  1124,    -1,  1126,  1127,    -1,   169,  1130,    -1,    -1,
      -1,  1186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1145,  1146,    -1,   904,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1157,    -1,  1159,    -1,    -1,    -1,
    1163,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1176,  1177,  1178,  1179,  1180,   517,   605,
      -1,    -1,    -1,   609,   523,    -1,    -1,    -1,   947,    -1,
      -1,    -1,   221,    -1,    31,   534,    -1,   536,   624,    -1,
      -1,    -1,    -1,    -1,  1207,  1208,  1209,  1210,  1211,  1212,
    1213,  1214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,  1170,  1171,  1172,  1173,    -1,    -1,
      -1,   274,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,    -1,  1247,    -1,    -1,    -1,    -1,    -1,
    1253,    -1,    89,    -1,    -1,   284,    93,    -1,    -1,    -1,
     289,    -1,    35,    36,    -1,    -1,   605,    -1,    -1,    -1,
     609,  1274,  1275,  1276,  1277,  1262,    -1,    -1,    -1,  1282,
    1283,    -1,   325,    -1,  1043,   624,    -1,    -1,    -1,    -1,
       2,    -1,    -1,    31,    -1,    -1,    -1,  1300,  1301,  1302,
    1303,  1304,  1305,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,    26,    -1,    28,   154,    -1,    -1,
      -1,    -1,    -1,   160,   161,    -1,    -1,   164,    -1,    -1,
     167,   168,   169,    -1,    -1,    -1,   109,   366,    -1,   382,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,   385,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   407,    -1,   395,    79,    -1,   412,
      -1,    83,    84,    -1,    -1,    -1,    -1,     2,    -1,   805,
      -1,    -1,   808,    -1,    -1,    -1,  1145,  1146,    -1,   432,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
     112,    26,    -1,    28,   142,   143,    -1,    -1,   146,   147,
      -1,   149,   150,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,   854,   167,
     168,   169,    -1,    -1,   860,    22,    -1,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    38,    -1,   496,    79,    -1,    43,    -1,    83,    84,
      -1,    -1,    -1,    50,    -1,    -1,   805,    -1,    -1,   808,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,   112,   517,    76,
      -1,    78,    -1,    80,   523,    82,    -1,    -1,    85,    -1,
     543,    88,    -1,    90,   547,   534,    -1,   536,    -1,   221,
      -1,    -1,    -1,    -1,    -1,   854,    -1,   560,    -1,    -1,
      -1,   860,   109,    -1,    -1,   112,   569,    -1,   115,    -1,
      -1,   574,    -1,    -1,    -1,    -1,    -1,    -1,   964,   965,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   975,
      -1,   977,    -1,    -1,   141,    -1,   982,    -1,    -1,   985,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   994,    -1,
     996,    -1,   284,   999,    -1,    -1,   605,   289,    -1,   166,
     609,    -1,    -1,    -1,    -1,   172,    -1,   630,    -1,    -1,
      -1,     3,    -1,    -1,    -1,   624,   221,  1023,    -1,    -1,
       2,    -1,    -1,    -1,    -1,    17,    -1,  1033,    20,  1035,
      -1,    -1,    -1,    25,    -1,    -1,  1042,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,   975,    -1,   977,    -1,
      52,    -1,    -1,   982,    -1,    -1,   985,    -1,    -1,    -1,
      62,    -1,    -1,    -1,   366,   994,    -1,   996,    70,   284,
     999,    -1,    -1,   706,   289,    -1,    -1,    -1,    -1,    -1,
     443,   444,    -1,   385,    -1,    87,    -1,    79,    -1,    -1,
      -1,    83,    84,   395,  1023,    -1,    -1,    99,    -1,    -1,
      -1,   103,    -1,  1119,  1033,    -1,  1035,    -1,   110,    -1,
    1126,    -1,    -1,  1042,   116,   107,    -1,    -1,    -1,    -1,
     112,    -1,    -1,  1139,    -1,    -1,   489,   490,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1153,   501,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1162,    -1,    -1,    -1,
    1166,   366,    -1,    -1,    -1,   518,    -1,    -1,    -1,    -1,
      -1,   524,    -1,    -1,    -1,    -1,   529,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,    -1,    -1,   810,    -1,    -1,
     395,    -1,    -1,    -1,   817,    -1,   805,    -1,    -1,   808,
    1119,    -1,    -1,    -1,   827,    -1,    -1,  1126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1224,    -1,
    1139,    -1,   845,    -1,    -1,   517,    -1,    -1,    -1,    -1,
      -1,   523,  1238,  1239,  1153,    -1,    -1,    -1,    -1,   221,
      -1,    -1,   534,  1162,   536,   854,    -1,  1166,    -1,    -1,
      -1,   860,    -1,    -1,   607,    -1,  1262,    -1,    -1,    -1,
      -1,    -1,    -1,   616,   617,    -1,    -1,    -1,  1274,  1275,
    1276,  1277,    -1,    -1,    -1,    -1,  1282,  1283,   901,    -1,
      -1,    -1,    22,    -1,    -1,   908,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,
     923,    -1,   284,    43,    -1,  1224,    -1,   289,    -1,    -1,
      50,    -1,   517,   605,    -1,    -1,    -1,   609,   523,  1238,
    1239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   534,
      -1,   536,   624,    -1,    -1,    -1,    76,    -1,    78,    -1,
      -1,    -1,    -1,  1262,    -1,    -1,    -1,    -1,    88,    -1,
      90,    -1,    -1,    -1,    -1,  1274,  1275,  1276,  1277,    -1,
      -1,    -1,    -1,  1282,  1283,    -1,   975,    -1,   977,   109,
       2,    -1,   112,   982,    -1,   115,   985,    -1,    -1,    -1,
    1003,    -1,    -1,    -1,   366,   994,    -1,   996,    -1,    -1,
     999,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
     605,    -1,    -1,   385,   609,  1028,   759,    -1,   761,    -1,
      -1,   764,    -1,   395,  1023,    -1,    -1,    -1,    -1,   624,
       1,    -1,    -1,    -1,  1033,    -1,  1035,    -1,    -1,    -1,
      -1,    -1,    -1,  1042,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    27,    79,    -1,    -1,
      -1,    83,    84,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,  1089,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,   107,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    82,    83,    -1,    85,    -1,    -1,    88,    -1,    90,
    1119,    -1,    -1,   805,    -1,    -1,   808,  1126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
    1139,   112,    -1,    -1,   115,   517,    -1,    -1,    -1,    -1,
      -1,   523,    -1,    -1,  1153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   534,  1162,   536,    -1,    -1,  1166,    -1,    -1,
     141,    -1,   854,    -1,    -1,    -1,    -1,    -1,   860,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    -1,   166,    -1,    -1,    -1,   221,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     805,    -1,    -1,   808,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   964,   965,   170,    -1,  1224,   173,    -1,   175,    -1,
      -1,    -1,    -1,   605,    -1,    -1,    -1,   609,    -1,  1238,
    1239,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      27,    -1,   624,    -1,    -1,    -1,    -1,    -1,    35,   854,
      37,    38,   284,  1262,    -1,   860,    43,   289,    -1,    -1,
      -1,    -1,    -1,    50,    -1,  1274,  1275,  1276,  1277,    -1,
      -1,    -1,    -1,  1282,  1283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   975,    -1,   977,  1039,  1040,  1041,    76,
     982,    78,    -1,   985,    -1,    82,    -1,    -1,    85,    -1,
      -1,    88,   994,    90,   996,    -1,    -1,   999,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,
      -1,  1023,    -1,     2,   366,    -1,    -1,    -1,    -1,    -1,
      -1,  1033,    -1,  1035,    -1,    -1,    -1,    -1,    -1,    -1,
    1042,    -1,    -1,   385,   141,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,
     975,    -1,   977,    -1,    -1,    -1,    -1,   982,    -1,   166,
     985,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,   994,
      -1,   996,    -1,    -1,   999,    -1,    -1,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    33,    83,    84,    -1,    -1,  1023,    39,
      -1,    -1,    -1,   805,    -1,    45,   808,  1119,  1033,    49,
    1035,    -1,    52,    -1,  1126,    -1,    -1,  1042,   107,    -1,
      -1,    -1,    62,   112,    -1,    -1,    -1,  1139,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,  1153,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
    1162,    -1,   854,    -1,  1166,    -1,    96,    97,   860,    99,
      -1,   101,    -1,   103,    -1,   517,   106,    -1,    -1,    -1,
     110,   523,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,   534,   123,   536,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1119,    -1,    -1,    -1,    -1,    -1,
      -1,  1126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1224,    -1,  1139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     2,  1238,  1239,  1153,    -1,
      -1,   171,   221,   173,    -1,    -1,    -1,  1162,    -1,    -1,
      -1,  1166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
    1262,    28,    -1,   605,    -1,    -1,    -1,   609,    -1,    -1,
      -1,    -1,  1274,  1275,  1276,  1277,    -1,    -1,    -1,    -1,
    1282,  1283,   624,   975,    -1,   977,    -1,    -1,    -1,    -1,
     982,    -1,    -1,   985,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   994,    -1,   996,   284,    -1,   999,    -1,  1224,
     289,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1238,  1239,    -1,    -1,    -1,    -1,    -1,
      -1,  1023,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,  1033,    -1,  1035,    -1,   112,    -1,  1262,    -1,    -1,
    1042,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,  1274,
    1275,  1276,  1277,    -1,    -1,    -1,    31,  1282,  1283,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,     2,    -1,    33,    -1,   366,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,   385,    26,    -1,    28,
      -1,    -1,    -1,    -1,    62,    -1,   395,    -1,    -1,    -1,
      -1,    69,    70,    -1,    89,    -1,    -1,  1119,    93,    77,
      -1,    -1,    -1,    -1,  1126,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1139,    96,    97,
      -1,    99,    -1,   101,   221,   103,    -1,    -1,   106,    -1,
      79,  1153,   110,   805,    -1,   113,   808,    -1,   116,    -1,
    1162,    -1,    -1,    -1,  1166,   123,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   107,   154,
      -1,    -1,    -1,   112,    -1,   160,   161,    -1,    -1,   164,
      -1,    -1,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   854,   178,    -1,    -1,    -1,   284,   860,    -1,
      -1,    -1,   289,    -1,    -1,   173,    -1,    -1,    -1,    -1,
      -1,    -1,  1224,    -1,    -1,    -1,    -1,    -1,   517,    -1,
      -1,    -1,    -1,    -1,   523,    -1,  1238,  1239,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   534,    -1,   536,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,  1274,  1275,  1276,  1277,    19,    -1,    -1,    -1,
    1282,  1283,    -1,    -1,    -1,    -1,    -1,    -1,    31,   366,
      -1,    -1,   221,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   605,    -1,   395,    -1,
     609,    -1,    -1,   975,    -1,   977,    -1,    -1,    -1,    72,
     982,    -1,    -1,   985,    -1,   624,    -1,    49,    -1,    -1,
      -1,    -1,   994,    -1,   996,    -1,    89,   999,    -1,    -1,
      93,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,
     289,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1023,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1033,   125,  1035,    -1,    -1,    -1,    -1,    -1,    -1,
    1042,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,   166,   167,   168,   169,    -1,    -1,    -1,
      49,    -1,    -1,     3,    -1,   178,    -1,   366,    -1,    -1,
     517,    -1,    -1,    -1,    -1,    -1,   523,    17,    18,    -1,
      20,    -1,    -1,    -1,    73,    25,   385,   534,    -1,   536,
      -1,    -1,    -1,    33,    83,    84,   395,  1119,    -1,    39,
      -1,    -1,    -1,    -1,  1126,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,  1139,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,   117,    69,
      70,  1153,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
    1162,    -1,    -1,    -1,  1166,    -1,   805,    87,    -1,   808,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,   605,    99,
      -1,   101,   609,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,   111,    -1,   113,    -1,    -1,   116,   624,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,   268,    -1,   270,   271,
     272,   273,    -1,    -1,    -1,   854,    -1,    -1,    -1,    -1,
      -1,   860,  1224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     292,    -1,   294,    -1,    -1,    -1,  1238,  1239,   517,   301,
      -1,    -1,    -1,    -1,   523,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   534,    -1,   226,    -1,    -1,
    1262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1274,  1275,  1276,  1277,    -1,    -1,    -1,   341,
    1282,  1283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,   355,    -1,    -1,    -1,    -1,    -1,   268,
     269,   270,   271,   272,   273,    -1,    -1,   276,   277,    -1,
      -1,    -1,    -1,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   292,    -1,   294,   605,    -1,    -1,    -1,
     609,    -1,   301,    -1,    -1,    -1,   975,    -1,   977,    -1,
      -1,    -1,    -1,   982,    -1,   624,   985,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   994,    -1,   996,    -1,    -1,
     999,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,   805,    17,
      18,   808,    20,    31,  1023,   354,   355,    25,    -1,    -1,
      -1,    -1,    -1,    -1,  1033,    33,  1035,    -1,    -1,    -1,
      -1,    39,    -1,  1042,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,   854,    -1,    -1,
      -1,    69,    70,   860,    -1,    -1,    -1,    -1,    -1,    77,
     502,    89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
     522,    99,    -1,   101,   526,   103,   528,    -1,   106,   531,
      -1,    -1,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
    1119,    -1,    -1,    -1,    -1,   123,    -1,  1126,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,
    1139,   149,   150,   151,    -1,    -1,   154,   155,   156,    -1,
     158,   159,   160,   161,  1153,    -1,   164,    12,    -1,   167,
     168,   169,    -1,  1162,    19,    -1,   805,  1166,    -1,   808,
     178,    -1,    -1,   502,    -1,   173,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   975,    -1,
     977,    -1,    47,   522,    -1,   982,    -1,   526,   985,   528,
      -1,    -1,   531,    -1,    -1,    -1,    -1,   994,    -1,   996,
      -1,    -1,   999,    -1,    -1,   854,    -1,    -1,    -1,    -1,
      -1,   860,    -1,    -1,    -1,  1224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,  1023,    -1,    93,  1238,
    1239,    -1,    -1,    -1,    -1,    -1,  1033,    -1,  1035,    -1,
      -1,    -1,    -1,    -1,    -1,  1042,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1262,    -1,   120,    -1,    12,    13,    -1,
     125,    -1,    -1,    -1,    19,  1274,  1275,  1276,  1277,    -1,
      -1,    -1,    -1,  1282,  1283,    -1,    31,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1119,    -1,    -1,    -1,   975,    -1,   977,  1126,
      -1,    -1,    -1,   982,    89,    -1,   985,    -1,    93,    -1,
      -1,    -1,  1139,    -1,    -1,   994,    -1,   996,    -1,    -1,
     999,    -1,    -1,    -1,    -1,    -1,  1153,   789,   790,    -1,
      -1,    -1,    -1,   795,   796,  1162,    -1,   799,   800,  1166,
     125,    -1,    -1,    -1,  1023,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1033,    -1,  1035,   142,   143,    -1,
     145,   146,   147,  1042,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,    -1,  1224,    -1,    -1,
      -1,    -1,    -1,   865,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1238,  1239,    -1,    -1,    -1,    -1,    -1,    -1,    31,
     789,   790,    -1,    -1,    -1,    -1,   795,   796,    -1,    -1,
     799,   800,    -1,    -1,    -1,  1262,    -1,    -1,    -1,    -1,
     809,    -1,    -1,    -1,    -1,    -1,    -1,  1274,  1275,  1276,
    1277,    -1,    -1,    -1,    -1,  1282,  1283,    -1,    -1,    -1,
    1139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1153,    -1,   845,    89,    -1,    -1,
      -1,    93,    -1,  1162,    -1,    -1,    -1,  1166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   864,   865,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   966,   967,    -1,    -1,    -1,    -1,
     972,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   984,    -1,    -1,   987,    -1,   989,    -1,   991,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,  1224,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,  1238,
    1239,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1262,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,     9,    10,   966,   967,    -1,
      14,    -1,    -1,   972,    18,   974,    -1,    -1,    22,    -1,
      -1,    -1,   981,    27,    -1,   984,    -1,    -1,   987,    -1,
     989,    35,   991,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,    -1,    -1,    47,    -1,  1004,    -1,    51,    -1,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,  1031,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    86,    -1,    88,    -1,    90,    -1,    -1,    -1,
      -1,    12,    96,    -1,    98,    -1,   100,    -1,    19,    -1,
      -1,    -1,    -1,  1155,    -1,   109,    -1,    -1,    -1,   113,
      31,    32,    -1,    -1,    -1,    -1,  1168,  1169,  1170,  1171,
      -1,   125,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,   169,    -1,   171,    89,   173,
     174,   175,    93,    -1,   178,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1155,    -1,    -1,   120,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,  1168,
    1169,  1170,  1171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,  1218,
    1219,    -1,    -1,  1222,  1223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1232,    -1,  1234,    -1,  1236,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,   104,    -1,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,   115,   116,    -1,    -1,   119,    -1,   121,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,   166,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,     1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,    -1,   171,   172,   173,    -1,   175,
      -1,     1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,   104,    -1,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,   115,   116,    -1,    -1,   119,
      -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,   166,    -1,    -1,   169,
      -1,   171,   172,   173,    -1,   175,    -1,     1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,   166,    -1,    -1,   169,    -1,   171,   172,   173,
      -1,   175,    -1,     1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,   166,    -1,
      -1,   169,    -1,   171,   172,   173,    -1,   175,    -1,     1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,   104,    -1,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,   115,   116,    -1,    -1,   119,    -1,   121,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,   166,    -1,    -1,   169,    -1,   171,
     172,   173,    -1,   175,    -1,     1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
     166,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,     1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,   104,    -1,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,   115,   116,    -1,    -1,   119,
      -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,   166,    -1,    -1,   169,
      -1,   171,    -1,   173,    -1,   175,    -1,     1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,   166,    -1,    -1,   169,    -1,   171,    -1,   173,
      -1,   175,    -1,     1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,   166,    -1,
      -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,     1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,   104,    -1,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,   115,   116,    -1,    -1,   119,    -1,   121,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,   166,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,     1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
     166,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,     1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,   104,    -1,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,   115,   116,    -1,    -1,   119,
      -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,   166,    -1,    -1,   169,
      -1,   171,    -1,   173,    -1,   175,    -1,     1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,   166,    -1,    -1,   169,    -1,   171,    -1,   173,
      -1,   175,    -1,     1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,    -1,   121,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,   166,    -1,
      -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,     1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,   104,    -1,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,   115,   116,    -1,    -1,   119,    -1,   121,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,   166,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,     1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,    -1,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,   121,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
     166,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,     1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,   104,    -1,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,   115,   116,    -1,    -1,   119,
      -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,   166,    -1,    -1,   169,
      -1,   171,    -1,   173,    -1,   175,    -1,     1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,
      -1,   175,    -1,    -1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    14,    -1,    -1,    17,
      18,    19,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
      -1,   139,   140,    -1,   142,   143,   144,   145,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,   170,   171,    -1,   173,    -1,   175,    -1,    -1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    -1,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      42,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    61,
      62,    63,    64,    -1,    66,    67,    -1,    69,    70,    71,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,   104,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,    -1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,
      -1,   171,    -1,   173,    -1,   175,    -1,    -1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    47,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,
      -1,   175,    -1,    -1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,   107,
     108,    -1,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,
      -1,   169,    -1,   171,    -1,   173,   174,   175,    -1,    -1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,   107,   108,    -1,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,
      -1,   173,   174,   175,    -1,    -1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,   107,   108,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
     166,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,
     110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,
      -1,   171,    -1,   173,   174,   175,    -1,    -1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,   107,   108,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,
      -1,   175,    -1,    -1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,
      -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,    -1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,   107,   108,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,
      -1,   171,    -1,   173,    -1,   175,   176,    -1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    -1,    -1,    -1,    93,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,
      -1,   175,    -1,    -1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,
      -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,    -1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,
      -1,   171,    -1,   173,    -1,   175,   176,    -1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,   169,    -1,   171,   172,   173,
      -1,   175,    -1,    -1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,
      -1,   169,    -1,   171,    -1,   173,    -1,   175,   176,    -1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,   176,    -1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,
      -1,   171,    -1,   173,    -1,   175,    -1,    -1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,
      -1,   175,    -1,    -1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,
      -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,    -1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,
      -1,   171,    -1,   173,    -1,   175,    -1,    -1,   178,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,
      -1,   175,    -1,    -1,   178,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,
      -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,
     178,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,    -1,   178,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,
      -1,    -1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    31,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,
     125,   171,    -1,   173,    -1,   175,    -1,    -1,   178,     4,
       5,     6,     7,     8,     9,    10,    -1,   142,   143,    14,
     145,   146,   147,    18,   149,   150,   151,    22,   153,   154,
     155,   156,    27,   158,   159,   160,   161,   162,    -1,   164,
      35,    -1,   167,   168,   169,    40,    41,    -1,    -1,    44,
      -1,    -1,    47,   178,    -1,    -1,    51,    -1,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      -1,    86,    -1,    88,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,   142,   143,   144,
     145,   146,    -1,    -1,    12,    -1,   151,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,   160,    -1,    25,   163,   164,
     165,    -1,    -1,    -1,   169,    33,   171,    35,   173,    -1,
     175,    39,    -1,   178,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
      -1,   139,   140,    -1,   142,   143,   144,   145,   146,   147,
      -1,   149,    -1,    -1,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,    -1,    -1,   167,
     168,   169,   170,    -1,    -1,   173,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    -1,   164,   165,    -1,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
     144,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,   165,    22,    -1,    -1,    25,    -1,   171,    -1,   173,
      -1,   175,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,     3,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,    12,    -1,   116,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    70,   173,    -1,   175,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,
      -1,   109,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
      -1,   139,   140,    -1,   142,   143,   144,   145,   146,   147,
      -1,   149,    -1,    -1,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,     3,   164,    -1,    -1,   167,
     168,   169,   170,   171,    12,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    96,    97,
      -1,    99,    -1,   101,    19,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    31,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,   126,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
      -1,   139,   140,    -1,   142,   143,   144,   145,   146,   147,
      -1,   149,    -1,    -1,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,    -1,    -1,   167,
     168,   169,   170,    -1,    89,    -1,    -1,    -1,    93,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   102,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,   134,
     135,   136,   137,    -1,   139,   140,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,   171,    -1,    89,    -1,
      -1,    -1,    93,   178,    -1,    12,    -1,    -1,    -1,    -1,
      -1,   102,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,   127,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,    -1,   139,   140,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
     171,    -1,    89,    -1,    -1,    -1,    93,   178,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   102,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
     127,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,    -1,   139,   140,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,   171,    -1,    89,    -1,    -1,    -1,
      93,   178,    -1,    12,    -1,    -1,    -1,    -1,    -1,   102,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,   127,   128,   129,   130,   131,    -1,
      -1,   134,   135,   136,   137,    -1,   139,   140,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,   167,   168,   169,    -1,   171,    -1,
      89,    -1,    -1,    -1,    93,   178,    -1,    12,    -1,    -1,
      -1,    -1,    -1,   102,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,   128,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,    -1,
     139,   140,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,   167,   168,
     169,    -1,   171,    -1,    89,    -1,    -1,    -1,    93,   178,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   102,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,   134,
     135,   136,   137,    -1,   139,   140,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,   171,    -1,    89,    -1,
      -1,    -1,    93,   178,    -1,    12,    -1,    -1,    -1,    -1,
      -1,   102,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,   127,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,    -1,   139,   140,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
     171,    -1,    89,    -1,    -1,    -1,    93,   178,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   102,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
     127,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,    -1,   139,   140,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,   171,    -1,    89,    -1,    -1,    -1,
      93,   178,    -1,    -1,    -1,    12,    -1,    -1,    -1,   102,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,   127,   128,   129,   130,   131,    -1,
      47,   134,   135,   136,   137,    -1,   139,   140,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,   167,   168,   169,    -1,   171,    -1,
      -1,    -1,    89,    -1,    -1,   178,    93,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,   171,    89,    -1,    -1,    -1,    93,
      -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,   125,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,   145,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    72,    -1,   167,   168,   169,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
      89,    -1,    -1,    -1,    93,    -1,    12,   178,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,   167,   168,
     169,    -1,   171,    89,    -1,    -1,    -1,    93,    -1,   178,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,   171,    -1,    89,    -1,    -1,
      -1,    93,   178,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,   171,
      89,    -1,    -1,    -1,    93,    12,   178,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,   167,   168,
     169,    -1,    89,    -1,    -1,    -1,    93,    -1,    12,   178,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,   171,    89,    -1,    -1,    -1,    93,
      12,   178,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,   145,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,   169,    -1,    89,    -1,    -1,
      -1,    93,    12,    -1,   178,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,    89,
      -1,    -1,    -1,    93,    -1,    12,   178,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,   169,
      -1,   171,    89,    -1,    -1,    -1,    93,    -1,   178,    12,
      -1,    -1,    -1,    -1,    -1,   102,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,   171,    -1,    89,    -1,    -1,    -1,
      93,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    31,   125,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    72,    -1,   167,   168,   169,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,   178,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,   169,
      -1,    89,    -1,    -1,    -1,    93,    12,    -1,   178,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,   169,    -1,    89,    -1,    -1,    -1,    93,   176,    12,
     178,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,   171,    89,    -1,    -1,    -1,
      93,    12,   178,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,   166,   167,   168,   169,    -1,    89,    -1,
      -1,    -1,    93,    12,    -1,   178,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
      89,    -1,    -1,    -1,    93,    12,    -1,   178,    -1,    -1,
      -1,    -1,    19,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,   167,   168,
     169,    -1,    89,    -1,    -1,    -1,    93,    12,    13,   178,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,    89,    -1,    -1,   174,    93,    12,
      -1,   178,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,    89,    -1,    -1,    -1,
      93,    12,    -1,   178,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,   167,   168,   169,    -1,    89,    -1,
      -1,    -1,    93,    12,    -1,   178,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,   166,   167,   168,   169,    -1,
      89,    -1,    -1,    -1,    93,    12,    -1,   178,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,   167,   168,
     169,    -1,    89,    -1,    -1,    -1,    93,    12,    -1,   178,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,    89,    -1,    -1,   174,    93,    12,
      -1,   178,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,    89,    -1,    -1,   174,
      93,    12,    13,   178,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,   167,   168,   169,    -1,    89,    -1,
      -1,    -1,    93,    12,    -1,   178,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
      89,    -1,    -1,    -1,    93,    12,    -1,   178,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,   167,   168,
     169,    -1,    89,    -1,    -1,   174,    93,    12,    -1,   178,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,    89,    -1,    -1,    -1,    93,    12,
      -1,   178,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,    89,    -1,    -1,    -1,
      93,    12,    13,   178,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,   167,   168,   169,    -1,    89,    -1,
      -1,    -1,    93,   176,    12,   178,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
      -1,    89,    -1,    -1,    -1,    93,    12,   178,    -1,    -1,
      -1,    -1,    -1,    19,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,   169,    -1,    89,    -1,    -1,    -1,    93,    12,    13,
     178,    -1,    -1,    -1,    -1,    19,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,    89,    -1,    -1,    -1,    93,
      -1,    -1,   178,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,   145,   146,   147,    60,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,   178,    -1,    -1,    93,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,    89,    -1,    -1,    -1,    93,
      12,    -1,   178,    -1,    -1,    -1,    -1,    19,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,   145,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,   169,    -1,    89,    -1,    -1,
      -1,    93,    12,    -1,   178,    -1,    -1,    -1,    -1,    19,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,    89,
      -1,    -1,    -1,    93,    12,    -1,   178,    -1,    -1,    -1,
      -1,    19,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,   169,
      -1,    89,    -1,    -1,    -1,    93,    12,    -1,   178,    -1,
      -1,    -1,    -1,    19,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,   169,    -1,    89,    -1,    -1,    -1,    93,    12,    -1,
     178,    -1,    -1,    -1,    -1,    19,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,    89,    -1,    -1,    -1,    93,
      12,    -1,   178,    -1,    -1,    -1,    -1,    19,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
      -1,   145,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,   169,    -1,    89,    -1,    -1,
      -1,    93,    12,    -1,   178,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,    89,
      -1,    -1,    -1,    93,    -1,    -1,   178,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,   125,    -1,    -1,    -1,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,   142,   143,    50,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,   169,
      76,    -1,    78,    -1,    80,    -1,    82,    -1,   178,    85,
      -1,    -1,    88,    22,    90,    -1,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    -1,    -1,   109,    43,    -1,   112,    -1,    -1,   115,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    76,    -1,    78,
      -1,    80,    -1,    82,    -1,    -1,    85,    -1,    -1,    88,
      -1,    90,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    22,   115,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,   141,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,   166,    -1,    76,
      -1,    78,    -1,   172,    -1,    82,    83,    84,    85,    -1,
      -1,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,   112,   142,   143,   115,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,    -1,   158,   159,   160,   161,   162,    -1,   164,    -1,
      22,   167,   168,   169,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,   166,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    76,     3,    78,    -1,    80,    -1,
      82,    -1,    -1,    85,    -1,    -1,    88,    -1,    90,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,   109,    -1,    -1,
     112,    39,    -1,   115,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,   141,
      -1,    69,    70,    -1,    17,    18,    -1,    20,    -1,    77,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      33,    -1,    -1,    -1,   166,    -1,    39,    -1,    96,    97,
      -1,    99,    45,   101,    -1,   103,    49,    -1,   106,    52,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    62,
      -1,    -1,    -1,    -1,    -1,   123,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    87,    -1,    -1,    -1,    -1,    17,
      18,    -1,    20,    96,    97,    -1,    99,    25,   101,    27,
     103,    -1,    -1,   106,    -1,    33,    -1,   110,    -1,    -1,
     113,    39,    -1,   116,    -1,    -1,    -1,    45,    -1,    -1,
     123,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    62,    -1,    -1,    -1,   141,    -1,
      -1,    69,    70,    -1,    17,    18,    -1,    20,    -1,    77,
      78,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      33,    -1,    90,    -1,    -1,    -1,    39,    -1,    96,    97,
      -1,    99,    45,   101,    -1,   103,    49,    -1,   106,    52,
      -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,    62,
      -1,    -1,    -1,    -1,    -1,   123,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    17,
      18,    -1,    20,    96,    97,    -1,    99,    25,   101,    -1,
     103,    -1,    -1,   106,    -1,    33,    -1,   110,   111,    -1,
     113,    39,    -1,   116,    -1,    -1,    -1,    45,    -1,    -1,
     123,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    17,    18,    -1,    20,    -1,    77,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    96,    97,
      -1,    99,    45,   101,    -1,   103,    49,    -1,   106,    52,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    62,
      -1,    -1,    -1,    -1,    -1,   123,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    17,
      18,    -1,    20,    96,    97,    -1,    99,    25,   101,    -1,
     103,    -1,    -1,   106,    -1,    33,    -1,   110,    -1,    -1,
     113,    39,    -1,   116,    -1,    -1,    -1,    45,    -1,    -1,
     123,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,   123
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   183,   184,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    14,    15,    16,    17,    18,    20,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    32,    33,
      35,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      48,    49,    50,    52,    55,    56,    57,    58,    59,    61,
      62,    63,    64,    66,    67,    69,    70,    71,    76,    77,
      78,    79,    80,    81,    82,    85,    86,    87,    88,    90,
      91,    92,    94,    95,    96,    97,    98,    99,   100,   101,
     103,   104,   106,   107,   108,   109,   110,   112,   113,   115,
     116,   119,   121,   125,   141,   142,   143,   144,   145,   146,
     151,   160,   163,   164,   165,   166,   169,   171,   173,   175,
     178,   185,   186,   187,   188,   189,   190,   193,   194,   195,
     196,   201,   202,   203,   205,   206,   207,   212,   213,   217,
     218,   222,   224,   227,   228,   231,   232,   233,   234,   235,
     236,   239,   240,   242,   244,   247,   248,   249,   250,   251,
     255,   256,   261,   262,   263,   264,   267,   268,   273,   274,
     276,   277,   282,   286,   287,   289,   290,   312,   317,   318,
     322,   323,   344,   345,   346,   347,   348,   349,   350,   358,
     359,   360,   361,   362,   363,   365,   368,   369,   370,   371,
     372,   373,   374,   375,   377,   378,   379,   380,   381,   166,
      22,    35,    40,    41,    44,    55,    88,   101,   171,   175,
     247,   274,   344,   349,   359,   360,   365,   368,   370,   371,
     120,   351,   352,     3,   219,   365,   351,   365,   109,   324,
      90,   219,   187,   338,   365,   187,   173,     3,    17,    18,
      20,    25,    33,    39,    45,    49,    52,    62,    69,    70,
      77,    87,    96,    97,    99,   101,   103,   106,   110,   113,
     116,   123,   220,   221,   223,    11,    78,   122,   241,   365,
     241,   365,   241,   365,    27,   115,   243,   365,    82,    85,
     203,   173,   221,   221,   221,   173,   221,   325,   326,    32,
     207,   226,   365,   259,   260,   365,   365,    18,    77,    96,
     113,   365,   365,   365,     8,   173,   230,   229,    27,    33,
      47,    49,    51,    75,    78,    90,    97,   101,   109,   186,
     225,   278,   279,   280,   303,   304,   305,   330,   335,   365,
     338,   107,   108,   166,   282,   283,   364,   365,   367,   365,
     226,   365,   365,   365,   100,   173,   187,   365,   365,   189,
     207,   189,   207,   365,   243,   365,   367,     3,   365,   365,
     365,   365,   365,     1,   172,   185,   208,   338,   111,   152,
     339,   340,   367,   176,   241,   338,   365,   376,   365,    80,
     187,    22,    35,    38,    88,   171,   190,   191,   192,   203,
     207,   195,     8,   150,   197,   171,    46,    84,   114,   204,
      26,   323,   365,     8,   263,   365,   366,    55,   147,   265,
     221,     1,   194,   221,   269,   272,   173,   298,    53,    73,
      83,   307,    27,    75,    78,    90,   109,   308,    27,    78,
      90,   109,   306,   221,   319,   320,   325,   165,   166,   365,
      12,    19,    31,    89,    93,   125,   142,   143,   145,   146,
     147,   149,   150,   151,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   167,   168,   169,   178,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   170,   294,   173,   175,    89,
      93,   365,   365,   365,   221,   338,    55,   173,   187,   166,
     207,    47,   351,   322,   166,   148,   166,   119,   222,   341,
     342,   343,   367,   171,   221,   173,   226,    32,    47,   226,
     120,   226,   354,    32,    47,   226,   354,   226,   354,    47,
     226,   354,   221,   221,   102,   207,   102,   126,   207,   294,
     204,   341,   173,   173,   207,   187,   111,   173,   221,   327,
     328,     1,   147,   334,    47,   148,   187,   226,   148,   226,
      13,   173,   173,   226,   341,   231,   231,    47,    90,   304,
     305,   174,   148,   111,   173,   221,   302,   147,   166,   365,
     365,   124,   284,   166,   171,   226,   173,   341,   166,   252,
     252,   226,   226,   166,   172,   172,   185,   148,   172,   365,
     148,   174,   148,   174,   365,   176,   354,    47,   148,   176,
     354,   124,   148,   176,     8,    40,    41,   175,   240,     3,
     173,   198,     1,   172,   208,   215,   216,   365,   210,   365,
      65,    36,    72,   166,   263,   265,   109,   237,   287,   221,
     338,   171,   172,   272,   126,   148,   172,   174,   299,   301,
     303,   308,    90,     1,   147,   332,   333,    90,     1,     3,
      12,    17,    19,    20,    25,    45,    52,    54,    62,    70,
      87,    99,   103,   110,   116,   142,   143,   144,   145,   146,
     147,   149,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   164,   167,   168,   169,   170,   173,   221,   291,
     292,   293,   294,   344,   126,   321,   148,   166,   166,   365,
     365,   365,   241,   365,   241,   365,   365,   365,   365,   365,
     365,   365,     3,    20,    33,    62,   103,   109,   222,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,    68,   367,   367,   367,
     367,   367,   341,   341,   241,   365,   241,   365,    32,    47,
      32,    47,   102,   173,    47,   176,   221,    27,    47,    90,
     115,   353,   356,   357,   365,   381,   241,   365,   226,   325,
     365,   365,   126,   174,   148,    47,   338,    44,   365,   241,
     365,   173,   226,    44,   365,   241,   365,   226,   226,   241,
     365,   226,   126,   126,   187,    34,   187,   365,    34,   365,
      65,   174,   342,   221,   245,   246,   328,   148,   174,   225,
     365,   126,   329,   365,   326,   259,   221,   322,   365,   365,
     174,   302,   308,   280,   328,   147,   336,   337,   335,   285,
     206,     1,   257,   343,   174,    21,   253,   172,   174,   174,
     339,   174,   339,   187,   176,   241,   365,   176,   187,   365,
     176,   365,   176,   365,   365,   365,   338,   197,   174,   199,
     200,   343,   172,   172,   148,   166,    13,   150,   148,   166,
      13,    36,    72,   221,   142,   143,   144,   145,   146,   160,
     164,   169,   209,   293,   294,   295,   365,   209,   211,   265,
     171,   238,   322,   166,   173,     1,   266,   365,   270,   271,
     148,   174,   334,     1,   225,   330,   331,   105,   309,   173,
     297,   365,   142,   150,   297,   297,   365,   320,   173,   175,
     166,   166,   166,   166,   166,   166,   174,   176,    44,   241,
     365,    44,   241,   365,   342,   241,   365,   173,    47,    90,
     148,   174,    17,    20,    25,    45,    52,    62,    70,    87,
      99,   110,   116,   344,    89,    89,   351,   351,   166,   166,
     367,   343,   365,   174,   365,    32,   226,    32,   226,   355,
     356,   365,    32,   226,   354,    32,   226,   354,   226,   354,
     226,   354,   365,   365,    34,   187,    34,    34,   187,   102,
     207,   221,   174,   148,   174,   174,   327,   334,    68,   367,
     221,   174,   174,   337,   147,   281,   174,   335,   152,   296,
     329,   365,   172,    74,   117,   172,   258,   174,   173,   207,
     221,   254,   187,   176,   354,   176,   354,   187,   124,    47,
      47,    47,   176,   148,   174,   215,   222,    17,    18,    20,
      25,    45,    49,    52,    70,    77,    87,    96,    97,    99,
     101,   110,   113,   116,   171,   214,   295,   365,   111,   365,
     209,   211,   148,   166,    13,   166,   171,   266,   319,   325,
     342,   172,    82,    85,   172,   186,   194,   228,   272,   194,
     301,   309,    60,   118,   313,   299,   300,   174,   292,   294,
     174,   176,   365,    32,    32,   365,    32,    32,   174,   176,
     176,   342,   356,   334,   344,   344,   226,   226,   226,   102,
      44,   365,    44,   365,   148,   174,   102,    44,   365,   226,
      44,   365,   226,   226,   226,   187,   187,   365,   187,    34,
     166,   166,   246,   207,   329,   173,   173,   296,   329,   330,
     309,   337,   365,    32,   187,   338,   254,   147,   207,    44,
     187,   365,   176,    44,   187,   365,   176,   365,   241,   365,
     241,   365,   241,   365,   200,   209,    13,    36,    72,    36,
      72,   166,   166,   295,   365,   365,   266,   172,   166,   166,
     174,   194,   228,   228,   272,   313,     3,    92,   103,   314,
     315,   316,   365,   288,   174,   297,   297,   102,    44,    44,
     102,    44,    44,    44,    44,   174,   329,   365,   365,   365,
     356,   365,   365,   365,    34,   187,   341,   341,   296,   329,
     187,   226,   174,   365,   365,   187,   365,   187,   176,   176,
     172,   111,   365,   209,   211,   209,   211,    13,   172,   166,
     228,   275,   316,   118,   148,   126,   153,   155,   156,   158,
     159,    60,    32,   166,   206,   227,   310,   311,   365,   365,
     365,   365,   365,   365,   102,   102,   102,   102,   187,   174,
     174,   207,   102,   102,   166,   166,   166,   166,   365,   311,
     365,   315,   316,   316,   316,   316,   316,   316,   314,   185,
     102,   102,   102,   102,   102,   102,   365,   365,   365,   365,
     165,   165,   365,   365
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   182,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   190,   190,   191,   192,   192,
     192,   193,   194,   194,   195,   195,   195,   196,   197,   197,
     198,   198,   199,   199,   200,   201,   202,   202,   202,   203,
     203,   203,   204,   204,   205,   206,   206,   206,   207,   208,
     208,   209,   209,   209,   209,   209,   209,   210,   210,   210,
     210,   210,   210,   211,   211,   212,   212,   212,   212,   212,
     212,   212,   213,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     215,   215,   215,   215,   215,   216,   216,   217,   218,   218,
     218,   218,   218,   218,   219,   219,   220,   220,   220,   220,
     220,   220,   221,   221,   222,   222,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   225,   225,   225,
     225,   226,   226,   227,   227,   228,   228,   229,   228,   230,
     228,   231,   231,   231,   231,   231,   231,   231,   232,   232,
     232,   232,   233,   234,   234,   235,   236,   236,   236,   237,
     236,   238,   236,   239,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   241,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   243,   243,   244,   244,   245,   245,   246,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   248,   248,   248,   248,   248,   248,   249,   249,
     249,   250,   250,   250,   251,   251,   251,   251,   252,   252,
     253,   253,   253,   254,   254,   255,   256,   256,   257,   257,
     258,   258,   258,   259,   259,   259,   260,   260,   261,   262,
     262,   263,   264,   264,   264,   265,   265,   266,   266,   266,
     266,   266,   267,   267,   268,   269,   269,   270,   269,   269,
     271,   269,   272,   272,   273,   275,   274,   276,   277,   277,
     277,   278,   278,   279,   279,   280,   280,   280,   281,   281,
     282,   284,   283,   285,   283,   286,   288,   287,   289,   289,
     289,   289,   289,   290,   291,   291,   292,   292,   292,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   295,   295,   296,   296,
     297,   297,   298,   298,   299,   299,   300,   300,   301,   302,
     302,   303,   303,   303,   303,   303,   303,   304,   304,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   306,   306,
     306,   306,   306,   306,   307,   307,   307,   308,   308,   308,
     308,   308,   308,   308,   309,   309,   310,   310,   311,   311,
     311,   312,   313,   313,   313,   313,   313,   314,   314,   315,
     315,   315,   315,   315,   315,   315,   316,   316,   317,   318,
     318,   319,   319,   320,   321,   321,   322,   322,   322,   322,
     322,   324,   323,   323,   325,   325,   326,   326,   327,   327,
     327,   328,   328,   328,   329,   329,   329,   330,   331,   331,
     331,   332,   332,   333,   333,   334,   334,   334,   334,   335,
     335,   336,   337,   337,   338,   338,   339,   339,   340,   340,
     341,   341,   342,   342,   343,   343,   344,   344,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   347,   347,   347,   347,   347,   347,   347,   348,
     349,   350,   350,   350,   350,   350,   350,   350,   351,   351,
     352,   353,   353,   354,   355,   355,   356,   356,   356,   357,
     357,   357,   357,   357,   357,   358,   358,   358,   358,   358,
     359,   359,   359,   359,   359,   360,   361,   361,   361,   361,
     361,   361,   362,   363,   364,   364,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   366,   366,   367,   367,   367,   368,   368,
     368,   368,   369,   369,   369,   369,   369,   370,   370,   370,
     371,   371,   371,   371,   371,   371,   372,   372,   372,   372,
     373,   373,   374,   374,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   376,   376,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   378,   378,   378,   378,   378,   378,   378,   379,
     379,   379,   379,   380,   380,   380,   380,   381,   381,   381,
     381,   381,   381,   381
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     3,     3,     3,     2,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     3,     3,
       2,     3,     3,     2,     2,     1,     1,     0,     2,     1,
       1,     1,     1,     2,     3,     2,     2,     2,     0,     3,
       2,     3,     1,     3,     1,     4,     3,     4,     4,     0,
       1,     1,     0,     1,     6,     2,     3,     3,     1,     1,
       2,     1,     1,     3,     3,     3,     5,     1,     3,     3,
       3,     5,     5,     0,     1,     4,     6,     8,     8,     6,
       8,     8,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     5,     1,     3,     3,     4,     4,
       4,     4,     4,     4,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     3,     1,     1,     0,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       5,     2,     1,     1,     1,     1,     6,     7,     3,     0,
       6,     0,     6,     2,     5,     3,     3,     6,     6,     4,
       5,     5,     3,     3,     6,     5,     6,     5,     6,     3,
       4,     3,     4,     5,     6,     5,     6,     3,     4,     3,
       4,     6,     7,     6,     7,     4,     5,     4,     5,     4,
       4,     3,     6,     5,     4,     3,     6,     5,     6,     5,
       8,     7,     4,     4,     6,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     4,
       7,     5,     3,     6,     2,     2,     3,     3,     0,     2,
       2,     3,     5,     1,     3,     3,     5,     5,     0,     2,
       3,     2,     3,     4,     3,     1,     1,     3,     3,     5,
       5,     2,     1,     1,     1,     0,     2,     0,     2,     3,
       3,     4,     3,     3,     3,     1,     2,     0,     4,     2,
       0,     5,     1,     3,     1,     0,     8,     0,     1,     1,
       1,     0,     1,     1,     3,     1,     3,     1,     0,     2,
       6,     0,     3,     0,     4,     1,     0,     7,     4,     4,
       6,     6,     4,     2,     1,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     3,     2,     3,     1,     3,     0,     1,     1,     1,
       1,     4,     5,     4,     5,     6,     6,     0,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     0,     1,     1,     1,     1,     2,
       1,     1,     0,     2,     2,     4,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     3,     1,
       2,     1,     3,     2,     0,     2,     1,     2,     1,     1,
       1,     0,     5,     3,     1,     3,     3,     5,     1,     1,
       3,     1,     2,     3,     0,     2,     2,     1,     1,     1,
       1,     2,     1,     0,     1,     0,     2,     2,     1,     1,
       1,     2,     0,     1,     1,     3,     1,     1,     3,     3,
       0,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     4,     4,     5,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       6,     6,     4,     9,     9,     7,     6,     6,     4,     9,
       9,     7,     2,     3,     4,     6,     6,     9,     9,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       4,     1,     3,     4,     1,     3,     4,     3,     3,     1,
       1,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       2,     8,     8,     9,     9,     4,     3,     3,     2,     2,
       2,     1,     3,     4,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     4,     4,     4,
       3,     3,     3,     3,     5,     5,     3,     4,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     4,     3,     4,     3,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYCHPL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYCHPL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYCHPL_error or YYCHPL_UNDEF. */
#define YYERRCODE YYCHPL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYCHPL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYCHPL_LTYPE_IS_TRIVIAL && YYCHPL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (context);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, context);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, ParserContext* context)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYCHPL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYCHPL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif
/* Parser data structure.  */
struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;
    /* Whether this instance has not started parsing yet.
     * If 2, it corresponds to a finished parsing.  */
    int yynew;
  };






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}





#define yychpl_nerrs yyps->yychpl_nerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yystacksize yyps->yystacksize

/* Initialize the parser data structure.  */
static void
yypstate_clear (yypstate *yyps)
{
  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

  /* Initialize the state stack, in case yypcontext_expected_tokens is
     called before the first call to yyparse. */
  *yyssp = 0;
  yyps->yynew = 1;
}

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = YY_CAST (yypstate *, YYMALLOC (sizeof *yyps));
  if (!yyps)
    return YY_NULLPTR;
  yystacksize = YYINITDEPTH;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yypstate_clear (yyps);
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
  if (yyps)
    {
#ifndef yyoverflow
      /* If the stack was reallocated but the parse did not complete, then the
         stack still needs to be freed.  */
      if (yyss != yyssa)
        YYSTACK_FREE (yyss);
#endif
      YYFREE (yyps);
    }
}



/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps,
              int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYCHPL_LTYPE_IS_TRIVIAL && YYCHPL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  switch (yyps->yynew)
    {
    case 0:
      yyn = yypact[yystate];
      goto yyread_pushed_token;

    case 2:
      yypstate_clear (yyps);
      break;

    default:
      break;
    }

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYCHPL_EMPTY; /* Cause a token to be read.  */

  yylsp[0] = *yypushed_loc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYCHPL_EMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
    }

  if (yychar <= YYCHPL_EOF)
    {
      yychar = YYCHPL_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYCHPL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYCHPL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYCHPL_EMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: toplevel_stmt_ls  */
#line 638 "chpl.ypp"
                                      { context->topLevelStatements = (yyvsp[0].exprList); }
#line 6371 "bison-chpl-lib.cpp"
    break;

  case 3: /* toplevel_stmt_ls: %empty  */
#line 642 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList(); }
#line 6377 "bison-chpl-lib.cpp"
    break;

  case 4: /* toplevel_stmt_ls: toplevel_stmt_ls toplevel_stmt  */
#line 643 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 6383 "bison-chpl-lib.cpp"
    break;

  case 6: /* toplevel_stmt: pragma_ls stmt  */
#line 650 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 6391 "bison-chpl-lib.cpp"
    break;

  case 7: /* pragma_ls: TPRAGMA STRINGLITERAL  */
#line 658 "chpl.ypp"
  {
    context->notePragma((yyloc), (yyvsp[0].expr));
  }
#line 6399 "bison-chpl-lib.cpp"
    break;

  case 8: /* pragma_ls: pragma_ls TPRAGMA STRINGLITERAL  */
#line 662 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-1]), (yylsp[0]));
    context->notePragma(loc, (yyvsp[0].expr));
  }
#line 6408 "bison-chpl-lib.cpp"
    break;

  case 9: /* stmt: attribute_group attribute_receiver  */
#line 672 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6416 "bison-chpl-lib.cpp"
    break;

  case 10: /* stmt: stmt_base  */
#line 677 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6424 "bison-chpl-lib.cpp"
    break;

  case 12: /* stmt_base: decl_base  */
#line 684 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6430 "bison-chpl-lib.cpp"
    break;

  case 13: /* stmt_base: include_module_stmt  */
#line 685 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6436 "bison-chpl-lib.cpp"
    break;

  case 14: /* stmt_base: block_stmt  */
#line 686 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6442 "bison-chpl-lib.cpp"
    break;

  case 15: /* stmt_base: use_stmt  */
#line 687 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6448 "bison-chpl-lib.cpp"
    break;

  case 16: /* stmt_base: import_stmt  */
#line 688 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6454 "bison-chpl-lib.cpp"
    break;

  case 17: /* stmt_base: require_stmt  */
#line 689 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6460 "bison-chpl-lib.cpp"
    break;

  case 18: /* stmt_base: extern_block_stmt  */
#line 690 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6466 "bison-chpl-lib.cpp"
    break;

  case 19: /* stmt_base: implements_stmt  */
#line 691 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6472 "bison-chpl-lib.cpp"
    break;

  case 20: /* stmt_base: interface_stmt  */
#line 692 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6478 "bison-chpl-lib.cpp"
    break;

  case 21: /* stmt_base: TDEFER stmt  */
#line 694 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]),
                               false, (yylsp[-1]), (yyvsp[0].commentsAndStmt));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Defer::build(BUILDER, LOC((yyloc)), blockStyle,
                             std::move(stmts));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6495 "bison-chpl-lib.cpp"
    break;

  case 22: /* stmt_base: try_stmt  */
#line 706 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyloc), (yyvsp[0].commentsAndStmt)); }
#line 6501 "bison-chpl-lib.cpp"
    break;

  case 23: /* stmt_base: return_stmt  */
#line 707 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6507 "bison-chpl-lib.cpp"
    break;

  case 24: /* stmt_base: TBREAK opt_label_ident TSEMI  */
#line 709 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto ident = !(yyvsp[-1].uniqueStr).isEmpty() ? Identifier::build(BUILDER, LOC((yylsp[-1])), (yyvsp[-1].uniqueStr))
                               : nullptr;
    auto node = Break::build(BUILDER, LOC((yyloc)), std::move(ident));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6520 "bison-chpl-lib.cpp"
    break;

  case 25: /* stmt_base: TCONTINUE opt_label_ident TSEMI  */
#line 718 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto ident = !(yyvsp[-1].uniqueStr).isEmpty() ? Identifier::build(BUILDER, LOC((yylsp[-1])), (yyvsp[-1].uniqueStr))
                               : nullptr;
    auto node = Continue::build(BUILDER, LOC((yyloc)), std::move(ident));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6533 "bison-chpl-lib.cpp"
    break;

  case 26: /* stmt_base: TLABEL ident_def stmt  */
#line 727 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildLabelStmt((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].commentsAndStmt));
  }
#line 6541 "bison-chpl-lib.cpp"
    break;

  case 27: /* stmt_base: TYIELD opt_try_expr TSEMI  */
#line 731 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Yield::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6552 "bison-chpl-lib.cpp"
    break;

  case 28: /* stmt_base: error TSEMI  */
#line 738 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = STMT((yyloc), ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
    context->resetDeclStateOnError();
  }
#line 6561 "bison-chpl-lib.cpp"
    break;

  case 29: /* tryable_stmt: assignment_stmt  */
#line 745 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6567 "bison-chpl-lib.cpp"
    break;

  case 30: /* tryable_stmt: if_stmt  */
#line 746 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6573 "bison-chpl-lib.cpp"
    break;

  case 31: /* tryable_stmt: loop_stmt  */
#line 747 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6579 "bison-chpl-lib.cpp"
    break;

  case 32: /* tryable_stmt: select_stmt  */
#line 748 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6585 "bison-chpl-lib.cpp"
    break;

  case 33: /* tryable_stmt: manage_stmt  */
#line 749 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6591 "bison-chpl-lib.cpp"
    break;

  case 34: /* tryable_stmt: stmt_level_expr TSEMI  */
#line 750 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt(STMT((yyloc),(yyvsp[-1].expr))); }
#line 6597 "bison-chpl-lib.cpp"
    break;

  case 35: /* tryable_stmt: throw_stmt  */
#line 751 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6603 "bison-chpl-lib.cpp"
    break;

  case 36: /* tryable_stmt: TBEGIN opt_task_intent_ls stmt  */
#line 753 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    YYLTYPE locBodyAnchor = context->makeLocationAtLast((yylsp[-1]));
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]),
                               false, locBodyAnchor, (yyvsp[0].commentsAndStmt));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Begin::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].withClause)), blockStyle,
                             std::move(stmts));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6621 "bison-chpl-lib.cpp"
    break;

  case 37: /* tryable_stmt: TCOBEGIN opt_task_intent_ls block_stmt  */
#line 767 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    YYLTYPE locBodyAnchor = context->makeLocationAtLast((yylsp[-1]));
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]),
                               false, locBodyAnchor, (yyvsp[0].commentsAndStmt));
    CHPL_ASSERT(blockStyle == BlockStyle::EXPLICIT);
    auto taskBodies = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Cobegin::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].withClause)),
                               std::move(taskBodies));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6640 "bison-chpl-lib.cpp"
    break;

  case 38: /* tryable_stmt: TDELETE expr_ls TSEMI  */
#line 782 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = Delete::build(BUILDER, LOC((yyloc)), std::move(exprs));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6652 "bison-chpl-lib.cpp"
    break;

  case 39: /* tryable_stmt: TLOCAL expr do_stmt  */
#line 790 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Local::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)), blockStyle,
                             std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6668 "bison-chpl-lib.cpp"
    break;

  case 40: /* tryable_stmt: TLOCAL do_stmt  */
#line 802 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Local::build(BUILDER, LOC((yyloc)), blockStyle, std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6683 "bison-chpl-lib.cpp"
    break;

  case 41: /* tryable_stmt: TON expr do_stmt  */
#line 813 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = On::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)), blockStyle,
                          std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6699 "bison-chpl-lib.cpp"
    break;

  case 42: /* tryable_stmt: TSERIAL expr do_stmt  */
#line 825 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Serial::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)), blockStyle,
                              std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6715 "bison-chpl-lib.cpp"
    break;

  case 43: /* tryable_stmt: TSERIAL do_stmt  */
#line 837 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Serial::build(BUILDER, LOC((yyloc)), blockStyle, std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6730 "bison-chpl-lib.cpp"
    break;

  case 44: /* tryable_stmt: TSYNC stmt  */
#line 848 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]),
                               false, (yylsp[-1]), (yyvsp[0].commentsAndStmt));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Sync::build(BUILDER, LOC((yyloc)), blockStyle,
                            std::move(stmts));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6747 "bison-chpl-lib.cpp"
    break;

  case 47: /* collect_attributes: %empty  */
#line 868 "chpl.ypp"
  {
    auto attributeGroup = context->buildAttributeGroup((yyloc));
    if (attributeGroup != nullptr) {
      context->resetAttributeGroupPartsState();
    }
    context->loopAttributes = attributeGroup.release();
  }
#line 6759 "bison-chpl-lib.cpp"
    break;

  case 48: /* attribute_receiver: collect_attributes loop_stmt  */
#line 878 "chpl.ypp"
                               { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6765 "bison-chpl-lib.cpp"
    break;

  case 54: /* attribute_decl_stmt: attribute_decl_begin opt_attribute_decl_toolspace opt_attribute_actuals  */
#line 894 "chpl.ypp"
 {
  context->noteAttribute((yylsp[-2]), (yyvsp[-2].expr), true, (yyvsp[-1].exprList), (yyvsp[0].maybeNamedActualList));
 }
#line 6773 "bison-chpl-lib.cpp"
    break;

  case 55: /* attribute_decl_stmt: attribute_decl_begin opt_attribute_decl_toolspace  */
#line 898 "chpl.ypp"
 {
  // this allows us to distinguish between @attribute() and @attribute
  // but should not be needed once `@unstable "msg"` is deprecated and gone
  auto lst = new MaybeNamedActualList();
  context->noteAttribute((yylsp[-1]), (yyvsp[-1].expr), false, (yyvsp[0].exprList), lst);
 }
#line 6784 "bison-chpl-lib.cpp"
    break;

  case 56: /* attribute_decl_stmt: attribute_decl_begin STRINGLITERAL  */
#line 905 "chpl.ypp"
 {
  // this allows us to maintain @unstable "message" without requiring parens
  // but should not be needed once `@unstable "msg"` is deprecated and gone
  auto lst = new MaybeNamedActualList();
  auto actual = makeMaybeNamedActual((yyvsp[0].expr));
  lst->push_back(actual);
  context->noteAttribute((yylsp[-1]), (yyvsp[-1].expr), false, context->makeList(), lst);
 }
#line 6797 "bison-chpl-lib.cpp"
    break;

  case 57: /* attribute_decl_begin: TATMARK TIDENT  */
#line 917 "chpl.ypp"
  {
    auto ident = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr));
    (yyval.expr) = ident;
  }
#line 6806 "bison-chpl-lib.cpp"
    break;

  case 58: /* opt_attribute_decl_toolspace: %empty  */
#line 924 "chpl.ypp"
  {
    (yyval.exprList)=context->makeList();
  }
#line 6814 "bison-chpl-lib.cpp"
    break;

  case 59: /* opt_attribute_decl_toolspace: TDOT TIDENT opt_attribute_decl_toolspace  */
#line 928 "chpl.ypp"
  {
    // had to create this as a list first, otherwise they get inserted in the
    // wrong order.
    auto lst = context->makeList(context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr)));
    (yyval.exprList) = context->appendList(lst, (yyvsp[0].exprList));
  }
#line 6825 "bison-chpl-lib.cpp"
    break;

  case 60: /* opt_attribute_actuals: TLP TRP  */
#line 938 "chpl.ypp"
  { (yyval.maybeNamedActualList)=new MaybeNamedActualList(); }
#line 6831 "bison-chpl-lib.cpp"
    break;

  case 61: /* opt_attribute_actuals: TLP attribute_actuals_ls TRP  */
#line 940 "chpl.ypp"
  {
    (yyval.maybeNamedActualList) = (yyvsp[-1].maybeNamedActualList);
  }
#line 6839 "bison-chpl-lib.cpp"
    break;

  case 62: /* attribute_actuals_ls: attribute_actual  */
#line 947 "chpl.ypp"
  { auto lst = new MaybeNamedActualList();
    lst->push_back((yyvsp[0].maybeNamedActual));
    (yyval.maybeNamedActualList) = lst;
  }
#line 6848 "bison-chpl-lib.cpp"
    break;

  case 63: /* attribute_actuals_ls: attribute_actuals_ls TCOMMA attribute_actual  */
#line 952 "chpl.ypp"
  {
      MaybeNamedActualList* lst = (yyvsp[-2].maybeNamedActualList);
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
  }
#line 6858 "bison-chpl-lib.cpp"
    break;

  case 65: /* module_decl_start: opt_access_control opt_prototype TMODULE ident_def  */
#line 965 "chpl.ypp"
    {
      // take into account location of public/private, if any
      auto loc = context->declStartLoc((yylsp[-1]));

      ModuleParts parts = {
        .comments=context->gatherComments(loc),
        .attributeGroup=context->buildAttributeGroup((yyloc)).release(),
        .visibility=(yyvsp[-3].visibilityTag),
        .kind=(yyvsp[-2].moduleKind),
        .name=(yyvsp[0].uniqueStr)
      };

      (yyval.moduleParts) = parts;
      context->resetDeclState();
      context->clearComments();
    }
#line 6879 "bison-chpl-lib.cpp"
    break;

  case 66: /* module_decl_stmt: module_decl_start TLCBR TRCBR  */
#line 985 "chpl.ypp"
    {
      context->clearCommentsBefore((yylsp[-1]));

      ModuleParts parts = (yyvsp[-2].moduleParts);
      ParserExprList* body = context->makeList();
      context->appendList(body, context->gatherComments((yylsp[0])));
      auto mod = Module::build(BUILDER, LOC((yylsp[-2])), toOwned(parts.attributeGroup),
                               parts.visibility,
                               parts.name,
                               parts.kind,
                               context->consumeList(body));
      CommentsAndStmt cs = {parts.comments, mod.release()};
      (yyval.commentsAndStmt) = cs;
    }
#line 6898 "bison-chpl-lib.cpp"
    break;

  case 67: /* module_decl_stmt: module_decl_start TLCBR stmt_ls TRCBR  */
#line 1000 "chpl.ypp"
    {
      context->clearCommentsBefore((yylsp[-2]));

      ModuleParts parts = (yyvsp[-3].moduleParts);
      ParserExprList* body = (yyvsp[-1].exprList);
      context->appendList(body, context->gatherComments((yylsp[0])));
      auto mod = Module::build(BUILDER, LOC((yylsp[-3])), toOwned(parts.attributeGroup),
                               parts.visibility,
                               parts.name,
                               parts.kind,
                               context->consumeList(body));
      CommentsAndStmt cs = {parts.comments, mod.release()};
      (yyval.commentsAndStmt) = cs;
    }
#line 6917 "bison-chpl-lib.cpp"
    break;

  case 68: /* module_decl_stmt: module_decl_start TLCBR error TRCBR  */
#line 1015 "chpl.ypp"
    {
      ModuleParts parts = (yyvsp[-3].moduleParts);
      auto err = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
      ParserExprList* body = context->makeList(std::move(err));
      auto mod = Module::build(BUILDER, LOC((yylsp[-3])), toOwned(parts.attributeGroup),
                               parts.visibility,
                               parts.name,
                               parts.kind,
                               context->consumeList(body));
      CommentsAndStmt cs = {parts.comments, mod.release()};
      (yyval.commentsAndStmt) = cs;
    }
#line 6934 "bison-chpl-lib.cpp"
    break;

  case 69: /* opt_access_control: %empty  */
#line 1030 "chpl.ypp"
           { (yyval.visibilityTag) = context->noteVisibility(Decl::DEFAULT_VISIBILITY); }
#line 6940 "bison-chpl-lib.cpp"
    break;

  case 70: /* opt_access_control: TPUBLIC  */
#line 1031 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PUBLIC); }
#line 6947 "bison-chpl-lib.cpp"
    break;

  case 71: /* opt_access_control: TPRIVATE  */
#line 1033 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PRIVATE); }
#line 6954 "bison-chpl-lib.cpp"
    break;

  case 72: /* opt_prototype: %empty  */
#line 1038 "chpl.ypp"
             { (yyval.moduleKind) = Module::DEFAULT_MODULE_KIND; }
#line 6960 "bison-chpl-lib.cpp"
    break;

  case 73: /* opt_prototype: TPROTOTYPE  */
#line 1039 "chpl.ypp"
             { context->noteDeclStartLoc((yylsp[0]));
               (yyval.moduleKind) = Module::PROTOTYPE;  }
#line 6967 "bison-chpl-lib.cpp"
    break;

  case 74: /* include_module_stmt: TINCLUDE opt_access_control opt_prototype TMODULE ident_def TSEMI  */
#line 1045 "chpl.ypp"
  {
    auto node = Include::build(BUILDER, LOC((yyloc)), context->visibility, (yyvsp[-3].moduleKind), (yyvsp[-1].uniqueStr));
    (yyval.commentsAndStmt) = STMT((yyloc), node.release());
    context->visibility = Decl::DEFAULT_VISIBILITY;
  }
#line 6977 "bison-chpl-lib.cpp"
    break;

  case 75: /* block_stmt_body: TLCBR TRCBR  */
#line 1063 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-1]), (yylsp[0]), nullptr);
  }
#line 6985 "bison-chpl-lib.cpp"
    break;

  case 76: /* block_stmt_body: TLCBR stmt_ls TRCBR  */
#line 1067 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-2]), (yylsp[0]), (yyvsp[-1].exprList));
  }
#line 6993 "bison-chpl-lib.cpp"
    break;

  case 77: /* block_stmt_body: TLCBR error TRCBR  */
#line 1071 "chpl.ypp"
  {
    context->clearComments();
    // create a list of stmts that just has an ErroneousExpr
    auto errorExpr = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
    ParserExprList* lst = context->makeList(errorExpr.release());
    (yyval.exprList) = lst;
  }
#line 7005 "bison-chpl-lib.cpp"
    break;

  case 78: /* block_stmt: block_stmt_body  */
#line 1082 "chpl.ypp"
  {
    // comments from before the opening bracket will have been
    // gathered into stmt_ls when that was parsed, so pull out any
    // comments that occur before the opening bracket.
    // (This would be simpler to handle with midrule actions but those
    //  lead to parser conflicts).
    CommentsAndStmt cs = {0};
    cs.comments = context->gatherCommentsFromList((yyvsp[0].exprList), (yylsp[0]));

    // Create the BlockStmt
    auto blockstmt = Block::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[0].exprList)));
    cs.stmt = blockstmt.release();
    (yyval.commentsAndStmt) = cs;
  }
#line 7024 "bison-chpl-lib.cpp"
    break;

  case 79: /* stmt_ls: toplevel_stmt  */
#line 1100 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt)); }
#line 7030 "bison-chpl-lib.cpp"
    break;

  case 80: /* stmt_ls: stmt_ls toplevel_stmt  */
#line 1101 "chpl.ypp"
                                       { context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 7036 "bison-chpl-lib.cpp"
    break;

  case 81: /* renames_ls: expr  */
#line 1106 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].expr));
  }
#line 7044 "bison-chpl-lib.cpp"
    break;

  case 82: /* renames_ls: all_op_name  */
#line 1110 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 7052 "bison-chpl-lib.cpp"
    break;

  case 83: /* renames_ls: expr TAS expr  */
#line 1114 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->makeList(as);
  }
#line 7061 "bison-chpl-lib.cpp"
    break;

  case 84: /* renames_ls: renames_ls TCOMMA expr  */
#line 1119 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 7069 "bison-chpl-lib.cpp"
    break;

  case 85: /* renames_ls: renames_ls TCOMMA all_op_name  */
#line 1123 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 7077 "bison-chpl-lib.cpp"
    break;

  case 86: /* renames_ls: renames_ls TCOMMA expr TAS expr  */
#line 1127 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), as);
  }
#line 7086 "bison-chpl-lib.cpp"
    break;

  case 87: /* use_renames_ls: expr  */
#line 1137 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 7095 "bison-chpl-lib.cpp"
    break;

  case 88: /* use_renames_ls: expr TAS expr  */
#line 1142 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 7105 "bison-chpl-lib.cpp"
    break;

  case 89: /* use_renames_ls: expr TAS TUNDERSCORE  */
#line 1148 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 7116 "bison-chpl-lib.cpp"
    break;

  case 90: /* use_renames_ls: use_renames_ls TCOMMA expr  */
#line 1155 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yylsp[0]), toOwned((yyvsp[0].expr)), false);
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), node);
  }
#line 7125 "bison-chpl-lib.cpp"
    break;

  case 91: /* use_renames_ls: use_renames_ls TCOMMA expr TAS expr  */
#line 1160 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto locVisClause = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildVisibilityClause(locVisClause, toOwned(as), false);
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 7136 "bison-chpl-lib.cpp"
    break;

  case 92: /* use_renames_ls: use_renames_ls TCOMMA expr TAS TUNDERSCORE  */
#line 1167 "chpl.ypp"
  {
    auto ident = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned(ident));
    auto locVisClause = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildVisibilityClause(locVisClause, toOwned(as), false);
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 7148 "bison-chpl-lib.cpp"
    break;

  case 93: /* opt_only_ls: %empty  */
#line 1177 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 7154 "bison-chpl-lib.cpp"
    break;

  case 94: /* opt_only_ls: renames_ls  */
#line 1178 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 7160 "bison-chpl-lib.cpp"
    break;

  case 95: /* use_stmt: opt_access_control TUSE use_renames_ls TSEMI  */
#line 1183 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildMultiUseStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7169 "bison-chpl-lib.cpp"
    break;

  case 96: /* use_stmt: opt_access_control TUSE expr TEXCEPT renames_ls TSEMI  */
#line 1188 "chpl.ypp"
  {
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-3]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-5].visibilityTag), toOwned((yyvsp[-3].expr)),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7181 "bison-chpl-lib.cpp"
    break;

  case 97: /* use_stmt: opt_access_control TUSE expr TAS expr TEXCEPT renames_ls TSEMI  */
#line 1196 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), toOwned((yyvsp[-3].expr)));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7194 "bison-chpl-lib.cpp"
    break;

  case 98: /* use_stmt: opt_access_control TUSE expr TAS TUNDERSCORE TEXCEPT renames_ls TSEMI  */
#line 1205 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), std::move(ident));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7208 "bison-chpl-lib.cpp"
    break;

  case 99: /* use_stmt: opt_access_control TUSE expr TONLY opt_only_ls TSEMI  */
#line 1215 "chpl.ypp"
  {
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-3]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-5].visibilityTag), toOwned((yyvsp[-3].expr)),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7220 "bison-chpl-lib.cpp"
    break;

  case 100: /* use_stmt: opt_access_control TUSE expr TAS expr TONLY opt_only_ls TSEMI  */
#line 1223 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), toOwned((yyvsp[-3].expr)));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7233 "bison-chpl-lib.cpp"
    break;

  case 101: /* use_stmt: opt_access_control TUSE expr TAS TUNDERSCORE TONLY opt_only_ls TSEMI  */
#line 1232 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), std::move(ident));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7247 "bison-chpl-lib.cpp"
    break;

  case 102: /* import_stmt: opt_access_control TIMPORT import_ls TSEMI  */
#line 1245 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImportStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7256 "bison-chpl-lib.cpp"
    break;

  case 120: /* import_expr: expr  */
#line 1281 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)), true);
  }
#line 7264 "bison-chpl-lib.cpp"
    break;

  case 121: /* import_expr: expr TDOT all_op_name  */
#line 1285 "chpl.ypp"
  {
    auto dot = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release();
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(dot), true);
  }
#line 7273 "bison-chpl-lib.cpp"
    break;

  case 122: /* import_expr: expr TDOT import_internal_type_ident  */
#line 1290 "chpl.ypp"
  {
    auto dot = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release();
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(dot), true);
  }
#line 7282 "bison-chpl-lib.cpp"
    break;

  case 123: /* import_expr: expr TAS ident_use  */
#line 1295 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(as), true);
  }
#line 7292 "bison-chpl-lib.cpp"
    break;

  case 124: /* import_expr: expr TDOT TLCBR renames_ls TRCBR  */
#line 1301 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[-4].expr)),
                                        VisibilityClause::BRACES,
                                        context->consumeList((yyvsp[-1].exprList)), true);
  }
#line 7302 "bison-chpl-lib.cpp"
    break;

  case 125: /* import_ls: import_expr  */
#line 1309 "chpl.ypp"
                                { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 7308 "bison-chpl-lib.cpp"
    break;

  case 126: /* import_ls: import_ls TCOMMA import_expr  */
#line 1310 "chpl.ypp"
                                { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 7314 "bison-chpl-lib.cpp"
    break;

  case 127: /* require_stmt: TREQUIRE expr_ls TSEMI  */
#line 1315 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Require::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 7324 "bison-chpl-lib.cpp"
    break;

  case 128: /* assignment_stmt: lhs_expr assignop_ident opt_try_expr TSEMI  */
#line 1324 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7332 "bison-chpl-lib.cpp"
    break;

  case 129: /* assignment_stmt: lhs_expr TSWAP opt_try_expr TSEMI  */
#line 1328 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7340 "bison-chpl-lib.cpp"
    break;

  case 130: /* assignment_stmt: lhs_expr TASSIGNREDUCE opt_try_expr TSEMI  */
#line 1332 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7348 "bison-chpl-lib.cpp"
    break;

  case 131: /* assignment_stmt: lhs_expr TASSIGNLAND opt_try_expr TSEMI  */
#line 1336 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7356 "bison-chpl-lib.cpp"
    break;

  case 132: /* assignment_stmt: lhs_expr TASSIGNLOR opt_try_expr TSEMI  */
#line 1340 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7364 "bison-chpl-lib.cpp"
    break;

  case 133: /* assignment_stmt: lhs_expr TASSIGN TNOINIT TSEMI  */
#line 1344 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr))));
    }
#line 7372 "bison-chpl-lib.cpp"
    break;

  case 134: /* opt_label_ident: %empty  */
#line 1352 "chpl.ypp"
         { (yyval.uniqueStr) = STR(""); }
#line 7378 "bison-chpl-lib.cpp"
    break;

  case 135: /* opt_label_ident: TIDENT  */
#line 1353 "chpl.ypp"
         { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7384 "bison-chpl-lib.cpp"
    break;

  case 144: /* ident_use: TIDENT  */
#line 1379 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7390 "bison-chpl-lib.cpp"
    break;

  case 145: /* ident_use: TTHIS  */
#line 1380 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7396 "bison-chpl-lib.cpp"
    break;

  case 165: /* scalar_type: TBOOL  */
#line 1407 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7402 "bison-chpl-lib.cpp"
    break;

  case 166: /* scalar_type: TENUM  */
#line 1408 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7408 "bison-chpl-lib.cpp"
    break;

  case 167: /* scalar_type: TINT  */
#line 1409 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7414 "bison-chpl-lib.cpp"
    break;

  case 168: /* scalar_type: TUINT  */
#line 1410 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7420 "bison-chpl-lib.cpp"
    break;

  case 169: /* scalar_type: TREAL  */
#line 1411 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7426 "bison-chpl-lib.cpp"
    break;

  case 170: /* scalar_type: TIMAG  */
#line 1412 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7432 "bison-chpl-lib.cpp"
    break;

  case 171: /* scalar_type: TCOMPLEX  */
#line 1413 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7438 "bison-chpl-lib.cpp"
    break;

  case 172: /* scalar_type: TBYTES  */
#line 1414 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7444 "bison-chpl-lib.cpp"
    break;

  case 173: /* scalar_type: TSTRING  */
#line 1415 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7450 "bison-chpl-lib.cpp"
    break;

  case 174: /* scalar_type: TLOCALE  */
#line 1416 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7456 "bison-chpl-lib.cpp"
    break;

  case 175: /* scalar_type: TNOTHING  */
#line 1417 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7462 "bison-chpl-lib.cpp"
    break;

  case 176: /* scalar_type: TVOID  */
#line 1418 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7468 "bison-chpl-lib.cpp"
    break;

  case 181: /* do_stmt: TDO stmt  */
#line 1432 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), true }; }
#line 7474 "bison-chpl-lib.cpp"
    break;

  case 182: /* do_stmt: block_stmt  */
#line 1433 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), false }; }
#line 7480 "bison-chpl-lib.cpp"
    break;

  case 183: /* return_stmt: TRETURN TSEMI  */
#line 1438 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-1]));
    auto node = Return::build(BUILDER, LOC((yyloc)), /*value*/ nullptr);
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7491 "bison-chpl-lib.cpp"
    break;

  case 184: /* return_stmt: TRETURN opt_try_expr TSEMI  */
#line 1445 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7502 "bison-chpl-lib.cpp"
    break;

  case 185: /* class_level_stmt: TSEMI  */
#line 1455 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildEmptyStmt((yyloc)));
    }
#line 7510 "bison-chpl-lib.cpp"
    break;

  case 186: /* class_level_stmt: inner_class_level_stmt  */
#line 1459 "chpl.ypp"
    {
      // visibility should be default when inner_class_level_stmt is parsed
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7520 "bison-chpl-lib.cpp"
    break;

  case 187: /* $@1: %empty  */
#line 1464 "chpl.ypp"
          {context->noteDeclStartLoc((yylsp[0]));
           context->noteVisibility(Decl::PUBLIC);}
#line 7527 "bison-chpl-lib.cpp"
    break;

  case 188: /* class_level_stmt: TPUBLIC $@1 inner_class_level_stmt  */
#line 1466 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7536 "bison-chpl-lib.cpp"
    break;

  case 189: /* $@2: %empty  */
#line 1470 "chpl.ypp"
           {context->noteDeclStartLoc((yylsp[0]));
            context->noteVisibility(Decl::PRIVATE);}
#line 7543 "bison-chpl-lib.cpp"
    break;

  case 190: /* class_level_stmt: TPRIVATE $@2 inner_class_level_stmt  */
#line 1472 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7552 "bison-chpl-lib.cpp"
    break;

  case 198: /* forwarding_decl_stmt: forwarding_decl_start expr TSEMI  */
#line 1490 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-2].attributeGroup)), toOwned((yyvsp[-1].expr)),
                                        VisibilityClause::NONE, nullptr);
    }
#line 7561 "bison-chpl-lib.cpp"
    break;

  case 199: /* forwarding_decl_stmt: forwarding_decl_start expr TEXCEPT renames_ls TSEMI  */
#line 1495 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attributeGroup)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::EXCEPT, (yyvsp[-1].exprList));
    }
#line 7570 "bison-chpl-lib.cpp"
    break;

  case 200: /* forwarding_decl_stmt: forwarding_decl_start expr TONLY opt_only_ls TSEMI  */
#line 1500 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attributeGroup)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::ONLY, (yyvsp[-1].exprList));
    }
#line 7579 "bison-chpl-lib.cpp"
    break;

  case 201: /* forwarding_decl_stmt: forwarding_decl_start var_decl_stmt  */
#line 1505 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-1].attributeGroup)), (yyvsp[0].commentsAndStmt));
    }
#line 7587 "bison-chpl-lib.cpp"
    break;

  case 202: /* forwarding_decl_start: TFORWARDING  */
#line 1512 "chpl.ypp"
  {
    (yyval.attributeGroup) = context->buildAttributeGroup((yyloc)).release();
    context->resetAttributeGroupPartsState();
  }
#line 7596 "bison-chpl-lib.cpp"
    break;

  case 203: /* extern_or_export: TEXTERN  */
#line 1519 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXTERN; }
#line 7602 "bison-chpl-lib.cpp"
    break;

  case 204: /* extern_or_export: TEXPORT  */
#line 1520 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXPORT; }
#line 7608 "bison-chpl-lib.cpp"
    break;

  case 205: /* extern_export_decl_stmt_start: extern_or_export  */
#line 1525 "chpl.ypp"
  {
    // Sets the start location only if it is still unset.
    context->noteDeclStartLoc((yylsp[0]));
    (yyval.linkageTag) = context->noteLinkage((yyvsp[0].linkageTag));
  }
#line 7618 "bison-chpl-lib.cpp"
    break;

  case 206: /* extern_export_decl_stmt: extern_export_decl_stmt_start class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1535 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-5]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7627 "bison-chpl-lib.cpp"
    break;

  case 207: /* extern_export_decl_stmt: extern_export_decl_stmt_start STRINGLITERAL class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1541 "chpl.ypp"
  {
    // Set the linkage name since it will be nullptr otherwise.
    (yyvsp[-4].typeDeclParts).linkageName = (yyvsp[-5].expr);
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-6]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7638 "bison-chpl-lib.cpp"
    break;

  case 208: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr fn_decl_stmt  */
#line 1548 "chpl.ypp"
  {
    auto loc = context->declStartLoc((yylsp[-2]));

    AstNode* optExpr = (yyvsp[-1].expr);
    FunctionParts fp = (yyvsp[0].functionParts);

    auto commentList = context->appendList(context->makeList(),
                                           fp.comments);

    auto comments = context->gatherCommentsFromList(commentList, loc);
    delete commentList;

    fp.linkage = (yyvsp[-2].linkageTag);
    fp.comments = comments;
    fp.linkageNameExpr = optExpr;
    (yyval.commentsAndStmt) = context->buildExternExportFunctionDecl((yyloc), fp);
  }
#line 7660 "bison-chpl-lib.cpp"
    break;

  case 209: /* $@3: %empty  */
#line 1566 "chpl.ypp"
  {
    context->storeVarDeclLinkageName((yyvsp[0].expr));
  }
#line 7668 "bison-chpl-lib.cpp"
    break;

  case 210: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr $@3 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 1570 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7677 "bison-chpl-lib.cpp"
    break;

  case 211: /* $@4: %empty  */
#line 1575 "chpl.ypp"
  {
    context->storeVarDeclLinkageName((yyvsp[-1].expr));
    context->noteVarDeclKind(Variable::TYPE);
  }
#line 7686 "bison-chpl-lib.cpp"
    break;

  case 212: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr TTYPE $@4 type_alias_decl_stmt_inner_ls TSEMI  */
#line 1580 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7695 "bison-chpl-lib.cpp"
    break;

  case 213: /* extern_block_stmt: TEXTERN EXTERNCODE  */
#line 1588 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildExternBlockStmt((yylsp[-1]), (yyvsp[0].sizedStr));
  }
#line 7703 "bison-chpl-lib.cpp"
    break;

  case 214: /* loop_stmt: TDO stmt TWHILE expr TSEMI  */
#line 1595 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-4]),
                               false, (yylsp[-4]), (yyvsp[-3].commentsAndStmt));
    // If the body is not a block, snag any comments before the 'while'.
    if (blockStyle == BlockStyle::IMPLICIT) {
      exprLst = context->appendList(exprLst, context->gatherComments((yylsp[-2])));
    }
    auto body = context->consumeToBlock((yylsp[-4]), exprLst);
    auto node = DoWhile::build(BUILDER, LOC((yyloc)), blockStyle,
                               std::move(body),
                               toOwned((yyvsp[-1].expr)),
                               toOwned(context->loopAttributes));
    context->loopAttributes = nullptr;
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7727 "bison-chpl-lib.cpp"
    break;

  case 215: /* loop_stmt: TWHILE expr do_stmt  */
#line 1615 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto body = context->consumeToBlock((yylsp[0]), exprLst);
    auto node = While::build(BUILDER, LOC((yylsp[-2])), toOwned((yyvsp[-1].expr)),
                             blockStyle,
                             std::move(body),
                             toOwned(context->loopAttributes));
    context->loopAttributes = nullptr;
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7746 "bison-chpl-lib.cpp"
    break;

  case 216: /* loop_stmt: TWHILE ifvar do_stmt  */
#line 1630 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto body = context->consumeToBlock((yylsp[0]), exprLst);
    auto node = While::build(BUILDER, LOC((yylsp[-2])), toOwned((yyvsp[-1].expr)),
                             blockStyle,
                             std::move(body),
                             toOwned(context->loopAttributes));
    context->loopAttributes = nullptr;
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7765 "bison-chpl-lib.cpp"
    break;

  case 217: /* loop_stmt: TCOFORALL expr TIN expr opt_task_intent_ls do_stmt  */
#line 1645 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7773 "bison-chpl-lib.cpp"
    break;

  case 218: /* loop_stmt: TCOFORALL expr TIN zippered_iterator opt_task_intent_ls do_stmt  */
#line 1649 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7781 "bison-chpl-lib.cpp"
    break;

  case 219: /* loop_stmt: TCOFORALL expr opt_task_intent_ls do_stmt  */
#line 1653 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7789 "bison-chpl-lib.cpp"
    break;

  case 220: /* loop_stmt: TFOR expr TIN expr do_stmt  */
#line 1657 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7797 "bison-chpl-lib.cpp"
    break;

  case 221: /* loop_stmt: TFOR expr TIN zippered_iterator do_stmt  */
#line 1661 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7805 "bison-chpl-lib.cpp"
    break;

  case 222: /* loop_stmt: TFOR expr do_stmt  */
#line 1665 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7813 "bison-chpl-lib.cpp"
    break;

  case 223: /* loop_stmt: TFOR zippered_iterator do_stmt  */
#line 1669 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7821 "bison-chpl-lib.cpp"
    break;

  case 224: /* loop_stmt: TFOR TPARAM ident_def TIN expr do_stmt  */
#line 1673 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-5]), (yylsp[0]), (yyvsp[0].blockOrDo));
    AstNode* ident = context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr));
    auto index = context->buildLoopIndexDecl((yylsp[-3]), toOwned(ident));
    auto body = context->consumeToBlock((yylsp[0]), exprLst);
    auto node = For::build(BUILDER, LOC((yylsp[-5])), std::move(index),
                           toOwned((yyvsp[-1].expr)),
                           blockStyle,
                           std::move(body),
                           /*isExpressionLevel*/ false,
                           /*isParam*/ true,
                           toOwned(context->loopAttributes));
    context->loopAttributes = nullptr;
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    context->resetAttributeGroupPartsState();
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7846 "bison-chpl-lib.cpp"
    break;

  case 225: /* loop_stmt: TFORALL expr TIN expr do_stmt  */
#line 1694 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7854 "bison-chpl-lib.cpp"
    break;

  case 226: /* loop_stmt: TFORALL expr TIN expr forall_intent_clause do_stmt  */
#line 1698 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7862 "bison-chpl-lib.cpp"
    break;

  case 227: /* loop_stmt: TFORALL expr TIN zippered_iterator do_stmt  */
#line 1702 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7870 "bison-chpl-lib.cpp"
    break;

  case 228: /* loop_stmt: TFORALL expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1706 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7878 "bison-chpl-lib.cpp"
    break;

  case 229: /* loop_stmt: TFORALL expr do_stmt  */
#line 1710 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7886 "bison-chpl-lib.cpp"
    break;

  case 230: /* loop_stmt: TFORALL expr forall_intent_clause do_stmt  */
#line 1714 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7894 "bison-chpl-lib.cpp"
    break;

  case 231: /* loop_stmt: TFORALL zippered_iterator do_stmt  */
#line 1718 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7902 "bison-chpl-lib.cpp"
    break;

  case 232: /* loop_stmt: TFORALL zippered_iterator forall_intent_clause do_stmt  */
#line 1722 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7910 "bison-chpl-lib.cpp"
    break;

  case 233: /* loop_stmt: TFOREACH expr TIN expr do_stmt  */
#line 1726 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7918 "bison-chpl-lib.cpp"
    break;

  case 234: /* loop_stmt: TFOREACH expr TIN expr forall_intent_clause do_stmt  */
#line 1730 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7926 "bison-chpl-lib.cpp"
    break;

  case 235: /* loop_stmt: TFOREACH expr TIN zippered_iterator do_stmt  */
#line 1734 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7934 "bison-chpl-lib.cpp"
    break;

  case 236: /* loop_stmt: TFOREACH expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1738 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7942 "bison-chpl-lib.cpp"
    break;

  case 237: /* loop_stmt: TFOREACH expr do_stmt  */
#line 1742 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7950 "bison-chpl-lib.cpp"
    break;

  case 238: /* loop_stmt: TFOREACH expr forall_intent_clause do_stmt  */
#line 1746 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7958 "bison-chpl-lib.cpp"
    break;

  case 239: /* loop_stmt: TFOREACH zippered_iterator do_stmt  */
#line 1750 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7966 "bison-chpl-lib.cpp"
    break;

  case 240: /* loop_stmt: TFOREACH zippered_iterator forall_intent_clause do_stmt  */
#line 1754 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7974 "bison-chpl-lib.cpp"
    break;

  case 241: /* loop_stmt: TLSBR expr_ls TIN expr TRSBR stmt  */
#line 1758 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7982 "bison-chpl-lib.cpp"
    break;

  case 242: /* loop_stmt: TLSBR expr_ls TIN expr forall_intent_clause TRSBR stmt  */
#line 1762 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7990 "bison-chpl-lib.cpp"
    break;

  case 243: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator TRSBR stmt  */
#line 1766 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7998 "bison-chpl-lib.cpp"
    break;

  case 244: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1770 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 8006 "bison-chpl-lib.cpp"
    break;

  case 245: /* loop_stmt: TLSBR expr_ls TRSBR stmt  */
#line 1774 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-2].exprList), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 8014 "bison-chpl-lib.cpp"
    break;

  case 246: /* loop_stmt: TLSBR expr_ls forall_intent_clause TRSBR stmt  */
#line 1778 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-3].exprList), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 8022 "bison-chpl-lib.cpp"
    break;

  case 247: /* loop_stmt: TLSBR zippered_iterator TRSBR stmt  */
#line 1782 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), iterExprs, nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 8031 "bison-chpl-lib.cpp"
    break;

  case 248: /* loop_stmt: TLSBR zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1787 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), iterExprs, (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 8040 "bison-chpl-lib.cpp"
    break;

  case 249: /* zippered_iterator: TZIP TLP expr_ls TRP  */
#line 1795 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = Zip::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.expr) = node.release();
  }
#line 8050 "bison-chpl-lib.cpp"
    break;

  case 250: /* if_stmt: TIF expr TTHEN stmt  */
#line 1804 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8058 "bison-chpl-lib.cpp"
    break;

  case 251: /* if_stmt: TIF expr block_stmt  */
#line 1808 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8066 "bison-chpl-lib.cpp"
    break;

  case 252: /* if_stmt: TIF expr TTHEN stmt TELSE stmt  */
#line 1812 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8074 "bison-chpl-lib.cpp"
    break;

  case 253: /* if_stmt: TIF expr block_stmt TELSE stmt  */
#line 1816 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8082 "bison-chpl-lib.cpp"
    break;

  case 254: /* if_stmt: TIF ifvar TTHEN stmt  */
#line 1820 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8090 "bison-chpl-lib.cpp"
    break;

  case 255: /* if_stmt: TIF ifvar block_stmt  */
#line 1824 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8098 "bison-chpl-lib.cpp"
    break;

  case 256: /* if_stmt: TIF ifvar TTHEN stmt TELSE stmt  */
#line 1828 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8106 "bison-chpl-lib.cpp"
    break;

  case 257: /* if_stmt: TIF ifvar block_stmt TELSE stmt  */
#line 1832 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8114 "bison-chpl-lib.cpp"
    break;

  case 258: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt  */
#line 1836 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-3]), (yyvsp[-4].expr), (yyvsp[-3].uniqueStr), (yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-1]), op, (yyvsp[0].commentsAndStmt));
  }
#line 8123 "bison-chpl-lib.cpp"
    break;

  case 259: /* if_stmt: TIF expr assignop_ident expr block_stmt  */
#line 1841 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-2]), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[0]), op, (yyvsp[0].commentsAndStmt));
  }
#line 8132 "bison-chpl-lib.cpp"
    break;

  case 260: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt TELSE stmt  */
#line 1846 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-5]), (yyvsp[-6].expr), (yyvsp[-5].uniqueStr), (yyvsp[-4].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-7]), (yylsp[-3]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8141 "bison-chpl-lib.cpp"
    break;

  case 261: /* if_stmt: TIF expr assignop_ident expr block_stmt TELSE stmt  */
#line 1851 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-4]), (yyvsp[-5].expr), (yyvsp[-4].uniqueStr), (yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-6]), (yylsp[-2]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8150 "bison-chpl-lib.cpp"
    break;

  case 262: /* ifvar: TVAR ident_def TASSIGN expr  */
#line 1859 "chpl.ypp"
  {
    auto varDecl = Variable::build(BUILDER, LOC((yyloc)),
                                   /*attributeGroup*/ nullptr,
                                   Decl::DEFAULT_VISIBILITY,
                                   Decl::DEFAULT_LINKAGE,
                                   /*linkageName*/ nullptr,
                                   /*name*/ (yyvsp[-2].uniqueStr),
                                   Variable::VAR,
                                   /*isConfig*/ false,
                                   context->currentScopeIsAggregate(),
                                   /*typeExpression*/ nullptr,
                                   toOwned((yyvsp[0].expr)));
    (yyval.expr) = varDecl.release();
  }
#line 8169 "bison-chpl-lib.cpp"
    break;

  case 263: /* ifvar: TCONST ident_def TASSIGN expr  */
#line 1874 "chpl.ypp"
  {
    auto varDecl = Variable::build(BUILDER, LOC((yyloc)),
                                   /*attributeGroup*/ nullptr,
                                   Decl::DEFAULT_VISIBILITY,
                                   Decl::DEFAULT_LINKAGE,
                                   /*linkageName*/ nullptr,
                                   /*name*/ (yyvsp[-2].uniqueStr),
                                   Variable::CONST,
                                   /*isConfig*/ false,
                                   context->currentScopeIsAggregate(),
                                   /*typeExpression*/ nullptr,
                                   toOwned((yyvsp[0].expr)));
    (yyval.expr) = varDecl.release();
  }
#line 8188 "bison-chpl-lib.cpp"
    break;

  case 264: /* interface_stmt: TINTERFACE ident_def TLP ifc_formal_ls TRP block_stmt  */
#line 1892 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildInterfaceStmt((yyloc), (yyvsp[-4].uniqueStr), (yyvsp[-2].exprList), (yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 8196 "bison-chpl-lib.cpp"
    break;

  case 265: /* interface_stmt: TINTERFACE ident_def block_stmt  */
#line 1896 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildInterfaceStmt((yyloc), (yyvsp[-1].uniqueStr), nullptr, (yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 8204 "bison-chpl-lib.cpp"
    break;

  case 266: /* ifc_formal_ls: ifc_formal  */
#line 1902 "chpl.ypp"
                                  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8210 "bison-chpl-lib.cpp"
    break;

  case 267: /* ifc_formal_ls: ifc_formal_ls TCOMMA ifc_formal  */
#line 1903 "chpl.ypp"
                                  { context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8216 "bison-chpl-lib.cpp"
    break;

  case 268: /* ifc_formal: ident_def  */
#line 1908 "chpl.ypp"
             { (yyval.expr) = context->buildInterfaceFormal((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 8222 "bison-chpl-lib.cpp"
    break;

  case 281: /* implements_type_ident: implements_type_error_ident  */
#line 1926 "chpl.ypp"
  {
    context->syntax((yyloc), "type '%s' cannot implement an interface.", (yyvsp[0].uniqueStr).c_str());
    (yyval.uniqueStr) = (yyvsp[0].uniqueStr);
  }
#line 8231 "bison-chpl-lib.cpp"
    break;

  case 288: /* implements_stmt: TIMPLEMENTS ident_def TLP actual_ls TRP TSEMI  */
#line 1952 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), YLOC2((yylsp[-4]), (yylsp[-1])), (yyvsp[-4].uniqueStr), (yyvsp[-2].maybeNamedActualList));
  }
#line 8239 "bison-chpl-lib.cpp"
    break;

  case 289: /* implements_stmt: implements_type_ident TIMPLEMENTS ident_def TSEMI  */
#line 1956 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), (yylsp[-3]), (yyvsp[-3].uniqueStr), (yylsp[-1]), (yyvsp[-1].uniqueStr), nullptr);
  }
#line 8247 "bison-chpl-lib.cpp"
    break;

  case 290: /* implements_stmt: implements_type_ident TIMPLEMENTS ident_def TLP actual_ls TRP TSEMI  */
#line 1960 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), (yylsp[-6]), (yyvsp[-6].uniqueStr), YLOC2((yylsp[-4]), (yylsp[-1])), (yyvsp[-4].uniqueStr), (yyvsp[-2].maybeNamedActualList));
  }
#line 8255 "bison-chpl-lib.cpp"
    break;

  case 291: /* ifc_constraint: TIMPLEMENTS ident_def TLP actual_ls TRP  */
#line 1967 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), YLOC2((yylsp[-3]), (yylsp[0])), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList));
  }
#line 8263 "bison-chpl-lib.cpp"
    break;

  case 292: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def  */
#line 1971 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yylsp[0]), (yyvsp[0].uniqueStr), nullptr);
  }
#line 8271 "bison-chpl-lib.cpp"
    break;

  case 293: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def TLP actual_ls TRP  */
#line 1975 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), (yylsp[-5]), (yyvsp[-5].uniqueStr), YLOC2((yylsp[-3]), (yylsp[0])), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList));
  }
#line 8279 "bison-chpl-lib.cpp"
    break;

  case 294: /* try_stmt: TTRY tryable_stmt  */
#line 1982 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), false);
  }
#line 8287 "bison-chpl-lib.cpp"
    break;

  case 295: /* try_stmt: TTRYBANG tryable_stmt  */
#line 1986 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), true);
  }
#line 8295 "bison-chpl-lib.cpp"
    break;

  case 296: /* try_stmt: TTRY block_stmt catch_expr_ls  */
#line 1990 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), false);
  }
#line 8303 "bison-chpl-lib.cpp"
    break;

  case 297: /* try_stmt: TTRYBANG block_stmt catch_expr_ls  */
#line 1994 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), true);
  }
#line 8311 "bison-chpl-lib.cpp"
    break;

  case 298: /* catch_expr_ls: %empty  */
#line 2000 "chpl.ypp"
                            { (yyval.exprList) = context->makeList(); }
#line 8317 "bison-chpl-lib.cpp"
    break;

  case 299: /* catch_expr_ls: catch_expr_ls catch_expr  */
#line 2001 "chpl.ypp"
                            { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].expr)); }
#line 8323 "bison-chpl-lib.cpp"
    break;

  case 300: /* catch_expr: TCATCH block_stmt  */
#line 2006 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), nullptr, (yyvsp[0].commentsAndStmt), false);
  }
#line 8331 "bison-chpl-lib.cpp"
    break;

  case 301: /* catch_expr: TCATCH catch_expr_inner block_stmt  */
#line 2010 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt), false);
  }
#line 8339 "bison-chpl-lib.cpp"
    break;

  case 302: /* catch_expr: TCATCH TLP catch_expr_inner TRP block_stmt  */
#line 2014 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt), true);
  }
#line 8347 "bison-chpl-lib.cpp"
    break;

  case 303: /* catch_expr_inner: ident_def  */
#line 2021 "chpl.ypp"
  {
    (yyval.expr) = Variable::build(BUILDER, LOC((yyloc)), /*attributeGroup*/ nullptr,
                         Decl::DEFAULT_VISIBILITY,
                         Decl::DEFAULT_LINKAGE,
                         /*linkageName*/ nullptr,
                         /*name*/ (yyvsp[0].uniqueStr),
                         Variable::VAR,
                         /*isConfig*/ false,
                         /*isField*/ false,
                         /*typeExpression*/ nullptr,
                         /*initExpression*/ nullptr).release();
  }
#line 8364 "bison-chpl-lib.cpp"
    break;

  case 304: /* catch_expr_inner: ident_def TCOLON expr  */
#line 2034 "chpl.ypp"
  {
    (yyval.expr) = Variable::build(BUILDER, LOC((yyloc)), /*attributeGroup*/ nullptr,
                         Decl::DEFAULT_VISIBILITY,
                         Decl::DEFAULT_LINKAGE,
                         /*linkageName*/ nullptr,
                         /*name*/ (yyvsp[-2].uniqueStr),
                         Variable::VAR,
                         /*isConfig*/ false,
                         /*isField*/ false,
                         /*typeExpression*/ toOwned((yyvsp[0].expr)),
                         /*initExpression*/ nullptr).release();
  }
#line 8381 "bison-chpl-lib.cpp"
    break;

  case 305: /* throw_stmt: TTHROW expr TSEMI  */
#line 2050 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Throw::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8391 "bison-chpl-lib.cpp"
    break;

  case 306: /* select_stmt: TSELECT expr TLCBR when_stmt_ls TRCBR  */
#line 2058 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildSelectStmt((yyloc), toOwned((yyvsp[-3].expr)), (yyvsp[-1].exprList));
  }
#line 8399 "bison-chpl-lib.cpp"
    break;

  case 307: /* select_stmt: TSELECT expr TLCBR error TRCBR  */
#line 2062 "chpl.ypp"
  {
    auto comments = context->gatherComments((yyloc));
    auto node = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8409 "bison-chpl-lib.cpp"
    break;

  case 308: /* when_stmt_ls: %empty  */
#line 2070 "chpl.ypp"
                          { (yyval.exprList) = context->makeList(); }
#line 8415 "bison-chpl-lib.cpp"
    break;

  case 309: /* when_stmt_ls: when_stmt_ls when_stmt  */
#line 2071 "chpl.ypp"
                          { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 8421 "bison-chpl-lib.cpp"
    break;

  case 310: /* when_stmt: TWHEN expr_ls do_stmt  */
#line 2076 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), (yyvsp[-1].exprList), (yyvsp[0].blockOrDo));
  }
#line 8429 "bison-chpl-lib.cpp"
    break;

  case 311: /* when_stmt: TOTHERWISE stmt  */
#line 2080 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=false };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8438 "bison-chpl-lib.cpp"
    break;

  case 312: /* when_stmt: TOTHERWISE TDO stmt  */
#line 2085 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=true };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8447 "bison-chpl-lib.cpp"
    break;

  case 313: /* manager_expr: expr TAS var_decl_type ident_def  */
#line 2093 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-3].expr), (yyvsp[-1].variableKind), (yylsp[0]), (yyvsp[0].uniqueStr));
    context->resetDeclState();
  }
#line 8456 "bison-chpl-lib.cpp"
    break;

  case 314: /* manager_expr: expr TAS ident_def  */
#line 2098 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-2].expr), (yylsp[0]), (yyvsp[0].uniqueStr));
  }
#line 8464 "bison-chpl-lib.cpp"
    break;

  case 315: /* manager_expr: expr  */
#line 2102 "chpl.ypp"
  {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 8472 "bison-chpl-lib.cpp"
    break;

  case 316: /* manager_expr_ls: manager_expr  */
#line 2108 "chpl.ypp"
                                        { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8478 "bison-chpl-lib.cpp"
    break;

  case 317: /* manager_expr_ls: manager_expr_ls TCOMMA manager_expr  */
#line 2109 "chpl.ypp"
                                        { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8484 "bison-chpl-lib.cpp"
    break;

  case 318: /* manage_stmt: TMANAGE manager_expr_ls do_stmt  */
#line 2114 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildManageStmt((yyloc), (yyvsp[-1].exprList), (yylsp[0]), (yyvsp[0].blockOrDo));
  }
#line 8492 "bison-chpl-lib.cpp"
    break;

  case 319: /* class_decl_stmt: class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 2123 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8501 "bison-chpl-lib.cpp"
    break;

  case 320: /* class_decl_stmt: class_start opt_inherit TLCBR error TRCBR  */
#line 2128 "chpl.ypp"
    {
      auto contents =
        context->makeList(ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), contents, (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8512 "bison-chpl-lib.cpp"
    break;

  case 321: /* class_start: class_tag ident_def  */
#line 2139 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-1]), (yyvsp[0].uniqueStr), (yyvsp[-1].astTag));
  }
#line 8520 "bison-chpl-lib.cpp"
    break;

  case 322: /* class_tag: TCLASS  */
#line 2145 "chpl.ypp"
           { (yyval.astTag) = asttags::Class; }
#line 8526 "bison-chpl-lib.cpp"
    break;

  case 323: /* class_tag: TRECORD  */
#line 2146 "chpl.ypp"
           { (yyval.astTag) = asttags::Record; }
#line 8532 "bison-chpl-lib.cpp"
    break;

  case 324: /* class_tag: TUNION  */
#line 2147 "chpl.ypp"
           { (yyval.astTag) = asttags::Union; }
#line 8538 "bison-chpl-lib.cpp"
    break;

  case 325: /* opt_inherit: %empty  */
#line 2151 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 8544 "bison-chpl-lib.cpp"
    break;

  case 326: /* opt_inherit: TCOLON expr_ls  */
#line 2152 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8550 "bison-chpl-lib.cpp"
    break;

  case 327: /* class_level_stmt_ls: %empty  */
#line 2156 "chpl.ypp"
  {
    /* nothing */
    (yyval.exprList) = context->makeList();
  }
#line 8559 "bison-chpl-lib.cpp"
    break;

  case 328: /* class_level_stmt_ls: class_level_stmt_ls class_level_stmt  */
#line 2161 "chpl.ypp"
  {
    context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 8567 "bison-chpl-lib.cpp"
    break;

  case 329: /* class_level_stmt_ls: class_level_stmt_ls attribute_decl_stmt_ls class_level_stmt  */
#line 2165 "chpl.ypp"
  {
    context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 8575 "bison-chpl-lib.cpp"
    break;

  case 330: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls class_level_stmt  */
#line 2169 "chpl.ypp"
  {
    context->appendList((yyvsp[-2].exprList), context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt)));
  }
#line 8583 "bison-chpl-lib.cpp"
    break;

  case 331: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls attribute_decl_stmt_ls class_level_stmt  */
#line 2173 "chpl.ypp"
  {
    context->appendList((yyvsp[-3].exprList), context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt)));
  }
#line 8591 "bison-chpl-lib.cpp"
    break;

  case 332: /* enum_decl_stmt: enum_header_lcbr enum_ls TRCBR  */
#line 2180 "chpl.ypp"
    {
      TypeDeclParts parts = (yyvsp[-2].typeDeclParts);
      ParserExprList* list = (yyvsp[-1].exprList);
      // get any comments after the last element but before the closing brace
      context->appendList(list, context->gatherComments((yylsp[0])));

      auto decl = Enum::build(BUILDER, LOC((yyloc)), toOwned(parts.attributeGroup),
                              parts.visibility,
                              parts.name,
                              context->consumeList(list));
      CommentsAndStmt cs = {parts.comments, decl.release()};
      (yyval.commentsAndStmt) = cs;
      context->exitScope(asttags::Enum, parts.name);
      context->resetDeclState();
      context->clearComments();
    }
#line 8612 "bison-chpl-lib.cpp"
    break;

  case 333: /* enum_decl_stmt: enum_header_lcbr error TRCBR  */
#line 2197 "chpl.ypp"
    {
      TypeDeclParts parts = (yyvsp[-2].typeDeclParts);
      auto err = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
      CommentsAndStmt cs = {parts.comments, err.release()};
      (yyval.commentsAndStmt) = cs;
      context->exitScope(asttags::Enum, parts.name);
      context->resetDeclState();
      context->clearComments();
    }
#line 8626 "bison-chpl-lib.cpp"
    break;

  case 334: /* enum_header_lcbr: TENUM ident_def TLCBR  */
#line 2210 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-2]), (yyvsp[-1].uniqueStr), asttags::Enum);
  }
#line 8634 "bison-chpl-lib.cpp"
    break;

  case 335: /* enum_ls: enum_item  */
#line 2217 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8643 "bison-chpl-lib.cpp"
    break;

  case 336: /* enum_ls: enum_ls TCOMMA  */
#line 2222 "chpl.ypp"
  {
    (yyval.exprList) = (yyvsp[-1].exprList);
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8653 "bison-chpl-lib.cpp"
    break;

  case 337: /* $@5: %empty  */
#line 2228 "chpl.ypp"
  {
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8662 "bison-chpl-lib.cpp"
    break;

  case 338: /* enum_ls: enum_ls TCOMMA $@5 enum_item  */
#line 2233 "chpl.ypp"
  {
    context->appendList((yyvsp[-3].exprList), (yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8671 "bison-chpl-lib.cpp"
    break;

  case 339: /* enum_ls: attribute_decl_stmt_ls enum_item  */
#line 2238 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8680 "bison-chpl-lib.cpp"
    break;

  case 340: /* $@6: %empty  */
#line 2243 "chpl.ypp"
  {
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8689 "bison-chpl-lib.cpp"
    break;

  case 341: /* enum_ls: enum_ls TCOMMA $@6 attribute_decl_stmt_ls enum_item  */
#line 2248 "chpl.ypp"
  {
    context->appendList((yyvsp[-4].exprList), (yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8698 "bison-chpl-lib.cpp"
    break;

  case 342: /* enum_item: ident_def  */
#line 2258 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributeGroup((yyloc)),
                                     (yyvsp[0].uniqueStr));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
    }
#line 8709 "bison-chpl-lib.cpp"
    break;

  case 343: /* enum_item: ident_def TASSIGN expr  */
#line 2265 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributeGroup((yyloc)),
                                     (yyvsp[-2].uniqueStr),
                                     toOwned((yyvsp[0].expr)));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
      context->clearCommentsBefore((yylsp[0]));
    }
#line 8722 "bison-chpl-lib.cpp"
    break;

  case 344: /* lambda_decl_start: TLAMBDA  */
#line 2277 "chpl.ypp"
    {
      FunctionParts fp = context->makeFunctionParts(false, false);
      context->noteDeclStartLoc((yylsp[0]));
      auto loc = context->declStartLoc((yyloc));
      fp.comments = context->gatherComments(loc);
      fp.attributeGroup = context->buildAttributeGroup((yyloc)).release();
      fp.visibility = context->visibility;
      context->resetAttributeGroupPartsState();
      fp.kind = Function::PROC;
      (yyval.functionParts) = fp;
    }
#line 8738 "bison-chpl-lib.cpp"
    break;

  case 345: /* $@7: %empty  */
#line 2294 "chpl.ypp"
    {
      context->clearComments();
      context->resetDeclState();
      context->enterScope(asttags::Function, STR("lambda"));
    }
#line 8748 "bison-chpl-lib.cpp"
    break;

  case 346: /* lambda_decl_expr: lambda_decl_start req_formal_ls opt_ret_tag opt_type opt_throws_error opt_lifetime_where $@7 function_body_stmt  */
#line 2300 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-7].functionParts);
      fp.name = context->buildIdent((yylsp[-7]), STR("lambda"));
      fp.formals = (yyvsp[-6].exprList);
      fp.returnIntent = (yyvsp[-5].returnTag);
      fp.returnType = (yyvsp[-4].expr);
      fp.throws = ((yyvsp[-3].throwsTag) == ThrowsTag_THROWS);
      WhereAndLifetime wl = (yyvsp[-2].lifetimeAndWhere);
      fp.lifetime = wl.lifetime;
      fp.where = wl.where;
      fp.body = (yyvsp[0].exprList);

      context->clearComments();
      context->exitScope(asttags::Function, STR("lambda"));

      (yyval.expr) = context->buildLambda((yyloc), fp);
    }
#line 8770 "bison-chpl-lib.cpp"
    break;

  case 348: /* linkage_spec: linkage_spec_empty  */
#line 2323 "chpl.ypp"
                     { (yyval.functionParts) = context->makeFunctionParts(false, false); }
#line 8776 "bison-chpl-lib.cpp"
    break;

  case 349: /* linkage_spec: TINLINE  */
#line 2324 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(true, false); }
#line 8783 "bison-chpl-lib.cpp"
    break;

  case 350: /* linkage_spec: TOVERRIDE  */
#line 2326 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(false, true); }
#line 8790 "bison-chpl-lib.cpp"
    break;

  case 351: /* opt_fn_type_formal_ls: %empty  */
#line 2331 "chpl.ypp"
                                          { (yyval.exprList) = context->makeList(); }
#line 8796 "bison-chpl-lib.cpp"
    break;

  case 352: /* opt_fn_type_formal_ls: fn_type_formal_ls  */
#line 2332 "chpl.ypp"
                                          { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8802 "bison-chpl-lib.cpp"
    break;

  case 353: /* fn_type_formal_ls: fn_type_formal  */
#line 2336 "chpl.ypp"
                                          { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8808 "bison-chpl-lib.cpp"
    break;

  case 354: /* fn_type_formal_ls: fn_type_formal_ls TCOMMA fn_type_formal  */
#line 2337 "chpl.ypp"
                                          { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8814 "bison-chpl-lib.cpp"
    break;

  case 355: /* fn_type_formal: named_formal  */
#line 2342 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 8820 "bison-chpl-lib.cpp"
    break;

  case 356: /* fn_type_formal: required_intent_tag TCOLON formal_type  */
#line 2345 "chpl.ypp"
  { (yyval.expr) = context->buildAnonFormal((yyloc), (yylsp[-2]), (yyvsp[-2].intentTag), (yyvsp[0].expr)); }
#line 8826 "bison-chpl-lib.cpp"
    break;

  case 357: /* fn_type_formal: formal_type  */
#line 2347 "chpl.ypp"
  { (yyval.expr) = context->buildAnonFormal((yyloc), (yyvsp[0].expr)); }
#line 8832 "bison-chpl-lib.cpp"
    break;

  case 358: /* opt_fn_type_ret_type: %empty  */
#line 2351 "chpl.ypp"
                                  { (yyval.expr) = nullptr; }
#line 8838 "bison-chpl-lib.cpp"
    break;

  case 359: /* opt_fn_type_ret_type: TCOLON formal_or_ret_type_expr  */
#line 2352 "chpl.ypp"
                                  { (yyval.expr) = (yyvsp[0].expr); }
#line 8844 "bison-chpl-lib.cpp"
    break;

  case 360: /* fn_type: TPROCLP opt_fn_type_formal_ls TRP opt_ret_tag opt_fn_type_ret_type opt_throws_error  */
#line 2365 "chpl.ypp"
  {
    FunctionParts fp = context->makeFunctionParts(false, false);
    fp.kind = Function::PROC;
    fp.name = context->buildIdent((yylsp[-5]), STR("proc"));
    fp.formals = (yyvsp[-4].exprList);
    fp.returnIntent = (yyvsp[-2].returnTag);
    fp.returnType = (yyvsp[-1].expr);
    fp.throws = ((yyvsp[0].throwsTag) == ThrowsTag_THROWS);
    fp.body = nullptr;
    fp.comments = nullptr;
    fp.attributeGroup = nullptr;
    fp.visibility = context->visibility;
    (yyval.functionParts) = fp;
  }
#line 8863 "bison-chpl-lib.cpp"
    break;

  case 361: /* $@8: %empty  */
#line 2383 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();
    context->enterScope(asttags::Function, STR("proc"));
  }
#line 8873 "bison-chpl-lib.cpp"
    break;

  case 362: /* fn_expr: fn_type $@8 block_stmt_body  */
#line 2389 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-2].functionParts);
    fp.isBodyNonBlockExpression = false;
    fp.body = (yyvsp[0].exprList);
    context->clearComments();
    context->exitScope(asttags::Function, STR("proc"));
    (yyval.functionParts) = fp;
  }
#line 8886 "bison-chpl-lib.cpp"
    break;

  case 363: /* $@9: %empty  */
#line 2398 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();
    context->enterScope(asttags::Function, STR("proc"));
  }
#line 8896 "bison-chpl-lib.cpp"
    break;

  case 364: /* fn_expr: fn_type TALIAS $@9 expr  */
#line 2404 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-3].functionParts);
    fp.isBodyNonBlockExpression = true;
    fp.body = context->makeList((yyvsp[0].expr));
    context->clearComments();
    context->exitScope(asttags::Function, STR("proc"));
    (yyval.functionParts) = fp;
  }
#line 8909 "bison-chpl-lib.cpp"
    break;

  case 365: /* fn_decl_stmt_complete: fn_decl_stmt  */
#line 2416 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildRegularFunctionDecl((yyloc), (yyvsp[0].functionParts));
    }
#line 8917 "bison-chpl-lib.cpp"
    break;

  case 366: /* $@10: %empty  */
#line 2425 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();

    // May never have been built if there was a syntax error.
    if ((yyvsp[-4].functionParts).errorExpr == nullptr) {
      context->enterScope(asttags::Function, (yyvsp[-4].functionParts).name->name());
    }
  }
#line 8931 "bison-chpl-lib.cpp"
    break;

  case 367: /* fn_decl_stmt: fn_decl_stmt_inner opt_ret_tag opt_ret_type opt_throws_error opt_lifetime_where $@10 opt_function_body_stmt  */
#line 2435 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-6].functionParts);
    fp.returnIntent = (yyvsp[-5].returnTag);
    fp.returnType = (yyvsp[-4].expr);
    fp.throws = ((yyvsp[-3].throwsTag) == ThrowsTag_THROWS);
    WhereAndLifetime wl = (yyvsp[-2].lifetimeAndWhere);
    fp.body = (yyvsp[0].exprList);
    fp.lifetime = wl.lifetime;
    fp.where = wl.where;
    context->clearComments();

    // May never have been built if there was a syntax error.
    if ((yyvsp[-6].functionParts).errorExpr == nullptr) {
      context->exitScope(asttags::Function, (yyvsp[-6].functionParts).name->name());
    }

    (yyval.functionParts) = fp;
  }
#line 8954 "bison-chpl-lib.cpp"
    break;

  case 368: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_ident opt_formal_ls  */
#line 2457 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8966 "bison-chpl-lib.cpp"
    break;

  case 369: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag assignop_ident opt_formal_ls  */
#line 2465 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8978 "bison-chpl-lib.cpp"
    break;

  case 370: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT fn_ident opt_formal_ls  */
#line 2473 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-5].functionParts);
      fp.thisIntent = (yyvsp[-4].intentTag);
      fp.receiver = Formal::build(BUILDER, LOC((yylsp[-3])), /*attributeGroup*/ nullptr,
                                  STR("this"), (yyvsp[-4].intentTag), toOwned((yyvsp[-3].expr)),
                                  nullptr).release();
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8993 "bison-chpl-lib.cpp"
    break;

  case 371: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT assignop_ident opt_formal_ls  */
#line 2484 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-5].functionParts);
      fp.thisIntent = (yyvsp[-4].intentTag);
      fp.receiver = Formal::build(BUILDER, LOC((yylsp[-3])), /*attributeGroup*/ nullptr,
                                  STR("this"), (yyvsp[-4].intentTag), toOwned((yyvsp[-3].expr)),
                                  nullptr).release();
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 9008 "bison-chpl-lib.cpp"
    break;

  case 372: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag error opt_formal_ls  */
#line 2495 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.errorExpr = ErroneousExpression::build(BUILDER, LOC((yyloc))).release();
      (yyval.functionParts) = fp;
    }
#line 9018 "bison-chpl-lib.cpp"
    break;

  case 373: /* fn_decl_stmt_start: linkage_spec proc_iter_or_op  */
#line 2504 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-1].functionParts);
      context->noteDeclStartLoc((yylsp[0]));
      auto loc = context->declStartLoc((yyloc));
      fp.comments = context->gatherComments(loc);
      fp.attributeGroup = context->buildAttributeGroup((yyloc)).release();
      fp.visibility = context->visibility;
      context->resetAttributeGroupPartsState();
      fp.kind = (yyvsp[0].functionKind);
      (yyval.functionParts) = fp;
    }
#line 9034 "bison-chpl-lib.cpp"
    break;

  case 375: /* fn_decl_receiver_expr: TLP expr TRP  */
#line 2519 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[-1].expr); }
#line 9040 "bison-chpl-lib.cpp"
    break;

  case 378: /* fn_ident: ident_def TBANG  */
#line 2526 "chpl.ypp"
  {
    std::string s = (yyvsp[-1].uniqueStr).c_str();
    s += "!";
    (yyval.uniqueStr) = STR(s.c_str());
  }
#line 9050 "bison-chpl-lib.cpp"
    break;

  case 418: /* formal_var_arg_expr: TDOTDOTDOT  */
#line 2583 "chpl.ypp"
                         { (yyval.expr) = nullptr; }
#line 9056 "bison-chpl-lib.cpp"
    break;

  case 419: /* formal_var_arg_expr: TDOTDOTDOT expr  */
#line 2584 "chpl.ypp"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 9062 "bison-chpl-lib.cpp"
    break;

  case 420: /* opt_formal_ls: %empty  */
#line 2588 "chpl.ypp"
                     { (yyval.exprList) = context->parenlessMarker; }
#line 9068 "bison-chpl-lib.cpp"
    break;

  case 421: /* opt_formal_ls: TLP formal_ls TRP  */
#line 2589 "chpl.ypp"
                     { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9074 "bison-chpl-lib.cpp"
    break;

  case 422: /* req_formal_ls: TLP TRP  */
#line 2593 "chpl.ypp"
                            { (yyval.exprList) = context->makeList(); }
#line 9080 "bison-chpl-lib.cpp"
    break;

  case 423: /* req_formal_ls: TLP formal_ls_inner TRP  */
#line 2594 "chpl.ypp"
                            { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9086 "bison-chpl-lib.cpp"
    break;

  case 424: /* formal_ls_inner: formal  */
#line 2598 "chpl.ypp"
                                 { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9092 "bison-chpl-lib.cpp"
    break;

  case 425: /* formal_ls_inner: formal_ls_inner TCOMMA formal  */
#line 2599 "chpl.ypp"
                                 { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9098 "bison-chpl-lib.cpp"
    break;

  case 426: /* formal_ls: %empty  */
#line 2603 "chpl.ypp"
                           { (yyval.exprList) = context->makeList(); }
#line 9104 "bison-chpl-lib.cpp"
    break;

  case 427: /* formal_ls: formal_ls_inner  */
#line 2604 "chpl.ypp"
                           { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9110 "bison-chpl-lib.cpp"
    break;

  case 431: /* named_formal: opt_formal_intent_tag formal_ident_def opt_colon_formal_type opt_init_expr  */
#line 2618 "chpl.ypp"
  {
    (yyval.expr) = context->buildFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9118 "bison-chpl-lib.cpp"
    break;

  case 432: /* named_formal: pragma_ls opt_formal_intent_tag formal_ident_def opt_colon_formal_type opt_init_expr  */
#line 2623 "chpl.ypp"
  {
    (yyval.expr) = context->buildFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr), true);
  }
#line 9126 "bison-chpl-lib.cpp"
    break;

  case 433: /* named_formal: opt_formal_intent_tag formal_ident_def opt_colon_formal_type formal_var_arg_expr  */
#line 2628 "chpl.ypp"
  {
    (yyval.expr) = context->buildVarArgFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9134 "bison-chpl-lib.cpp"
    break;

  case 434: /* named_formal: pragma_ls opt_formal_intent_tag formal_ident_def opt_colon_formal_type formal_var_arg_expr  */
#line 2633 "chpl.ypp"
  {
    (yyval.expr) = context->buildVarArgFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr), true);
  }
#line 9142 "bison-chpl-lib.cpp"
    break;

  case 435: /* named_formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_colon_formal_type opt_init_expr  */
#line 2638 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleFormal((yyloc), (yyvsp[-5].intentTag), (yyvsp[-3].exprList), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9150 "bison-chpl-lib.cpp"
    break;

  case 436: /* named_formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_colon_formal_type formal_var_arg_expr  */
#line 2643 "chpl.ypp"
  {
    (yyval.expr) = context->syntax((yyloc), "variable-length argument may not be grouped in a tuple.");
  }
#line 9158 "bison-chpl-lib.cpp"
    break;

  case 437: /* opt_formal_intent_tag: %empty  */
#line 2649 "chpl.ypp"
             {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = Formal::DEFAULT_INTENT;
  }
#line 9167 "bison-chpl-lib.cpp"
    break;

  case 438: /* opt_formal_intent_tag: required_intent_tag  */
#line 2654 "chpl.ypp"
  {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = (yyvsp[0].intentTag);
  }
#line 9176 "bison-chpl-lib.cpp"
    break;

  case 439: /* required_intent_tag: TIN  */
#line 2661 "chpl.ypp"
              { (yyval.intentTag) = Formal::IN; }
#line 9182 "bison-chpl-lib.cpp"
    break;

  case 440: /* required_intent_tag: TINOUT  */
#line 2662 "chpl.ypp"
              { (yyval.intentTag) = Formal::INOUT; }
#line 9188 "bison-chpl-lib.cpp"
    break;

  case 441: /* required_intent_tag: TOUT  */
#line 2663 "chpl.ypp"
              { (yyval.intentTag) = Formal::OUT; }
#line 9194 "bison-chpl-lib.cpp"
    break;

  case 442: /* required_intent_tag: TCONST TIN  */
#line 2664 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_IN; }
#line 9200 "bison-chpl-lib.cpp"
    break;

  case 443: /* required_intent_tag: TCONST TREF  */
#line 2665 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_REF; }
#line 9206 "bison-chpl-lib.cpp"
    break;

  case 444: /* required_intent_tag: TCONST  */
#line 2666 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST; }
#line 9212 "bison-chpl-lib.cpp"
    break;

  case 445: /* required_intent_tag: TPARAM  */
#line 2667 "chpl.ypp"
              { (yyval.intentTag) = Formal::PARAM; }
#line 9218 "bison-chpl-lib.cpp"
    break;

  case 446: /* required_intent_tag: TREF  */
#line 2668 "chpl.ypp"
              { (yyval.intentTag) = Formal::REF; }
#line 9224 "bison-chpl-lib.cpp"
    break;

  case 447: /* required_intent_tag: TTYPE  */
#line 2669 "chpl.ypp"
              { (yyval.intentTag) = Formal::TYPE; }
#line 9230 "bison-chpl-lib.cpp"
    break;

  case 448: /* opt_this_intent_tag: %empty  */
#line 2673 "chpl.ypp"
                { (yyval.intentTag) = Formal::DEFAULT_INTENT; }
#line 9236 "bison-chpl-lib.cpp"
    break;

  case 449: /* opt_this_intent_tag: TPARAM  */
#line 2674 "chpl.ypp"
                { (yyval.intentTag) = Formal::PARAM; }
#line 9242 "bison-chpl-lib.cpp"
    break;

  case 450: /* opt_this_intent_tag: TREF  */
#line 2675 "chpl.ypp"
                { (yyval.intentTag) = Formal::REF; }
#line 9248 "bison-chpl-lib.cpp"
    break;

  case 451: /* opt_this_intent_tag: TCONST TREF  */
#line 2676 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST_REF; }
#line 9254 "bison-chpl-lib.cpp"
    break;

  case 452: /* opt_this_intent_tag: TCONST  */
#line 2677 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST; }
#line 9260 "bison-chpl-lib.cpp"
    break;

  case 453: /* opt_this_intent_tag: TTYPE  */
#line 2678 "chpl.ypp"
                { (yyval.intentTag) = Formal::TYPE; }
#line 9266 "bison-chpl-lib.cpp"
    break;

  case 454: /* proc_iter_or_op: TPROC  */
#line 2682 "chpl.ypp"
            { (yyval.functionKind) = Function::PROC; }
#line 9272 "bison-chpl-lib.cpp"
    break;

  case 455: /* proc_iter_or_op: TITER  */
#line 2683 "chpl.ypp"
            { (yyval.functionKind) = Function::ITER; }
#line 9278 "bison-chpl-lib.cpp"
    break;

  case 456: /* proc_iter_or_op: TOPERATOR  */
#line 2684 "chpl.ypp"
            { (yyval.functionKind) = Function::OPERATOR; }
#line 9284 "bison-chpl-lib.cpp"
    break;

  case 457: /* opt_ret_tag: %empty  */
#line 2688 "chpl.ypp"
                    { (yyval.returnTag) = Function::DEFAULT_RETURN_INTENT; }
#line 9290 "bison-chpl-lib.cpp"
    break;

  case 458: /* opt_ret_tag: TOUT  */
#line 2689 "chpl.ypp"
                    { (yyval.returnTag) = Function::OUT; }
#line 9296 "bison-chpl-lib.cpp"
    break;

  case 459: /* opt_ret_tag: TCONST  */
#line 2690 "chpl.ypp"
                    { (yyval.returnTag) = Function::CONST; }
#line 9302 "bison-chpl-lib.cpp"
    break;

  case 460: /* opt_ret_tag: TCONST TREF  */
#line 2691 "chpl.ypp"
                    { (yyval.returnTag) = Function::CONST_REF; }
#line 9308 "bison-chpl-lib.cpp"
    break;

  case 461: /* opt_ret_tag: TREF  */
#line 2692 "chpl.ypp"
                    { (yyval.returnTag) = Function::REF; }
#line 9314 "bison-chpl-lib.cpp"
    break;

  case 462: /* opt_ret_tag: TPARAM  */
#line 2693 "chpl.ypp"
                    { (yyval.returnTag) = Function::PARAM; }
#line 9320 "bison-chpl-lib.cpp"
    break;

  case 463: /* opt_ret_tag: TTYPE  */
#line 2694 "chpl.ypp"
                    { (yyval.returnTag) = Function::TYPE; }
#line 9326 "bison-chpl-lib.cpp"
    break;

  case 464: /* opt_throws_error: %empty  */
#line 2698 "chpl.ypp"
                          { (yyval.throwsTag) = ThrowsTag_DEFAULT; }
#line 9332 "bison-chpl-lib.cpp"
    break;

  case 465: /* opt_throws_error: TTHROWS  */
#line 2699 "chpl.ypp"
                          { (yyval.throwsTag) = ThrowsTag_THROWS; }
#line 9338 "bison-chpl-lib.cpp"
    break;

  case 466: /* opt_function_body_stmt: TSEMI  */
#line 2702 "chpl.ypp"
                      { context->clearComments(); (yyval.exprList) = nullptr; }
#line 9344 "bison-chpl-lib.cpp"
    break;

  case 467: /* opt_function_body_stmt: function_body_stmt  */
#line 2703 "chpl.ypp"
                      { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9350 "bison-chpl-lib.cpp"
    break;

  case 468: /* function_body_stmt: block_stmt_body  */
#line 2707 "chpl.ypp"
                    { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9356 "bison-chpl-lib.cpp"
    break;

  case 469: /* function_body_stmt: TDO toplevel_stmt  */
#line 2708 "chpl.ypp"
                    { (yyval.exprList) = context->buildSingleStmtRoutineBody((yyvsp[0].commentsAndStmt)); }
#line 9362 "bison-chpl-lib.cpp"
    break;

  case 470: /* function_body_stmt: return_stmt  */
#line 2709 "chpl.ypp"
                    { (yyval.exprList) = context->buildSingleStmtRoutineBody((yyvsp[0].commentsAndStmt), &((yylsp[0]))); }
#line 9368 "bison-chpl-lib.cpp"
    break;

  case 471: /* query_expr: TQUERIEDIDENT  */
#line 2713 "chpl.ypp"
                  { (yyval.expr) = context->buildTypeQuery((yyloc), (yyvsp[0].uniqueStr)); }
#line 9374 "bison-chpl-lib.cpp"
    break;

  case 472: /* opt_lifetime_where: %empty  */
#line 2718 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, nullptr); }
#line 9380 "bison-chpl-lib.cpp"
    break;

  case 473: /* opt_lifetime_where: TWHERE expr  */
#line 2720 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), nullptr); }
#line 9386 "bison-chpl-lib.cpp"
    break;

  case 474: /* opt_lifetime_where: TLIFETIME lifetime_components_expr  */
#line 2722 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, (yyvsp[0].exprList)); }
#line 9392 "bison-chpl-lib.cpp"
    break;

  case 475: /* opt_lifetime_where: TWHERE expr TLIFETIME lifetime_components_expr  */
#line 2724 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].expr), (yyvsp[0].exprList)); }
#line 9398 "bison-chpl-lib.cpp"
    break;

  case 476: /* opt_lifetime_where: TLIFETIME lifetime_components_expr TWHERE expr  */
#line 2726 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), (yyvsp[-2].exprList)); }
#line 9404 "bison-chpl-lib.cpp"
    break;

  case 477: /* lifetime_components_expr: lifetime_expr  */
#line 2731 "chpl.ypp"
  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9410 "bison-chpl-lib.cpp"
    break;

  case 478: /* lifetime_components_expr: lifetime_components_expr TCOMMA lifetime_expr  */
#line 2733 "chpl.ypp"
  { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9416 "bison-chpl-lib.cpp"
    break;

  case 479: /* lifetime_expr: lifetime_ident TASSIGN lifetime_ident  */
#line 2738 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9422 "bison-chpl-lib.cpp"
    break;

  case 480: /* lifetime_expr: lifetime_ident TLESS lifetime_ident  */
#line 2740 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9428 "bison-chpl-lib.cpp"
    break;

  case 481: /* lifetime_expr: lifetime_ident TLESSEQUAL lifetime_ident  */
#line 2742 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9434 "bison-chpl-lib.cpp"
    break;

  case 482: /* lifetime_expr: lifetime_ident TEQUAL lifetime_ident  */
#line 2744 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9440 "bison-chpl-lib.cpp"
    break;

  case 483: /* lifetime_expr: lifetime_ident TGREATER lifetime_ident  */
#line 2746 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9446 "bison-chpl-lib.cpp"
    break;

  case 484: /* lifetime_expr: lifetime_ident TGREATEREQUAL lifetime_ident  */
#line 2748 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9452 "bison-chpl-lib.cpp"
    break;

  case 485: /* lifetime_expr: TRETURN lifetime_ident  */
#line 2750 "chpl.ypp"
    { (yyval.expr) = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[0].expr))).release(); }
#line 9458 "bison-chpl-lib.cpp"
    break;

  case 486: /* lifetime_ident: TIDENT  */
#line 2754 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9464 "bison-chpl-lib.cpp"
    break;

  case 487: /* lifetime_ident: TTHIS  */
#line 2755 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9470 "bison-chpl-lib.cpp"
    break;

  case 488: /* type_alias_decl_stmt: type_alias_decl_stmt_start type_alias_decl_stmt_inner_ls TSEMI  */
#line 2760 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9479 "bison-chpl-lib.cpp"
    break;

  case 489: /* type_alias_decl_stmt_start: TTYPE  */
#line 2769 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
  }
#line 9487 "bison-chpl-lib.cpp"
    break;

  case 490: /* type_alias_decl_stmt_start: TCONFIG TTYPE  */
#line 2773 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
    context->noteIsVarDeclConfig(true);
  }
#line 9496 "bison-chpl-lib.cpp"
    break;

  case 491: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner  */
#line 2781 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
  }
#line 9504 "bison-chpl-lib.cpp"
    break;

  case 492: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner_ls TCOMMA type_alias_decl_stmt_inner  */
#line 2785 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 9512 "bison-chpl-lib.cpp"
    break;

  case 493: /* type_alias_decl_stmt_inner: ident_def opt_init_type  */
#line 2792 "chpl.ypp"
  {
    // TODO (dlongnecke-cray): Add a helper to build this and var_decl_stmt.
    auto node = Variable::build(BUILDER, LOC((yyloc)),
                                /*attributeGroup*/ nullptr,
                                context->visibility,
                                context->linkage,
                                context->consumeVarDeclLinkageName(),
                                /*name*/ (yyvsp[-1].uniqueStr),
                                context->varDeclKind,
                                context->isVarDeclConfig,
                                context->currentScopeIsAggregate(),
                                /*typeExpression*/ nullptr,
                                toOwned((yyvsp[0].expr)));
      // Gather the comments like a statement does.
      (yyval.commentsAndStmt) = STMT((yylsp[-1]), node.release());
      context->clearComments();
  }
#line 9534 "bison-chpl-lib.cpp"
    break;

  case 494: /* opt_init_type: %empty  */
#line 2812 "chpl.ypp"
  { (yyval.expr) = nullptr; }
#line 9540 "bison-chpl-lib.cpp"
    break;

  case 495: /* opt_init_type: TASSIGN expr  */
#line 2814 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 9546 "bison-chpl-lib.cpp"
    break;

  case 496: /* var_decl_type: TPARAM  */
#line 2818 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::PARAM); }
#line 9552 "bison-chpl-lib.cpp"
    break;

  case 497: /* var_decl_type: TCONST TREF  */
#line 2819 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST_REF); }
#line 9558 "bison-chpl-lib.cpp"
    break;

  case 498: /* var_decl_type: TREF  */
#line 2820 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::REF); }
#line 9564 "bison-chpl-lib.cpp"
    break;

  case 499: /* var_decl_type: TCONST  */
#line 2821 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST); }
#line 9570 "bison-chpl-lib.cpp"
    break;

  case 500: /* var_decl_type: TVAR  */
#line 2822 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::VAR); }
#line 9576 "bison-chpl-lib.cpp"
    break;

  case 501: /* $@11: %empty  */
#line 2827 "chpl.ypp"
  {
    // Use a mid-rule action to thread along 'isVarDeclConfig'.
    context->noteIsVarDeclConfig(true);
  }
#line 9585 "bison-chpl-lib.cpp"
    break;

  case 502: /* var_decl_stmt: TCONFIG $@11 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2831 "chpl.ypp"
                                             {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9594 "bison-chpl-lib.cpp"
    break;

  case 503: /* var_decl_stmt: var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2836 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9603 "bison-chpl-lib.cpp"
    break;

  case 504: /* var_decl_stmt_inner_ls: var_decl_stmt_inner  */
#line 2844 "chpl.ypp"
    {
      (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    }
#line 9611 "bison-chpl-lib.cpp"
    break;

  case 505: /* var_decl_stmt_inner_ls: var_decl_stmt_inner_ls TCOMMA var_decl_stmt_inner  */
#line 2848 "chpl.ypp"
    {
      (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
    }
#line 9619 "bison-chpl-lib.cpp"
    break;

  case 506: /* var_decl_stmt_inner: ident_def opt_type opt_init_expr  */
#line 2855 "chpl.ypp"
    {
      // delay building the attributes for a variable, then update it later
      // in the context during the call to buildVarOrMultiDeclStmt
      auto varDecl = Variable::build(BUILDER, LOC((yyloc)),
                                     /*attributGroup*/nullptr,
                                     context->visibility,
                                     context->linkage,
                                     context->consumeVarDeclLinkageName(),
                                     /*name*/ (yyvsp[-2].uniqueStr),
                                     context->varDeclKind,
                                     context->isVarDeclConfig,
                                     context->currentScopeIsAggregate(),
                                     toOwned((yyvsp[-1].expr)), toOwned((yyvsp[0].expr)));
      // gather the comments like a statement does
      (yyval.commentsAndStmt) = STMT((yylsp[-2]), varDecl.release());
      context->clearComments();
    }
#line 9641 "bison-chpl-lib.cpp"
    break;

  case 507: /* var_decl_stmt_inner: TLP tuple_var_decl_stmt_inner_ls TRP opt_type opt_init_expr  */
#line 2873 "chpl.ypp"
    {
      auto intentOrKind = (TupleDecl::IntentOrKind) context->varDeclKind;
      // delay building the attributes for a TupleDecl, then update it later
      // in the context during the call to buildVarOrMultiDeclStmt
      auto tupleDecl = TupleDecl::build(BUILDER, LOC((yyloc)),
                                        /*attributeGroup*/ nullptr,
                                        context->visibility,
                                        context->linkage,
                                        intentOrKind,
                                        context->consumeList((yyvsp[-3].exprList)),
                                        toOwned((yyvsp[-1].expr)),
                                        toOwned((yyvsp[0].expr)));
      (yyval.commentsAndStmt) = STMT((yylsp[-4]), tupleDecl.release());
      context->clearComments();
    }
#line 9661 "bison-chpl-lib.cpp"
    break;

  case 508: /* tuple_var_decl_component: TUNDERSCORE  */
#line 2892 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9669 "bison-chpl-lib.cpp"
    break;

  case 509: /* tuple_var_decl_component: ident_def  */
#line 2896 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9677 "bison-chpl-lib.cpp"
    break;

  case 510: /* tuple_var_decl_component: TLP tuple_var_decl_stmt_inner_ls TRP  */
#line 2900 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[-1].exprList));
  }
#line 9685 "bison-chpl-lib.cpp"
    break;

  case 511: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_component  */
#line 2907 "chpl.ypp"
    { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9691 "bison-chpl-lib.cpp"
    break;

  case 512: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA  */
#line 2909 "chpl.ypp"
    { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9697 "bison-chpl-lib.cpp"
    break;

  case 513: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA tuple_var_decl_component  */
#line 2911 "chpl.ypp"
    { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9703 "bison-chpl-lib.cpp"
    break;

  case 514: /* opt_init_expr: %empty  */
#line 2917 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9709 "bison-chpl-lib.cpp"
    break;

  case 515: /* opt_init_expr: TASSIGN TNOINIT  */
#line 2918 "chpl.ypp"
                        { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9715 "bison-chpl-lib.cpp"
    break;

  case 516: /* opt_init_expr: TASSIGN opt_try_expr  */
#line 2919 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9721 "bison-chpl-lib.cpp"
    break;

  case 517: /* formal_or_ret_type_expr: expr  */
#line 2923 "chpl.ypp"
                        { (yyval.expr) = context->sanitizeArrayType((yyloc), (yyvsp[0].expr)); }
#line 9727 "bison-chpl-lib.cpp"
    break;

  case 518: /* ret_type: formal_or_ret_type_expr  */
#line 2927 "chpl.ypp"
                          { (yyval.expr) = (yyvsp[0].expr); }
#line 9733 "bison-chpl-lib.cpp"
    break;

  case 519: /* ret_type: reserved_type_ident_use  */
#line 2928 "chpl.ypp"
                          { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9739 "bison-chpl-lib.cpp"
    break;

  case 520: /* ret_type: error  */
#line 2929 "chpl.ypp"
                          { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9745 "bison-chpl-lib.cpp"
    break;

  case 521: /* colon_ret_type: TCOLON ret_type  */
#line 2933 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 9751 "bison-chpl-lib.cpp"
    break;

  case 522: /* colon_ret_type: error  */
#line 2934 "chpl.ypp"
                  { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9757 "bison-chpl-lib.cpp"
    break;

  case 523: /* opt_ret_type: %empty  */
#line 2938 "chpl.ypp"
                    { (yyval.expr) = nullptr; }
#line 9763 "bison-chpl-lib.cpp"
    break;

  case 525: /* opt_type: %empty  */
#line 2943 "chpl.ypp"
                                 { (yyval.expr) = nullptr; }
#line 9769 "bison-chpl-lib.cpp"
    break;

  case 526: /* opt_type: TCOLON expr  */
#line 2944 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9775 "bison-chpl-lib.cpp"
    break;

  case 527: /* opt_type: TCOLON reserved_type_ident_use  */
#line 2945 "chpl.ypp"
                                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9781 "bison-chpl-lib.cpp"
    break;

  case 528: /* opt_type: error  */
#line 2946 "chpl.ypp"
                                 { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9787 "bison-chpl-lib.cpp"
    break;

  case 529: /* formal_type: formal_or_ret_type_expr  */
#line 2950 "chpl.ypp"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 9793 "bison-chpl-lib.cpp"
    break;

  case 530: /* formal_type: reserved_type_ident_use  */
#line 2951 "chpl.ypp"
                            { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9799 "bison-chpl-lib.cpp"
    break;

  case 531: /* colon_formal_type: TCOLON formal_type  */
#line 2955 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9805 "bison-chpl-lib.cpp"
    break;

  case 532: /* opt_colon_formal_type: %empty  */
#line 2959 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9811 "bison-chpl-lib.cpp"
    break;

  case 533: /* opt_colon_formal_type: colon_formal_type  */
#line 2960 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9817 "bison-chpl-lib.cpp"
    break;

  case 534: /* expr_ls: expr  */
#line 2966 "chpl.ypp"
                             { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9823 "bison-chpl-lib.cpp"
    break;

  case 535: /* expr_ls: expr_ls TCOMMA expr  */
#line 2967 "chpl.ypp"
                             { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9829 "bison-chpl-lib.cpp"
    break;

  case 536: /* tuple_component: TUNDERSCORE  */
#line 2971 "chpl.ypp"
                { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9835 "bison-chpl-lib.cpp"
    break;

  case 537: /* tuple_component: opt_try_expr  */
#line 2972 "chpl.ypp"
                { (yyval.expr) = (yyvsp[0].expr); }
#line 9841 "bison-chpl-lib.cpp"
    break;

  case 538: /* tuple_expr_ls: tuple_component TCOMMA tuple_component  */
#line 2977 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList(context->makeList((yyvsp[-2].expr)), (yyvsp[0].expr));
  }
#line 9849 "bison-chpl-lib.cpp"
    break;

  case 539: /* tuple_expr_ls: tuple_expr_ls TCOMMA tuple_component  */
#line 2981 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9857 "bison-chpl-lib.cpp"
    break;

  case 540: /* opt_actual_ls: %empty  */
#line 2987 "chpl.ypp"
             { (yyval.maybeNamedActualList) = new MaybeNamedActualList(); }
#line 9863 "bison-chpl-lib.cpp"
    break;

  case 541: /* opt_actual_ls: actual_ls  */
#line 2988 "chpl.ypp"
             { (yyval.maybeNamedActualList) = (yyvsp[0].maybeNamedActualList); }
#line 9869 "bison-chpl-lib.cpp"
    break;

  case 542: /* actual_ls: actual_expr  */
#line 2993 "chpl.ypp"
    { MaybeNamedActualList* lst = new MaybeNamedActualList();
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 9878 "bison-chpl-lib.cpp"
    break;

  case 543: /* actual_ls: actual_ls TCOMMA actual_expr  */
#line 2998 "chpl.ypp"
    {
      MaybeNamedActualList* lst = (yyvsp[-2].maybeNamedActualList);
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 9888 "bison-chpl-lib.cpp"
    break;

  case 544: /* actual_expr: ident_use TASSIGN opt_try_expr  */
#line 3006 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr), (yyvsp[-2].uniqueStr)); }
#line 9894 "bison-chpl-lib.cpp"
    break;

  case 545: /* actual_expr: opt_try_expr  */
#line 3007 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr)); }
#line 9900 "bison-chpl-lib.cpp"
    break;

  case 546: /* ident_expr: ident_use  */
#line 3011 "chpl.ypp"
                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9906 "bison-chpl-lib.cpp"
    break;

  case 547: /* ident_expr: scalar_type  */
#line 3012 "chpl.ypp"
                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9912 "bison-chpl-lib.cpp"
    break;

  case 553: /* sub_type_level_expr: TSINGLE expr  */
#line 3025 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9918 "bison-chpl-lib.cpp"
    break;

  case 554: /* sub_type_level_expr: TINDEX TLP opt_actual_ls TRP  */
#line 3027 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9924 "bison-chpl-lib.cpp"
    break;

  case 555: /* sub_type_level_expr: TDOMAIN TLP opt_actual_ls TRP  */
#line 3029 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9930 "bison-chpl-lib.cpp"
    break;

  case 556: /* sub_type_level_expr: TSUBDOMAIN TLP opt_actual_ls TRP  */
#line 3031 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9936 "bison-chpl-lib.cpp"
    break;

  case 557: /* sub_type_level_expr: TSPARSE TSUBDOMAIN TLP actual_expr TRP  */
#line 3033 "chpl.ypp"
  {
    auto locInner = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    auto inner = context->buildTypeConstructor(locInner, (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActual));
    (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-4].uniqueStr), inner);
  }
#line 9946 "bison-chpl-lib.cpp"
    break;

  case 558: /* sub_type_level_expr: TATOMIC expr  */
#line 3039 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9952 "bison-chpl-lib.cpp"
    break;

  case 559: /* sub_type_level_expr: TSYNC expr  */
#line 3041 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9958 "bison-chpl-lib.cpp"
    break;

  case 560: /* sub_type_level_expr: TOWNED  */
#line 3044 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9964 "bison-chpl-lib.cpp"
    break;

  case 561: /* sub_type_level_expr: TOWNED expr  */
#line 3046 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9970 "bison-chpl-lib.cpp"
    break;

  case 562: /* sub_type_level_expr: TUNMANAGED  */
#line 3048 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9976 "bison-chpl-lib.cpp"
    break;

  case 563: /* sub_type_level_expr: TUNMANAGED expr  */
#line 3050 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9982 "bison-chpl-lib.cpp"
    break;

  case 564: /* sub_type_level_expr: TSHARED  */
#line 3052 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9988 "bison-chpl-lib.cpp"
    break;

  case 565: /* sub_type_level_expr: TSHARED expr  */
#line 3054 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9994 "bison-chpl-lib.cpp"
    break;

  case 566: /* sub_type_level_expr: TBORROWED  */
#line 3056 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10000 "bison-chpl-lib.cpp"
    break;

  case 567: /* sub_type_level_expr: TBORROWED expr  */
#line 3058 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10006 "bison-chpl-lib.cpp"
    break;

  case 568: /* sub_type_level_expr: TCLASS  */
#line 3060 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10012 "bison-chpl-lib.cpp"
    break;

  case 569: /* sub_type_level_expr: TRECORD  */
#line 3062 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10018 "bison-chpl-lib.cpp"
    break;

  case 570: /* for_expr: TFOR expr TIN expr TDO expr  */
#line 3067 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
    context->resetAttributeGroupPartsState();
  }
#line 10033 "bison-chpl-lib.cpp"
    break;

  case 571: /* for_expr: TFOR expr TIN zippered_iterator TDO expr  */
#line 3078 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 10048 "bison-chpl-lib.cpp"
    break;

  case 572: /* for_expr: TFOR expr TDO expr  */
#line 3089 "chpl.ypp"
  {
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 10062 "bison-chpl-lib.cpp"
    break;

  case 573: /* for_expr: TFOR expr TIN expr TDO TIF expr TTHEN expr  */
#line 3099 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock(ifLoc, ifExpr.release()),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 10082 "bison-chpl-lib.cpp"
    break;

  case 574: /* for_expr: TFOR expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3115 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock(ifLoc, ifExpr.release()),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 10102 "bison-chpl-lib.cpp"
    break;

  case 575: /* for_expr: TFOR expr TDO TIF expr TTHEN expr  */
#line 3131 "chpl.ypp"
  {
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), /*index*/ nullptr,
                    toOwned((yyvsp[-5].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock(ifLoc, ifExpr.release()),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 10122 "bison-chpl-lib.cpp"
    break;

  case 576: /* for_expr: TFORALL expr TIN expr TDO expr  */
#line 3147 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10135 "bison-chpl-lib.cpp"
    break;

  case 577: /* for_expr: TFORALL expr TIN zippered_iterator TDO expr  */
#line 3156 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10148 "bison-chpl-lib.cpp"
    break;

  case 578: /* for_expr: TFORALL expr TDO expr  */
#line 3165 "chpl.ypp"
  {
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10160 "bison-chpl-lib.cpp"
    break;

  case 579: /* for_expr: TFORALL expr TIN expr TDO TIF expr TTHEN expr  */
#line 3173 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock(ifLoc, ifExpr.release()),
                       /*isExpressionLevel*/ true).release();
  }
#line 10178 "bison-chpl-lib.cpp"
    break;

  case 580: /* for_expr: TFORALL expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3187 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr)= Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                      /*withClause*/ nullptr,
                      BlockStyle::IMPLICIT,
                      context->consumeToBlock(ifLoc, ifExpr.release()),
                      /*isExpressionLevel*/ true).release();
  }
#line 10196 "bison-chpl-lib.cpp"
    break;

  case 581: /* for_expr: TFORALL expr TDO TIF expr TTHEN expr  */
#line 3201 "chpl.ypp"
  {
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), /*index*/ nullptr,
                       toOwned((yyvsp[-5].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock(ifLoc, ifExpr.release()),
                       /*isExpressionLevel*/ true).release();
  }
#line 10214 "bison-chpl-lib.cpp"
    break;

  case 582: /* bracket_loop_expr: TLSBR TRSBR  */
#line 3218 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc));
  }
#line 10222 "bison-chpl-lib.cpp"
    break;

  case 583: /* bracket_loop_expr: TLSBR TRSBR expr  */
#line 3222 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-1]), (yyvsp[0].expr));
  }
#line 10230 "bison-chpl-lib.cpp"
    break;

  case 584: /* bracket_loop_expr: TLSBR expr_ls TRSBR expr  */
#line 3226 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10238 "bison-chpl-lib.cpp"
    break;

  case 585: /* bracket_loop_expr: TLSBR expr_ls TIN expr TRSBR expr  */
#line 3230 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10246 "bison-chpl-lib.cpp"
    break;

  case 586: /* bracket_loop_expr: TLSBR expr_ls TIN zippered_iterator TRSBR expr  */
#line 3234 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10254 "bison-chpl-lib.cpp"
    break;

  case 587: /* bracket_loop_expr: TLSBR expr_ls TIN expr TRSBR TIF expr TTHEN expr  */
#line 3238 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-7]), (yylsp[-3]), (yyvsp[-7].exprList), (yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10262 "bison-chpl-lib.cpp"
    break;

  case 588: /* bracket_loop_expr: TLSBR expr_ls TIN zippered_iterator TRSBR TIF expr TTHEN expr  */
#line 3242 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-7]), (yylsp[-3]), (yyvsp[-7].exprList), (yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10270 "bison-chpl-lib.cpp"
    break;

  case 589: /* cond_expr: TIF expr TTHEN expr TELSE expr  */
#line 3249 "chpl.ypp"
  {
    auto node  = Conditional::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[-2]), (yyvsp[-2].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                    /*isExpressionLevel*/ true);
    (yyval.expr) = node.release();
  }
#line 10284 "bison-chpl-lib.cpp"
    break;

  case 590: /* nil_expr: TNIL  */
#line 3266 "chpl.ypp"
            { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 10290 "bison-chpl-lib.cpp"
    break;

  case 598: /* opt_task_intent_ls: %empty  */
#line 3284 "chpl.ypp"
                                { (yyval.withClause) = nullptr; }
#line 10296 "bison-chpl-lib.cpp"
    break;

  case 599: /* opt_task_intent_ls: task_intent_clause  */
#line 3285 "chpl.ypp"
                                { (yyval.withClause) = (yyvsp[0].withClause); }
#line 10302 "bison-chpl-lib.cpp"
    break;

  case 600: /* task_intent_clause: TWITH TLP task_intent_ls TRP  */
#line 3290 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10312 "bison-chpl-lib.cpp"
    break;

  case 601: /* task_intent_ls: intent_expr  */
#line 3298 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10318 "bison-chpl-lib.cpp"
    break;

  case 602: /* task_intent_ls: task_intent_ls TCOMMA intent_expr  */
#line 3299 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10324 "bison-chpl-lib.cpp"
    break;

  case 603: /* forall_intent_clause: TWITH TLP forall_intent_ls TRP  */
#line 3304 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10334 "bison-chpl-lib.cpp"
    break;

  case 604: /* forall_intent_ls: intent_expr  */
#line 3312 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10340 "bison-chpl-lib.cpp"
    break;

  case 605: /* forall_intent_ls: forall_intent_ls TCOMMA intent_expr  */
#line 3313 "chpl.ypp"
                                       { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10346 "bison-chpl-lib.cpp"
    break;

  case 606: /* intent_expr: task_var_prefix ident_expr opt_type opt_init_expr  */
#line 3318 "chpl.ypp"
  {
    if (auto ident = (yyvsp[-2].expr)->toIdentifier()) {
      auto name = ident->name();
      auto node = TaskVar::build(BUILDER, LOC((yyloc)), /*attributeGroup*/ nullptr,
                                 name,
                                 /*intent*/ (yyvsp[-3].taskIntent),
                                 toOwned((yyvsp[-1].expr)),
                                 toOwned((yyvsp[0].expr)));
      (yyval.expr) = node.release();
    } else {
      (yyval.expr) = context->syntax((yyloc), "expected identifier for task variable name.");
    }
  }
#line 10364 "bison-chpl-lib.cpp"
    break;

  case 607: /* intent_expr: reduce_scan_op_expr TREDUCE ident_expr  */
#line 3332 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduceIntent((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 10372 "bison-chpl-lib.cpp"
    break;

  case 608: /* intent_expr: expr TREDUCE ident_expr  */
#line 3336 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduceIntent((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10380 "bison-chpl-lib.cpp"
    break;

  case 609: /* task_var_prefix: TCONST  */
#line 3342 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST;     }
#line 10386 "bison-chpl-lib.cpp"
    break;

  case 610: /* task_var_prefix: TIN  */
#line 3343 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::IN;        }
#line 10392 "bison-chpl-lib.cpp"
    break;

  case 611: /* task_var_prefix: TCONST TIN  */
#line 3344 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_IN;  }
#line 10398 "bison-chpl-lib.cpp"
    break;

  case 612: /* task_var_prefix: TREF  */
#line 3345 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::REF;       }
#line 10404 "bison-chpl-lib.cpp"
    break;

  case 613: /* task_var_prefix: TCONST TREF  */
#line 3346 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_REF; }
#line 10410 "bison-chpl-lib.cpp"
    break;

  case 614: /* task_var_prefix: TVAR  */
#line 3347 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::VAR;       }
#line 10416 "bison-chpl-lib.cpp"
    break;

  case 615: /* new_maybe_decorated: TNEW  */
#line 3352 "chpl.ypp"
    { (yyval.newManagement) = New::DEFAULT_MANAGEMENT; }
#line 10422 "bison-chpl-lib.cpp"
    break;

  case 616: /* new_maybe_decorated: TNEW TOWNED  */
#line 3354 "chpl.ypp"
    { (yyval.newManagement) = New::OWNED; }
#line 10428 "bison-chpl-lib.cpp"
    break;

  case 617: /* new_maybe_decorated: TNEW TSHARED  */
#line 3356 "chpl.ypp"
    { (yyval.newManagement) = New::SHARED; }
#line 10434 "bison-chpl-lib.cpp"
    break;

  case 618: /* new_maybe_decorated: TNEW TUNMANAGED  */
#line 3358 "chpl.ypp"
    { (yyval.newManagement) = New::UNMANAGED; }
#line 10440 "bison-chpl-lib.cpp"
    break;

  case 619: /* new_maybe_decorated: TNEW TBORROWED  */
#line 3360 "chpl.ypp"
    { (yyval.newManagement) = New::BORROWED; }
#line 10446 "bison-chpl-lib.cpp"
    break;

  case 620: /* new_expr: new_maybe_decorated expr  */
#line 3366 "chpl.ypp"
  {
    (yyval.expr) = context->buildNewExpr((yyloc), (yyvsp[-1].newManagement), (yyvsp[0].expr));
  }
#line 10454 "bison-chpl-lib.cpp"
    break;

  case 621: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3373 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned((yyvsp[-4].expr)),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::OWNED, call.release());
  }
#line 10470 "bison-chpl-lib.cpp"
    break;

  case 622: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3385 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned((yyvsp[-4].expr)),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::SHARED, call.release());
  }
#line 10486 "bison-chpl-lib.cpp"
    break;

  case 623: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3397 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-2].maybeNamedActualList), actuals, actualNames);
    auto base = context->buildUnaryOp((yylsp[-5]), (yyvsp[0].uniqueStr), (yyvsp[-5].expr));
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned(base),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::OWNED, call.release());
  }
#line 10503 "bison-chpl-lib.cpp"
    break;

  case 624: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3410 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-2].maybeNamedActualList), actuals, actualNames);
    auto base = context->buildUnaryOp((yylsp[-5]), (yyvsp[0].uniqueStr), (yyvsp[-5].expr));
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned(base),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::SHARED, call.release());

  }
#line 10521 "bison-chpl-lib.cpp"
    break;

  case 625: /* let_expr: TLET var_decl_stmt_inner_ls TIN expr  */
#line 3427 "chpl.ypp"
  {
    (yyval.expr) = context->buildLetExpr((yyloc), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10529 "bison-chpl-lib.cpp"
    break;

  case 626: /* range_literal_expr: expr TDOTDOT expr  */
#line 3434 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10538 "bison-chpl-lib.cpp"
    break;

  case 627: /* range_literal_expr: expr TDOTDOTOPENHIGH expr  */
#line 3439 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10547 "bison-chpl-lib.cpp"
    break;

  case 628: /* range_literal_expr: expr TDOTDOT  */
#line 3444 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-1].expr)),
                      /*upperBound*/ nullptr).release();
  }
#line 10556 "bison-chpl-lib.cpp"
    break;

  case 629: /* range_literal_expr: TDOTDOT expr  */
#line 3449 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10566 "bison-chpl-lib.cpp"
    break;

  case 630: /* range_literal_expr: TDOTDOTOPENHIGH expr  */
#line 3455 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10576 "bison-chpl-lib.cpp"
    break;

  case 631: /* range_literal_expr: TDOTDOT  */
#line 3461 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      /*upperBound*/ nullptr).release();
  }
#line 10586 "bison-chpl-lib.cpp"
    break;

  case 632: /* cast_expr: expr TCOLON expr  */
#line 3491 "chpl.ypp"
  {
    (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
  }
#line 10594 "bison-chpl-lib.cpp"
    break;

  case 633: /* tuple_expand_expr: TLP TDOTDOTDOT expr TRP  */
#line 3498 "chpl.ypp"
  {
    (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
  }
#line 10602 "bison-chpl-lib.cpp"
    break;

  case 634: /* super_expr: fn_expr  */
#line 3504 "chpl.ypp"
          { (yyval.expr) = context->buildFunctionExpr((yyloc), (yyvsp[0].functionParts)); }
#line 10608 "bison-chpl-lib.cpp"
    break;

  case 638: /* expr: sub_type_level_expr TQUESTION  */
#line 3513 "chpl.ypp"
  { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10614 "bison-chpl-lib.cpp"
    break;

  case 639: /* expr: TQUESTION  */
#line 3515 "chpl.ypp"
  { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 10620 "bison-chpl-lib.cpp"
    break;

  case 643: /* expr: fn_type  */
#line 3520 "chpl.ypp"
  { (yyval.expr) = context->buildFunctionType((yyloc), (yyvsp[0].functionParts)); }
#line 10626 "bison-chpl-lib.cpp"
    break;

  case 653: /* opt_expr: %empty  */
#line 3534 "chpl.ypp"
                  { (yyval.expr) = nullptr; }
#line 10632 "bison-chpl-lib.cpp"
    break;

  case 654: /* opt_expr: expr  */
#line 3535 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10638 "bison-chpl-lib.cpp"
    break;

  case 655: /* opt_try_expr: TTRY expr  */
#line 3539 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), false); }
#line 10644 "bison-chpl-lib.cpp"
    break;

  case 656: /* opt_try_expr: TTRYBANG expr  */
#line 3540 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), true); }
#line 10650 "bison-chpl-lib.cpp"
    break;

  case 657: /* opt_try_expr: super_expr  */
#line 3541 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10656 "bison-chpl-lib.cpp"
    break;

  case 663: /* call_base_expr: expr TBANG  */
#line 3558 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                             STR("postfix!"),
                                                             (yyvsp[-1].expr)); }
#line 10664 "bison-chpl-lib.cpp"
    break;

  case 664: /* call_base_expr: sub_type_level_expr TQUESTION  */
#line 3561 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10670 "bison-chpl-lib.cpp"
    break;

  case 667: /* call_expr: call_base_expr TLP opt_actual_ls TRP  */
#line 3568 "chpl.ypp"
    {
      AstList actuals;
      std::vector<UniqueString> actualNames;
      context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
      auto fnCall = FnCall::build(BUILDER, LOC((yyloc)),
                                  toOwned((yyvsp[-3].expr)),
                                  std::move(actuals),
                                  std::move(actualNames),
                                  /* square */ false);
      (yyval.expr) = fnCall.release();
    }
#line 10686 "bison-chpl-lib.cpp"
    break;

  case 668: /* call_expr: call_base_expr TLSBR opt_actual_ls TRSBR  */
#line 3580 "chpl.ypp"
    {
      AstList actuals;
      std::vector<UniqueString> actualNames;
      context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
      auto fnCall = FnCall::build(BUILDER, LOC((yyloc)),
                                  toOwned((yyvsp[-3].expr)),
                                  std::move(actuals),
                                  std::move(actualNames),
                                  /* square */ true);
      (yyval.expr) = fnCall.release();
    }
#line 10702 "bison-chpl-lib.cpp"
    break;

  case 669: /* call_expr: TPRIMITIVE TLP opt_actual_ls TRP  */
#line 3592 "chpl.ypp"
    {
      (yyval.expr) = context->buildPrimCall((yyloc), (yyvsp[-1].maybeNamedActualList));
    }
#line 10710 "bison-chpl-lib.cpp"
    break;

  case 670: /* dot_expr: expr TDOT ident_use  */
#line 3599 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10716 "bison-chpl-lib.cpp"
    break;

  case 671: /* dot_expr: expr TDOT TTYPE  */
#line 3601 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10722 "bison-chpl-lib.cpp"
    break;

  case 672: /* dot_expr: expr TDOT TDOMAIN  */
#line 3603 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10728 "bison-chpl-lib.cpp"
    break;

  case 673: /* dot_expr: expr TDOT TLOCALE  */
#line 3605 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10734 "bison-chpl-lib.cpp"
    break;

  case 674: /* dot_expr: expr TDOT TBYTES TLP TRP  */
#line 3607 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         false).release();
    }
#line 10744 "bison-chpl-lib.cpp"
    break;

  case 675: /* dot_expr: expr TDOT TBYTES TLSBR TRSBR  */
#line 3613 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         true).release();
    }
#line 10754 "bison-chpl-lib.cpp"
    break;

  case 676: /* parenthesized_expr: TLP tuple_component TRP  */
#line 3625 "chpl.ypp"
                                    { (yyval.expr) = (yyvsp[-1].expr); }
#line 10760 "bison-chpl-lib.cpp"
    break;

  case 677: /* parenthesized_expr: TLP tuple_component TCOMMA TRP  */
#line 3627 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consume((yyvsp[-2].expr))).release();
  }
#line 10768 "bison-chpl-lib.cpp"
    break;

  case 678: /* parenthesized_expr: TLP tuple_expr_ls TRP  */
#line 3631 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10776 "bison-chpl-lib.cpp"
    break;

  case 679: /* parenthesized_expr: TLP tuple_expr_ls TCOMMA TRP  */
#line 3635 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 10784 "bison-chpl-lib.cpp"
    break;

  case 680: /* bool_literal: TFALSE  */
#line 3641 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), false).release(); }
#line 10790 "bison-chpl-lib.cpp"
    break;

  case 681: /* bool_literal: TTRUE  */
#line 3642 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), true).release(); }
#line 10796 "bison-chpl-lib.cpp"
    break;

  case 682: /* str_bytes_literal: STRINGLITERAL  */
#line 3646 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10802 "bison-chpl-lib.cpp"
    break;

  case 683: /* str_bytes_literal: BYTESLITERAL  */
#line 3647 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10808 "bison-chpl-lib.cpp"
    break;

  case 686: /* literal_expr: INTLITERAL  */
#line 3653 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), INTLITERAL); }
#line 10814 "bison-chpl-lib.cpp"
    break;

  case 687: /* literal_expr: REALLITERAL  */
#line 3654 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), REALLITERAL); }
#line 10820 "bison-chpl-lib.cpp"
    break;

  case 688: /* literal_expr: IMAGLITERAL  */
#line 3655 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), IMAGLITERAL); }
#line 10826 "bison-chpl-lib.cpp"
    break;

  case 689: /* literal_expr: CSTRINGLITERAL  */
#line 3656 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[0].expr); }
#line 10832 "bison-chpl-lib.cpp"
    break;

  case 690: /* literal_expr: TNONE  */
#line 3657 "chpl.ypp"
                      { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 10838 "bison-chpl-lib.cpp"
    break;

  case 691: /* literal_expr: TLCBR expr_ls TRCBR  */
#line 3659 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), true,
                       context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10847 "bison-chpl-lib.cpp"
    break;

  case 692: /* literal_expr: TLCBR expr_ls TCOMMA TRCBR  */
#line 3664 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), true,
                       context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 10856 "bison-chpl-lib.cpp"
    break;

  case 693: /* literal_expr: TLSBR expr_ls TRSBR  */
#line 3669 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10864 "bison-chpl-lib.cpp"
    break;

  case 694: /* literal_expr: TLSBR expr_ls TCOMMA TRSBR  */
#line 3673 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList)), true).release();
  }
#line 10872 "bison-chpl-lib.cpp"
    break;

  case 695: /* literal_expr: TLSBR assoc_expr_ls TRSBR  */
#line 3677 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList)), false, true).release();
  }
#line 10880 "bison-chpl-lib.cpp"
    break;

  case 696: /* literal_expr: TLSBR assoc_expr_ls TCOMMA TRSBR  */
#line 3681 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList)), true, true).release();
  }
#line 10888 "bison-chpl-lib.cpp"
    break;

  case 697: /* assoc_expr_ls: expr TALIAS expr  */
#line 3689 "chpl.ypp"
  {
    auto node = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->makeList(node);
  }
#line 10897 "bison-chpl-lib.cpp"
    break;

  case 698: /* assoc_expr_ls: assoc_expr_ls TCOMMA expr TALIAS expr  */
#line 3694 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildBinOp(loc, (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 10907 "bison-chpl-lib.cpp"
    break;

  case 699: /* binary_op_expr: expr TPLUS expr  */
#line 3702 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10913 "bison-chpl-lib.cpp"
    break;

  case 700: /* binary_op_expr: expr TMINUS expr  */
#line 3703 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10919 "bison-chpl-lib.cpp"
    break;

  case 701: /* binary_op_expr: expr TSTAR expr  */
#line 3704 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10925 "bison-chpl-lib.cpp"
    break;

  case 702: /* binary_op_expr: expr TDIVIDE expr  */
#line 3705 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10931 "bison-chpl-lib.cpp"
    break;

  case 703: /* binary_op_expr: expr TSHIFTLEFT expr  */
#line 3706 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10937 "bison-chpl-lib.cpp"
    break;

  case 704: /* binary_op_expr: expr TSHIFTRIGHT expr  */
#line 3707 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10943 "bison-chpl-lib.cpp"
    break;

  case 705: /* binary_op_expr: expr TMOD expr  */
#line 3708 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10949 "bison-chpl-lib.cpp"
    break;

  case 706: /* binary_op_expr: expr TEQUAL expr  */
#line 3709 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10955 "bison-chpl-lib.cpp"
    break;

  case 707: /* binary_op_expr: expr TNOTEQUAL expr  */
#line 3710 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10961 "bison-chpl-lib.cpp"
    break;

  case 708: /* binary_op_expr: expr TLESSEQUAL expr  */
#line 3711 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10967 "bison-chpl-lib.cpp"
    break;

  case 709: /* binary_op_expr: expr TGREATEREQUAL expr  */
#line 3712 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10973 "bison-chpl-lib.cpp"
    break;

  case 710: /* binary_op_expr: expr TLESS expr  */
#line 3713 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10979 "bison-chpl-lib.cpp"
    break;

  case 711: /* binary_op_expr: expr TGREATER expr  */
#line 3714 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10985 "bison-chpl-lib.cpp"
    break;

  case 712: /* binary_op_expr: expr TBAND expr  */
#line 3715 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10991 "bison-chpl-lib.cpp"
    break;

  case 713: /* binary_op_expr: expr TBOR expr  */
#line 3716 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10997 "bison-chpl-lib.cpp"
    break;

  case 714: /* binary_op_expr: expr TBXOR expr  */
#line 3717 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11003 "bison-chpl-lib.cpp"
    break;

  case 715: /* binary_op_expr: expr TAND expr  */
#line 3718 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11009 "bison-chpl-lib.cpp"
    break;

  case 716: /* binary_op_expr: expr TOR expr  */
#line 3719 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11015 "bison-chpl-lib.cpp"
    break;

  case 717: /* binary_op_expr: expr TEXP expr  */
#line 3720 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11021 "bison-chpl-lib.cpp"
    break;

  case 718: /* binary_op_expr: expr TBY expr  */
#line 3721 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11027 "bison-chpl-lib.cpp"
    break;

  case 719: /* binary_op_expr: expr TALIGN expr  */
#line 3722 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11033 "bison-chpl-lib.cpp"
    break;

  case 720: /* binary_op_expr: expr THASH expr  */
#line 3723 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11039 "bison-chpl-lib.cpp"
    break;

  case 721: /* binary_op_expr: expr TDMAPPED expr  */
#line 3724 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11045 "bison-chpl-lib.cpp"
    break;

  case 722: /* unary_op_expr: TPLUS expr  */
#line 3728 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11051 "bison-chpl-lib.cpp"
    break;

  case 723: /* unary_op_expr: TMINUS expr  */
#line 3729 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11057 "bison-chpl-lib.cpp"
    break;

  case 724: /* unary_op_expr: TMINUSMINUS expr  */
#line 3730 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11063 "bison-chpl-lib.cpp"
    break;

  case 725: /* unary_op_expr: TPLUSPLUS expr  */
#line 3731 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11069 "bison-chpl-lib.cpp"
    break;

  case 726: /* unary_op_expr: TBANG expr  */
#line 3732 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11075 "bison-chpl-lib.cpp"
    break;

  case 727: /* unary_op_expr: expr TBANG  */
#line 3733 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                              STR("postfix!"),
                                                              (yyvsp[-1].expr)); }
#line 11083 "bison-chpl-lib.cpp"
    break;

  case 728: /* unary_op_expr: TBNOT expr  */
#line 3736 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11089 "bison-chpl-lib.cpp"
    break;

  case 729: /* reduce_expr: expr TREDUCE expr  */
#line 3741 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11097 "bison-chpl-lib.cpp"
    break;

  case 730: /* reduce_expr: expr TREDUCE zippered_iterator  */
#line 3745 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11105 "bison-chpl-lib.cpp"
    break;

  case 731: /* reduce_expr: reduce_scan_op_expr TREDUCE expr  */
#line 3749 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11113 "bison-chpl-lib.cpp"
    break;

  case 732: /* reduce_expr: reduce_scan_op_expr TREDUCE zippered_iterator  */
#line 3753 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11121 "bison-chpl-lib.cpp"
    break;

  case 733: /* scan_expr: expr TSCAN expr  */
#line 3760 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11129 "bison-chpl-lib.cpp"
    break;

  case 734: /* scan_expr: expr TSCAN zippered_iterator  */
#line 3764 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11137 "bison-chpl-lib.cpp"
    break;

  case 735: /* scan_expr: reduce_scan_op_expr TSCAN expr  */
#line 3768 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11145 "bison-chpl-lib.cpp"
    break;

  case 736: /* scan_expr: reduce_scan_op_expr TSCAN zippered_iterator  */
#line 3772 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11153 "bison-chpl-lib.cpp"
    break;


#line 11157 "bison-chpl-lib.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYCHPL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, context, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYCHPL_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYCHPL_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, context);
          yychar = YYCHPL_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYCHPL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
  yyps->yynew = 2;
  goto yypushreturn;


/*-------------------------.
| yypushreturn -- return.  |
`-------------------------*/
yypushreturn:

  return yyresult;
}
#undef yychpl_nerrs
#undef yystate
#undef yyerrstatus
#undef yyssa
#undef yyss
#undef yyssp
#undef yyvsa
#undef yyvs
#undef yyvsp
#undef yylsa
#undef yyls
#undef yylsp
#undef yystacksize

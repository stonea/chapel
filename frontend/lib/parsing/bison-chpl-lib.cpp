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
#define YYLAST   19791

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  182
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  200
/* YYNRULES -- Number of rules.  */
#define YYNRULES  744
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1316

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
    1361,  1362,  1366,  1367,  1379,  1380,  1381,  1386,  1387,  1388,
    1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,  1400,  1401,  1402,  1403,  1404,  1408,  1409,  1410,  1411,
    1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,  1426,  1427,
    1428,  1429,  1433,  1434,  1438,  1445,  1455,  1459,  1465,  1465,
    1471,  1471,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1490,
    1495,  1500,  1505,  1512,  1520,  1521,  1525,  1534,  1540,  1548,
    1567,  1566,  1576,  1575,  1588,  1595,  1615,  1630,  1645,  1649,
    1653,  1657,  1661,  1665,  1669,  1673,  1694,  1698,  1702,  1706,
    1710,  1714,  1718,  1722,  1726,  1730,  1734,  1738,  1742,  1746,
    1750,  1754,  1758,  1762,  1766,  1770,  1774,  1778,  1782,  1787,
    1795,  1804,  1808,  1812,  1816,  1820,  1824,  1828,  1832,  1836,
    1841,  1846,  1851,  1859,  1874,  1892,  1896,  1903,  1904,  1909,
    1914,  1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,  1923,
    1924,  1925,  1926,  1935,  1936,  1937,  1938,  1947,  1948,  1952,
    1956,  1960,  1967,  1971,  1975,  1982,  1986,  1990,  1994,  2001,
    2002,  2006,  2010,  2014,  2021,  2034,  2050,  2058,  2062,  2071,
    2072,  2076,  2080,  2085,  2093,  2098,  2102,  2109,  2110,  2114,
    2123,  2128,  2139,  2146,  2147,  2148,  2152,  2153,  2157,  2161,
    2165,  2169,  2173,  2180,  2197,  2210,  2217,  2222,  2229,  2228,
    2238,  2244,  2243,  2258,  2265,  2277,  2295,  2292,  2320,  2324,
    2325,  2327,  2332,  2333,  2337,  2338,  2342,  2345,  2347,  2352,
    2353,  2364,  2384,  2383,  2399,  2398,  2416,  2426,  2423,  2457,
    2465,  2473,  2484,  2495,  2504,  2519,  2520,  2524,  2525,  2526,
    2535,  2536,  2537,  2538,  2539,  2540,  2541,  2542,  2543,  2544,
    2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,  2553,  2554,
    2555,  2556,  2557,  2558,  2559,  2563,  2564,  2565,  2566,  2567,
    2568,  2569,  2570,  2571,  2572,  2573,  2574,  2579,  2580,  2584,
    2585,  2589,  2590,  2594,  2595,  2599,  2600,  2604,  2605,  2609,
    2613,  2614,  2618,  2622,  2627,  2632,  2637,  2642,  2650,  2654,
    2662,  2663,  2664,  2665,  2666,  2667,  2668,  2669,  2670,  2674,
    2675,  2676,  2677,  2678,  2679,  2683,  2684,  2685,  2689,  2690,
    2691,  2692,  2693,  2694,  2695,  2699,  2700,  2703,  2704,  2708,
    2709,  2710,  2714,  2719,  2720,  2722,  2724,  2726,  2731,  2733,
    2738,  2740,  2742,  2744,  2746,  2748,  2750,  2755,  2756,  2760,
    2769,  2773,  2781,  2785,  2792,  2813,  2814,  2819,  2820,  2821,
    2822,  2823,  2828,  2827,  2836,  2844,  2848,  2855,  2873,  2892,
    2896,  2900,  2907,  2909,  2911,  2918,  2919,  2920,  2924,  2928,
    2929,  2930,  2934,  2935,  2939,  2940,  2944,  2945,  2946,  2947,
    2951,  2952,  2956,  2960,  2961,  2967,  2968,  2972,  2973,  2977,
    2981,  2988,  2989,  2993,  2998,  3007,  3008,  3012,  3013,  3020,
    3021,  3022,  3023,  3024,  3025,  3027,  3029,  3031,  3033,  3039,
    3041,  3044,  3046,  3048,  3050,  3052,  3054,  3056,  3058,  3060,
    3062,  3067,  3078,  3089,  3099,  3115,  3131,  3147,  3156,  3165,
    3173,  3187,  3201,  3218,  3222,  3226,  3230,  3234,  3238,  3242,
    3249,  3267,  3275,  3276,  3277,  3278,  3279,  3280,  3281,  3285,
    3286,  3290,  3299,  3300,  3304,  3313,  3314,  3318,  3332,  3336,
    3343,  3344,  3345,  3346,  3347,  3348,  3352,  3354,  3356,  3358,
    3360,  3366,  3373,  3385,  3397,  3410,  3427,  3434,  3439,  3444,
    3449,  3455,  3461,  3491,  3498,  3505,  3506,  3510,  3512,  3513,
    3515,  3517,  3518,  3519,  3520,  3523,  3524,  3525,  3526,  3527,
    3528,  3529,  3530,  3531,  3535,  3536,  3540,  3541,  3542,  3546,
    3547,  3548,  3549,  3558,  3559,  3562,  3563,  3564,  3568,  3580,
    3592,  3599,  3601,  3603,  3605,  3607,  3613,  3626,  3627,  3631,
    3635,  3642,  3643,  3647,  3648,  3652,  3653,  3654,  3655,  3656,
    3657,  3658,  3659,  3664,  3669,  3673,  3677,  3681,  3689,  3694,
    3703,  3704,  3705,  3706,  3707,  3708,  3709,  3710,  3711,  3712,
    3713,  3714,  3715,  3716,  3717,  3718,  3719,  3720,  3721,  3722,
    3723,  3724,  3725,  3729,  3730,  3731,  3732,  3733,  3734,  3737,
    3741,  3745,  3749,  3753,  3760,  3764,  3768,  3772,  3780,  3781,
    3782,  3783,  3784,  3785,  3786
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

#define YYPACT_NINF (-1093)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-745)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1093,   111,  4018, -1093,   -33,    88, -1093, -1093, -1093, -1093,
   -1093, -1093, -1093, 11435,    27,   165,   109, 13850,   273, 19538,
      27, 11435,   294,   180,   274,   165,  5451, 11435,  5451,   198,
   19613, -1093,   404,   321,  8971,  9851,  9851, -1093,  9147,   406,
      49,   299, -1093,   449, 19613, 19613, 19613, -1093, 14168, 10027,
     466, 11435, 11435,   262, -1093,   473,   514, 11435, -1093, 13850,
   -1093, 11435,   393,   399,   229,   232, 13194,   523, 19668, -1093,
   11435,  8443, 11435, 10027, 13850, 11435,   463,   538,   457,  5451,
     567, 11435,   581,  7387,  7387, -1093,   585, -1093, 13850, -1093,
     591,  9147,  9323, -1093, -1093,   644, 11435, -1093, 11435, -1093,
   -1093, 13677, 11435, -1093, 11435, -1093, -1093, -1093,  4395,  7739,
    9499, 11435, -1093,  5099, -1093, -1093, -1093, -1093, 19117,   530,
   -1093,    61,   490, -1093,   228, -1093, -1093, -1093, -1093, -1093,
   -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093,  7563, -1093,
   10203, -1093, -1093, -1093, -1093, -1093,   625, -1093, -1093, -1093,
   -1093, -1093, -1093, -1093, -1093,   543, 19613, -1093,  3082,   504,
     416, -1093,   315, -1093, -1093, -1093,   263,   258, -1093, -1093,
   19613, 14168, -1093,   525,   527, -1093, -1093, -1093,   542,   545,
   11435,   548,   549, -1093, -1093, -1093, 18874,  3361,   190,   550,
     551, -1093, -1093,   243, -1093, -1093, -1093, -1093, -1093,   391,
   -1093, -1093, -1093, 11435, 11435, 11435, 19613, -1093, 11435, 11435,
   10379,   639,   411, -1093, -1093, -1093, -1093, 18874,   437, -1093,
   -1093,   546,  5451, -1093, -1093,   555,   137,   552, 15732, -1093,
     254, -1093,   559, -1093,   251, 18874,   590,  9323, -1093, -1093,
   -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093,
   -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093,
   -1093, -1093, -1093, -1093,   556, -1093, -1093, 19613,   553,    60,
   15307,    33,  1658,    33, 15140, 19613, 19613,    10,  2478, -1093,
   -1093,   645,  9323,   557,    91,  5451,  3272,    93,    89, -1093,
    5451, -1093, -1093, 15814, -1093,    22, 16485,   168, -1093,   560,
     565, -1093, 15814,   137,   168, -1093,  9323,  1095,  1095,    73,
      12, -1093,    16, -1093, -1093, -1093, -1093, 11435, 11435, -1093,
     588, -1093,   554,   592, -1093, -1093,  3535,   594, -1093, -1093,
   18874,   255, 11435, 11435, -1093,    11, -1093, -1093, 18874,   573,
   16568, -1093, 15814,   137, 18874,   569,  9323, -1093, 18874, 16652,
   -1093, -1093, -1093, -1093,   137,    60, 15814,   577, -1093,   520,
     520,  1403,   168,   168,   238, -1093, -1093,  4571,    98, -1093,
   11435,   -24,   147, -1093, 13994,   -27,    26, 16735,   -38,  1403,
     736, -1093, -1093, 19613, -1093, -1093,  4395, -1093,    75, -1093,
     645, -1093, -1093, -1093,   742,   584,  4747, 11435, -1093, 11435,
     693, -1093, -1093,  3780,   110,   543, 18874,   623, 19613, 11435,
     595, -1093,   597, 19327,   636,   207, -1093,    79,   263, -1093,
   -1093, -1093, -1093,   680, -1093, -1093, -1093, -1093,   120,   682,
   -1093, -1093, -1093, 13506,   651,   335, -1093,   365,   470, -1093,
     628, 11435, 11435, 11435,  9851,  9851, 11435,   483, 11435, 11435,
   11435, 11435, 11435,   515, 13677, 11435, 11435, 11435, 11435, 11435,
   11435, 11435, 11435, 11435, 11435, 11435, 11435, 11435, 11435, 11435,
   11435,   711, -1093, -1093, -1093, -1093, -1093,  9323,  9323, -1093,
   -1093, -1093, -1093,  9323, -1093, -1093,  9323,  9323,  9323,  9323,
    9851,  9851, 15897, 15979, 16817,   608,   101, 19613,  7915, -1093,
   -1093, -1093,  9851,    60, 14168, -1093, 11435, -1093, 11435,   657,
     611,   638, -1093, -1093, -1093,   743, 11435, -1093,  5627,  9851,
   -1093,   620, -1093,    60,  5803,  9851, -1093,    60, -1093,    60,
    9851, -1093,    60,   669,   670,  5451,   764,  5451, -1093,   766,
   11435,   737,   627,  9323, 19613, -1093, -1093, -1093,  3272, -1093,
   -1093,   150, -1093, 11611,   677, 11435, 14168, -1093, -1093, 11435,
   -1093, 19382, 11435, 11435, -1093,   630, -1093, -1093, -1093, -1093,
   19483, -1093,   263, 13369, -1093,  3272, -1093,   658, 11611, -1093,
   18874, 18874, -1093,   552, -1093,    54, -1093,  9323,   633, -1093,
     787,   787, -1093, -1093, -1093, -1093, -1093, -1093, 10555, -1093,
   16899,  8091, -1093,  8267, -1093, 18874,  5451,   635,  9851, 10731,
    4219,   643, 11435, 10907, -1093, -1093,  8971,  9851,  9851, -1093,
     659,  8619, -1093,   240, -1093,  4923, -1093,   366, 16981,   368,
   15400, 19613,  7211,  7211, -1093,   543,   649, -1093,   254, -1093,
     161,   666,   622, -1093, -1093, 11435,   104, -1093, -1093,   192,
   -1093, -1093,   155, -1093, -1093,  3738, -1093,   716, -1093,   650,
     672, -1093,   675, -1093,   676,   681,   683,   684, -1093,   685,
     688,   689,   690,   691,   696,   698,   700, -1093, -1093, -1093,
   -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093,
   -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093, 11435,
     701,   702,   650, -1093,   650, -1093, 11435, -1093, 19613, -1093,
   -1093, 13064, 13064,   433, -1093,   433, -1093,   433, 19091,  1242,
    1218,  1070,   137,   520, -1093,   508, -1093, -1093, -1093, -1093,
   -1093,  1403, 19135,   433,  2283,  2283, 13064,  2283,  2283,  1961,
     520, 19135, 13239,  1961,   168,   168,   520,  1403,   664,   687,
     695,   699,   706,   710,   692,   678, -1093,   433, -1093,   433,
   11787,  9851, 11963,  9851, 11435,  9323,  9851, 13994,   704,    82,
   -1093, -1093, -1093,   199, -1093,   812, 18956,   475,    27, 17063,
   -1093,   381, 18874, 17145,  9323, -1093,  9323, 11435,   204,  9147,
   18874,    72, 16061,  7915, -1093,  9147, 18874,    42, 15482, -1093,
   -1093,    33, 15565, -1093, 11435, 11435,   817,  5451,   821, 17227,
    5451, 16144, 19613, -1093,   226, -1093,   235, -1093,   237,  3272,
      93, -1093, 18874,  8795, -1093, 18874, -1093, -1093, -1093, 19613,
   17309, 17391, -1093,   658,   715, -1093,   246, 11611, -1093,   282,
   -1093, 11435, -1093,   708,     6,   694, -1093, 14081, -1093, -1093,
   -1093, -1093, -1093, -1093, -1093, -1093,  5451,   -18, 16228, -1093,
   -1093, 18874,  5451, 18874, -1093, 17473, 15649, 15223,   183, -1093,
   -1093,   312, -1093, -1093, -1093, -1093, 11435, -1093,   148, 14223,
   11435, -1093, 11083,  7211,  7211, -1093, 11435,   505, 11435,   513,
     528, 11435,  9675,   536,   388, -1093, -1093, -1093, 17555,   733,
     717,   713, -1093, 19613, 14168, -1093,  9323,   714,  2674, 18874,
   19613,   530,   709, -1093,   716, -1093, -1093, -1093, -1093, -1093,
      58,   221, -1093, 17637, -1093, 14383, -1093, -1093, 18874, -1093,
     720,   712, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093,
   11435,   857, 17719, 11435,   864, 17801,   323,   722, 17883,  9323,
   -1093, -1093,  7915, -1093, -1093, -1093, -1093, -1093, -1093, -1093,
   -1093, -1093, -1093, -1093, -1093,    80,  9851,  9851,    60,    60,
   -1093, -1093, -1093, -1093, 15814, -1093, 14466,  5979, -1093,  6155,
   -1093,   334, -1093, 14550,  6331, -1093,    60,  6507, -1093,    60,
   -1093,    60, -1093,    60, 18874, 18874,  5451, -1093,  5451, 11435,
   -1093,  5451,   822,   734,   735, 19613,   552, -1093, -1093,   677,
   -1093, -1093, -1093,   729,   731,   282, 11435,   716,   658, -1093,
   11435, -1093, -1093, 18874, -1093,  6683, 11435, -1093, -1093, -1093,
   19613, -1093,   758,   552, -1093,  6859,   730,  7035,   732, -1093,
   11435,  9851,  9851,  9851,  5451,  9323, -1093, -1093, -1093, -1093,
   -1093,   508, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093,
   -1093, -1093, -1093, -1093, -1093, -1093,  7211, -1093, -1093, 17965,
      65, 16321,   390,   741,  7211, -1093, 11435, -1093, -1093,  2692,
     395,   396,   346, -1093, -1093, -1093, -1093,  2212, 19279, -1093,
   -1093, 19327, -1093,    58,   163, 11435, -1093,   761,   738, -1093,
     650,   650, -1093, -1093, 18048, 12139, 12315, 18130, 12491, 12667,
   -1093, 12843, 13019,   359, -1093,   677,   367,   371, -1093, -1093,
   -1093,  5451,  9147, 18874,  9147, 18874,  7915, -1093,  5451,  9147,
   18874, -1093,  9147, 18874, -1093, -1093, -1093, -1093, -1093, 18874,
     876,  5451, -1093, -1093, -1093, -1093, -1093,  9323,  9323, -1093,
   -1093, -1093, -1093,   282, 18874,  5451, -1093,    87,   739, 11435,
   -1093,  9147, -1093, 18874,  5451,  9147, -1093, 18874,  5451, 18874,
      60, 15814,    33, 15565,   186, 16403, -1093,   208, 11259,  7211,
    7211,  7211,  7211, -1093, -1093, -1093, 18212, 18874, 19050, -1093,
   -1093, -1093,   751, 19279, -1093, -1093, -1093, -1093, -1093,    83,
   -1093,    -9, -1093,   234, 18300,    50, -1093, -1093, -1093, 11435,
   11435, 11435, 11435, 11435, 11435, 11435, 11435, -1093, -1093, 17227,
   14634, 14718, -1093, 17227, 14802, 14886,  5451, -1093,   744,   745,
   -1093, -1093,   590, -1093,   552, 18874, 14970, -1093, 15054, -1093,
    5451,  5451, -1093, -1093, 18874,   407,   754,   410,   755, 11435,
   -1093, -1093, -1093,    68, -1093, 11435,   163,    83,    83,    83,
      83,    83,    83,   163,  5275, -1093, -1093, -1093, -1093, -1093,
   18382, 18464, 18546, 18628, 18710, 18792,  5451,  5451,  5451,  5451,
   -1093,   759,   760, -1093,  5451,  5451, -1093, -1093, -1093, -1093,
   18874, -1093, 18874, -1093, -1093, -1093, -1093, -1093, -1093, -1093,
     775, -1093, 11435, 11435, 11435, 11435, 11435, 11435, 17227, 17227,
   17227, 17227, -1093, -1093, 17227, 17227
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   144,   472,   687,   688,   689,
     683,   684,   690,     0,   599,   134,   166,   567,   173,   569,
     599,     0,   172,   502,   500,   134,     0,     0,     0,   287,
     167,   205,   204,   681,     0,     0,     0,   203,     0,   171,
      69,   288,   350,   168,     0,     0,     0,   345,     0,     0,
     175,     0,     0,   616,   591,   691,   176,     0,   351,   561,
     497,     0,     0,     0,   190,   188,   438,   170,   570,   499,
       0,     0,     0,     0,   565,     0,     0,   174,     0,     0,
     145,     0,   682,     0,     0,   490,   169,   325,   563,   501,
     177,     0,     0,   146,   740,     0,     0,   742,     0,   743,
     744,   632,     0,   741,   738,   640,   186,   739,     0,     0,
       0,     0,     4,     0,     5,    10,    11,    12,    47,    51,
      52,    58,     0,    45,    72,    13,    78,    14,    15,    16,
      17,    29,   547,   548,    23,    46,   187,   197,     0,   206,
     654,   198,    18,    31,    30,    20,     0,   282,    19,   650,
      22,    35,    32,    33,   196,   326,     0,   194,     0,     0,
     647,   349,     0,   644,   192,   366,   458,   449,   642,   195,
       0,     0,   193,   659,   638,   637,   641,   551,   549,     0,
       0,   648,   649,   653,   652,   651,     0,   550,     0,   660,
     661,   662,   685,   686,   643,   553,   552,   645,   646,     0,
      28,   569,   167,     0,     0,     0,     0,   570,     0,     0,
       0,     0,   647,   659,   549,   648,   649,   559,   550,   660,
     661,     0,     0,   600,   135,     0,   568,     0,   599,   491,
       0,   498,     0,    21,     0,   535,     0,   541,   142,   147,
     159,   153,   152,   161,   138,   151,   162,   148,   163,   136,
     164,   157,   150,   158,   156,   154,   155,   137,   139,   149,
     160,   165,   140,   143,     0,   141,   214,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      70,    72,   541,     0,     0,     0,     0,     0,     0,   505,
       0,   183,    40,     0,   317,     0,   316,   725,   620,   617,
     618,   619,     0,   562,   726,     7,   541,   348,   348,   445,
     180,   440,   181,   441,   442,   446,   447,   179,   178,   448,
     438,   531,     0,   353,   354,   356,     0,   439,   530,   358,
     518,     0,     0,     0,   184,   644,   635,   658,   636,     0,
       0,    43,     0,   566,   554,     0,   541,    44,   560,     0,
     295,   299,   296,   299,   564,     0,     0,     0,    57,   727,
     729,   630,   724,   723,     0,    75,    79,     0,     0,   537,
       0,     0,     0,   538,   583,     0,     0,   535,     0,   631,
       0,     6,   323,     0,   204,   324,     0,    49,     0,     9,
      72,    50,    53,    56,     0,    55,     0,     0,    73,     0,
       0,   502,   202,     0,   683,   326,   655,   210,     0,     0,
       0,   322,     0,     0,   343,     0,   336,   438,   458,   456,
     457,   455,   374,   460,   459,   463,   462,   464,     0,   453,
     450,   451,   454,     0,   495,     0,   492,     0,   639,    34,
     621,     0,     0,     0,     0,     0,     0,   728,     0,     0,
       0,     0,     0,     0,   629,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   405,   412,   413,   414,   409,   411,     0,     0,   407,
     410,   408,   406,     0,   416,   415,     0,     0,   541,   541,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      24,    37,     0,     0,     0,    25,     0,    38,     0,   547,
       0,   542,   543,   546,   335,     0,     0,   224,     0,     0,
     223,     0,   232,     0,     0,     0,   230,     0,   240,     0,
       0,   238,     0,     0,     0,     0,   256,     0,   405,   252,
       0,     0,     0,     0,     0,   266,    26,   509,     0,   510,
     512,     0,   529,     0,   515,     0,     0,   182,    39,     0,
     319,     0,     0,     0,    41,     0,   191,   189,   443,   444,
       0,   439,   458,   438,   431,     0,   430,   533,     0,   127,
     656,   657,   364,     0,   185,     0,    42,     0,     0,   306,
     297,   298,   217,   216,    27,    77,    76,    80,     0,   692,
       0,     0,   677,     0,   679,   584,     0,     0,     0,     0,
       0,     0,     0,     0,   696,     8,     0,     0,     0,    48,
      58,     0,    54,     0,    66,     0,   125,     0,   120,     0,
      87,     0,     0,    93,   199,   326,     0,   212,     0,   209,
     293,   327,     0,   334,   340,     0,   338,   333,   423,     0,
     425,   429,     0,   461,   523,     0,   525,   465,   452,   421,
     142,   401,   147,   399,   153,   152,   151,   148,   403,   163,
     164,   150,   154,   137,   149,   165,   140,   398,   380,   383,
     381,   382,   404,   393,   384,   397,   389,   387,   400,   388,
     386,   391,   396,   385,   390,   394,   395,   392,   402,     0,
     377,     0,   421,   378,   421,   375,     0,   494,     0,   489,
     504,   720,   719,   722,   731,   730,   735,   734,   716,   713,
     714,   715,   633,   703,   144,     0,   673,   674,   145,   672,
     671,   627,   707,   718,   712,   710,   721,   711,   709,   701,
     706,   708,   717,   700,   704,   705,   702,   628,     0,     0,
       0,     0,     0,     0,     0,     0,   733,   732,   737,   736,
       0,     0,     0,     0,     0,     0,     0,   694,   293,   610,
     611,   613,   615,     0,   602,     0,     0,     0,   599,   599,
     220,     0,   536,     0,     0,   556,     0,     0,     0,     0,
     573,     0,     0,     0,   233,     0,   579,     0,     0,   231,
     241,     0,     0,   239,     0,     0,   255,     0,   251,     0,
       0,     0,     0,   555,     0,   269,     0,   267,     0,   513,
       0,   528,   527,     0,   507,   626,   506,   318,   315,     0,
       0,     0,   670,   533,   359,   355,     0,     0,   534,   515,
     357,     0,   363,     0,     0,     0,   557,     0,   300,   693,
     634,   678,   539,   680,   540,   248,     0,     0,     0,   695,
     246,   585,     0,   698,   697,     0,     0,     0,     0,    59,
      60,     0,    62,    64,    68,    67,     0,   102,     0,     0,
       0,    95,     0,     0,    93,    65,   398,   380,   383,   381,
     382,   391,   390,   392,     0,   417,   418,    82,    81,    94,
       0,     0,   328,     0,     0,   290,     0,     0,   348,   344,
       0,     0,   438,   424,   465,   521,   520,   519,   522,   466,
     473,   438,   373,     0,   379,     0,   369,   370,   496,   493,
       0,     0,   133,   131,   132,   130,   129,   128,   668,   669,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     612,   614,     0,   601,   166,   173,   172,   171,   168,   175,
     176,   170,   174,   169,   177,     0,     0,     0,     0,     0,
     503,   215,   545,   544,     0,   250,     0,     0,   222,     0,
     221,     0,   605,     0,     0,   228,     0,     0,   226,     0,
     236,     0,   234,     0,   264,   263,     0,   258,     0,     0,
     254,     0,   260,     0,   292,     0,     0,   511,   514,   515,
     516,   517,   314,     0,     0,   515,     0,   465,   533,   532,
     419,   434,   432,   365,   308,     0,     0,   307,   310,   558,
       0,   301,   304,     0,   249,     0,     0,     0,     0,   247,
       0,     0,     0,     0,     0,     0,    61,   126,   123,   103,
     115,   109,   108,   107,   117,   104,   118,   113,   106,   114,
     112,   110,   111,   105,   116,   119,     0,   122,   121,    90,
      89,    88,     0,     0,     0,   200,     0,   201,   328,   348,
       0,     0,     0,   321,   190,   188,   320,   348,   348,   329,
     339,     0,   426,   473,     0,     0,   367,   428,     0,   376,
     421,   421,   675,   676,     0,     0,     0,     0,     0,     0,
     292,     0,     0,     0,   603,   515,   659,   659,   219,   218,
     225,     0,     0,   572,     0,   571,     0,   604,     0,     0,
     578,   229,     0,   577,   227,   237,   235,   257,   253,   590,
     259,     0,    74,   289,   268,   265,   508,   541,   541,   435,
     433,   360,   361,   515,   420,     0,   312,     0,     0,     0,
     302,     0,   244,   587,     0,     0,   242,   586,     0,   699,
       0,     0,     0,     0,     0,     0,    63,     0,     0,     0,
      93,     0,    93,    96,    99,    85,    84,    83,   348,   207,
     213,   211,   294,   348,   331,   330,   342,   346,   487,     0,
     488,   475,   478,     0,   474,     0,   422,   371,   372,     0,
       0,     0,     0,     0,     0,     0,     0,   294,   607,   576,
       0,     0,   606,   582,     0,     0,     0,   262,     0,     0,
     437,   436,   313,   311,     0,   305,     0,   245,     0,   243,
       0,     0,   124,    92,    91,     0,     0,     0,     0,     0,
     208,   291,   332,     0,   486,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,   469,   471,   368,   468,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     261,   622,   623,   303,     0,     0,    98,   101,    97,   100,
      86,   347,   477,   479,   480,   483,   484,   485,   481,   482,
     476,   470,     0,     0,     0,     0,     0,     0,   575,   574,
     581,   580,   624,   625,   589,   588
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1093, -1093, -1093,     3,   -63,  2438, -1093,   100,   808, -1093,
   -1093, -1093,  -147,  -113, -1093,   309, -1093, -1093,  -114, -1093,
   -1093,    47,   656, -1093,  -571,  2983,   562,  -600, -1093,  -857,
   -1093, -1093, -1093,    62, -1093, -1093, -1093,   920, -1093,  2632,
     -62, -1093, -1093,  -476,  1213, -1092,  -879, -1093, -1093,   245,
   -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093,   558,   824,
   -1093,   856, -1093, -1093,   -57,  2285, -1093, -1093, -1093, -1093,
     596, -1093,   -80, -1093, -1093, -1093, -1093,   392, -1093, -1093,
   -1093,  -116, -1093,  -370,  -855, -1093, -1093, -1093, -1093, -1093,
    -412, -1093,   605, -1093, -1093, -1093, -1093, -1093,   382, -1093,
     -64, -1093, -1093, -1093, -1093,   561, -1093, -1093, -1093, -1093,
      31,  -423,  -170,  -838,  -939,  -632, -1093,    39, -1093,    40,
     397,   -51,   641,   -47, -1093, -1093,  -362,  -862, -1093,  -291,
   -1093,  -130,  -298,  -287,  -607, -1093, -1093,    67,   265, -1093,
    -179,   838, -1093,  -169,   421,   160,  -434,  -808,  -639, -1093,
   -1093, -1093,  -615,  -545, -1093,  -784,    -7,    84, -1093,  -256,
    -509,  -557,   379, -1093, -1093, -1093, -1093,   931, -1093,   -11,
   -1093, -1093,  -231, -1093,  -775, -1093, -1093,   992,  1314, -1093,
   -1093, -1093, -1093,   -13, -1093,    13,  1552, -1093,  1878,  1956,
   -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093, -1093,  -485
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,   366,   113,   808,   115,   116,   117,   388,
     389,   118,   119,   120,   121,   395,   622,   871,   872,   122,
     123,   124,   400,   125,   126,   127,   367,   899,   629,   900,
     128,   129,  1067,   626,   627,   130,   131,   225,   263,   287,
     132,   265,   133,   321,   520,   134,   135,   308,   307,   136,
     137,   138,   139,   140,   141,   638,   903,   142,   143,   269,
     144,   277,   145,   816,   817,   211,   147,   148,   149,   150,
     590,   848,  1033,   151,   152,   844,  1028,   294,   295,   153,
     154,   155,   156,   410,   908,   157,   158,   415,   910,   911,
     416,   159,   212,  1253,   161,   162,   322,   323,   324,  1017,
     163,   336,   583,   841,   164,   165,  1205,   166,   167,   701,
     702,   895,   896,   897,  1021,   922,   418,   649,  1098,   650,
     577,   651,   326,   571,   433,   422,   428,   920,  1268,  1269,
     168,  1096,  1201,  1202,  1203,   169,   170,   435,   436,   707,
     171,   172,   230,   288,   289,   550,   551,   824,   328,   918,
     656,   657,   554,   329,   838,   839,   368,   371,   372,   510,
     511,   512,   213,   174,   175,   176,   177,   214,   179,   222,
     223,   773,   527,   981,   774,   775,   180,   215,   216,   183,
     184,   185,   337,   186,   407,   513,   218,   188,   219,   220,
     191,   192,   193,   194,   378,   195,   196,   197,   198,   199
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     217,   644,   437,   320,   226,   112,   392,   335,   228,   227,
     703,   413,   842,   777,   235,   325,   917,   487,   982,   327,
     234,   270,   272,   274,   405,   278,   542,  1073,   335,  1089,
     845,  1022,   894,   840,   814,   636,   293,   914,   296,   297,
     523,  1068,   529,   532,   302,   335,   303,  1079,   304,  1015,
     565,   504,  1093,   330,   290,   843,   652,   235,   338,   340,
     342,   343,   344,   331,   873,   290,   348,  -287,   349,   393,
     926,  -288,   927,   608,   984,   354,  1149,   821,   356,   338,
    1025,   552,  1264,   359,   339,   360,  1198,   281,   361,   362,
     588,   363,   290,   521,   552,   235,   338,   377,   379,    21,
    1264,  1179,   521,   376,   977,   357,   309,    28,   540,  1255,
     613,     3,   535,  1267,   818,   616,   617,    36,  1094,   290,
     568,   654,   373,  1026,   601,   403,   311,   406,  -309,   950,
     313,   279,   382,   200,   280,   582,   555,  1180,   614,  1256,
    -526,   836,    71,  -270,   607,   611,   521,   221,   766,   606,
     602,   724,  -524,   521,   314,  1152,   552,   315,  1035,    62,
      71,  1267,   521,   569,  -271,   390,  1198,   440,   224,   316,
     559,  -309,   951,   335,   609,   509,  1095,  1114,  1027,   916,
    -524,   386,  -362,   350,   352,   237,  1200,  -526,   319,   282,
     492,   493,   494,   386,    91,   348,   235,   377,   385,   443,
    1089,  1146,   610,   496,   386,  1009,  -526,  1150,  1194,  1195,
     834,   394,  -524,   386,  1230,  -526,  1265,   503,   335,  -526,
     509,   386,    87,  1188,   338,  -524,  -309,   553,  -526,   973,
    1043,   386,   754,   755,  1153,   506,  1185,   556,  -524,   386,
     553,  -526,   335,   386,   509,  -341,   598,  -526,   309,   609,
     618,   728,  -337,   648,  -526,  1199,   946,   444,   386,  -526,
    -526,   445,   386,   704,   544,   901,  1200,   655,   311,   338,
     599,    93,   313,  -526,   397,   -71,  -337,   767,   -70,   447,
     298,    24,   335,  1072,   509,   429,  -524,   453,   635,   229,
     423,  -524,  1019,   338,   -71,   603,   314,   -70,   819,   315,
     392,    62,   553,   521,   344,   348,   521,  1218,   777,  1089,
     447,   316,   398,   -71,  1252,   451,   -70,   452,   453,   580,
     581,   604,   456,  1246,   820,  1248,  -526,   905,  -277,   463,
     319,   506,    60,   338,   906,   781,   430,   469,   424,   299,
     912,   425,   399,   -71,    69,  1231,   -70,   952,   431,  -276,
    1115,  1222,   506,   426,   320,   646,  1074,   600,   300,  1044,
    1257,   605,  1240,   488,   231,   489,   913,   432,   419,    89,
     597,   237,   427,   953,   786,   301,  -285,  1151,   975,   647,
    1242,   173,   829,  1005,   628,   819,   630,  1258,   420,  1259,
    1260,   730,  1261,  1262,   819,  -427,   235,  1082,   421,   506,
    1004,   305,   641,   506,   200,   173,   200,   173,   823,  1006,
     595,  1007,   874,   335,   335,   266,  -667,   507,  -667,   335,
    1018,   579,   335,   335,   335,   335,   509,   509,   711,   712,
     713,   715,   717,   718,  1020,   719,   720,   721,   722,   723,
    1113,   731,   732,   733,   734,   735,   736,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   173,   904,
    1045,  -275,   173,   173,   338,   338,  1177,   777,  1207,  1208,
     338,   786,   282,   338,   338,   338,   338,   757,   759,   335,
     490,   509,  1126,   708,   491,   776,  1046,   173,   873,   779,
     749,   750,   173,   782,   786,   783,   751,  1110,  1090,   752,
     753,   709,   703,   235,  -272,   790,   792,   786,  1127,   788,
     320,   796,   798,   556,   876,  -609,   880,   802,   724,  -608,
    1192,  -279,   325,   335,   809,   509,   327,   811,  -283,   556,
     338,   710,   877,  1217,   881,   725,  1074,   335,  1074,   335,
     822,  -609,   825,   708,   556,  -608,   296,   970,   726,   830,
     831,   443,   566,   567,  1075,  1074,  1183,   335,  1074,   509,
     330,  1190,  1191,   345,   967,   330,   986,   989,   491,  -280,
     991,   993,   306,  1286,   338,   447,  1288,   727,  -274,  1245,
     451,  1247,  -596,   453,  -666,   782,  -666,   456,   338,  -666,
     338,  -666,  1254,  -278,  -742,   858,   782,   861,  -742,   863,
     865,   173,  -743,   866,   867,   235,  -743,   160,   338,   444,
    -663,   868,  -663,   445,   373,   309,   373,  -744,   728,   898,
     898,  -744,  -284,   907,   729,  -739,  1036,  1038,   597,  -739,
     346,   160,   909,   160,  1266,   311,  -286,   611,    93,   313,
    -273,   777,   330,  -665,  -328,  -665,  -281,   358,  -328,  -328,
    1294,  1295,  1296,  1297,  1298,  1299,  -664,  -328,  -664,  -328,
    -328,   396,   447,   314,   173,  -328,   315,   451,   380,   173,
     453,    95,  -328,    42,   456,  -328,  -348,   417,   316,  1196,
     408,   930,  1266,   931,   160,   852,   923,   854,   160,   160,
     409,  -593,   438,   928,   497,  -328,  -348,   319,  -328,    58,
    -328,   335,  -328,   509,  -328,  -328,  -348,  -328,  -592,   508,
    -328,   439,  -328,   160,  -597,  -598,  -595,  -594,   160,   498,
     335,   500,   335,   386,   509,   505,   516,   514,   572,   398,
     543,  -328,   637,   562,  -328,  1081,   309,  -328,   563,   584,
     573,   578,   587,   594,   615,   620,   173,   790,   942,   796,
     945,   809,   338,   948,   861,  1101,   311,   621,   631,   335,
     313,  1088,   645,  -328,  1091,   173,   642,   968,   969,   643,
     653,   338,   658,   338,   974,   173,   976,   706,   453,   748,
     776,   765,   983,   784,   314,   785,   786,   315,  -328,    62,
     787,   994,   995,   793,  -328,   804,   805,   972,   807,   316,
     810,   813,   812,   823,   832,   837,   540,   846,   847,   394,
     338,   856,   705,   540,   506,   724,  1048,   730,   319,   862,
     902,   919,  -144,   921,   330,  -166,  -173,   160,  1023,   954,
     932,  -172,   955,  -171,  -168,  -175,  1011,   956,  -176,  -170,
    -174,  -145,   335,   924,   509,  1087,  -169,   202,  -177,   320,
    -146,   996,   925,   933,   939,   998,  1141,   957,   320,   271,
     273,   934,  1016,   628,   958,   935,   938,  1069,  1029,  1071,
     898,   898,   936,   359,   959,   360,   937,   949,   362,   363,
    1024,  1074,   960,  1077,  1078,   335,  1083,   509,  1103,  1105,
     160,  1228,  1229,   338,  1102,   160,  1108,   173,  1111,   961,
    1142,  1143,  1147,   173,  1148,  1159,  1164,  1184,  1168,   912,
    1226,   962,  1206,  1234,   173,   728,   173,  1251,  1281,  1282,
    1287,  1289,   963,  1256,  1312,  1313,   387,  1104,   964,   869,
    1107,  1176,  1088,   178,   375,    93,   338,   541,  1047,   776,
    1193,   986,   989,  1036,  1038,   232,   619,   355,  1144,   591,
    1158,   827,  1092,   715,   757,   835,  1100,   178,   625,   178,
    1097,   570,  1291,  1197,  1123,  1300,  1125,   833,   639,  1293,
    1080,  1130,   160,   929,  1133,   392,   402,   826,   392,  1008,
       0,   335,     0,   509,     0,   173,  1139,     0,     0,   173,
       0,   160,     0,     0,   181,     0,     0,     0,     0,     0,
       0,   160,     0,   330,   173,     0,     0,  1154,     0,     0,
     178,     0,     0,   235,   178,   178,  1087,     0,   181,  1157,
     181,     0,  1163,     0,  1167,     0,     0,  1169,  1171,  1173,
    1175,     0,   338,     0,     0,     0,     0,     0,     0,   178,
       0,  1088,     0,     0,   178,     0,     0,     0,     0,     0,
     540,   540,     0,   898,   540,   540,     0,     0,     0,     0,
       0,  1186,     0,  1187,     0,     0,   540,     0,   540,     0,
       0,   181,     0,     0,     0,   181,   181,     0,     0,     0,
     392,     0,  1204,   335,   335,   509,   509,     0,     0,     0,
       0,     0,  1123,  1125,     0,  1130,  1133,     0,  1163,  1167,
     181,   443,     0,     0,     0,   181,     0,     0,  1219,  1220,
       0,  1221,     0,   776,     0,  1223,  1224,   382,     0,  1225,
       0,    23,    24,   160,     0,  1087,     0,     0,     0,   160,
     383,     0,    31,   384,   338,   338,     0,     0,    37,     0,
     160,     0,   160,     0,     0,    42,  1235,     0,  1236,     0,
       0,     0,  1238,   178,   965,     0,     0,     0,     0,   444,
       0,     0,     0,   445,     0,  1244,   898,   898,   898,   898,
       0,    58,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   385,     0,    69,   173,     0,     0,   173,
       0,     0,     0,     0,     0,     0,  1219,  1270,  1271,  1223,
    1272,  1273,  1274,  1275,    85,     0,     0,    87,     0,     0,
      89,   160,   447,   448,   181,   160,   178,   451,     0,   452,
     453,   178,     0,     0,   456,     0,     0,     0,     0,     0,
     160,   463,     0,     0,     0,   173,  1290,   467,   468,   469,
       0,   173,  1292,     0,     0,     0,     0,     0,     0,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   292,  1308,  1309,  1310,  1311,  1301,   714,   716,
       0,  1314,  1315,   443,     0,     0,     0,   181,     0,     0,
       0,     0,   181,     0,     0,     0,   341,     0,     0,  1308,
    1309,  1310,  1311,  1314,  1315,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   444,     0,     0,
       0,   445,     0,     0,   756,   758,   182,   178,     0,     0,
       0,     0,     0,     0,     0,     0,   778,   178,     0,     0,
       0,   444,     0,     0,     0,   445,     0,     0,     0,     0,
     182,     0,   182,   791,     0,  1116,  1117,     0,     0,   797,
       0,     0,     0,     0,   801,     0,   173,     0,   173,   181,
     447,   448,     0,   173,   450,   451,   173,   452,   453,     0,
       0,     0,   456,     0,     0,   173,     0,   173,   181,   463,
     173,     0,     0,     0,   447,   467,   468,   469,   181,   451,
       0,   452,   453,   182,     0,     0,   456,   182,   182,     0,
       0,     0,     0,   463,   173,     0,     0,     0,     0,   467,
     468,   469,   160,     0,   173,   160,   173,     0,     0,     0,
       0,     0,   182,   173,     0,     0,     0,   182,     0,     0,
       0,     0,   857,     0,   443,     0,     0,     0,     0,     0,
       0,   271,   375,     0,     0,     0,     0,     0,     0,   178,
       0,     0,     0,     0,     0,   178,     0,     0,     0,     0,
       0,   160,     0,     0,     0,     0,   178,   160,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   517,     0,   522,   526,   528,   531,     0,     0,
       0,     0,   444,     0,     0,     0,   445,     0,     0,     0,
     173,     0,     0,     0,     0,     0,   558,   173,   560,     0,
     181,     0,     0,     0,     0,   564,   181,     0,     0,     0,
     173,     0,     0,     0,     0,     0,     0,   181,     0,   181,
       0,     0,     0,     0,   173,     0,   182,   178,     0,     0,
       0,   178,     0,   173,     0,   447,   448,   173,   449,   450,
     451,     0,   452,   453,   187,   586,   178,   456,     0,     0,
       0,     0,     0,   462,   463,     0,     0,   466,   592,   593,
     467,   468,   469,     0,     0,     0,     0,     0,   187,     0,
     187,     0,   160,     0,   160,   941,     0,   944,     0,   160,
     947,     0,   160,     0,     0,     0,     0,     0,   181,   182,
       0,   160,   181,   160,   182,   173,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,     0,   173,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     160,   187,     0,     0,     0,   187,   187,     0,     0,     0,
     160,     0,   160,   173,     0,     0,     0,     0,     0,   160,
       0,     0,     0,     0,     0,   173,   173,   173,   173,     0,
     187,     0,     0,   173,   173,   187,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,   442,     0,     0,
       0,   182,     0,     0,     0,     0,     0,     0,     0,   443,
     524,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     182,     0,     0,     0,     0,   525,     0,     0,     0,     0,
     182,     0,     0,     0,     0,     0,   780,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,     0,     0,     0,
       0,     0,     0,   160,     0,     0,   794,     0,   178,     0,
     799,   178,   800,     0,     0,   803,   160,   444,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,   160,
       0,     0,     0,   160,   187,     0,     0,     0,   521,     0,
       0,     0,     0,   446,     0,     0,     0,   178,     0,     0,
     714,   756,     0,   178,     0,     0,     0,     0,     0,   181,
     447,   448,   181,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,     0,   467,   468,   469,     0,   386,
       0,   160,   182,     0,     0,     0,   470,   187,   182,     0,
       0,     0,   187,     0,     0,   160,   160,     0,   181,   182,
       0,   182,     0,     0,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1170,  1172,  1174,     0,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   160,   160,   160,   160,     0,     0,     0,     0,   160,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,     0,   189,     0,   178,     0,
     178,     0,     0,     0,     0,   178,     0,     0,   178,   187,
     182,     0,     0,     0,   182,     0,     0,   178,     0,   178,
       0,     0,   178,     0,     0,     0,     0,     0,   187,   182,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,   178,   189,   190,     0,
       0,   189,   189,     0,     0,     0,   178,     0,   178,   181,
       0,   181,     0,     0,     0,   178,   181,     0,     0,   181,
       0,     0,   190,     0,   190,     0,   189,     0,   181,     0,
     181,   189,   443,   181,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   978,   980,     0,     0,     0,     0,
     985,   988,     0,     0,   990,   992,     0,   181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,     0,   181,
       0,     0,     0,     0,     0,   190,   181,     0,     0,   190,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,     0,   178,     0,   445,     0,     0,     0,     0,   178,
       0,     0,     0,     0,   190,     0,     0,     0,     0,   190,
     187,     0,   178,     0,     0,     0,   187,     0,     0,     0,
     526,     0,     0,     0,     0,     0,   178,   187,     0,   187,
       0,     0,     0,     0,     0,   178,     0,     0,     0,   178,
     189,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,     0,   181,     0,   456,     0,     0,     0,     0,
     181,   182,   463,     0,   182,     0,     0,     0,   467,   468,
     469,     0,     0,   181,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   178,   187,     0,
     181,     0,   187,   189,     0,     0,     0,     0,   189,     0,
     182,   178,   178,     0,     0,     0,   182,   187,   190,     0,
       0,  1118,  1119,     0,     0,     0,     0,  1120,     0,     0,
       0,     0,     0,     0,     0,   178,     0,     0,     0,  1131,
       0,     0,  1134,     0,  1135,     0,  1136,   178,   178,   178,
     178,     0,     0,     0,     0,   178,   178,     0,   181,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,   181,   382,     0,     0,     0,    23,    24,
       0,   190,     0,     0,     0,   189,   190,   383,     0,    31,
     384,     0,     0,     0,     0,    37,   181,     0,     0,     0,
       0,     0,    42,     0,   189,     0,     0,     0,   181,   181,
     181,   181,     0,     0,   189,     0,   181,   181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,    58,     0,
      60,   182,   380,   182,  1084,     0,     0,  1085,   182,     0,
     385,   182,    69,     0,     0,     0,     0,     0,     0,     0,
     182,   146,   182,   146,   443,   182,     0,     0,     0,     0,
       0,    85,     0,   190,    87,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
       0,     0,   190,     0,     0,     0,     0,     0,     0,   182,
       0,   182,   190,    95,     0,     0,     0,     0,   182,   187,
       0,     0,   187,     0,   146,     0,     0,     0,     0,     0,
    1233,     0,   444,     0,     0,     0,   445,     0,   106,     0,
       0,     0,     0,   978,   980,   985,   988,     0,     0,     0,
       0,     0,     0,   146,     0,     0,   189,     0,   146,     0,
       0,     0,   189,     0,     0,     0,     0,     0,   187,     0,
       0,     0,     0,   189,   187,   189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,   182,     0,   456,     0,     0,
     114,     0,   182,   462,   463,     0,     0,   466,     0,     0,
     467,   468,   469,     0,     0,   182,     0,     0,     0,     0,
       0,   470,     0,     0,   233,     0,   236,     0,     0,   182,
       0,     0,     0,     0,   190,     0,     0,     0,   182,     0,
     190,     0,   182,     0,   189,     0,     0,     0,   189,     0,
     441,   190,     0,   190,     0,     0,     0,   442,     0,     0,
       0,     0,     0,   189,     0,     0,     0,   146,     0,   443,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
       0,   187,     0,     0,     0,     0,   187,     0,     0,   187,
     182,     0,     0,     0,     0,     0,   114,     0,   187,     0,
     187,   381,     0,   187,   182,   182,     0,     0,     0,     0,
       0,     0,   190,     0,     0,     0,   190,   444,     0,     0,
     146,   445,     0,     0,     0,   146,     0,   187,   182,     0,
     537,   190,     0,     0,     0,     0,     0,   187,     0,   187,
     182,   182,   182,   182,     0,     0,   187,     0,   182,   182,
       0,     0,     0,   446,   538,   472,   473,   474,   475,   476,
       0,     0,   479,   480,   481,   482,     0,   484,   485,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,     0,   467,   468,   469,     0,   386,
       0,     0,   146,     0,     0,     0,   470,     0,     0,     0,
     499,     0,   264,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,   187,     0,     0,   283,   284,   285,     0,
     187,   146,     0,     0,     0,   189,     0,     0,   189,     0,
       0,     0,     0,   187,     0,     0,   382,     0,     0,     0,
      23,    24,     0,     0,     0,     0,     0,   187,     0,   383,
       0,    31,   384,     0,   382,     0,   187,    37,    23,    24,
     187,     0,     0,   546,    42,     0,     0,   383,   557,    31,
     384,     0,     0,     0,   189,    37,     0,     0,     0,     0,
     189,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      58,     0,    60,     0,    62,     0,  1084,     0,     0,  1085,
       0,     0,   385,   190,    69,     0,   190,     0,    58,     0,
      60,     0,    62,     0,  1084,     0,     0,  1085,   187,     0,
     385,     0,    69,    85,     0,     0,    87,     0,   411,    89,
     414,     0,   187,   187,     0,     0,     0,     0,     0,     0,
       0,    85,   434,   146,    87,   114,     0,    89,     0,   146,
       0,     0,   190,     0,     0,    95,   187,     0,   190,     0,
     146,     0,   146,     0,   114,     0,     0,     0,   187,   187,
     187,   187,     0,    95,   114,     0,   187,   187,   495,     0,
     106,     0,     0,     0,     0,     0,  1086,     0,     0,     0,
       0,     0,     0,     0,     0,   189,     0,   189,   106,     0,
       0,     0,   189,     0,  1189,   189,     0,     0,     0,     0,
       0,     0,     0,     0,   189,     0,   189,     0,     0,   189,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     0,     0,   146,     0,     0,     0,   515,
       0,     0,     0,   189,     0,     0,     0,   533,   534,     0,
     146,     0,     0,   189,     0,   189,     0,     0,   549,     0,
       0,     0,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   190,     0,     0,     0,     0,
     190,     0,     0,   190,     0,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   190,     0,   557,   190,   576,     0,
       0,     0,   557,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   806,     0,     0,     0,     0,     0,     0,
       0,   190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   190,     0,   190,     0,     0,     0,     0,     0,   189,
     190,     0,     0,     0,     0,     0,   189,     0,     0,     0,
       0,     0,     0,     0,     0,   264,     0,     0,     0,   189,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   291,   189,     0,     0,     0,     0,     0,     0,
     640,     0,   189,     0,   855,   414,   189,     0,   860,     0,
       0,     0,     0,     0,     0,     0,   291,     0,     0,     0,
       0,     0,     0,   114,     0,   700,   351,   353,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   190,     0,     0,
       0,     0,     0,   412,   190,   238,     0,     0,     0,     0,
       0,     0,   146,     0,     0,   146,     0,   190,     0,   239,
     240,   391,   241,     0,   189,     0,     0,   242,     0,     0,
       0,   190,     0,     0,     0,   243,     0,     0,   189,   189,
     190,   244,     0,     0,   190,     0,     0,   245,     0,   768,
       0,   246,     0,     0,   247,     0,     0,     0,     0,     0,
       0,   146,   189,     0,   248,     0,     0,   146,     0,     0,
       0,   249,   250,     0,   189,   189,   189,   189,     0,   251,
       0,     0,   189,   189,     0,     0,     0,     0,     0,   252,
       0,     0,     0,     0,     0,     0,   815,     0,   253,   254,
     549,   255,   190,   256,     0,   257,     0,     0,   258,     0,
       0,     0,   259,   828,     0,   260,   190,   190,   261,     0,
       0,     0,   576,     0,     0,   262,     0,   549,     0,     0,
     501,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,     0,     0,    95,     0,     0,     0,     0,     0,     0,
       0,     0,   190,   190,   190,   190,     0,     0,     0,     0,
     190,   190,     0,     0,     0,   997,     0,     0,  1000,     0,
       0,     0,   291,   291,   291,   291,   291,   291,     0,     0,
     536,   539,   146,   885,   146,     0,     0,   545,     0,   146,
       0,     0,   146,     0,     0,   238,   291,     0,   291,     0,
       0,   146,     0,   146,     0,   291,   146,     0,     0,   239,
     240,     0,   241,     0,  1034,     0,     0,   242,     0,     0,
    1039,     0,     0,     0,     0,   243,     0,     0,     0,     0,
     146,   244,     0,     0,     0,     0,     0,   245,     0,     0,
     146,   246,   146,     0,   247,   291,     0,     0,     0,   146,
       0,     0,     0,     0,   248,     0,     0,     0,   291,   291,
     434,   249,   250,     0,     0,     0,     0,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,     0,     0,     0,     0,     0,   253,   254,
       0,   255,     0,   256,     0,   257,     0,     0,   258,     0,
       0,     0,   259,   547,     0,   260,     0,     0,   261,     0,
       0,     0,     0,     0,     0,   262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,     0,     0,   146,     0,   557,     0,   557,     0,     0,
       0,     0,   557,     0,     0,   557,   146,     0,     0,     0,
       0,     0,     0,     0,  1137,     0,  1138,     0,     0,  1140,
     146,     0,     0,     0,  1003,   548,     0,     0,     0,   146,
       0,   549,     0,   146,     0,     0,     0,     0,     0,     0,
       0,  1012,     0,  1156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1162,     0,  1166,     0,     0,     0,  1032,
       0,     0,   860,     0,     0,     0,   291,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,     0,     0,     0,     0,   291,     0,     0,     0,
     291,   146,   291,     0,     0,   291,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,   146,     0,     0,     0,
       0,   486,     0,     0,  -663,   434,  -663,     0,   238,     0,
       0,     0,   414,     0,     0,     0,     0,     0,     0,   146,
       0,     0,   239,   240,     0,   241,     0,   700,     0,     0,
     242,   146,   146,   146,   146,     0,     0,     0,   243,   146,
     146,     0,     0,     0,   244,     0,     0,     0,     0,  1227,
     245,     0,     0,     0,   246,     0,     0,   247,     0,     0,
       0,     0,     0,  1232,     0,     0,     0,   248,     0,     0,
       0,     0,  1237,     0,   249,   250,  1239,     0,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   252,     0,     0,     0,     0,     0,     0,     0,
       0,   253,   254,     0,   255,     0,   256,   815,   257,     0,
       0,   258,     0,     0,     0,   259,   574,     0,   260,     0,
       0,   261,     0,     0,     0,     0,     0,     0,   262,     0,
       0,     0,  1032,     0,  1280,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1162,  1166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   414,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   915,
       0,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,     0,     0,    16,    17,     0,    18,     0,
     201,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,   310,     0,   202,   291,   291,     0,    33,   203,   204,
     291,   291,   205,    39,   291,   291,     0,   312,     0,     0,
      43,     0,   441,   206,  1002,     0,    47,    48,     0,   442,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,   443,     0,     0,     0,    59,   632,    61,     0,    63,
       0,     0,     0,     0,    66,    67,   207,     0,     0,     0,
    1031,     0,     0,     0,    74,   317,    76,    77,    78,   318,
       0,    80,     0,     0,    82,     0,     0,     0,    86,   291,
     291,    88,   633,     0,    90,     0,     0,     0,     0,     0,
       0,    93,     0,    94,     0,     0,     0,     0,     0,   444,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
       0,   103,   104,   105,     0,   446,     0,   107,     0,   209,
       0,   109,     0,   210,     0,     0,   111,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,   634,   467,   468,   469,
       0,   291,   291,     0,     0,     0,     0,   291,   470,   539,
       0,     0,     0,     0,     0,     0,   539,     0,     0,   291,
       0,     0,   291,     0,   291,     0,   291,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1160,     0,    -2,     4,
       0,     5,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    13,    14,    15,    16,    17,     0,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,     0,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   -69,     0,    40,    41,    42,     0,
      43,  -348,     0,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,   -69,    53,    54,     0,    55,    56,    57,
       0,  -348,     0,     0,    58,    59,    60,    61,    62,    63,
      64,  -348,   -69,    65,    66,    67,    68,     0,    69,    70,
      71,     0,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,    82,    83,    84,    85,    86,     0,
      87,    88,   -69,    89,    90,     0,     0,    91,     0,    92,
     291,    93,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   291,   291,   291,   291,     0,     0,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
       0,   103,   104,   105,   106,     0,     0,   107,     0,   108,
       0,   109,     0,   110,     0,     0,   111,     0,     0,     0,
       0,     0,     0,   539,   539,     0,     0,   539,   539,     0,
       0,     0,     0,     0,     0,     0,     0,  1283,     0,   539,
       4,   539,     5,     6,     7,     8,     9,    10,    11,    12,
       0,  -694,     0,    13,    14,    15,    16,    17,  -694,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    -694,    28,    29,  -694,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,     0,
      63,    64,  -348,   -69,    65,    66,    67,    68,  -694,    69,
      70,    71,  -694,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,    93,     0,  -694,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,  -694,    98,  -694,  -694,  -694,  -694,  -694,  -694,
    -694,     0,  -694,  -694,  -694,  -694,  -694,  -694,  -694,  -694,
    -694,  -694,  -694,  -694,   105,   106,  -694,  -694,  -694,     0,
     108,  -694,   109,     0,   110,     0,   364,  -694,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
      14,    15,    16,    17,     0,    18,     0,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,    28,    29,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,   -69,     0,    40,    41,    42,     0,    43,  -348,     0,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
     -69,    53,    54,     0,    55,    56,    57,     0,  -348,     0,
       0,    58,    59,    60,    61,    62,    63,    64,  -348,   -69,
      65,    66,    67,    68,     0,    69,    70,    71,     0,    72,
      73,    74,    75,    76,    77,    78,    79,     0,    80,    81,
       0,    82,    83,    84,    85,    86,     0,    87,    88,   -69,
      89,    90,     0,     0,    91,     0,    92,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,   106,     0,     0,   107,     0,   108,   365,   109,     0,
     110,     0,     4,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    14,    15,    16,    17,
       0,    18,     0,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,    28,    29,     0,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   -69,     0,    40,
      41,    42,     0,    43,  -348,     0,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,   -69,    53,    54,     0,
      55,    56,    57,     0,  -348,     0,     0,    58,    59,    60,
      61,    62,    63,    64,  -348,   -69,    65,    66,    67,    68,
       0,    69,    70,    71,     0,    72,    73,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,    82,    83,    84,
      85,    86,     0,    87,    88,   -69,    89,    90,     0,     0,
      91,     0,    92,     0,    93,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,     0,     0,
     107,     0,   108,   596,   109,     0,   110,     0,   623,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -69,     0,    40,    41,    42,     0,    43,
    -348,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -348,     0,     0,    58,    59,    60,    61,    62,    63,    64,
    -348,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,   106,     0,     0,   107,     0,   108,   624,
     109,     0,   110,     0,     4,   111,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,    14,    15,
      16,    17,     0,    18,     0,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,    28,    29,     0,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,   -69,
       0,    40,    41,    42,     0,    43,  -348,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,   -69,    53,
      54,     0,    55,    56,    57,     0,  -348,     0,     0,    58,
      59,    60,    61,    62,    63,    64,  -348,   -69,    65,    66,
      67,    68,     0,    69,    70,    71,     0,    72,    73,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,    82,
      83,    84,    85,    86,     0,    87,    88,   -69,    89,    90,
       0,     0,    91,     0,    92,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,   106,
       0,     0,   107,     0,   108,   875,   109,     0,   110,     0,
       4,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,   380,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,   106,     0,     0,   107,     0,
     108,     0,   109,     0,   110,     0,     4,   111,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
      14,    15,    16,    17,     0,    18,     0,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,    28,    29,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,   -69,     0,    40,    41,    42,     0,    43,  -348,     0,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
     -69,    53,    54,     0,    55,    56,    57,     0,  -348,     0,
       0,    58,    59,    60,    61,    62,    63,    64,  -348,   -69,
      65,    66,    67,    68,     0,    69,    70,    71,     0,    72,
      73,    74,    75,    76,    77,    78,    79,     0,    80,    81,
       0,    82,    83,    84,    85,    86,     0,    87,    88,   -69,
      89,    90,     0,     0,    91,     0,    92,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,   106,     0,     0,   107,     0,   108,     0,   109,     0,
     110,     0,     4,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    14,    15,    16,    17,
       0,    18,     0,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,    28,    29,     0,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   -69,     0,    40,
      41,    42,     0,    43,  -348,     0,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,   -69,    53,    54,     0,
      55,    56,    57,     0,  -348,     0,     0,    58,    59,    60,
      61,     0,    63,    64,  -348,   -69,    65,    66,    67,    68,
       0,    69,    70,    71,     0,    72,    73,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,    82,    83,    84,
      85,    86,     0,    87,    88,   -69,    89,    90,     0,     0,
      91,     0,    92,     0,    93,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,     0,     0,
     107,     0,   108,     0,   109,     0,   110,     0,     4,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,   789,    39,   -69,     0,    40,    41,    42,     0,    43,
    -348,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -348,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -348,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,   106,     0,     0,   107,     0,   108,     0,
     109,     0,   110,     0,     4,   111,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,    14,    15,
      16,    17,     0,    18,     0,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,    28,    29,     0,    30,     0,
      31,    32,    33,    34,    35,    36,    37,   795,    39,   -69,
       0,    40,    41,    42,     0,    43,  -348,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,   -69,    53,
      54,     0,    55,    56,    57,     0,  -348,     0,     0,    58,
      59,    60,    61,     0,    63,    64,  -348,   -69,    65,    66,
      67,    68,     0,    69,    70,    71,     0,    72,    73,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,    82,
      83,    84,    85,    86,     0,    87,    88,   -69,    89,    90,
       0,     0,    91,     0,    92,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,   106,
       0,     0,   107,     0,   108,     0,   109,     0,   110,     0,
       4,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,  1122,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,     0,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,   106,     0,     0,   107,     0,
     108,     0,   109,     0,   110,     0,     4,   111,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
      14,    15,    16,    17,     0,    18,     0,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,    28,    29,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,  1124,
      39,   -69,     0,    40,    41,    42,     0,    43,  -348,     0,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
     -69,    53,    54,     0,    55,    56,    57,     0,  -348,     0,
       0,    58,    59,    60,    61,     0,    63,    64,  -348,   -69,
      65,    66,    67,    68,     0,    69,    70,    71,     0,    72,
      73,    74,    75,    76,    77,    78,    79,     0,    80,    81,
       0,    82,    83,    84,    85,    86,     0,    87,    88,   -69,
      89,    90,     0,     0,    91,     0,    92,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,   106,     0,     0,   107,     0,   108,     0,   109,     0,
     110,     0,     4,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,    14,    15,    16,    17,
       0,    18,     0,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,    28,    29,     0,    30,     0,    31,    32,
      33,    34,    35,    36,    37,  1129,    39,   -69,     0,    40,
      41,    42,     0,    43,  -348,     0,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,   -69,    53,    54,     0,
      55,    56,    57,     0,  -348,     0,     0,    58,    59,    60,
      61,     0,    63,    64,  -348,   -69,    65,    66,    67,    68,
       0,    69,    70,    71,     0,    72,    73,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,    82,    83,    84,
      85,    86,     0,    87,    88,   -69,    89,    90,     0,     0,
      91,     0,    92,     0,    93,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,     0,     0,
     107,     0,   108,     0,   109,     0,   110,     0,     4,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,    15,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,  1132,    39,   -69,     0,    40,    41,    42,     0,    43,
    -348,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -69,    53,    54,     0,    55,    56,    57,     0,
    -348,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -348,   -69,    65,    66,    67,    68,     0,    69,    70,    71,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    87,
      88,   -69,    89,    90,     0,     0,    91,     0,    92,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,   106,     0,     0,   107,     0,   108,     0,
     109,     0,   110,     0,     4,   111,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,    14,    15,
      16,    17,     0,    18,     0,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,  1155,    29,     0,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,   -69,
       0,    40,    41,    42,     0,    43,  -348,     0,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,   -69,    53,
      54,     0,    55,    56,    57,     0,  -348,     0,     0,    58,
      59,    60,    61,     0,    63,    64,  -348,   -69,    65,    66,
      67,    68,     0,    69,    70,    71,     0,    72,    73,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,    82,
      83,    84,    85,    86,     0,    87,    88,   -69,    89,    90,
       0,     0,    91,     0,    92,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,   106,
       0,     0,   107,     0,   108,     0,   109,     0,   110,     0,
       4,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,    14,    15,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,  1161,    39,   -69,     0,    40,    41,    42,
       0,    43,  -348,     0,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,   -69,    53,    54,     0,    55,    56,
      57,     0,  -348,     0,     0,    58,    59,    60,    61,     0,
      63,    64,  -348,   -69,    65,    66,    67,    68,     0,    69,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,    88,   -69,    89,    90,     0,     0,    91,     0,
      92,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,   106,     0,     0,   107,     0,
     108,     0,   109,     0,   110,     0,     4,   111,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
      14,    15,    16,    17,     0,    18,     0,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,    28,    29,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,  1165,
      39,   -69,     0,    40,    41,    42,     0,    43,  -348,     0,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
     -69,    53,    54,     0,    55,    56,    57,     0,  -348,     0,
       0,    58,    59,    60,    61,     0,    63,    64,  -348,   -69,
      65,    66,    67,    68,     0,    69,    70,    71,     0,    72,
      73,    74,    75,    76,    77,    78,    79,     0,    80,    81,
       0,    82,    83,    84,    85,    86,     0,    87,    88,   -69,
      89,    90,     0,     0,    91,     0,    92,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,   106,     0,     0,   107,     0,   108,     0,   109,     0,
     110,     0,     0,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,   661,     0,    13,     0,     0,    16,    17,
     663,    18,     0,   201,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   202,     0,     0,     0,
      33,   203,   204,     0,     0,   205,    39,     0,     0,     0,
      41,     0,     0,    43,     0,   668,   206,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,    67,   207,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,   208,     0,    80,     0,     0,    82,     0,     0,
       0,    86,     0,     0,    88,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    93,     0,    94,   538,   472,   473,
     474,   475,   476,     0,     0,   479,   480,   481,   482,     0,
     484,   485,     0,   886,   887,   888,   889,   890,   682,     0,
     683,     0,   101,     0,   684,   685,   686,   687,   688,   689,
     690,   891,   692,   693,   103,   892,   105,     0,   695,   696,
     893,   698,   209,     0,   109,     0,   210,     0,     0,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,    14,     0,    16,    17,     0,    18,     0,   201,
      20,    21,    22,     0,     0,     0,     0,    27,     0,    28,
      29,     0,   202,     0,     0,     0,    33,    34,    35,    36,
       0,    38,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   206,     0,     0,    47,    48,     0,    49,    50,
      51,    52,     0,    53,    54,     0,    55,    56,    57,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   207,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,    91,     0,     0,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,     0,     0,     0,   107,     0,   108,     0,
     109,     0,   110,     0,     0,   111,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,   201,     0,     0,    22,   401,
      24,     0,     0,     0,     0,     0,    29,     0,   202,     0,
       0,     0,    33,   203,   204,     0,     0,   205,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   206,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,    60,    61,     0,    63,     0,     0,     0,     0,    66,
      67,   207,     0,    69,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   208,     0,    80,     0,     0,    82,
       0,     0,     0,    86,     0,     0,    88,     0,    89,    90,
       0,     0,     0,     0,     0,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,     0,
       0,     0,   107,     0,   209,     0,   109,     0,   210,     0,
       0,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,   332,   333,     0,    86,
     369,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,   370,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,     0,     0,     0,   107,     0,
     209,     0,   109,     0,   210,     0,     0,   111,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,     0,    16,    17,     0,    18,     0,   201,     0,     0,
      22,     0,   769,     0,     0,     0,     0,     0,    29,     0,
     202,     0,     0,     0,    33,   203,   204,     0,     0,   205,
      39,     0,   770,     0,    41,     0,     0,    43,     0,     0,
     206,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,    67,   207,     0,   771,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,   208,     0,    80,     0,
       0,    82,     0,     0,     0,    86,     0,     0,    88,     0,
     772,    90,     0,     0,     0,     0,     0,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,     0,     0,     0,   107,     0,   209,     0,   109,     0,
     210,     0,     0,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,    16,    17,
       0,    18,     0,   201,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   202,     0,     0,     0,
      33,   203,   204,     0,     0,   205,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,   206,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,    67,   207,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,   208,     0,    80,     0,     0,    82,   332,   333,
       0,    86,   369,     0,    88,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    93,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,     0,     0,     0,
     107,     0,   209,     0,   109,   851,   210,     0,     0,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   206,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   207,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   208,     0,
      80,     0,     0,    82,   332,   333,     0,    86,   369,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,     0,     0,     0,   107,     0,   209,     0,
     109,   853,   210,     0,     0,   111,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,   201,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   202,     0,
       0,     0,    33,   203,   204,     0,     0,   205,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   206,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
      67,   207,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   208,     0,    80,     0,     0,    82,
     332,   333,     0,    86,     0,     0,    88,     0,     0,    90,
       0,     0,     0,     0,     0,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,   334,
       0,     0,   107,     0,   209,     0,   109,     0,   210,     0,
       0,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,   332,   333,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,     0,     0,     0,   107,     0,
     209,     0,   109,   870,   210,     0,     0,   111,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,     0,    16,    17,     0,    18,     0,   201,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     202,     0,     0,     0,    33,   203,   204,     0,     0,   205,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     206,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,  1010,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,    67,   207,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,   208,     0,    80,     0,
       0,    82,   332,   333,     0,    86,     0,     0,    88,     0,
       0,    90,     0,     0,     0,     0,     0,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,     0,     0,     0,   107,     0,   209,     0,   109,     0,
     210,     0,     0,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,    16,    17,
       0,    18,     0,   201,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   202,     0,     0,     0,
      33,   203,   204,     0,     0,   205,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,   206,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,   267,
      61,     0,    63,     0,     0,     0,     0,    66,    67,   207,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,   208,     0,    80,     0,     0,    82,     0,     0,
       0,    86,     0,     0,    88,     0,     0,    90,     0,     0,
       0,     0,     0,   268,    93,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,     0,     0,     0,
     107,     0,   209,     0,   109,     0,   210,     0,     0,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,   275,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   206,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   207,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   208,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,   276,    90,     0,     0,     0,     0,     0,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,     0,     0,     0,   107,     0,   209,     0,
     109,     0,   210,     0,     0,   111,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,   201,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   202,     0,
       0,     0,    33,   203,   204,     0,     0,   205,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   206,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
      67,   207,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   208,     0,    80,     0,     0,    82,
     332,   333,     0,    86,     0,     0,    88,     0,     0,    90,
       0,     0,     0,     0,     0,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,     0,
       0,     0,   107,     0,   209,     0,   109,     0,   210,     0,
       0,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,   268,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,     0,     0,     0,   107,     0,
     209,     0,   109,     0,   210,   374,     0,   111,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,     0,    16,    17,     0,    18,     0,   201,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     202,     0,     0,     0,    33,   203,   204,     0,     0,   205,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     206,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,    67,   207,  -738,     0,     0,     0,  -738,     0,
       0,    74,    75,    76,    77,    78,   208,     0,    80,     0,
       0,    82,     0,     0,     0,    86,     0,     0,    88,     0,
       0,    90,     0,     0,     0,     0,     0,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,     0,     0,     0,   107,     0,   209,     0,   109,     0,
     210,     0,     0,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,    16,    17,
       0,    18,     0,   201,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   202,     0,     0,     0,
      33,   203,   204,     0,     0,   205,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,   206,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,    67,   207,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,   208,     0,    80,     0,     0,    82,     0,     0,
       0,    86,     0,     0,    88,     0,     0,    90,     0,     0,
       0,     0,     0,   268,    93,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,     0,     0,     0,
     107,     0,   209,     0,   109,     0,   210,     0,     0,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,   290,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   206,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   207,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   208,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,     0,     0,     0,   107,     0,   108,     0,
     109,     0,   210,     0,     0,   111,     5,     6,     7,     8,
       9,   404,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,    19,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   202,     0,
       0,     0,    33,   203,   204,     0,     0,   205,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   206,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
      67,    68,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   208,     0,    80,     0,     0,    82,
       0,     0,     0,    86,     0,    87,    88,     0,     0,    90,
       0,     0,     0,     0,     0,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,     0,
       0,     0,   107,     0,   209,     0,   109,     0,   210,     0,
       0,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,     0,     0,     0,   107,     0,
     209,     0,   109,     0,   210,   374,     0,   111,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,     0,    16,    17,     0,    18,     0,   201,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     202,     0,     0,     0,    33,   203,   204,     0,     0,   205,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     206,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,    67,   207,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,   208,     0,    80,     0,
       0,    82,     0,     0,     0,    86,     0,     0,    88,     0,
       0,    90,     0,     0,     0,     0,     0,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,     0,     0,     0,   107,     0,   209,   849,   109,     0,
     210,     0,     0,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,    16,    17,
       0,    18,     0,   201,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   202,     0,     0,     0,
      33,   203,   204,     0,     0,   205,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,   206,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,    67,   207,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,   208,     0,    80,     0,     0,    82,     0,     0,
       0,    86,     0,     0,    88,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    93,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,     0,     0,     0,
     107,     0,   209,     0,   109,     0,   210,   859,     0,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   206,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   207,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   208,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,     0,     0,     0,   107,     0,   209,     0,
     109,     0,   210,   864,     0,   111,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,   201,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   202,     0,
       0,     0,    33,   203,   204,     0,     0,   205,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   206,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
      67,   207,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   208,     0,    80,     0,     0,    82,
       0,     0,     0,    86,  1070,     0,    88,     0,     0,    90,
       0,     0,     0,     0,     0,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,     0,
       0,     0,   107,     0,   209,     0,   109,     0,   210,     0,
       0,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,   205,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
    1243,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,     0,     0,     0,   107,     0,
     209,     0,   109,     0,   210,     0,     0,   111,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,     0,    16,    17,     0,    18,     0,   201,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     202,     0,     0,     0,    33,   203,   204,     0,     0,   205,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     206,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,    67,   207,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,   208,     0,    80,     0,
       0,    82,     0,     0,     0,    86,     0,     0,    88,     0,
       0,    90,     0,     0,     0,     0,     0,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,     0,     0,     0,   107,     0,   209,     0,   109,     0,
     210,     0,     0,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,    16,    17,
       0,    18,     0,   201,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,   310,     0,   202,     0,     0,     0,
      33,   203,   204,     0,     0,   205,    39,     0,     0,     0,
     312,     0,     0,    43,     0,     0,   206,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,    67,   207,
       0,     0,     0,     0,     0,     0,     0,    74,   317,    76,
      77,    78,   318,     0,    80,     0,     0,    82,     0,     0,
       0,    86,     0,     0,    88,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    93,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,     0,     0,     0,
     107,     0,   209,     0,   109,     0,   210,     0,     0,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   940,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   206,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   207,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   208,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,     0,     0,     0,   107,     0,   209,     0,
     109,     0,   210,     0,     0,   111,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,   201,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   202,     0,
       0,     0,    33,   203,   204,     0,     0,   943,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   206,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
      67,   207,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   208,     0,    80,     0,     0,    82,
       0,     0,     0,    86,     0,     0,    88,     0,     0,    90,
       0,     0,     0,     0,     0,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,     0,
       0,     0,   107,     0,   209,     0,   109,     0,   210,     0,
       0,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,  1210,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,     0,     0,     0,   107,     0,
     209,     0,   109,     0,   210,     0,     0,   111,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,    13,
       0,     0,    16,    17,     0,    18,     0,   201,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     202,     0,     0,     0,    33,   203,   204,     0,     0,  1211,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     206,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,    67,   207,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,   208,     0,    80,     0,
       0,    82,     0,     0,     0,    86,     0,     0,    88,     0,
       0,    90,     0,     0,     0,     0,     0,     0,    93,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,     0,   103,   104,
     105,     0,     0,     0,   107,     0,   209,     0,   109,     0,
     210,     0,     0,   111,     5,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    13,     0,     0,    16,    17,
       0,    18,     0,   201,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   202,     0,     0,     0,
      33,   203,   204,     0,     0,  1213,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,   206,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,    67,   207,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,   208,     0,    80,     0,     0,    82,     0,     0,
       0,    86,     0,     0,    88,     0,     0,    90,     0,     0,
       0,     0,     0,     0,    93,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,     0,     0,     0,
     107,     0,   209,     0,   109,     0,   210,     0,     0,   111,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,  1214,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   206,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   207,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   208,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
      93,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,     0,     0,     0,   107,     0,   209,     0,
     109,     0,   210,     0,     0,   111,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    13,     0,     0,
      16,    17,     0,    18,     0,   201,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   202,     0,
       0,     0,    33,   203,   204,     0,     0,  1215,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   206,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
      67,   207,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,   208,     0,    80,     0,     0,    82,
       0,     0,     0,    86,     0,     0,    88,     0,     0,    90,
       0,     0,     0,     0,     0,     0,    93,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   103,   104,   105,     0,
       0,     0,   107,     0,   209,     0,   109,     0,   210,     0,
       0,   111,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    13,     0,     0,    16,    17,     0,    18,
       0,   201,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   202,     0,     0,     0,    33,   203,
     204,     0,     0,  1216,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   206,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,   443,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,    67,   207,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
     208,     0,    80,     0,     0,    82,     0,     0,     0,    86,
       0,     0,    88,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,   444,     0,     0,     0,   445,     0,     0,
       0,    96,    97,    98,    99,   100,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   103,   104,   105,     0,     0,     0,   107,   446,
     209,     0,   109,     0,   210,     0,     0,   111,     6,     7,
       8,     9,    10,    11,    12,     0,   447,   448,    13,   449,
     450,   451,    17,   452,   453,   454,   201,   455,   456,   457,
     458,   309,   460,   461,   462,   463,   464,   465,   466,   202,
       0,   467,   468,   469,   203,   204,     0,     0,   205,     0,
       0,   311,   470,     0,     0,   313,     0,     0,     0,   206,
       0,     0,    47,    48,     0,     0,     0,     0,    52,     0,
      53,    54,     0,     0,     0,     0,     0,     0,     0,   314,
     443,    59,   315,    61,    62,    63,     0,     0,     0,     0,
      66,     0,   207,     0,   316,     0,     0,     0,     0,     0,
      74,     0,    76,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,   319,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,   444,     0,
       0,     0,   445,     0,     0,     0,    96,    97,    98,    99,
     100,     0,     0,     0,     0,   101,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,   103,   104,   105,
       0,     0,     0,   107,   446,   209,     0,   109,  -352,   210,
       0,     0,   111,     6,     7,     8,     9,    10,    11,    12,
       0,   447,   448,    13,   449,   450,   451,    17,   452,   453,
     454,   201,   455,   456,   457,   458,   309,   460,   461,   462,
     463,   464,     0,   466,   202,     0,   467,   468,   469,   203,
     204,     0,     0,   205,     0,     0,   311,   470,     0,     0,
     313,     0,     0,     0,   206,     0,     0,    47,    48,     0,
       0,     0,     0,    52,     0,    53,    54,     0,     0,     0,
       0,     0,     0,     0,   314,     0,    59,   315,    61,    62,
      63,     0,     0,     0,     0,    66,     0,   207,     0,   316,
       0,     0,     0,     0,     0,    74,     0,    76,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,   319,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   659,     0,   660,
       0,    96,    97,    98,    99,   100,     0,     0,   661,     0,
     101,     0,     0,   662,   240,   663,   664,     0,     0,   102,
       0,   665,   103,   104,   105,     0,     0,     0,   107,   243,
     209,   202,   109,     0,   210,   244,     0,   111,     0,     0,
       0,   666,     0,     0,     0,   246,     0,     0,   667,     0,
     668,     0,     0,     0,     0,     0,     0,     0,   669,     0,
       0,     0,     0,     0,     0,   249,   670,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   671,     0,     0,     0,     0,     0,     0,
       0,     0,   253,   254,     0,   672,     0,   256,     0,   673,
       0,     0,   258,     0,     0,     0,   674,     0,     0,   260,
       0,     0,   675,     0,     0,     0,     0,     0,     0,   676,
       0,     0,   538,   472,   473,   474,   475,   476,     0,     0,
     479,   480,   481,   482,     0,   484,   485,     0,   677,   678,
     679,   680,   681,   682,     0,   683,     0,     0,     0,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,     0,
     694,     0,     0,   695,   696,   697,   698,     0,     0,   699,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    13,     0,     0,    16,    17,     0,    18,     0,   201,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   202,     0,     0,     0,    33,   203,   204,     0,
       0,   205,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   206,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,    67,   207,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,   208,     0,
      80,     0,     0,    82,     0,     0,     0,    86,     0,     0,
      88,     0,     0,    90,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,   104,   105,     0,     0,     0,   107,     0,   209,     0,
     109,     0,   210,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    13,     0,     0,    16,    17,     0,
      18,     0,   201,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   202,     0,     0,     0,    33,
     203,   204,     0,     0,   205,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   206,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,    67,   207,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   208,     0,    80,     0,     0,    82,     0,     0,     0,
      86,     0,     0,    88,     0,     0,    90,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,    98,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    13,     0,
       0,    16,    17,     0,    18,   105,   201,     0,     0,    22,
       0,   209,     0,   109,     0,   210,     0,    29,     0,   202,
       0,     0,     0,    33,   203,   204,     0,     0,   205,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   206,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,    67,   207,     0,   238,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,   208,     0,    80,   239,   240,
      82,   241,     0,     0,    86,     0,   242,    88,     0,     0,
      90,     0,     0,     0,   243,     0,     0,    93,     0,     0,
     244,     0,     0,     0,     0,     0,   245,     0,     0,     0,
     246,     0,     0,   247,     0,     0,    96,     0,    98,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
     249,   250,     0,     0,     0,     0,     0,     0,   251,   105,
       0,     0,     0,     0,     0,     0,     0,   109,   252,   210,
       0,   238,     0,     0,     0,     0,     0,   253,   254,     0,
     255,     0,   256,     0,   257,   239,   240,   258,   241,     0,
       0,   259,     0,   242,   260,     0,     0,   261,     0,     0,
       0,   243,     0,     0,   262,     0,     0,   244,     0,     0,
       0,     0,     0,   245,     0,     0,     0,   246,     0,     0,
     247,     0,     0,     0,     0,     0,   724,     0,     0,     0,
     248,     0,     0,     0,     0,   661,     0,   249,   250,     0,
    1049,  1050,   663,  1051,     0,   251,     0,     0,  1052,     0,
       0,     0,   386,     0,  1030,   252,   726,     0,     0,     0,
       0,     0,     0,     0,   253,   254,     0,   255,  1053,   256,
       0,   257,  1054,     0,   258,  1055,     0,   668,   259,     0,
       0,   260,     0,     0,   261,   727,     0,     0,     0,     0,
       0,   262,     0,  1056,     0,     0,     0,     0,     0,     0,
    1057,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1058,     0,     0,     0,     0,     0,     0,     0,     0,  1059,
    1060,     0,  1061,     0,  1062,     0,   728,     0,     0,     0,
       0,     0,   729,  1063,     0,     0,  1064,     0,     0,  1065,
       0,   286,     0,     0,     0,     0,    93,     0,     0,   538,
     472,   473,   474,   475,   476,     0,     0,   479,   480,   481,
     482,     0,   484,   485,     0,   677,   678,   679,   680,   681,
     682,     0,   683,     0,     0,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   238,   694,     0,     0,
     695,   696,   697,   698,  1066,   661,     0,     0,     0,     0,
     239,   240,   663,   241,     0,     0,     0,     0,   242,     0,
       0,     0,     0,     0,     0,     0,   243,     0,     0,     0,
       0,     0,   244,     0,     0,     0,     0,     0,   245,     0,
       0,     0,   246,     0,     0,   247,     0,   668,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   249,   250,     0,     0,     0,     0,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     252,     0,     0,     0,     0,     0,     0,     0,   441,   253,
     254,     0,   255,     0,   256,   442,   257,     0,     0,   258,
       0,     0,     0,   259,     0,     0,   260,   443,     0,   261,
       0,     0,     0,     0,     0,     0,   262,     0,     0,   538,
     472,   473,   474,   475,   476,     0,     0,   479,   480,   481,
     482,     0,   484,   485,     0,   677,   678,   679,   680,   681,
     682,     0,   683,     0,     0,     0,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,     0,   694,     0,     0,
     695,   696,   697,   698,     0,   444,     0,     0,     0,   445,
       0,     0,   441,     0,     0,     0,     0,     0,  1121,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,   538,   472,   473,   474,   475,   476,     0,     0,
     479,   480,   481,   482,     0,   484,   485,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,     0,     0,   467,   468,   469,     0,   386,     0,   444,
       0,     0,     0,   445,   470,     0,   441,     0,     0,     0,
       0,     0,  1128,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   538,   472,   473,   474,
     475,   476,     0,     0,   479,   480,   481,   482,     0,   484,
     485,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,     0,   467,   468,   469,
       0,   386,     0,   444,     0,     0,     0,   445,   470,     0,
     441,     0,     0,     0,     0,     0,  1276,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
     538,   472,   473,   474,   475,   476,     0,     0,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,     0,   386,     0,   444,     0,     0,
       0,   445,   470,     0,   441,     0,     0,     0,     0,     0,
    1277,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,   538,   472,   473,   474,   475,   476,
       0,     0,   479,   480,   481,   482,     0,   484,   485,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,     0,   467,   468,   469,     0,   386,
       0,   444,     0,     0,     0,   445,   470,     0,   441,     0,
       0,     0,     0,     0,  1278,   442,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   443,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,   538,   472,
     473,   474,   475,   476,     0,     0,   479,   480,   481,   482,
       0,   484,   485,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,     0,   386,     0,   444,     0,     0,     0,   445,
     470,     0,   441,     0,     0,     0,     0,     0,  1279,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,   538,   472,   473,   474,   475,   476,     0,     0,
     479,   480,   481,   482,     0,   484,   485,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,     0,     0,   467,   468,   469,     0,   386,     0,   444,
       0,     0,     0,   445,   470,     0,   441,     0,     0,     0,
       0,     0,  1284,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   538,   472,   473,   474,
     475,   476,     0,     0,   479,   480,   481,   482,     0,   484,
     485,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,     0,   467,   468,   469,
       0,   386,     0,   444,     0,     0,     0,   445,   470,     0,
       0,     0,   441,     0,     0,     0,  1285,     0,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,   290,     0,     0,     0,     0,     0,     0,   446,
     538,   472,   473,   474,   475,   476,     0,   530,   479,   480,
     481,   482,     0,   484,   485,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,     0,   386,     0,     0,     0,   444,
       0,     0,   470,   445,     0,   441,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   443,   290,     0,     0,     0,     0,
     521,     0,     0,     0,     0,   446,     0,     0,     0,     0,
    1042,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,     0,   467,   468,   469,
       0,   386,   444,     0,     0,     0,   445,     0,   470,   441,
       0,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,   518,
       0,     0,     0,   521,     0,     0,     0,     0,   446,     0,
       0,     0,     0,     0,   519,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,     0,     0,
     467,   468,   469,     0,   386,     0,   444,     0,     0,     0,
     445,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   441,   882,     0,     0,     0,     0,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,   446,     0,     0,     0,   883,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
     448,     0,   449,   450,   451,     0,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   884,     0,   467,   468,   469,     0,   386,     0,
       0,     0,     0,     0,     0,   470,     0,     0,     0,   444,
       0,     0,     0,   445,   441,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,   987,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,     0,   467,   468,   469,
       0,   444,     0,     0,     0,   445,     0,   441,   470,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,   290,     0,     0,
       0,     0,   521,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,     0,   386,   444,     0,     0,     0,   445,     0,
     470,   441,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,   290,     0,     0,     0,   521,     0,     0,     0,     0,
     446,     0,     0,     0,     0,     0,  1041,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,     0,   467,   468,   469,     0,   386,     0,   444,     0,
       0,     0,   445,   470,   441,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,     0,     0,     0,     0,   502,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   447,   448,     0,   449,   450,   451,     0,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,     0,     0,   467,   468,   469,     0,
     386,   444,     0,     0,     0,   445,   441,   470,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,   290,     0,     0,     0,
       0,     0,   221,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,     0,   444,     0,     0,     0,   445,     0,   441,
     470,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,   760,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,   761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,     0,   386,   444,     0,     0,     0,
     445,   441,   470,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,   762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
     448,     0,   449,   450,   451,     0,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,     0,   467,   468,   469,     0,   444,     0,
       0,     0,   445,   441,     0,   470,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   443,   979,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   447,   448,     0,   449,   450,   451,     0,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,     0,     0,   467,   468,   469,     0,
     444,     0,     0,     0,   445,     0,   441,   470,     0,     0,
       0,     0,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,     0,     0,   467,   468,
     469,     0,   386,   444,     0,     0,     0,   445,     0,   470,
     441,     0,     0,     0,     0,     0,  1001,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,     0,   386,     0,   444,     0,     0,
       0,   445,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,   521,     0,
       0,     0,   443,   446,     0,     0,     0,  1181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,  1182,     0,   467,   468,   469,     0,     0,
       0,     0,     0,     0,  1037,     0,   470,     0,     0,     0,
     444,     0,     0,     0,   445,   441,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,     0,     0,   467,   468,
     469,     0,   444,     0,     0,     0,   445,   441,   561,   470,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,   521,     0,     0,     0,     0,   446,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,     0,     0,
     467,   468,   469,     0,   444,     0,     0,     0,   445,  1241,
     441,   470,     0,     0,     0,     0,     0,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,     0,   467,   468,   469,     0,     0,   444,     0,     0,
       0,   445,     0,   470,   441,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,     0,   467,   468,   469,     0,   585,
       0,   444,     0,     0,     0,   445,   470,   441,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,   589,   467,
     468,   469,     0,     0,   444,     0,     0,     0,   445,   441,
     470,     0,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   612,
     446,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,     0,   467,   468,   469,     0,   444,     0,     0,     0,
     445,   441,     0,   470,     0,     0,     0,     0,   442,   764,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
     448,     0,   449,   450,   451,     0,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,     0,   467,   468,   469,     0,   444,     0,
       0,     0,   445,   441,   878,   470,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   443,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   447,   448,     0,   449,   450,   451,     0,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,     0,     0,   467,   468,   469,     0,
     444,     0,     0,   850,   445,   441,     0,   470,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   879,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,     0,     0,   467,   468,
     469,     0,   444,     0,     0,     0,   445,   441,     0,   470,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,   446,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,     0,     0,
     467,   468,   469,     0,   444,     0,     0,     0,   445,   441,
       0,   470,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,     0,
       0,   999,     0,     0,     0,     0,     0,     0,     0,     0,
     446,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,   971,   467,   468,   469,     0,   444,     0,     0,     0,
     445,   441,     0,   470,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
     448,     0,   449,   450,   451,     0,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,     0,   467,   468,   469,     0,   444,     0,
       0,     0,   445,   441,     0,   470,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   443,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   447,   448,     0,   449,   450,   451,     0,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,     0,     0,   467,   468,   469,     0,
     444,     0,     0,  1013,   445,   441,     0,   470,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,     0,     0,   467,   468,
     469,     0,   444,     0,     0,  1014,   445,   441,  1076,   470,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1040,   446,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,     0,     0,
     467,   468,   469,     0,   444,     0,     0,     0,   445,   441,
       0,   470,     0,     0,     0,     0,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,     0,   467,   468,   469,     0,   444,     0,     0,     0,
     445,   441,     0,   470,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     443,  1106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
     448,     0,   449,   450,   451,     0,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,     0,   467,   468,   469,     0,   444,     0,
       0,  1099,   445,   441,     0,   470,     0,     0,     0,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   443,  1109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   447,   448,     0,   449,   450,   451,     0,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,     0,     0,   467,   468,   469,     0,
     444,     0,     0,     0,   445,   441,     0,   470,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,     0,     0,   467,   468,
     469,     0,   444,     0,     0,     0,   445,   441,  1178,   470,
       0,     0,     0,     0,   442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,     0,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,     0,     0,
     467,   468,   469,     0,   444,     0,     0,     0,   445,  1112,
     441,   470,     0,     0,     0,     0,     0,   442,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,   451,     0,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
       0,     0,   467,   468,   469,     0,     0,   444,     0,     0,
       0,   445,   441,   470,     0,     0,     0,     0,     0,   442,
    1209,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,     0,   467,   468,   469,     0,   444,
       0,     0,     0,   445,   441,  1249,   470,     0,     0,     0,
       0,   442,  1212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,     0,   467,   468,   469,
       0,   444,     0,     0,     0,   445,     0,     0,   470,     0,
       0,     0,   441,     0,     0,     0,     0,     0,     0,   442,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
    1263,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,     0,     0,     0,     0,     0,     0,     0,   444,
     470,     0,     0,   445,   441,     0,     0,     0,     0,     0,
       0,   442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,     0,   467,   468,   469,
       0,   444,     0,     0,     0,   445,   441,     0,   470,     0,
       0,     0,     0,   442,  1302,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,     0,   444,     0,     0,     0,   445,   441,     0,
     470,     0,     0,     0,     0,   442,  1303,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   443,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,     0,   444,     0,     0,     0,   445,
     441,     0,   470,     0,     0,     0,     0,   442,  1304,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   446,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,   448,
       0,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,     0,     0,   467,   468,   469,     0,   444,     0,     0,
       0,   445,   441,     0,   470,     0,     0,     0,     0,   442,
    1305,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     447,   448,     0,   449,   450,   451,     0,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,     0,     0,   467,   468,   469,     0,   444,
       0,     0,     0,   445,   441,     0,   470,     0,     0,     0,
       0,   442,  1306,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,   448,     0,   449,   450,   451,     0,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,     0,     0,   467,   468,   469,
       0,   444,     0,     0,     0,   445,   441,     0,   470,     0,
       0,     0,     0,   442,  1307,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   447,   448,     0,   449,   450,   451,
       0,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   467,
     468,   469,     0,   444,     0,     0,     0,   445,   441,     0,
     470,     0,     0,     0,     0,   442,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   443,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   448,     0,   449,
     450,   451,     0,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,     0,
       0,   467,   468,   469,     0,   966,     0,     0,     0,   445,
       0,     0,   470,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   382,     0,     0,     0,    23,    24,     0,     0,
       0,   446,     0,     0,     0,   383,     0,    31,   384,     0,
       0,     0,     0,    37,     0,     0,     0,     0,   447,   448,
      42,   449,   450,   451,     0,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,     0,   443,   467,   468,   469,    58,     0,    60,     0,
      62,     0,  1084,     0,   470,  1085,     0,     0,   385,   382,
      69,     0,     0,    23,    24,     0,     0,     0,     0,     0,
       0,     0,   383,     0,    31,   384,     0,     0,     0,    85,
      37,     0,    87,     0,     0,    89,   443,    42,     0,     0,
    -348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     444,     0,   -69,     0,   445,     0,     0,     0,     0,     0,
    -348,    95,     0,    58,     0,    60,     0,     0,     0,    64,
    -348,   -69,    65,     0,     0,   385,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,   106,     0,     0,     0,
       0,     0,  1250,     0,   444,     0,    85,     0,   445,    87,
       0,     0,    89,   447,   448,     0,   449,   450,   451,     0,
     452,   453,   454,     0,   455,   456,   457,   458,     0,   460,
     461,   462,   463,   464,     0,   466,     0,     0,   467,   468,
     469,     0,     0,     0,     0,     0,     0,     0,     0,   470,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
     449,   450,   451,   106,   452,   453,   454,     0,   386,   456,
     457,   458,     0,   460,   461,   462,   463,     0,     0,   466,
       0,   382,   467,   468,   469,    23,    24,     0,     0,     0,
       0,     0,     0,   470,   383,     0,    31,   384,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,    42,
     238,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   240,     0,   241,     0,     0,
       0,     0,   242,     0,     0,    58,     0,    60,     0,     0,
     243,  1084,     0,     0,  1085,     0,   244,   385,     0,    69,
       0,     0,   245,     0,     0,     0,   246,     0,     0,   247,
       0,     0,     0,     0,     0,   238,     0,     0,    85,   248,
       0,    87,     0,     0,    89,     0,   249,   250,     0,   239,
     240,     0,   241,     0,   251,     0,     0,   242,     0,    24,
       0,     0,     0,     0,   252,   243,     0,     0,     0,     0,
      95,   244,     0,   253,   254,     0,   255,   245,   256,     0,
     257,   246,     0,   258,   247,     0,     0,   259,     0,     0,
     260,     0,     0,   261,   248,   106,     0,     0,     0,     0,
     262,   249,   250,     0,     0,     0,     0,     0,     0,   251,
      60,     0,     0,     0,     0,     0,     0,     0,    95,   252,
       0,     0,    69,     0,     0,     0,     0,     0,   253,   254,
       0,   255,     0,   256,     0,   257,   238,     0,   258,     0,
       0,     0,   259,     0,     0,   260,     0,    89,   261,     0,
     239,   240,     0,   241,     0,   262,     0,     0,   242,     0,
       0,     0,     0,     0,     0,     0,   243,     0,     0,     0,
       0,     0,   244,     0,     0,     0,     0,     0,   245,     0,
       0,     0,   246,     0,     0,   247,     0,     0,     0,     0,
       0,  -323,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   249,   250,     0,  -323,  -323,     0,  -323,     0,
     251,     0,     0,  -323,     0,     0,     0,     0,     0,     0,
     252,  -323,     0,     0,     0,     0,     0,  -323,     0,   253,
     254,     0,   255,  -323,   256,     0,   257,  -323,     0,   258,
    -323,     0,     0,   259,   574,     0,   260,     0,     0,   261,
    -323,     0,     0,     0,     0,     0,   262,  -323,  -323,     0,
       0,     0,     0,     0,     0,  -323,   238,     0,     0,     0,
       0,     0,     0,     0,     0,  -323,     0,     0,     0,     0,
     239,   240,     0,   241,  -323,  -323,     0,  -323,   242,  -323,
       0,  -323,     0,     0,  -323,     0,   243,     0,  -323,     0,
       0,  -323,   244,     0,  -323,     0,     0,     0,   245,     0,
       0,  -323,   246,     0,     0,   247,     0,     0,     0,     0,
       0,  -324,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   249,   250,     0,  -324,  -324,     0,  -324,     0,
     251,     0,     0,  -324,     0,     0,     0,     0,     0,     0,
     252,  -324,     0,     0,     0,     0,     0,  -324,     0,   253,
     254,     0,   255,  -324,   256,     0,   257,  -324,     0,   258,
    -324,     0,     0,   259,     0,     0,   260,     0,     0,   261,
    -324,     0,     0,     0,     0,     0,   262,  -324,  -324,     0,
       0,     0,     0,     0,     0,  -324,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -324,     0,     0,     0,     0,
       0,     0,     0,     0,  -324,  -324,     0,  -324,     0,  -324,
       0,  -324,     0,     0,  -324,     0,     0,     0,  -324,     0,
       0,  -324,     0,     0,  -324,     0,     0,     0,     0,     0,
       0,  -324
};

static const yytype_int16 yycheck[] =
{
      13,   413,   171,    66,    17,     2,   119,    71,    21,    20,
     433,   158,   583,   498,    27,    66,   655,   187,   793,    66,
      27,    34,    35,    36,   140,    38,   282,   884,    92,   908,
     587,   839,   632,   578,   543,   405,    49,   652,    51,    52,
     271,   879,   273,   274,    57,   109,    59,   902,    61,   833,
     306,   230,   914,    66,    32,     1,   418,    70,    71,    72,
      73,    74,    75,    70,   621,    32,    79,    55,    81,     8,
     702,    55,   704,    47,    32,    88,  1015,   553,    91,    92,
      74,     1,    32,    96,    71,    98,     3,    40,   101,   102,
     346,   104,    32,   120,     1,   108,   109,   110,   111,    24,
      32,    36,   120,   110,    32,    92,    27,    32,   278,   118,
     148,     0,   102,  1205,   548,    40,    41,    42,    60,    32,
      47,     1,   109,   117,   148,   138,    47,   140,    74,    47,
      51,    82,    22,   166,    85,   124,    47,    72,   176,   148,
      47,   575,    92,    55,   375,   376,   120,   120,    47,   176,
     174,     3,    32,   120,    75,  1017,     1,    78,   176,    80,
      92,  1253,   120,    90,    55,   118,     3,   180,     3,    90,
     148,   117,    90,   237,   148,   237,   118,   952,   172,   655,
      60,   171,   171,    83,    84,   173,   103,    32,   109,   173,
     203,   204,   205,   171,   119,   208,   209,   210,    88,    31,
    1079,  1009,   176,   210,   171,   820,   126,  1015,  1087,  1088,
     572,   150,    92,   171,  1153,    60,   166,   228,   282,   126,
     282,   171,   112,  1078,   237,   105,   172,   147,   148,   786,
      47,   171,   488,   489,  1018,   148,  1074,   148,   118,   171,
     147,   148,   306,   171,   306,   141,   148,    92,    27,   148,
     175,   103,   148,   174,   174,    92,   765,    89,   171,   166,
     105,    93,   171,   433,   173,   635,   103,   147,    47,   282,
     172,   123,    51,   118,    46,    46,   172,   176,    46,   142,
      18,    27,   346,   883,   346,    27,   166,   150,   404,   109,
      27,   171,   837,   306,    65,   148,    75,    65,   148,    78,
     413,    80,   147,   120,   317,   318,   120,  1115,   793,  1188,
     142,    90,    84,    84,  1193,   147,    84,   149,   150,   332,
     333,   174,   154,  1180,   174,  1182,   171,   166,    55,   161,
     109,   148,    78,   346,   173,   504,    78,   169,    75,    77,
     148,    78,   114,   114,    90,  1153,   114,   148,    90,    55,
     965,  1126,   148,    90,   417,   148,   148,   370,    96,   176,
     126,   374,   176,   173,    90,   175,   174,   109,    53,   115,
     367,   173,   109,   174,   148,   113,    55,  1016,   174,   172,
     172,     2,   561,   148,   397,   148,   399,   153,    73,   155,
     156,   453,   158,   159,   148,   174,   409,   906,    83,   148,
     174,     8,   409,   148,   166,    26,   166,    28,   126,   174,
     172,   174,   172,   477,   478,    11,   173,   166,   175,   483,
     174,   166,   486,   487,   488,   489,   488,   489,   441,   442,
     443,   444,   445,   446,   152,   448,   449,   450,   451,   452,
     949,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,    79,   638,
     148,    55,    83,    84,   477,   478,  1066,   952,  1100,  1101,
     483,   148,   173,   486,   487,   488,   489,   490,   491,   543,
      89,   543,   148,   148,    93,   498,   174,   108,  1045,   502,
     477,   478,   113,   506,   148,   508,   483,   174,   910,   486,
     487,   166,   925,   516,    55,   518,   519,   148,   174,   516,
     573,   524,   525,   148,   148,   148,   148,   530,     3,   148,
     174,    55,   573,   587,   537,   587,   573,   540,    55,   148,
     543,   166,   166,   174,   166,    20,   148,   601,   148,   603,
     553,   174,   555,   148,   148,   174,   559,   166,    33,   562,
     563,    31,   307,   308,   166,   148,   166,   621,   148,   621,
     573,   166,   166,   100,    89,   578,   797,   798,    93,    55,
     801,   802,   173,   166,   587,   142,   166,    62,    55,  1179,
     147,  1181,   166,   150,   173,   598,   175,   154,   601,   173,
     603,   175,  1199,    55,    89,   608,   609,   610,    93,   612,
     613,   222,    89,   616,   617,   618,    93,     2,   621,    89,
     173,   618,   175,    93,   601,    27,   603,    89,   103,   632,
     633,    93,    55,     1,   109,    89,   857,   858,   625,    93,
     173,    26,   645,    28,  1205,    47,    55,   868,   123,    51,
      55,  1126,   655,   173,    22,   175,    55,     3,    26,    27,
    1257,  1258,  1259,  1260,  1261,  1262,   173,    35,   175,    37,
      38,   171,   142,    75,   285,    43,    78,   147,    80,   290,
     150,   141,    50,    50,   154,    53,    53,   173,    90,  1091,
      55,   173,  1253,   175,    79,   601,   699,   603,    83,    84,
     147,   166,   165,   706,    55,    73,    73,   109,    76,    76,
      78,   765,    80,   765,    82,    83,    83,    85,   166,   119,
      88,   166,    90,   108,   166,   166,   166,   166,   113,   173,
     784,   166,   786,   171,   786,   166,   173,   171,   174,    84,
     173,   109,   109,   173,   112,   904,    27,   115,   173,   166,
     148,   147,   173,   166,     8,     3,   367,   760,   761,   762,
     763,   764,   765,   766,   767,   925,    47,   173,    65,   823,
      51,   908,   126,   141,   911,   386,   171,   778,   779,   172,
      90,   784,    90,   786,   787,   396,   789,   126,   150,    68,
     793,   173,   795,   126,    75,   174,   148,    78,   166,    80,
      47,   804,   805,   173,   172,   126,   126,   784,    34,    90,
      34,   174,    65,   126,   174,   147,   976,   174,    21,   150,
     823,   176,   433,   983,   148,     3,   878,   879,   109,   176,
     171,   105,   150,   173,   837,   150,   150,   222,   841,    17,
     166,   150,    20,   150,   150,   150,   823,    25,   150,   150,
     150,   150,   906,   142,   906,   908,   150,    35,   150,   912,
     150,    34,   150,   166,   176,    34,    34,    45,   921,    35,
      36,   166,   147,   876,    52,   166,   174,   880,   174,   882,
     883,   884,   166,   886,    62,   888,   166,   173,   891,   892,
     172,   148,    70,   166,   171,   949,   172,   949,   176,    32,
     285,  1147,  1148,   906,   174,   290,    32,   518,   176,    87,
     166,   166,   173,   524,   173,   147,   176,   166,   176,   148,
      34,    99,   174,   174,   535,   103,   537,   166,   174,   174,
     166,   166,   110,   148,   165,   165,   118,   940,   116,   620,
     943,  1045,  1079,     2,   110,   123,   949,   281,   876,   952,
    1087,  1172,  1173,  1174,  1175,    25,   388,    91,  1005,   353,
    1030,   559,   912,   966,   967,   573,   925,    26,   396,    28,
     921,   320,  1253,  1093,   977,  1263,   979,   570,   407,  1256,
     903,   984,   367,   708,   987,  1088,   138,   556,  1091,   819,
      -1,  1045,    -1,  1045,    -1,   606,   999,    -1,    -1,   610,
      -1,   386,    -1,    -1,     2,    -1,    -1,    -1,    -1,    -1,
      -1,   396,    -1,  1016,   625,    -1,    -1,  1020,    -1,    -1,
      79,    -1,    -1,  1026,    83,    84,  1079,    -1,    26,  1026,
      28,    -1,  1035,    -1,  1037,    -1,    -1,  1040,  1041,  1042,
    1043,    -1,  1045,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,  1188,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,
    1220,  1221,    -1,  1066,  1224,  1225,    -1,    -1,    -1,    -1,
      -1,  1074,    -1,  1076,    -1,    -1,  1236,    -1,  1238,    -1,
      -1,    79,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
    1193,    -1,  1095,  1147,  1148,  1147,  1148,    -1,    -1,    -1,
      -1,    -1,  1105,  1106,    -1,  1108,  1109,    -1,  1111,  1112,
     108,    31,    -1,    -1,    -1,   113,    -1,    -1,  1121,  1122,
      -1,  1124,    -1,  1126,    -1,  1128,  1129,    22,    -1,  1132,
      -1,    26,    27,   518,    -1,  1188,    -1,    -1,    -1,   524,
      35,    -1,    37,    38,  1147,  1148,    -1,    -1,    43,    -1,
     535,    -1,   537,    -1,    -1,    50,  1159,    -1,  1161,    -1,
      -1,    -1,  1165,   222,   775,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    -1,  1178,  1179,  1180,  1181,  1182,
      -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    90,   807,    -1,    -1,   810,
      -1,    -1,    -1,    -1,    -1,    -1,  1209,  1210,  1211,  1212,
    1213,  1214,  1215,  1216,   109,    -1,    -1,   112,    -1,    -1,
     115,   606,   142,   143,   222,   610,   285,   147,    -1,   149,
     150,   290,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,
     625,   161,    -1,    -1,    -1,   856,  1249,   167,   168,   169,
      -1,   862,  1255,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,  1276,  1277,  1278,  1279,  1264,   444,   445,
      -1,  1284,  1285,    31,    -1,    -1,    -1,   285,    -1,    -1,
      -1,    -1,   290,    -1,    -1,    -1,    73,    -1,    -1,  1302,
    1303,  1304,  1305,  1306,  1307,    -1,    -1,    -1,   367,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    93,    -1,    -1,   490,   491,     2,   386,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   502,   396,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      26,    -1,    28,   519,    -1,   966,   967,    -1,    -1,   525,
      -1,    -1,    -1,    -1,   530,    -1,   977,    -1,   979,   367,
     142,   143,    -1,   984,   146,   147,   987,   149,   150,    -1,
      -1,    -1,   154,    -1,    -1,   996,    -1,   998,   386,   161,
    1001,    -1,    -1,    -1,   142,   167,   168,   169,   396,   147,
      -1,   149,   150,    79,    -1,    -1,   154,    83,    84,    -1,
      -1,    -1,    -1,   161,  1025,    -1,    -1,    -1,    -1,   167,
     168,   169,   807,    -1,  1035,   810,  1037,    -1,    -1,    -1,
      -1,    -1,   108,  1044,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,   608,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,   617,   618,    -1,    -1,    -1,    -1,    -1,    -1,   518,
      -1,    -1,    -1,    -1,    -1,   524,    -1,    -1,    -1,    -1,
      -1,   856,    -1,    -1,    -1,    -1,   535,   862,   537,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   269,    -1,   271,   272,   273,   274,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    -1,    -1,
    1121,    -1,    -1,    -1,    -1,    -1,   293,  1128,   295,    -1,
     518,    -1,    -1,    -1,    -1,   302,   524,    -1,    -1,    -1,
    1141,    -1,    -1,    -1,    -1,    -1,    -1,   535,    -1,   537,
      -1,    -1,    -1,    -1,  1155,    -1,   222,   606,    -1,    -1,
      -1,   610,    -1,  1164,    -1,   142,   143,  1168,   145,   146,
     147,    -1,   149,   150,     2,   342,   625,   154,    -1,    -1,
      -1,    -1,    -1,   160,   161,    -1,    -1,   164,   355,   356,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,   977,    -1,   979,   761,    -1,   763,    -1,   984,
     766,    -1,   987,    -1,    -1,    -1,    -1,    -1,   606,   285,
      -1,   996,   610,   998,   290,  1226,  1001,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   625,    -1,  1240,
    1241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1025,    79,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
    1035,    -1,  1037,  1264,    -1,    -1,    -1,    -1,    -1,  1044,
      -1,    -1,    -1,    -1,    -1,  1276,  1277,  1278,  1279,    -1,
     108,    -1,    -1,  1284,  1285,   113,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,   367,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     386,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
     396,    -1,    -1,    -1,    -1,    -1,   503,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1121,    -1,    -1,    -1,
      -1,    -1,    -1,  1128,    -1,    -1,   523,    -1,   807,    -1,
     527,   810,   529,    -1,    -1,   532,  1141,    89,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1164,
      -1,    -1,    -1,  1168,   222,    -1,    -1,    -1,   120,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,   856,    -1,    -1,
     966,   967,    -1,   862,    -1,    -1,    -1,    -1,    -1,   807,
     142,   143,   810,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,   171,
      -1,  1226,   518,    -1,    -1,    -1,   178,   285,   524,    -1,
      -1,    -1,   290,    -1,    -1,  1240,  1241,    -1,   856,   535,
      -1,   537,    -1,    -1,   862,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1041,  1042,  1043,    -1,  1264,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       2,  1276,  1277,  1278,  1279,    -1,    -1,    -1,    -1,  1284,
    1285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,   977,    -1,
     979,    -1,    -1,    -1,    -1,   984,    -1,    -1,   987,   367,
     606,    -1,    -1,    -1,   610,    -1,    -1,   996,    -1,   998,
      -1,    -1,  1001,    -1,    -1,    -1,    -1,    -1,   386,   625,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1025,    79,     2,    -1,
      -1,    83,    84,    -1,    -1,    -1,  1035,    -1,  1037,   977,
      -1,   979,    -1,    -1,    -1,  1044,   984,    -1,    -1,   987,
      -1,    -1,    26,    -1,    28,    -1,   108,    -1,   996,    -1,
     998,   113,    31,  1001,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   791,   792,    -1,    -1,    -1,    -1,
     797,   798,    -1,    -1,   801,   802,    -1,  1025,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1035,    -1,  1037,
      -1,    -1,    -1,    -1,    -1,    79,  1044,    -1,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,  1121,    -1,    93,    -1,    -1,    -1,    -1,  1128,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,   113,
     518,    -1,  1141,    -1,    -1,    -1,   524,    -1,    -1,    -1,
     867,    -1,    -1,    -1,    -1,    -1,  1155,   535,    -1,   537,
      -1,    -1,    -1,    -1,    -1,  1164,    -1,    -1,    -1,  1168,
     222,    -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,    -1,  1121,    -1,   154,    -1,    -1,    -1,    -1,
    1128,   807,   161,    -1,   810,    -1,    -1,    -1,   167,   168,
     169,    -1,    -1,  1141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1164,  1226,   606,    -1,
    1168,    -1,   610,   285,    -1,    -1,    -1,    -1,   290,    -1,
     856,  1240,  1241,    -1,    -1,    -1,   862,   625,   222,    -1,
      -1,   968,   969,    -1,    -1,    -1,    -1,   974,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1264,    -1,    -1,    -1,   986,
      -1,    -1,   989,    -1,   991,    -1,   993,  1276,  1277,  1278,
    1279,    -1,    -1,    -1,    -1,  1284,  1285,    -1,  1226,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1240,  1241,    22,    -1,    -1,    -1,    26,    27,
      -1,   285,    -1,    -1,    -1,   367,   290,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    43,  1264,    -1,    -1,    -1,
      -1,    -1,    50,    -1,   386,    -1,    -1,    -1,  1276,  1277,
    1278,  1279,    -1,    -1,   396,    -1,  1284,  1285,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     2,    76,    -1,
      78,   977,    80,   979,    82,    -1,    -1,    85,   984,    -1,
      88,   987,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     996,    26,   998,    28,    31,  1001,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   367,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1025,
      -1,    -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,  1035,
      -1,  1037,   396,   141,    -1,    -1,    -1,    -1,  1044,   807,
      -1,    -1,   810,    -1,    79,    -1,    -1,    -1,    -1,    -1,
    1157,    -1,    89,    -1,    -1,    -1,    93,    -1,   166,    -1,
      -1,    -1,    -1,  1170,  1171,  1172,  1173,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,   518,    -1,   113,    -1,
      -1,    -1,   524,    -1,    -1,    -1,    -1,    -1,   856,    -1,
      -1,    -1,    -1,   535,   862,   537,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,  1121,    -1,   154,    -1,    -1,
       2,    -1,  1128,   160,   161,    -1,    -1,   164,    -1,    -1,
     167,   168,   169,    -1,    -1,  1141,    -1,    -1,    -1,    -1,
      -1,   178,    -1,    -1,    26,    -1,    28,    -1,    -1,  1155,
      -1,    -1,    -1,    -1,   518,    -1,    -1,    -1,  1164,    -1,
     524,    -1,  1168,    -1,   606,    -1,    -1,    -1,   610,    -1,
      12,   535,    -1,   537,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,   625,    -1,    -1,    -1,   222,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   977,
      -1,   979,    -1,    -1,    -1,    -1,   984,    -1,    -1,   987,
    1226,    -1,    -1,    -1,    -1,    -1,   108,    -1,   996,    -1,
     998,   113,    -1,  1001,  1240,  1241,    -1,    -1,    -1,    -1,
      -1,    -1,   606,    -1,    -1,    -1,   610,    89,    -1,    -1,
     285,    93,    -1,    -1,    -1,   290,    -1,  1025,  1264,    -1,
     102,   625,    -1,    -1,    -1,    -1,    -1,  1035,    -1,  1037,
    1276,  1277,  1278,  1279,    -1,    -1,  1044,    -1,  1284,  1285,
      -1,    -1,    -1,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,    -1,   139,   140,    -1,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,   171,
      -1,    -1,   367,    -1,    -1,    -1,   178,    -1,    -1,    -1,
     222,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   386,    -1,  1121,    -1,    -1,    44,    45,    46,    -1,
    1128,   396,    -1,    -1,    -1,   807,    -1,    -1,   810,    -1,
      -1,    -1,    -1,  1141,    -1,    -1,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,  1155,    -1,    35,
      -1,    37,    38,    -1,    22,    -1,  1164,    43,    26,    27,
    1168,    -1,    -1,   285,    50,    -1,    -1,    35,   290,    37,
      38,    -1,    -1,    -1,   856,    43,    -1,    -1,    -1,    -1,
     862,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,    85,
      -1,    -1,    88,   807,    90,    -1,   810,    -1,    76,    -1,
      78,    -1,    80,    -1,    82,    -1,    -1,    85,  1226,    -1,
      88,    -1,    90,   109,    -1,    -1,   112,    -1,   156,   115,
     158,    -1,  1240,  1241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   170,   518,   112,   367,    -1,   115,    -1,   524,
      -1,    -1,   856,    -1,    -1,   141,  1264,    -1,   862,    -1,
     535,    -1,   537,    -1,   386,    -1,    -1,    -1,  1276,  1277,
    1278,  1279,    -1,   141,   396,    -1,  1284,  1285,   206,    -1,
     166,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   977,    -1,   979,   166,    -1,
      -1,    -1,   984,    -1,   172,   987,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   996,    -1,   998,    -1,    -1,  1001,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   606,    -1,    -1,    -1,   610,    -1,    -1,    -1,   267,
      -1,    -1,    -1,  1025,    -1,    -1,    -1,   275,   276,    -1,
     625,    -1,    -1,  1035,    -1,  1037,    -1,    -1,   286,    -1,
      -1,    -1,  1044,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   977,    -1,   979,    -1,    -1,    -1,    -1,
     984,    -1,    -1,   987,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   996,    -1,   998,    -1,   518,  1001,   326,    -1,
      -1,    -1,   524,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   535,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1025,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1035,    -1,  1037,    -1,    -1,    -1,    -1,    -1,  1121,
    1044,    -1,    -1,    -1,    -1,    -1,  1128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,  1141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,  1155,    -1,    -1,    -1,    -1,    -1,    -1,
     408,    -1,  1164,    -1,   606,   413,  1168,    -1,   610,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,   625,    -1,   433,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1121,    -1,    -1,
      -1,    -1,    -1,     1,  1128,     3,    -1,    -1,    -1,    -1,
      -1,    -1,   807,    -1,    -1,   810,    -1,  1141,    -1,    17,
      18,   118,    20,    -1,  1226,    -1,    -1,    25,    -1,    -1,
      -1,  1155,    -1,    -1,    -1,    33,    -1,    -1,  1240,  1241,
    1164,    39,    -1,    -1,  1168,    -1,    -1,    45,    -1,   497,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,   856,  1264,    -1,    62,    -1,    -1,   862,    -1,    -1,
      -1,    69,    70,    -1,  1276,  1277,  1278,  1279,    -1,    77,
      -1,    -1,  1284,  1285,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,   544,    -1,    96,    97,
     548,    99,  1226,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,   561,    -1,   113,  1240,  1241,   116,    -1,
      -1,    -1,   570,    -1,    -1,   123,    -1,   575,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1264,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1276,  1277,  1278,  1279,    -1,    -1,    -1,    -1,
    1284,  1285,    -1,    -1,    -1,   807,    -1,    -1,   810,    -1,
      -1,    -1,   269,   270,   271,   272,   273,   274,    -1,    -1,
     277,   278,   977,   631,   979,    -1,    -1,   284,    -1,   984,
      -1,    -1,   987,    -1,    -1,     3,   293,    -1,   295,    -1,
      -1,   996,    -1,   998,    -1,   302,  1001,    -1,    -1,    17,
      18,    -1,    20,    -1,   856,    -1,    -1,    25,    -1,    -1,
     862,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
    1025,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
    1035,    49,  1037,    -1,    52,   342,    -1,    -1,    -1,  1044,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,   355,   356,
     708,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1121,    -1,    -1,    -1,
      -1,    -1,    -1,  1128,    -1,   977,    -1,   979,    -1,    -1,
      -1,    -1,   984,    -1,    -1,   987,  1141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   996,    -1,   998,    -1,    -1,  1001,
    1155,    -1,    -1,    -1,   812,   173,    -1,    -1,    -1,  1164,
      -1,   819,    -1,  1168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   829,    -1,  1025,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1035,    -1,  1037,    -1,    -1,    -1,   847,
      -1,    -1,  1044,    -1,    -1,    -1,   503,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,   523,    -1,    -1,    -1,
     527,  1226,   529,    -1,    -1,   532,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1240,  1241,    -1,    -1,    -1,
      -1,   170,    -1,    -1,   173,   903,   175,    -1,     3,    -1,
      -1,    -1,   910,    -1,    -1,    -1,    -1,    -1,    -1,  1264,
      -1,    -1,    17,    18,    -1,    20,    -1,   925,    -1,    -1,
      25,  1276,  1277,  1278,  1279,    -1,    -1,    -1,    33,  1284,
    1285,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,  1141,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,  1155,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,  1164,    -1,    69,    70,  1168,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    -1,    99,    -1,   101,  1005,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,   111,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,  1030,    -1,  1226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1240,  1241,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1264,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1091,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,   791,   792,    -1,    39,    40,    41,
     797,   798,    44,    45,   801,   802,    -1,    49,    -1,    -1,
      52,    -1,    12,    55,   811,    -1,    58,    59,    -1,    19,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    31,    -1,    -1,    -1,    77,    36,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,
     847,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,   866,
     867,   113,    72,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,    -1,   125,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,    -1,   178,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,   166,   167,   168,   169,
      -1,   968,   969,    -1,    -1,    -1,    -1,   974,   178,   976,
      -1,    -1,    -1,    -1,    -1,    -1,   983,    -1,    -1,   986,
      -1,    -1,   989,    -1,   991,    -1,   993,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1006,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1033,    -1,     0,     1,
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
    1157,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1170,  1171,  1172,  1173,    -1,    -1,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   163,   164,   165,   166,    -1,    -1,   169,    -1,   171,
      -1,   173,    -1,   175,    -1,    -1,   178,    -1,    -1,    -1,
      -1,    -1,    -1,  1220,  1221,    -1,    -1,  1224,  1225,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1234,    -1,  1236,
       1,  1238,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
     171,   172,   173,    -1,   175,    -1,     1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,   103,   104,
      -1,   106,   107,   108,   109,   110,    -1,   112,   113,   114,
     115,   116,    -1,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,   166,    -1,    -1,   169,    -1,   171,   172,   173,    -1,
     175,    -1,     1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    -1,    52,    53,    -1,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,   166,    -1,    -1,
     169,    -1,   171,   172,   173,    -1,   175,    -1,     1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,   166,    -1,    -1,   169,    -1,   171,   172,
     173,    -1,   175,    -1,     1,   178,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    -1,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,   103,   104,    -1,   106,
     107,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
      -1,    -1,   119,    -1,   121,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,   166,
      -1,    -1,   169,    -1,   171,   172,   173,    -1,   175,    -1,
       1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,   166,    -1,    -1,   169,    -1,
     171,    -1,   173,    -1,   175,    -1,     1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,   103,   104,
      -1,   106,   107,   108,   109,   110,    -1,   112,   113,   114,
     115,   116,    -1,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,   166,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,
     175,    -1,     1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    -1,    52,    53,    -1,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,   166,    -1,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,    -1,     1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,   166,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,    -1,     1,   178,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    -1,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,   103,   104,    -1,   106,
     107,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
      -1,    -1,   119,    -1,   121,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,   166,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,
       1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,   166,    -1,    -1,   169,    -1,
     171,    -1,   173,    -1,   175,    -1,     1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    77,    78,    79,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,   103,   104,
      -1,   106,   107,   108,   109,   110,    -1,   112,   113,   114,
     115,   116,    -1,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,   166,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,
     175,    -1,     1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    -1,    52,    53,    -1,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,   166,    -1,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,    -1,     1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,   166,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,    -1,     1,   178,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    -1,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,   103,   104,    -1,   106,
     107,   108,   109,   110,    -1,   112,   113,   114,   115,   116,
      -1,    -1,   119,    -1,   121,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,   166,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,
       1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,   115,   116,    -1,    -1,   119,    -1,
     121,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,   166,    -1,    -1,   169,    -1,
     171,    -1,   173,    -1,   175,    -1,     1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    77,    78,    79,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,   103,   104,
      -1,   106,   107,   108,   109,   110,    -1,   112,   113,   114,
     115,   116,    -1,    -1,   119,    -1,   121,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,   166,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    14,    -1,    -1,    17,    18,
      19,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    54,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,   125,   126,   127,   128,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,    -1,
     139,   140,    -1,   142,   143,   144,   145,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,    -1,   173,    -1,   175,    -1,    -1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    -1,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    42,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    61,    62,
      63,    64,    -1,    66,    67,    -1,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,    -1,    -1,   178,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,
      -1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,   110,
     111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,
     171,    -1,   173,    -1,   175,    -1,    -1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    47,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,   107,   108,
      -1,   110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
     169,    -1,   171,    -1,   173,   174,   175,    -1,    -1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,   107,   108,    -1,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,
     173,   174,   175,    -1,    -1,   178,     3,     4,     5,     6,
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
     107,   108,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,   166,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,
      -1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,
     171,    -1,   173,   174,   175,    -1,    -1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,   107,   108,    -1,   110,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,    -1,    -1,   178,     3,     4,     5,     6,
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
     107,   108,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,
      -1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,   122,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,
     171,    -1,   173,    -1,   175,   176,    -1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    -1,    -1,    -1,    93,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,    -1,    -1,   178,     3,     4,     5,     6,
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
      -1,    -1,    -1,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,
      -1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,
     171,    -1,   173,    -1,   175,   176,    -1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,    -1,    -1,    -1,   169,    -1,   171,   172,   173,    -1,
     175,    -1,    -1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,   176,    -1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,   176,    -1,   178,     3,     4,     5,     6,
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
      -1,    -1,    -1,   110,   111,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,
      -1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
     111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,
     171,    -1,   173,    -1,   175,    -1,    -1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,    -1,    -1,   178,     3,     4,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,
      -1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,    -1,
     171,    -1,   173,    -1,   175,    -1,    -1,   178,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,
     165,    -1,    -1,    -1,   169,    -1,   171,    -1,   173,    -1,
     175,    -1,    -1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
     169,    -1,   171,    -1,   173,    -1,   175,    -1,    -1,   178,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,    -1,    -1,   178,     3,     4,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,   145,   146,
      -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,    -1,
      -1,    -1,   169,    -1,   171,    -1,   173,    -1,   175,    -1,
      -1,   178,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    31,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    -1,
      -1,   142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,   169,   125,
     171,    -1,   173,    -1,   175,    -1,    -1,   178,     4,     5,
       6,     7,     8,     9,    10,    -1,   142,   143,    14,   145,
     146,   147,    18,   149,   150,   151,    22,   153,   154,   155,
     156,    27,   158,   159,   160,   161,   162,   163,   164,    35,
      -1,   167,   168,   169,    40,    41,    -1,    -1,    44,    -1,
      -1,    47,   178,    -1,    -1,    51,    -1,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      31,    77,    78,    79,    80,    81,    -1,    -1,    -1,    -1,
      86,    -1,    88,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,   169,   125,   171,    -1,   173,   174,   175,
      -1,    -1,   178,     4,     5,     6,     7,     8,     9,    10,
      -1,   142,   143,    14,   145,   146,   147,    18,   149,   150,
     151,    22,   153,   154,   155,   156,    27,   158,   159,   160,
     161,   162,    -1,   164,    35,    -1,   167,   168,   169,    40,
      41,    -1,    -1,    44,    -1,    -1,    47,   178,    -1,    -1,
      51,    -1,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    -1,    86,    -1,    88,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,   142,   143,   144,   145,   146,    -1,    -1,    12,    -1,
     151,    -1,    -1,    17,    18,    19,    20,    -1,    -1,   160,
      -1,    25,   163,   164,   165,    -1,    -1,    -1,   169,    33,
     171,    35,   173,    -1,   175,    39,    -1,   178,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,   126,   127,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,    -1,   139,   140,    -1,   142,   143,
     144,   145,   146,   147,    -1,   149,    -1,    -1,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,    -1,    -1,   167,   168,   169,   170,    -1,    -1,   173,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      -1,   164,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,
     173,    -1,   175,     3,     4,     5,     6,     7,     8,     9,
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
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,   165,    22,    -1,    -1,    25,
      -1,   171,    -1,   173,    -1,   175,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    17,    18,
     106,    20,    -1,    -1,   110,    -1,    25,   113,    -1,    -1,
     116,    -1,    -1,    -1,    33,    -1,    -1,   123,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,   142,    -1,   144,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    87,   175,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,
      99,    -1,   101,    -1,   103,    17,    18,   106,    20,    -1,
      -1,   110,    -1,    25,   113,    -1,    -1,   116,    -1,    -1,
      -1,    33,    -1,    -1,   123,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    12,    -1,    69,    70,    -1,
      17,    18,    19,    20,    -1,    77,    -1,    -1,    25,    -1,
      -1,    -1,   171,    -1,   173,    87,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    99,    45,   101,
      -1,   103,    49,    -1,   106,    52,    -1,    54,   110,    -1,
      -1,   113,    -1,    -1,   116,    62,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
      -1,    -1,   109,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,   173,    -1,    -1,    -1,    -1,   123,    -1,    -1,   126,
     127,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,    -1,   139,   140,    -1,   142,   143,   144,   145,   146,
     147,    -1,   149,    -1,    -1,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,     3,   164,    -1,    -1,
     167,   168,   169,   170,   171,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    96,
      97,    -1,    99,    -1,   101,    19,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,    31,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,   126,
     127,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,    -1,   139,   140,    -1,   142,   143,   144,   145,   146,
     147,    -1,   149,    -1,    -1,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    -1,   164,    -1,    -1,
     167,   168,   169,   170,    -1,    89,    -1,    -1,    -1,    93,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   102,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,   127,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,    -1,   139,   140,    -1,   142,   143,
      -1,   145,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,   169,    -1,   171,    -1,    89,
      -1,    -1,    -1,    93,   178,    -1,    12,    -1,    -1,    -1,
      -1,    -1,   102,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,   127,   128,   129,
     130,   131,    -1,    -1,   134,   135,   136,   137,    -1,   139,
     140,    -1,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,   169,
      -1,   171,    -1,    89,    -1,    -1,    -1,    93,   178,    -1,
      12,    -1,    -1,    -1,    -1,    -1,   102,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,   127,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,    -1,   139,   140,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,   171,    -1,    89,    -1,    -1,
      -1,    93,   178,    -1,    12,    -1,    -1,    -1,    -1,    -1,
     102,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,    -1,   139,   140,    -1,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,   171,
      -1,    89,    -1,    -1,    -1,    93,   178,    -1,    12,    -1,
      -1,    -1,    -1,    -1,   102,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
      -1,   139,   140,    -1,   142,   143,    -1,   145,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,   169,    -1,   171,    -1,    89,    -1,    -1,    -1,    93,
     178,    -1,    12,    -1,    -1,    -1,    -1,    -1,   102,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,   127,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,    -1,   139,   140,    -1,   142,   143,
      -1,   145,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,   169,    -1,   171,    -1,    89,
      -1,    -1,    -1,    93,   178,    -1,    12,    -1,    -1,    -1,
      -1,    -1,   102,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,   127,   128,   129,
     130,   131,    -1,    -1,   134,   135,   136,   137,    -1,   139,
     140,    -1,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,   169,
      -1,   171,    -1,    89,    -1,    -1,    -1,    93,   178,    -1,
      -1,    -1,    12,    -1,    -1,    -1,   102,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,   127,   128,   129,   130,   131,    -1,    47,   134,   135,
     136,   137,    -1,   139,   140,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,   171,    -1,    -1,    -1,    89,
      -1,    -1,   178,    93,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
     120,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,   169,
      -1,   171,    89,    -1,    -1,    -1,    93,    -1,   178,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,   171,    -1,    89,    -1,    -1,    -1,
      93,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,   125,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    72,    -1,   167,   168,   169,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,   169,
      -1,    89,    -1,    -1,    -1,    93,    -1,    12,   178,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,   169,    -1,   171,    89,    -1,    -1,    -1,    93,    -1,
     178,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,   171,    -1,    89,    -1,
      -1,    -1,    93,   178,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
     171,    89,    -1,    -1,    -1,    93,    12,   178,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,   169,    -1,    89,    -1,    -1,    -1,    93,    -1,    12,
     178,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,   171,    89,    -1,    -1,    -1,
      93,    12,   178,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,   167,   168,   169,    -1,    89,    -1,
      -1,    -1,    93,    12,    -1,   178,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
      89,    -1,    -1,    -1,    93,    -1,    12,   178,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,   167,   168,
     169,    -1,   171,    89,    -1,    -1,    -1,    93,    -1,   178,
      12,    -1,    -1,    -1,    -1,    -1,   102,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,   171,    -1,    89,    -1,    -1,
      -1,    93,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,    31,   125,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    72,    -1,   167,   168,   169,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,   178,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    93,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,   167,   168,
     169,    -1,    89,    -1,    -1,    -1,    93,    12,    13,   178,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,    89,    -1,    -1,    -1,    93,   176,
      12,   178,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,    -1,    89,    -1,    -1,
      -1,    93,    -1,   178,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,   171,
      -1,    89,    -1,    -1,    -1,    93,   178,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,
      -1,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,   166,   167,
     168,   169,    -1,    -1,    89,    -1,    -1,    -1,    93,    12,
     178,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,    89,    -1,    -1,    -1,
      93,    12,    -1,   178,    -1,    -1,    -1,    -1,    19,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,   167,   168,   169,    -1,    89,    -1,
      -1,    -1,    93,    12,    13,   178,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
      89,    -1,    -1,   174,    93,    12,    -1,   178,    -1,    -1,
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
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    -1,
     167,   168,   169,    -1,    89,    -1,    -1,    -1,    93,    12,
      -1,   178,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,   166,   167,   168,   169,    -1,    89,    -1,    -1,    -1,
      93,    12,    -1,   178,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      89,    -1,    -1,   174,    93,    12,    -1,   178,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,   167,   168,
     169,    -1,    89,    -1,    -1,   174,    93,    12,    13,   178,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,    -1,
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
      93,    12,    -1,   178,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,   167,   168,   169,    -1,    89,    -1,
      -1,   174,    93,    12,    -1,   178,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    -1,   167,   168,   169,    -1,
      89,    -1,    -1,    -1,    93,    12,    -1,   178,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     167,   168,   169,    -1,    89,    -1,    -1,    -1,    93,   176,
      12,   178,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,   167,   168,   169,    -1,    -1,    89,    -1,    -1,
      -1,    93,    12,   178,    -1,    -1,    -1,    -1,    -1,    19,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,    89,
      -1,    -1,    -1,    93,    12,    13,   178,    -1,    -1,    -1,
      -1,    19,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,   169,
      -1,    89,    -1,    -1,    -1,    93,    -1,    -1,   178,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    -1,   145,   146,   147,
      60,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
     178,    -1,    -1,    93,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     178,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,   169,    -1,    89,    -1,    -1,    -1,    93,
      -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,   142,   143,
      50,   145,   146,   147,    -1,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    31,   167,   168,   169,    76,    -1,    78,    -1,
      80,    -1,    82,    -1,   178,    85,    -1,    -1,    88,    22,
      90,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,   109,
      43,    -1,   112,    -1,    -1,   115,    31,    50,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    65,    -1,    93,    -1,    -1,    -1,    -1,    -1,
      73,   141,    -1,    76,    -1,    78,    -1,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    88,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    89,    -1,   109,    -1,    93,   112,
      -1,    -1,   115,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,    -1,   158,
     159,   160,   161,   162,    -1,   164,    -1,    -1,   167,   168,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    -1,
     145,   146,   147,   166,   149,   150,   151,    -1,   171,   154,
     155,   156,    -1,   158,   159,   160,   161,    -1,    -1,   164,
      -1,    22,   167,   168,   169,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    76,    -1,    78,    -1,    -1,
      33,    82,    -1,    -1,    85,    -1,    39,    88,    -1,    90,
      -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,   109,    62,
      -1,   112,    -1,    -1,   115,    -1,    69,    70,    -1,    17,
      18,    -1,    20,    -1,    77,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    87,    33,    -1,    -1,    -1,    -1,
     141,    39,    -1,    96,    97,    -1,    99,    45,   101,    -1,
     103,    49,    -1,   106,    52,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    62,   166,    -1,    -1,    -1,    -1,
     123,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    87,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    99,    -1,   101,    -1,   103,     3,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,   115,   116,    -1,
      17,    18,    -1,    20,    -1,   123,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    17,    18,    -1,    20,    -1,
      77,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    96,
      97,    -1,    99,    45,   101,    -1,   103,    49,    -1,   106,
      52,    -1,    -1,   110,   111,    -1,   113,    -1,    -1,   116,
      62,    -1,    -1,    -1,    -1,    -1,   123,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      17,    18,    -1,    20,    96,    97,    -1,    99,    25,   101,
      -1,   103,    -1,    -1,   106,    -1,    33,    -1,   110,    -1,
      -1,   113,    39,    -1,   116,    -1,    -1,    -1,    45,    -1,
      -1,   123,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    17,    18,    -1,    20,    -1,
      77,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    96,
      97,    -1,    99,    45,   101,    -1,   103,    49,    -1,   106,
      52,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      62,    -1,    -1,    -1,    -1,    -1,   123,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    99,    -1,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,   123
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
     116,   119,   121,   123,   125,   141,   142,   143,   144,   145,
     146,   151,   160,   163,   164,   165,   166,   169,   171,   173,
     175,   178,   185,   186,   187,   188,   189,   190,   193,   194,
     195,   196,   201,   202,   203,   205,   206,   207,   212,   213,
     217,   218,   222,   224,   227,   228,   231,   232,   233,   234,
     235,   236,   239,   240,   242,   244,   247,   248,   249,   250,
     251,   255,   256,   261,   262,   263,   264,   267,   268,   273,
     274,   276,   277,   282,   286,   287,   289,   290,   312,   317,
     318,   322,   323,   344,   345,   346,   347,   348,   349,   350,
     358,   359,   360,   361,   362,   363,   365,   368,   369,   370,
     371,   372,   373,   374,   375,   377,   378,   379,   380,   381,
     166,    22,    35,    40,    41,    44,    55,    88,   101,   171,
     175,   247,   274,   344,   349,   359,   360,   365,   368,   370,
     371,   120,   351,   352,     3,   219,   365,   351,   365,   109,
     324,    90,   219,   187,   338,   365,   187,   173,     3,    17,
      18,    20,    25,    33,    39,    45,    49,    52,    62,    69,
      70,    77,    87,    96,    97,    99,   101,   103,   106,   110,
     113,   116,   123,   220,   221,   223,    11,    78,   122,   241,
     365,   241,   365,   241,   365,    27,   115,   243,   365,    82,
      85,   203,   173,   221,   221,   221,   173,   221,   325,   326,
      32,   207,   226,   365,   259,   260,   365,   365,    18,    77,
      96,   113,   365,   365,   365,     8,   173,   230,   229,    27,
      33,    47,    49,    51,    75,    78,    90,    97,   101,   109,
     186,   225,   278,   279,   280,   303,   304,   305,   330,   335,
     365,   338,   107,   108,   166,   282,   283,   364,   365,   367,
     365,   226,   365,   365,   365,   100,   173,   187,   365,   365,
     189,   207,   189,   207,   365,   243,   365,   367,     3,   365,
     365,   365,   365,   365,     1,   172,   185,   208,   338,   111,
     152,   339,   340,   367,   176,   241,   338,   365,   376,   365,
      80,   187,    22,    35,    38,    88,   171,   190,   191,   192,
     203,   207,   195,     8,   150,   197,   171,    46,    84,   114,
     204,    26,   323,   365,     8,   263,   365,   366,    55,   147,
     265,   221,     1,   194,   221,   269,   272,   173,   298,    53,
      73,    83,   307,    27,    75,    78,    90,   109,   308,    27,
      78,    90,   109,   306,   221,   319,   320,   325,   165,   166,
     365,    12,    19,    31,    89,    93,   125,   142,   143,   145,
     146,   147,   149,   150,   151,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   167,   168,   169,
     178,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   170,   294,   173,   175,
      89,    93,   365,   365,   365,   221,   338,    55,   173,   187,
     166,   207,    47,   351,   322,   166,   148,   166,   119,   222,
     341,   342,   343,   367,   171,   221,   173,   226,    32,    47,
     226,   120,   226,   354,    32,    47,   226,   354,   226,   354,
      47,   226,   354,   221,   221,   102,   207,   102,   126,   207,
     294,   204,   341,   173,   173,   207,   187,   111,   173,   221,
     327,   328,     1,   147,   334,    47,   148,   187,   226,   148,
     226,    13,   173,   173,   226,   341,   231,   231,    47,    90,
     304,   305,   174,   148,   111,   173,   221,   302,   147,   166,
     365,   365,   124,   284,   166,   171,   226,   173,   341,   166,
     252,   252,   226,   226,   166,   172,   172,   185,   148,   172,
     365,   148,   174,   148,   174,   365,   176,   354,    47,   148,
     176,   354,   124,   148,   176,     8,    40,    41,   175,   240,
       3,   173,   198,     1,   172,   208,   215,   216,   365,   210,
     365,    65,    36,    72,   166,   263,   265,   109,   237,   287,
     221,   338,   171,   172,   272,   126,   148,   172,   174,   299,
     301,   303,   308,    90,     1,   147,   332,   333,    90,     1,
       3,    12,    17,    19,    20,    25,    45,    52,    54,    62,
      70,    87,    99,   103,   110,   116,   123,   142,   143,   144,
     145,   146,   147,   149,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   164,   167,   168,   169,   170,   173,
     221,   291,   292,   293,   294,   344,   126,   321,   148,   166,
     166,   365,   365,   365,   241,   365,   241,   365,   365,   365,
     365,   365,   365,   365,     3,    20,    33,    62,   103,   109,
     222,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,    68,   367,
     367,   367,   367,   367,   341,   341,   241,   365,   241,   365,
      32,    47,    32,    47,   102,   173,    47,   176,   221,    27,
      47,    90,   115,   353,   356,   357,   365,   381,   241,   365,
     226,   325,   365,   365,   126,   174,   148,    47,   338,    44,
     365,   241,   365,   173,   226,    44,   365,   241,   365,   226,
     226,   241,   365,   226,   126,   126,   187,    34,   187,   365,
      34,   365,    65,   174,   342,   221,   245,   246,   328,   148,
     174,   225,   365,   126,   329,   365,   326,   259,   221,   322,
     365,   365,   174,   302,   308,   280,   328,   147,   336,   337,
     335,   285,   206,     1,   257,   343,   174,    21,   253,   172,
     174,   174,   339,   174,   339,   187,   176,   241,   365,   176,
     187,   365,   176,   365,   176,   365,   365,   365,   338,   197,
     174,   199,   200,   343,   172,   172,   148,   166,    13,   150,
     148,   166,    13,    36,    72,   221,   142,   143,   144,   145,
     146,   160,   164,   169,   209,   293,   294,   295,   365,   209,
     211,   265,   171,   238,   322,   166,   173,     1,   266,   365,
     270,   271,   148,   174,   334,     1,   225,   330,   331,   105,
     309,   173,   297,   365,   142,   150,   297,   297,   365,   320,
     173,   175,   166,   166,   166,   166,   166,   166,   174,   176,
      44,   241,   365,    44,   241,   365,   342,   241,   365,   173,
      47,    90,   148,   174,    17,    20,    25,    45,    52,    62,
      70,    87,    99,   110,   116,   344,    89,    89,   351,   351,
     166,   166,   367,   343,   365,   174,   365,    32,   226,    32,
     226,   355,   356,   365,    32,   226,   354,    32,   226,   354,
     226,   354,   226,   354,   365,   365,    34,   187,    34,    34,
     187,   102,   207,   221,   174,   148,   174,   174,   327,   334,
      68,   367,   221,   174,   174,   337,   147,   281,   174,   335,
     152,   296,   329,   365,   172,    74,   117,   172,   258,   174,
     173,   207,   221,   254,   187,   176,   354,   176,   354,   187,
     124,    47,    47,    47,   176,   148,   174,   215,   222,    17,
      18,    20,    25,    45,    49,    52,    70,    77,    87,    96,
      97,    99,   101,   110,   113,   116,   171,   214,   295,   365,
     111,   365,   209,   211,   148,   166,    13,   166,   171,   266,
     319,   325,   342,   172,    82,    85,   172,   186,   194,   228,
     272,   194,   301,   309,    60,   118,   313,   299,   300,   174,
     292,   294,   174,   176,   365,    32,    32,   365,    32,    32,
     174,   176,   176,   342,   356,   334,   344,   344,   226,   226,
     226,   102,    44,   365,    44,   365,   148,   174,   102,    44,
     365,   226,    44,   365,   226,   226,   226,   187,   187,   365,
     187,    34,   166,   166,   246,   207,   329,   173,   173,   296,
     329,   330,   309,   337,   365,    32,   187,   338,   254,   147,
     207,    44,   187,   365,   176,    44,   187,   365,   176,   365,
     241,   365,   241,   365,   241,   365,   200,   209,    13,    36,
      72,    36,    72,   166,   166,   295,   365,   365,   266,   172,
     166,   166,   174,   194,   228,   228,   272,   313,     3,    92,
     103,   314,   315,   316,   365,   288,   174,   297,   297,   102,
      44,    44,   102,    44,    44,    44,    44,   174,   329,   365,
     365,   365,   356,   365,   365,   365,    34,   187,   341,   341,
     296,   329,   187,   226,   174,   365,   365,   187,   365,   187,
     176,   176,   172,   111,   365,   209,   211,   209,   211,    13,
     172,   166,   228,   275,   316,   118,   148,   126,   153,   155,
     156,   158,   159,    60,    32,   166,   206,   227,   310,   311,
     365,   365,   365,   365,   365,   365,   102,   102,   102,   102,
     187,   174,   174,   207,   102,   102,   166,   166,   166,   166,
     365,   311,   365,   315,   316,   316,   316,   316,   316,   316,
     314,   185,   102,   102,   102,   102,   102,   102,   365,   365,
     365,   365,   165,   165,   365,   365
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
     220,   220,   221,   221,   222,   222,   222,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   225,   225,
     225,   225,   226,   226,   227,   227,   228,   228,   229,   228,
     230,   228,   231,   231,   231,   231,   231,   231,   231,   232,
     232,   232,   232,   233,   234,   234,   235,   236,   236,   236,
     237,   236,   238,   236,   239,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     241,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   243,   243,   244,   244,   245,   245,   246,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   248,   248,   248,   248,   248,   248,   249,
     249,   249,   250,   250,   250,   251,   251,   251,   251,   252,
     252,   253,   253,   253,   254,   254,   255,   256,   256,   257,
     257,   258,   258,   258,   259,   259,   259,   260,   260,   261,
     262,   262,   263,   264,   264,   264,   265,   265,   266,   266,
     266,   266,   266,   267,   267,   268,   269,   269,   270,   269,
     269,   271,   269,   272,   272,   273,   275,   274,   276,   277,
     277,   277,   278,   278,   279,   279,   280,   280,   280,   281,
     281,   282,   284,   283,   285,   283,   286,   288,   287,   289,
     289,   289,   289,   289,   290,   291,   291,   292,   292,   292,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   295,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   300,   300,   301,
     302,   302,   303,   303,   303,   303,   303,   303,   304,   304,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   306,
     306,   306,   306,   306,   306,   307,   307,   307,   308,   308,
     308,   308,   308,   308,   308,   309,   309,   310,   310,   311,
     311,   311,   312,   313,   313,   313,   313,   313,   314,   314,
     315,   315,   315,   315,   315,   315,   315,   316,   316,   317,
     318,   318,   319,   319,   320,   321,   321,   322,   322,   322,
     322,   322,   324,   323,   323,   325,   325,   326,   326,   327,
     327,   327,   328,   328,   328,   329,   329,   329,   330,   331,
     331,   331,   332,   332,   333,   333,   334,   334,   334,   334,
     335,   335,   336,   337,   337,   338,   338,   339,   339,   340,
     340,   341,   341,   342,   342,   343,   343,   344,   344,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   347,   347,   347,   347,   347,   347,   347,
     348,   349,   350,   350,   350,   350,   350,   350,   350,   351,
     351,   352,   353,   353,   354,   355,   355,   356,   356,   356,
     357,   357,   357,   357,   357,   357,   358,   358,   358,   358,
     358,   359,   359,   359,   359,   359,   360,   361,   361,   361,
     361,   361,   361,   362,   363,   364,   364,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   366,   366,   367,   367,   367,   368,
     368,   368,   368,   369,   369,   369,   369,   369,   370,   370,
     370,   371,   371,   371,   371,   371,   371,   372,   372,   372,
     372,   373,   373,   374,   374,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   376,   376,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   378,   378,   378,   378,   378,   378,   378,
     379,   379,   379,   379,   380,   380,   380,   380,   381,   381,
     381,   381,   381,   381,   381
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
       1,     1,     2,     1,     2,     3,     1,     1,     0,     3,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     5,     2,     1,     1,     1,     1,     6,     7,     3,
       0,     6,     0,     6,     2,     5,     3,     3,     6,     6,
       4,     5,     5,     3,     3,     6,     5,     6,     5,     6,
       3,     4,     3,     4,     5,     6,     5,     6,     3,     4,
       3,     4,     6,     7,     6,     7,     4,     5,     4,     5,
       4,     4,     3,     6,     5,     4,     3,     6,     5,     6,
       5,     8,     7,     4,     4,     6,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       4,     7,     5,     3,     6,     2,     2,     3,     3,     0,
       2,     2,     3,     5,     1,     3,     3,     5,     5,     0,
       2,     3,     2,     3,     4,     3,     1,     1,     3,     3,
       5,     5,     2,     1,     1,     1,     0,     2,     0,     2,
       3,     3,     4,     3,     3,     3,     1,     2,     0,     4,
       2,     0,     5,     1,     3,     1,     0,     8,     0,     1,
       1,     1,     0,     1,     1,     3,     1,     3,     1,     0,
       2,     6,     0,     3,     0,     4,     1,     0,     7,     4,
       4,     6,     6,     4,     2,     1,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     3,     2,     3,     1,     3,     0,     1,     1,
       1,     1,     4,     5,     4,     5,     6,     6,     0,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     0,     1,     1,     1,     1,
       2,     1,     1,     0,     2,     2,     4,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     3,
       1,     2,     1,     3,     2,     0,     2,     1,     2,     1,
       1,     1,     0,     5,     3,     1,     3,     3,     5,     1,
       1,     3,     1,     2,     3,     0,     2,     2,     1,     1,
       1,     1,     2,     1,     0,     1,     0,     2,     2,     1,
       1,     1,     2,     0,     1,     1,     3,     1,     1,     3,
       3,     0,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     4,     4,     5,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     6,     6,     4,     9,     9,     7,     6,     6,     4,
       9,     9,     7,     2,     3,     4,     6,     6,     9,     9,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     4,     1,     3,     4,     1,     3,     4,     3,     3,
       1,     1,     2,     1,     2,     1,     1,     2,     2,     2,
       2,     2,     8,     8,     9,     9,     4,     3,     3,     2,
       2,     2,     1,     3,     4,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     4,     4,
       4,     3,     3,     3,     3,     5,     5,     3,     4,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     4,     3,     4,     3,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1
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
#line 6357 "bison-chpl-lib.cpp"
    break;

  case 3: /* toplevel_stmt_ls: %empty  */
#line 642 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList(); }
#line 6363 "bison-chpl-lib.cpp"
    break;

  case 4: /* toplevel_stmt_ls: toplevel_stmt_ls toplevel_stmt  */
#line 643 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 6369 "bison-chpl-lib.cpp"
    break;

  case 6: /* toplevel_stmt: pragma_ls stmt  */
#line 650 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 6377 "bison-chpl-lib.cpp"
    break;

  case 7: /* pragma_ls: TPRAGMA STRINGLITERAL  */
#line 658 "chpl.ypp"
  {
    context->notePragma((yyloc), (yyvsp[0].expr));
  }
#line 6385 "bison-chpl-lib.cpp"
    break;

  case 8: /* pragma_ls: pragma_ls TPRAGMA STRINGLITERAL  */
#line 662 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-1]), (yylsp[0]));
    context->notePragma(loc, (yyvsp[0].expr));
  }
#line 6394 "bison-chpl-lib.cpp"
    break;

  case 9: /* stmt: attribute_group attribute_receiver  */
#line 672 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6402 "bison-chpl-lib.cpp"
    break;

  case 10: /* stmt: stmt_base  */
#line 677 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6410 "bison-chpl-lib.cpp"
    break;

  case 12: /* stmt_base: decl_base  */
#line 684 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6416 "bison-chpl-lib.cpp"
    break;

  case 13: /* stmt_base: include_module_stmt  */
#line 685 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6422 "bison-chpl-lib.cpp"
    break;

  case 14: /* stmt_base: block_stmt  */
#line 686 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6428 "bison-chpl-lib.cpp"
    break;

  case 15: /* stmt_base: use_stmt  */
#line 687 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6434 "bison-chpl-lib.cpp"
    break;

  case 16: /* stmt_base: import_stmt  */
#line 688 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6440 "bison-chpl-lib.cpp"
    break;

  case 17: /* stmt_base: require_stmt  */
#line 689 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6446 "bison-chpl-lib.cpp"
    break;

  case 18: /* stmt_base: extern_block_stmt  */
#line 690 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6452 "bison-chpl-lib.cpp"
    break;

  case 19: /* stmt_base: implements_stmt  */
#line 691 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6458 "bison-chpl-lib.cpp"
    break;

  case 20: /* stmt_base: interface_stmt  */
#line 692 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6464 "bison-chpl-lib.cpp"
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
#line 6481 "bison-chpl-lib.cpp"
    break;

  case 22: /* stmt_base: try_stmt  */
#line 706 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyloc), (yyvsp[0].commentsAndStmt)); }
#line 6487 "bison-chpl-lib.cpp"
    break;

  case 23: /* stmt_base: return_stmt  */
#line 707 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6493 "bison-chpl-lib.cpp"
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
#line 6506 "bison-chpl-lib.cpp"
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
#line 6519 "bison-chpl-lib.cpp"
    break;

  case 26: /* stmt_base: TLABEL ident_def stmt  */
#line 727 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildLabelStmt((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].commentsAndStmt));
  }
#line 6527 "bison-chpl-lib.cpp"
    break;

  case 27: /* stmt_base: TYIELD opt_try_expr TSEMI  */
#line 731 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Yield::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6538 "bison-chpl-lib.cpp"
    break;

  case 28: /* stmt_base: error TSEMI  */
#line 738 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = STMT((yyloc), ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
    context->resetDeclStateOnError();
  }
#line 6547 "bison-chpl-lib.cpp"
    break;

  case 29: /* tryable_stmt: assignment_stmt  */
#line 745 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6553 "bison-chpl-lib.cpp"
    break;

  case 30: /* tryable_stmt: if_stmt  */
#line 746 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6559 "bison-chpl-lib.cpp"
    break;

  case 31: /* tryable_stmt: loop_stmt  */
#line 747 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6565 "bison-chpl-lib.cpp"
    break;

  case 32: /* tryable_stmt: select_stmt  */
#line 748 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6571 "bison-chpl-lib.cpp"
    break;

  case 33: /* tryable_stmt: manage_stmt  */
#line 749 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6577 "bison-chpl-lib.cpp"
    break;

  case 34: /* tryable_stmt: stmt_level_expr TSEMI  */
#line 750 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt(STMT((yyloc),(yyvsp[-1].expr))); }
#line 6583 "bison-chpl-lib.cpp"
    break;

  case 35: /* tryable_stmt: throw_stmt  */
#line 751 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6589 "bison-chpl-lib.cpp"
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
#line 6607 "bison-chpl-lib.cpp"
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
#line 6626 "bison-chpl-lib.cpp"
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
#line 6638 "bison-chpl-lib.cpp"
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
#line 6654 "bison-chpl-lib.cpp"
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
#line 6669 "bison-chpl-lib.cpp"
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
#line 6685 "bison-chpl-lib.cpp"
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
#line 6701 "bison-chpl-lib.cpp"
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
#line 6716 "bison-chpl-lib.cpp"
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
#line 6733 "bison-chpl-lib.cpp"
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
#line 6745 "bison-chpl-lib.cpp"
    break;

  case 48: /* attribute_receiver: collect_attributes loop_stmt  */
#line 878 "chpl.ypp"
                               { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6751 "bison-chpl-lib.cpp"
    break;

  case 54: /* attribute_decl_stmt: attribute_decl_begin opt_attribute_decl_toolspace opt_attribute_actuals  */
#line 894 "chpl.ypp"
 {
  context->noteAttribute((yylsp[-2]), (yyvsp[-2].expr), true, (yyvsp[-1].exprList), (yyvsp[0].maybeNamedActualList));
 }
#line 6759 "bison-chpl-lib.cpp"
    break;

  case 55: /* attribute_decl_stmt: attribute_decl_begin opt_attribute_decl_toolspace  */
#line 898 "chpl.ypp"
 {
  // this allows us to distinguish between @attribute() and @attribute
  // but should not be needed once `@unstable "msg"` is deprecated and gone
  auto lst = new MaybeNamedActualList();
  context->noteAttribute((yylsp[-1]), (yyvsp[-1].expr), false, (yyvsp[0].exprList), lst);
 }
#line 6770 "bison-chpl-lib.cpp"
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
#line 6783 "bison-chpl-lib.cpp"
    break;

  case 57: /* attribute_decl_begin: TATMARK TIDENT  */
#line 917 "chpl.ypp"
  {
    auto ident = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr));
    (yyval.expr) = ident;
  }
#line 6792 "bison-chpl-lib.cpp"
    break;

  case 58: /* opt_attribute_decl_toolspace: %empty  */
#line 924 "chpl.ypp"
  {
    (yyval.exprList)=context->makeList();
  }
#line 6800 "bison-chpl-lib.cpp"
    break;

  case 59: /* opt_attribute_decl_toolspace: TDOT TIDENT opt_attribute_decl_toolspace  */
#line 928 "chpl.ypp"
  {
    // had to create this as a list first, otherwise they get inserted in the
    // wrong order.
    auto lst = context->makeList(context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr)));
    (yyval.exprList) = context->appendList(lst, (yyvsp[0].exprList));
  }
#line 6811 "bison-chpl-lib.cpp"
    break;

  case 60: /* opt_attribute_actuals: TLP TRP  */
#line 938 "chpl.ypp"
  { (yyval.maybeNamedActualList)=new MaybeNamedActualList(); }
#line 6817 "bison-chpl-lib.cpp"
    break;

  case 61: /* opt_attribute_actuals: TLP attribute_actuals_ls TRP  */
#line 940 "chpl.ypp"
  {
    (yyval.maybeNamedActualList) = (yyvsp[-1].maybeNamedActualList);
  }
#line 6825 "bison-chpl-lib.cpp"
    break;

  case 62: /* attribute_actuals_ls: attribute_actual  */
#line 947 "chpl.ypp"
  { auto lst = new MaybeNamedActualList();
    lst->push_back((yyvsp[0].maybeNamedActual));
    (yyval.maybeNamedActualList) = lst;
  }
#line 6834 "bison-chpl-lib.cpp"
    break;

  case 63: /* attribute_actuals_ls: attribute_actuals_ls TCOMMA attribute_actual  */
#line 952 "chpl.ypp"
  {
      MaybeNamedActualList* lst = (yyvsp[-2].maybeNamedActualList);
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
  }
#line 6844 "bison-chpl-lib.cpp"
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
#line 6865 "bison-chpl-lib.cpp"
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
#line 6884 "bison-chpl-lib.cpp"
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
#line 6903 "bison-chpl-lib.cpp"
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
#line 6920 "bison-chpl-lib.cpp"
    break;

  case 69: /* opt_access_control: %empty  */
#line 1030 "chpl.ypp"
           { (yyval.visibilityTag) = context->noteVisibility(Decl::DEFAULT_VISIBILITY); }
#line 6926 "bison-chpl-lib.cpp"
    break;

  case 70: /* opt_access_control: TPUBLIC  */
#line 1031 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PUBLIC); }
#line 6933 "bison-chpl-lib.cpp"
    break;

  case 71: /* opt_access_control: TPRIVATE  */
#line 1033 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PRIVATE); }
#line 6940 "bison-chpl-lib.cpp"
    break;

  case 72: /* opt_prototype: %empty  */
#line 1038 "chpl.ypp"
             { (yyval.moduleKind) = Module::DEFAULT_MODULE_KIND; }
#line 6946 "bison-chpl-lib.cpp"
    break;

  case 73: /* opt_prototype: TPROTOTYPE  */
#line 1039 "chpl.ypp"
             { context->noteDeclStartLoc((yylsp[0]));
               (yyval.moduleKind) = Module::PROTOTYPE;  }
#line 6953 "bison-chpl-lib.cpp"
    break;

  case 74: /* include_module_stmt: TINCLUDE opt_access_control opt_prototype TMODULE ident_def TSEMI  */
#line 1045 "chpl.ypp"
  {
    auto node = Include::build(BUILDER, LOC((yyloc)), context->visibility, (yyvsp[-3].moduleKind), (yyvsp[-1].uniqueStr));
    (yyval.commentsAndStmt) = STMT((yyloc), node.release());
    context->visibility = Decl::DEFAULT_VISIBILITY;
  }
#line 6963 "bison-chpl-lib.cpp"
    break;

  case 75: /* block_stmt_body: TLCBR TRCBR  */
#line 1063 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-1]), (yylsp[0]), nullptr);
  }
#line 6971 "bison-chpl-lib.cpp"
    break;

  case 76: /* block_stmt_body: TLCBR stmt_ls TRCBR  */
#line 1067 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-2]), (yylsp[0]), (yyvsp[-1].exprList));
  }
#line 6979 "bison-chpl-lib.cpp"
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
#line 6991 "bison-chpl-lib.cpp"
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
#line 7010 "bison-chpl-lib.cpp"
    break;

  case 79: /* stmt_ls: toplevel_stmt  */
#line 1100 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt)); }
#line 7016 "bison-chpl-lib.cpp"
    break;

  case 80: /* stmt_ls: stmt_ls toplevel_stmt  */
#line 1101 "chpl.ypp"
                                       { context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 7022 "bison-chpl-lib.cpp"
    break;

  case 81: /* renames_ls: expr  */
#line 1106 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].expr));
  }
#line 7030 "bison-chpl-lib.cpp"
    break;

  case 82: /* renames_ls: all_op_name  */
#line 1110 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 7038 "bison-chpl-lib.cpp"
    break;

  case 83: /* renames_ls: expr TAS expr  */
#line 1114 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->makeList(as);
  }
#line 7047 "bison-chpl-lib.cpp"
    break;

  case 84: /* renames_ls: renames_ls TCOMMA expr  */
#line 1119 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 7055 "bison-chpl-lib.cpp"
    break;

  case 85: /* renames_ls: renames_ls TCOMMA all_op_name  */
#line 1123 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 7063 "bison-chpl-lib.cpp"
    break;

  case 86: /* renames_ls: renames_ls TCOMMA expr TAS expr  */
#line 1127 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), as);
  }
#line 7072 "bison-chpl-lib.cpp"
    break;

  case 87: /* use_renames_ls: expr  */
#line 1137 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 7081 "bison-chpl-lib.cpp"
    break;

  case 88: /* use_renames_ls: expr TAS expr  */
#line 1142 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 7091 "bison-chpl-lib.cpp"
    break;

  case 89: /* use_renames_ls: expr TAS TUNDERSCORE  */
#line 1148 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as), false);
    (yyval.exprList) = context->makeList(node);
  }
#line 7102 "bison-chpl-lib.cpp"
    break;

  case 90: /* use_renames_ls: use_renames_ls TCOMMA expr  */
#line 1155 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yylsp[0]), toOwned((yyvsp[0].expr)), false);
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), node);
  }
#line 7111 "bison-chpl-lib.cpp"
    break;

  case 91: /* use_renames_ls: use_renames_ls TCOMMA expr TAS expr  */
#line 1160 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto locVisClause = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildVisibilityClause(locVisClause, toOwned(as), false);
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 7122 "bison-chpl-lib.cpp"
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
#line 7134 "bison-chpl-lib.cpp"
    break;

  case 93: /* opt_only_ls: %empty  */
#line 1177 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 7140 "bison-chpl-lib.cpp"
    break;

  case 94: /* opt_only_ls: renames_ls  */
#line 1178 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 7146 "bison-chpl-lib.cpp"
    break;

  case 95: /* use_stmt: opt_access_control TUSE use_renames_ls TSEMI  */
#line 1183 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildMultiUseStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7155 "bison-chpl-lib.cpp"
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
#line 7167 "bison-chpl-lib.cpp"
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
#line 7180 "bison-chpl-lib.cpp"
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
#line 7194 "bison-chpl-lib.cpp"
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
#line 7206 "bison-chpl-lib.cpp"
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
#line 7219 "bison-chpl-lib.cpp"
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
#line 7233 "bison-chpl-lib.cpp"
    break;

  case 102: /* import_stmt: opt_access_control TIMPORT import_ls TSEMI  */
#line 1245 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImportStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7242 "bison-chpl-lib.cpp"
    break;

  case 120: /* import_expr: expr  */
#line 1281 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)), true);
  }
#line 7250 "bison-chpl-lib.cpp"
    break;

  case 121: /* import_expr: expr TDOT all_op_name  */
#line 1285 "chpl.ypp"
  {
    auto dot = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release();
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(dot), true);
  }
#line 7259 "bison-chpl-lib.cpp"
    break;

  case 122: /* import_expr: expr TDOT import_internal_type_ident  */
#line 1290 "chpl.ypp"
  {
    auto dot = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release();
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(dot), true);
  }
#line 7268 "bison-chpl-lib.cpp"
    break;

  case 123: /* import_expr: expr TAS ident_use  */
#line 1295 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(as), true);
  }
#line 7278 "bison-chpl-lib.cpp"
    break;

  case 124: /* import_expr: expr TDOT TLCBR renames_ls TRCBR  */
#line 1301 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[-4].expr)),
                                        VisibilityClause::BRACES,
                                        context->consumeList((yyvsp[-1].exprList)), true);
  }
#line 7288 "bison-chpl-lib.cpp"
    break;

  case 125: /* import_ls: import_expr  */
#line 1309 "chpl.ypp"
                                { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 7294 "bison-chpl-lib.cpp"
    break;

  case 126: /* import_ls: import_ls TCOMMA import_expr  */
#line 1310 "chpl.ypp"
                                { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 7300 "bison-chpl-lib.cpp"
    break;

  case 127: /* require_stmt: TREQUIRE expr_ls TSEMI  */
#line 1315 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Require::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 7310 "bison-chpl-lib.cpp"
    break;

  case 128: /* assignment_stmt: lhs_expr assignop_ident opt_try_expr TSEMI  */
#line 1324 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7318 "bison-chpl-lib.cpp"
    break;

  case 129: /* assignment_stmt: lhs_expr TSWAP opt_try_expr TSEMI  */
#line 1328 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7326 "bison-chpl-lib.cpp"
    break;

  case 130: /* assignment_stmt: lhs_expr TASSIGNREDUCE opt_try_expr TSEMI  */
#line 1332 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7334 "bison-chpl-lib.cpp"
    break;

  case 131: /* assignment_stmt: lhs_expr TASSIGNLAND opt_try_expr TSEMI  */
#line 1336 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7342 "bison-chpl-lib.cpp"
    break;

  case 132: /* assignment_stmt: lhs_expr TASSIGNLOR opt_try_expr TSEMI  */
#line 1340 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7350 "bison-chpl-lib.cpp"
    break;

  case 133: /* assignment_stmt: lhs_expr TASSIGN TNOINIT TSEMI  */
#line 1344 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr))));
    }
#line 7358 "bison-chpl-lib.cpp"
    break;

  case 134: /* opt_label_ident: %empty  */
#line 1352 "chpl.ypp"
         { (yyval.uniqueStr) = STR(""); }
#line 7364 "bison-chpl-lib.cpp"
    break;

  case 135: /* opt_label_ident: TIDENT  */
#line 1353 "chpl.ypp"
         { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7370 "bison-chpl-lib.cpp"
    break;

  case 144: /* ident_use: TIDENT  */
#line 1379 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7376 "bison-chpl-lib.cpp"
    break;

  case 145: /* ident_use: TTHIS  */
#line 1380 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7382 "bison-chpl-lib.cpp"
    break;

  case 146: /* ident_use: TDEINIT  */
#line 1381 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7388 "bison-chpl-lib.cpp"
    break;

  case 166: /* scalar_type: TBOOL  */
#line 1408 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7394 "bison-chpl-lib.cpp"
    break;

  case 167: /* scalar_type: TENUM  */
#line 1409 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7400 "bison-chpl-lib.cpp"
    break;

  case 168: /* scalar_type: TINT  */
#line 1410 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7406 "bison-chpl-lib.cpp"
    break;

  case 169: /* scalar_type: TUINT  */
#line 1411 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7412 "bison-chpl-lib.cpp"
    break;

  case 170: /* scalar_type: TREAL  */
#line 1412 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7418 "bison-chpl-lib.cpp"
    break;

  case 171: /* scalar_type: TIMAG  */
#line 1413 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7424 "bison-chpl-lib.cpp"
    break;

  case 172: /* scalar_type: TCOMPLEX  */
#line 1414 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7430 "bison-chpl-lib.cpp"
    break;

  case 173: /* scalar_type: TBYTES  */
#line 1415 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7436 "bison-chpl-lib.cpp"
    break;

  case 174: /* scalar_type: TSTRING  */
#line 1416 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7442 "bison-chpl-lib.cpp"
    break;

  case 175: /* scalar_type: TLOCALE  */
#line 1417 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7448 "bison-chpl-lib.cpp"
    break;

  case 176: /* scalar_type: TNOTHING  */
#line 1418 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7454 "bison-chpl-lib.cpp"
    break;

  case 177: /* scalar_type: TVOID  */
#line 1419 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7460 "bison-chpl-lib.cpp"
    break;

  case 182: /* do_stmt: TDO stmt  */
#line 1433 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), true }; }
#line 7466 "bison-chpl-lib.cpp"
    break;

  case 183: /* do_stmt: block_stmt  */
#line 1434 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), false }; }
#line 7472 "bison-chpl-lib.cpp"
    break;

  case 184: /* return_stmt: TRETURN TSEMI  */
#line 1439 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-1]));
    auto node = Return::build(BUILDER, LOC((yyloc)), /*value*/ nullptr);
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7483 "bison-chpl-lib.cpp"
    break;

  case 185: /* return_stmt: TRETURN opt_try_expr TSEMI  */
#line 1446 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7494 "bison-chpl-lib.cpp"
    break;

  case 186: /* class_level_stmt: TSEMI  */
#line 1456 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildEmptyStmt((yyloc)));
    }
#line 7502 "bison-chpl-lib.cpp"
    break;

  case 187: /* class_level_stmt: inner_class_level_stmt  */
#line 1460 "chpl.ypp"
    {
      // visibility should be default when inner_class_level_stmt is parsed
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7512 "bison-chpl-lib.cpp"
    break;

  case 188: /* $@1: %empty  */
#line 1465 "chpl.ypp"
          {context->noteDeclStartLoc((yylsp[0]));
           context->noteVisibility(Decl::PUBLIC);}
#line 7519 "bison-chpl-lib.cpp"
    break;

  case 189: /* class_level_stmt: TPUBLIC $@1 inner_class_level_stmt  */
#line 1467 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7528 "bison-chpl-lib.cpp"
    break;

  case 190: /* $@2: %empty  */
#line 1471 "chpl.ypp"
           {context->noteDeclStartLoc((yylsp[0]));
            context->noteVisibility(Decl::PRIVATE);}
#line 7535 "bison-chpl-lib.cpp"
    break;

  case 191: /* class_level_stmt: TPRIVATE $@2 inner_class_level_stmt  */
#line 1473 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7544 "bison-chpl-lib.cpp"
    break;

  case 199: /* forwarding_decl_stmt: forwarding_decl_start expr TSEMI  */
#line 1491 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-2].attributeGroup)), toOwned((yyvsp[-1].expr)),
                                        VisibilityClause::NONE, nullptr);
    }
#line 7553 "bison-chpl-lib.cpp"
    break;

  case 200: /* forwarding_decl_stmt: forwarding_decl_start expr TEXCEPT renames_ls TSEMI  */
#line 1496 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attributeGroup)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::EXCEPT, (yyvsp[-1].exprList));
    }
#line 7562 "bison-chpl-lib.cpp"
    break;

  case 201: /* forwarding_decl_stmt: forwarding_decl_start expr TONLY opt_only_ls TSEMI  */
#line 1501 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attributeGroup)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::ONLY, (yyvsp[-1].exprList));
    }
#line 7571 "bison-chpl-lib.cpp"
    break;

  case 202: /* forwarding_decl_stmt: forwarding_decl_start var_decl_stmt  */
#line 1506 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-1].attributeGroup)), (yyvsp[0].commentsAndStmt));
    }
#line 7579 "bison-chpl-lib.cpp"
    break;

  case 203: /* forwarding_decl_start: TFORWARDING  */
#line 1513 "chpl.ypp"
  {
    (yyval.attributeGroup) = context->buildAttributeGroup((yyloc)).release();
    context->resetAttributeGroupPartsState();
  }
#line 7588 "bison-chpl-lib.cpp"
    break;

  case 204: /* extern_or_export: TEXTERN  */
#line 1520 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXTERN; }
#line 7594 "bison-chpl-lib.cpp"
    break;

  case 205: /* extern_or_export: TEXPORT  */
#line 1521 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXPORT; }
#line 7600 "bison-chpl-lib.cpp"
    break;

  case 206: /* extern_export_decl_stmt_start: extern_or_export  */
#line 1526 "chpl.ypp"
  {
    // Sets the start location only if it is still unset.
    context->noteDeclStartLoc((yylsp[0]));
    (yyval.linkageTag) = context->noteLinkage((yyvsp[0].linkageTag));
  }
#line 7610 "bison-chpl-lib.cpp"
    break;

  case 207: /* extern_export_decl_stmt: extern_export_decl_stmt_start class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1536 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-5]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7619 "bison-chpl-lib.cpp"
    break;

  case 208: /* extern_export_decl_stmt: extern_export_decl_stmt_start STRINGLITERAL class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1542 "chpl.ypp"
  {
    // Set the linkage name since it will be nullptr otherwise.
    (yyvsp[-4].typeDeclParts).linkageName = (yyvsp[-5].expr);
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-6]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7630 "bison-chpl-lib.cpp"
    break;

  case 209: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr fn_decl_stmt  */
#line 1549 "chpl.ypp"
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
#line 7652 "bison-chpl-lib.cpp"
    break;

  case 210: /* $@3: %empty  */
#line 1567 "chpl.ypp"
  {
    context->storeVarDeclLinkageName((yyvsp[0].expr));
  }
#line 7660 "bison-chpl-lib.cpp"
    break;

  case 211: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr $@3 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 1571 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7669 "bison-chpl-lib.cpp"
    break;

  case 212: /* $@4: %empty  */
#line 1576 "chpl.ypp"
  {
    context->storeVarDeclLinkageName((yyvsp[-1].expr));
    context->noteVarDeclKind(Variable::TYPE);
  }
#line 7678 "bison-chpl-lib.cpp"
    break;

  case 213: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr TTYPE $@4 type_alias_decl_stmt_inner_ls TSEMI  */
#line 1581 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7687 "bison-chpl-lib.cpp"
    break;

  case 214: /* extern_block_stmt: TEXTERN EXTERNCODE  */
#line 1589 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildExternBlockStmt((yylsp[-1]), (yyvsp[0].sizedStr));
  }
#line 7695 "bison-chpl-lib.cpp"
    break;

  case 215: /* loop_stmt: TDO stmt TWHILE expr TSEMI  */
#line 1596 "chpl.ypp"
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
#line 7719 "bison-chpl-lib.cpp"
    break;

  case 216: /* loop_stmt: TWHILE expr do_stmt  */
#line 1616 "chpl.ypp"
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
#line 7738 "bison-chpl-lib.cpp"
    break;

  case 217: /* loop_stmt: TWHILE ifvar do_stmt  */
#line 1631 "chpl.ypp"
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
#line 7757 "bison-chpl-lib.cpp"
    break;

  case 218: /* loop_stmt: TCOFORALL expr TIN expr opt_task_intent_ls do_stmt  */
#line 1646 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7765 "bison-chpl-lib.cpp"
    break;

  case 219: /* loop_stmt: TCOFORALL expr TIN zippered_iterator opt_task_intent_ls do_stmt  */
#line 1650 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7773 "bison-chpl-lib.cpp"
    break;

  case 220: /* loop_stmt: TCOFORALL expr opt_task_intent_ls do_stmt  */
#line 1654 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7781 "bison-chpl-lib.cpp"
    break;

  case 221: /* loop_stmt: TFOR expr TIN expr do_stmt  */
#line 1658 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7789 "bison-chpl-lib.cpp"
    break;

  case 222: /* loop_stmt: TFOR expr TIN zippered_iterator do_stmt  */
#line 1662 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7797 "bison-chpl-lib.cpp"
    break;

  case 223: /* loop_stmt: TFOR expr do_stmt  */
#line 1666 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7805 "bison-chpl-lib.cpp"
    break;

  case 224: /* loop_stmt: TFOR zippered_iterator do_stmt  */
#line 1670 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7813 "bison-chpl-lib.cpp"
    break;

  case 225: /* loop_stmt: TFOR TPARAM ident_def TIN expr do_stmt  */
#line 1674 "chpl.ypp"
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
#line 7838 "bison-chpl-lib.cpp"
    break;

  case 226: /* loop_stmt: TFORALL expr TIN expr do_stmt  */
#line 1695 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7846 "bison-chpl-lib.cpp"
    break;

  case 227: /* loop_stmt: TFORALL expr TIN expr forall_intent_clause do_stmt  */
#line 1699 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7854 "bison-chpl-lib.cpp"
    break;

  case 228: /* loop_stmt: TFORALL expr TIN zippered_iterator do_stmt  */
#line 1703 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7862 "bison-chpl-lib.cpp"
    break;

  case 229: /* loop_stmt: TFORALL expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1707 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7870 "bison-chpl-lib.cpp"
    break;

  case 230: /* loop_stmt: TFORALL expr do_stmt  */
#line 1711 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7878 "bison-chpl-lib.cpp"
    break;

  case 231: /* loop_stmt: TFORALL expr forall_intent_clause do_stmt  */
#line 1715 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7886 "bison-chpl-lib.cpp"
    break;

  case 232: /* loop_stmt: TFORALL zippered_iterator do_stmt  */
#line 1719 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7894 "bison-chpl-lib.cpp"
    break;

  case 233: /* loop_stmt: TFORALL zippered_iterator forall_intent_clause do_stmt  */
#line 1723 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7902 "bison-chpl-lib.cpp"
    break;

  case 234: /* loop_stmt: TFOREACH expr TIN expr do_stmt  */
#line 1727 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7910 "bison-chpl-lib.cpp"
    break;

  case 235: /* loop_stmt: TFOREACH expr TIN expr forall_intent_clause do_stmt  */
#line 1731 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7918 "bison-chpl-lib.cpp"
    break;

  case 236: /* loop_stmt: TFOREACH expr TIN zippered_iterator do_stmt  */
#line 1735 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7926 "bison-chpl-lib.cpp"
    break;

  case 237: /* loop_stmt: TFOREACH expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1739 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7934 "bison-chpl-lib.cpp"
    break;

  case 238: /* loop_stmt: TFOREACH expr do_stmt  */
#line 1743 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7942 "bison-chpl-lib.cpp"
    break;

  case 239: /* loop_stmt: TFOREACH expr forall_intent_clause do_stmt  */
#line 1747 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7950 "bison-chpl-lib.cpp"
    break;

  case 240: /* loop_stmt: TFOREACH zippered_iterator do_stmt  */
#line 1751 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7958 "bison-chpl-lib.cpp"
    break;

  case 241: /* loop_stmt: TFOREACH zippered_iterator forall_intent_clause do_stmt  */
#line 1755 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7966 "bison-chpl-lib.cpp"
    break;

  case 242: /* loop_stmt: TLSBR expr_ls TIN expr TRSBR stmt  */
#line 1759 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7974 "bison-chpl-lib.cpp"
    break;

  case 243: /* loop_stmt: TLSBR expr_ls TIN expr forall_intent_clause TRSBR stmt  */
#line 1763 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7982 "bison-chpl-lib.cpp"
    break;

  case 244: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator TRSBR stmt  */
#line 1767 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 7990 "bison-chpl-lib.cpp"
    break;

  case 245: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1771 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 7998 "bison-chpl-lib.cpp"
    break;

  case 246: /* loop_stmt: TLSBR expr_ls TRSBR stmt  */
#line 1775 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-2].exprList), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 8006 "bison-chpl-lib.cpp"
    break;

  case 247: /* loop_stmt: TLSBR expr_ls forall_intent_clause TRSBR stmt  */
#line 1779 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-3].exprList), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 8014 "bison-chpl-lib.cpp"
    break;

  case 248: /* loop_stmt: TLSBR zippered_iterator TRSBR stmt  */
#line 1783 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), iterExprs, nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 8023 "bison-chpl-lib.cpp"
    break;

  case 249: /* loop_stmt: TLSBR zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1788 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), iterExprs, (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 8032 "bison-chpl-lib.cpp"
    break;

  case 250: /* zippered_iterator: TZIP TLP expr_ls TRP  */
#line 1796 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = Zip::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.expr) = node.release();
  }
#line 8042 "bison-chpl-lib.cpp"
    break;

  case 251: /* if_stmt: TIF expr TTHEN stmt  */
#line 1805 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8050 "bison-chpl-lib.cpp"
    break;

  case 252: /* if_stmt: TIF expr block_stmt  */
#line 1809 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8058 "bison-chpl-lib.cpp"
    break;

  case 253: /* if_stmt: TIF expr TTHEN stmt TELSE stmt  */
#line 1813 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8066 "bison-chpl-lib.cpp"
    break;

  case 254: /* if_stmt: TIF expr block_stmt TELSE stmt  */
#line 1817 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8074 "bison-chpl-lib.cpp"
    break;

  case 255: /* if_stmt: TIF ifvar TTHEN stmt  */
#line 1821 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8082 "bison-chpl-lib.cpp"
    break;

  case 256: /* if_stmt: TIF ifvar block_stmt  */
#line 1825 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8090 "bison-chpl-lib.cpp"
    break;

  case 257: /* if_stmt: TIF ifvar TTHEN stmt TELSE stmt  */
#line 1829 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8098 "bison-chpl-lib.cpp"
    break;

  case 258: /* if_stmt: TIF ifvar block_stmt TELSE stmt  */
#line 1833 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8106 "bison-chpl-lib.cpp"
    break;

  case 259: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt  */
#line 1837 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-3]), (yyvsp[-4].expr), (yyvsp[-3].uniqueStr), (yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-1]), op, (yyvsp[0].commentsAndStmt));
  }
#line 8115 "bison-chpl-lib.cpp"
    break;

  case 260: /* if_stmt: TIF expr assignop_ident expr block_stmt  */
#line 1842 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-2]), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[0]), op, (yyvsp[0].commentsAndStmt));
  }
#line 8124 "bison-chpl-lib.cpp"
    break;

  case 261: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt TELSE stmt  */
#line 1847 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-5]), (yyvsp[-6].expr), (yyvsp[-5].uniqueStr), (yyvsp[-4].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-7]), (yylsp[-3]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8133 "bison-chpl-lib.cpp"
    break;

  case 262: /* if_stmt: TIF expr assignop_ident expr block_stmt TELSE stmt  */
#line 1852 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-4]), (yyvsp[-5].expr), (yyvsp[-4].uniqueStr), (yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-6]), (yylsp[-2]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8142 "bison-chpl-lib.cpp"
    break;

  case 263: /* ifvar: TVAR ident_def TASSIGN expr  */
#line 1860 "chpl.ypp"
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
#line 8161 "bison-chpl-lib.cpp"
    break;

  case 264: /* ifvar: TCONST ident_def TASSIGN expr  */
#line 1875 "chpl.ypp"
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
#line 8180 "bison-chpl-lib.cpp"
    break;

  case 265: /* interface_stmt: TINTERFACE ident_def TLP ifc_formal_ls TRP block_stmt  */
#line 1893 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildInterfaceStmt((yyloc), (yyvsp[-4].uniqueStr), (yyvsp[-2].exprList), (yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 8188 "bison-chpl-lib.cpp"
    break;

  case 266: /* interface_stmt: TINTERFACE ident_def block_stmt  */
#line 1897 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildInterfaceStmt((yyloc), (yyvsp[-1].uniqueStr), nullptr, (yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 8196 "bison-chpl-lib.cpp"
    break;

  case 267: /* ifc_formal_ls: ifc_formal  */
#line 1903 "chpl.ypp"
                                  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8202 "bison-chpl-lib.cpp"
    break;

  case 268: /* ifc_formal_ls: ifc_formal_ls TCOMMA ifc_formal  */
#line 1904 "chpl.ypp"
                                  { context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8208 "bison-chpl-lib.cpp"
    break;

  case 269: /* ifc_formal: ident_def  */
#line 1909 "chpl.ypp"
             { (yyval.expr) = context->buildInterfaceFormal((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 8214 "bison-chpl-lib.cpp"
    break;

  case 282: /* implements_type_ident: implements_type_error_ident  */
#line 1927 "chpl.ypp"
  {
    context->syntax((yyloc), "type '%s' cannot implement an interface.", (yyvsp[0].uniqueStr).c_str());
    (yyval.uniqueStr) = (yyvsp[0].uniqueStr);
  }
#line 8223 "bison-chpl-lib.cpp"
    break;

  case 289: /* implements_stmt: TIMPLEMENTS ident_def TLP actual_ls TRP TSEMI  */
#line 1953 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), YLOC2((yylsp[-4]), (yylsp[-1])), (yyvsp[-4].uniqueStr), (yyvsp[-2].maybeNamedActualList));
  }
#line 8231 "bison-chpl-lib.cpp"
    break;

  case 290: /* implements_stmt: implements_type_ident TIMPLEMENTS ident_def TSEMI  */
#line 1957 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), (yylsp[-3]), (yyvsp[-3].uniqueStr), (yylsp[-1]), (yyvsp[-1].uniqueStr), nullptr);
  }
#line 8239 "bison-chpl-lib.cpp"
    break;

  case 291: /* implements_stmt: implements_type_ident TIMPLEMENTS ident_def TLP actual_ls TRP TSEMI  */
#line 1961 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImplementsStmt((yyloc), (yylsp[-6]), (yyvsp[-6].uniqueStr), YLOC2((yylsp[-4]), (yylsp[-1])), (yyvsp[-4].uniqueStr), (yyvsp[-2].maybeNamedActualList));
  }
#line 8247 "bison-chpl-lib.cpp"
    break;

  case 292: /* ifc_constraint: TIMPLEMENTS ident_def TLP actual_ls TRP  */
#line 1968 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), YLOC2((yylsp[-3]), (yylsp[0])), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList));
  }
#line 8255 "bison-chpl-lib.cpp"
    break;

  case 293: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def  */
#line 1972 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yylsp[0]), (yyvsp[0].uniqueStr), nullptr);
  }
#line 8263 "bison-chpl-lib.cpp"
    break;

  case 294: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def TLP actual_ls TRP  */
#line 1976 "chpl.ypp"
  {
    (yyval.expr) = context->buildImplementsConstraint((yyloc), (yylsp[-5]), (yyvsp[-5].uniqueStr), YLOC2((yylsp[-3]), (yylsp[0])), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList));
  }
#line 8271 "bison-chpl-lib.cpp"
    break;

  case 295: /* try_stmt: TTRY tryable_stmt  */
#line 1983 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), false);
  }
#line 8279 "bison-chpl-lib.cpp"
    break;

  case 296: /* try_stmt: TTRYBANG tryable_stmt  */
#line 1987 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), true);
  }
#line 8287 "bison-chpl-lib.cpp"
    break;

  case 297: /* try_stmt: TTRY block_stmt catch_expr_ls  */
#line 1991 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), false);
  }
#line 8295 "bison-chpl-lib.cpp"
    break;

  case 298: /* try_stmt: TTRYBANG block_stmt catch_expr_ls  */
#line 1995 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), true);
  }
#line 8303 "bison-chpl-lib.cpp"
    break;

  case 299: /* catch_expr_ls: %empty  */
#line 2001 "chpl.ypp"
                            { (yyval.exprList) = context->makeList(); }
#line 8309 "bison-chpl-lib.cpp"
    break;

  case 300: /* catch_expr_ls: catch_expr_ls catch_expr  */
#line 2002 "chpl.ypp"
                            { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].expr)); }
#line 8315 "bison-chpl-lib.cpp"
    break;

  case 301: /* catch_expr: TCATCH block_stmt  */
#line 2007 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), nullptr, (yyvsp[0].commentsAndStmt), false);
  }
#line 8323 "bison-chpl-lib.cpp"
    break;

  case 302: /* catch_expr: TCATCH catch_expr_inner block_stmt  */
#line 2011 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt), false);
  }
#line 8331 "bison-chpl-lib.cpp"
    break;

  case 303: /* catch_expr: TCATCH TLP catch_expr_inner TRP block_stmt  */
#line 2015 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt), true);
  }
#line 8339 "bison-chpl-lib.cpp"
    break;

  case 304: /* catch_expr_inner: ident_def  */
#line 2022 "chpl.ypp"
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
#line 8356 "bison-chpl-lib.cpp"
    break;

  case 305: /* catch_expr_inner: ident_def TCOLON expr  */
#line 2035 "chpl.ypp"
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
#line 8373 "bison-chpl-lib.cpp"
    break;

  case 306: /* throw_stmt: TTHROW expr TSEMI  */
#line 2051 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Throw::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8383 "bison-chpl-lib.cpp"
    break;

  case 307: /* select_stmt: TSELECT expr TLCBR when_stmt_ls TRCBR  */
#line 2059 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildSelectStmt((yyloc), toOwned((yyvsp[-3].expr)), (yyvsp[-1].exprList));
  }
#line 8391 "bison-chpl-lib.cpp"
    break;

  case 308: /* select_stmt: TSELECT expr TLCBR error TRCBR  */
#line 2063 "chpl.ypp"
  {
    auto comments = context->gatherComments((yyloc));
    auto node = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8401 "bison-chpl-lib.cpp"
    break;

  case 309: /* when_stmt_ls: %empty  */
#line 2071 "chpl.ypp"
                          { (yyval.exprList) = context->makeList(); }
#line 8407 "bison-chpl-lib.cpp"
    break;

  case 310: /* when_stmt_ls: when_stmt_ls when_stmt  */
#line 2072 "chpl.ypp"
                          { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 8413 "bison-chpl-lib.cpp"
    break;

  case 311: /* when_stmt: TWHEN expr_ls do_stmt  */
#line 2077 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), (yyvsp[-1].exprList), (yyvsp[0].blockOrDo));
  }
#line 8421 "bison-chpl-lib.cpp"
    break;

  case 312: /* when_stmt: TOTHERWISE stmt  */
#line 2081 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=false };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8430 "bison-chpl-lib.cpp"
    break;

  case 313: /* when_stmt: TOTHERWISE TDO stmt  */
#line 2086 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=true };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8439 "bison-chpl-lib.cpp"
    break;

  case 314: /* manager_expr: expr TAS var_decl_type ident_def  */
#line 2094 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-3].expr), (yyvsp[-1].variableKind), (yylsp[0]), (yyvsp[0].uniqueStr));
    context->resetDeclState();
  }
#line 8448 "bison-chpl-lib.cpp"
    break;

  case 315: /* manager_expr: expr TAS ident_def  */
#line 2099 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-2].expr), (yylsp[0]), (yyvsp[0].uniqueStr));
  }
#line 8456 "bison-chpl-lib.cpp"
    break;

  case 316: /* manager_expr: expr  */
#line 2103 "chpl.ypp"
  {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 8464 "bison-chpl-lib.cpp"
    break;

  case 317: /* manager_expr_ls: manager_expr  */
#line 2109 "chpl.ypp"
                                        { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8470 "bison-chpl-lib.cpp"
    break;

  case 318: /* manager_expr_ls: manager_expr_ls TCOMMA manager_expr  */
#line 2110 "chpl.ypp"
                                        { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8476 "bison-chpl-lib.cpp"
    break;

  case 319: /* manage_stmt: TMANAGE manager_expr_ls do_stmt  */
#line 2115 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildManageStmt((yyloc), (yyvsp[-1].exprList), (yylsp[0]), (yyvsp[0].blockOrDo));
  }
#line 8484 "bison-chpl-lib.cpp"
    break;

  case 320: /* class_decl_stmt: class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 2124 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8493 "bison-chpl-lib.cpp"
    break;

  case 321: /* class_decl_stmt: class_start opt_inherit TLCBR error TRCBR  */
#line 2129 "chpl.ypp"
    {
      auto contents =
        context->makeList(ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), contents, (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8504 "bison-chpl-lib.cpp"
    break;

  case 322: /* class_start: class_tag ident_def  */
#line 2140 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-1]), (yyvsp[0].uniqueStr), (yyvsp[-1].astTag));
  }
#line 8512 "bison-chpl-lib.cpp"
    break;

  case 323: /* class_tag: TCLASS  */
#line 2146 "chpl.ypp"
           { (yyval.astTag) = asttags::Class; }
#line 8518 "bison-chpl-lib.cpp"
    break;

  case 324: /* class_tag: TRECORD  */
#line 2147 "chpl.ypp"
           { (yyval.astTag) = asttags::Record; }
#line 8524 "bison-chpl-lib.cpp"
    break;

  case 325: /* class_tag: TUNION  */
#line 2148 "chpl.ypp"
           { (yyval.astTag) = asttags::Union; }
#line 8530 "bison-chpl-lib.cpp"
    break;

  case 326: /* opt_inherit: %empty  */
#line 2152 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 8536 "bison-chpl-lib.cpp"
    break;

  case 327: /* opt_inherit: TCOLON expr_ls  */
#line 2153 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8542 "bison-chpl-lib.cpp"
    break;

  case 328: /* class_level_stmt_ls: %empty  */
#line 2157 "chpl.ypp"
  {
    /* nothing */
    (yyval.exprList) = context->makeList();
  }
#line 8551 "bison-chpl-lib.cpp"
    break;

  case 329: /* class_level_stmt_ls: class_level_stmt_ls class_level_stmt  */
#line 2162 "chpl.ypp"
  {
    context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 8559 "bison-chpl-lib.cpp"
    break;

  case 330: /* class_level_stmt_ls: class_level_stmt_ls attribute_decl_stmt_ls class_level_stmt  */
#line 2166 "chpl.ypp"
  {
    context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 8567 "bison-chpl-lib.cpp"
    break;

  case 331: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls class_level_stmt  */
#line 2170 "chpl.ypp"
  {
    context->appendList((yyvsp[-2].exprList), context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt)));
  }
#line 8575 "bison-chpl-lib.cpp"
    break;

  case 332: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls attribute_decl_stmt_ls class_level_stmt  */
#line 2174 "chpl.ypp"
  {
    context->appendList((yyvsp[-3].exprList), context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt)));
  }
#line 8583 "bison-chpl-lib.cpp"
    break;

  case 333: /* enum_decl_stmt: enum_header_lcbr enum_ls TRCBR  */
#line 2181 "chpl.ypp"
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
#line 8604 "bison-chpl-lib.cpp"
    break;

  case 334: /* enum_decl_stmt: enum_header_lcbr error TRCBR  */
#line 2198 "chpl.ypp"
    {
      TypeDeclParts parts = (yyvsp[-2].typeDeclParts);
      auto err = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
      CommentsAndStmt cs = {parts.comments, err.release()};
      (yyval.commentsAndStmt) = cs;
      context->exitScope(asttags::Enum, parts.name);
      context->resetDeclState();
      context->clearComments();
    }
#line 8618 "bison-chpl-lib.cpp"
    break;

  case 335: /* enum_header_lcbr: TENUM ident_def TLCBR  */
#line 2211 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-2]), (yyvsp[-1].uniqueStr), asttags::Enum);
  }
#line 8626 "bison-chpl-lib.cpp"
    break;

  case 336: /* enum_ls: enum_item  */
#line 2218 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8635 "bison-chpl-lib.cpp"
    break;

  case 337: /* enum_ls: enum_ls TCOMMA  */
#line 2223 "chpl.ypp"
  {
    (yyval.exprList) = (yyvsp[-1].exprList);
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8645 "bison-chpl-lib.cpp"
    break;

  case 338: /* $@5: %empty  */
#line 2229 "chpl.ypp"
  {
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8654 "bison-chpl-lib.cpp"
    break;

  case 339: /* enum_ls: enum_ls TCOMMA $@5 enum_item  */
#line 2234 "chpl.ypp"
  {
    context->appendList((yyvsp[-3].exprList), (yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8663 "bison-chpl-lib.cpp"
    break;

  case 340: /* enum_ls: attribute_decl_stmt_ls enum_item  */
#line 2239 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8672 "bison-chpl-lib.cpp"
    break;

  case 341: /* $@6: %empty  */
#line 2244 "chpl.ypp"
  {
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributeGroupPartsState();
  }
#line 8681 "bison-chpl-lib.cpp"
    break;

  case 342: /* enum_ls: enum_ls TCOMMA $@6 attribute_decl_stmt_ls enum_item  */
#line 2249 "chpl.ypp"
  {
    context->appendList((yyvsp[-4].exprList), (yyvsp[0].commentsAndStmt));
    context->resetAttributeGroupPartsState();
  }
#line 8690 "bison-chpl-lib.cpp"
    break;

  case 343: /* enum_item: ident_def  */
#line 2259 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributeGroup((yyloc)),
                                     (yyvsp[0].uniqueStr));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
    }
#line 8701 "bison-chpl-lib.cpp"
    break;

  case 344: /* enum_item: ident_def TASSIGN expr  */
#line 2266 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributeGroup((yyloc)),
                                     (yyvsp[-2].uniqueStr),
                                     toOwned((yyvsp[0].expr)));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
      context->clearCommentsBefore((yylsp[0]));
    }
#line 8714 "bison-chpl-lib.cpp"
    break;

  case 345: /* lambda_decl_start: TLAMBDA  */
#line 2278 "chpl.ypp"
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
#line 8730 "bison-chpl-lib.cpp"
    break;

  case 346: /* $@7: %empty  */
#line 2295 "chpl.ypp"
    {
      context->clearComments();
      context->resetDeclState();
      context->enterScope(asttags::Function, STR("lambda"));
    }
#line 8740 "bison-chpl-lib.cpp"
    break;

  case 347: /* lambda_decl_expr: lambda_decl_start req_formal_ls opt_ret_tag opt_type opt_throws_error opt_lifetime_where $@7 function_body_stmt  */
#line 2301 "chpl.ypp"
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
#line 8762 "bison-chpl-lib.cpp"
    break;

  case 349: /* linkage_spec: linkage_spec_empty  */
#line 2324 "chpl.ypp"
                     { (yyval.functionParts) = context->makeFunctionParts(false, false); }
#line 8768 "bison-chpl-lib.cpp"
    break;

  case 350: /* linkage_spec: TINLINE  */
#line 2325 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(true, false); }
#line 8775 "bison-chpl-lib.cpp"
    break;

  case 351: /* linkage_spec: TOVERRIDE  */
#line 2327 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(false, true); }
#line 8782 "bison-chpl-lib.cpp"
    break;

  case 352: /* opt_fn_type_formal_ls: %empty  */
#line 2332 "chpl.ypp"
                                          { (yyval.exprList) = context->makeList(); }
#line 8788 "bison-chpl-lib.cpp"
    break;

  case 353: /* opt_fn_type_formal_ls: fn_type_formal_ls  */
#line 2333 "chpl.ypp"
                                          { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8794 "bison-chpl-lib.cpp"
    break;

  case 354: /* fn_type_formal_ls: fn_type_formal  */
#line 2337 "chpl.ypp"
                                          { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8800 "bison-chpl-lib.cpp"
    break;

  case 355: /* fn_type_formal_ls: fn_type_formal_ls TCOMMA fn_type_formal  */
#line 2338 "chpl.ypp"
                                          { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8806 "bison-chpl-lib.cpp"
    break;

  case 356: /* fn_type_formal: named_formal  */
#line 2343 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 8812 "bison-chpl-lib.cpp"
    break;

  case 357: /* fn_type_formal: required_intent_tag TCOLON formal_type  */
#line 2346 "chpl.ypp"
  { (yyval.expr) = context->buildAnonFormal((yyloc), (yylsp[-2]), (yyvsp[-2].intentTag), (yyvsp[0].expr)); }
#line 8818 "bison-chpl-lib.cpp"
    break;

  case 358: /* fn_type_formal: formal_type  */
#line 2348 "chpl.ypp"
  { (yyval.expr) = context->buildAnonFormal((yyloc), (yyvsp[0].expr)); }
#line 8824 "bison-chpl-lib.cpp"
    break;

  case 359: /* opt_fn_type_ret_type: %empty  */
#line 2352 "chpl.ypp"
                                  { (yyval.expr) = nullptr; }
#line 8830 "bison-chpl-lib.cpp"
    break;

  case 360: /* opt_fn_type_ret_type: TCOLON formal_or_ret_type_expr  */
#line 2353 "chpl.ypp"
                                  { (yyval.expr) = (yyvsp[0].expr); }
#line 8836 "bison-chpl-lib.cpp"
    break;

  case 361: /* fn_type: TPROCLP opt_fn_type_formal_ls TRP opt_ret_tag opt_fn_type_ret_type opt_throws_error  */
#line 2366 "chpl.ypp"
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
#line 8855 "bison-chpl-lib.cpp"
    break;

  case 362: /* $@8: %empty  */
#line 2384 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();
    context->enterScope(asttags::Function, STR("proc"));
  }
#line 8865 "bison-chpl-lib.cpp"
    break;

  case 363: /* fn_expr: fn_type $@8 block_stmt_body  */
#line 2390 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-2].functionParts);
    fp.isBodyNonBlockExpression = false;
    fp.body = (yyvsp[0].exprList);
    context->clearComments();
    context->exitScope(asttags::Function, STR("proc"));
    (yyval.functionParts) = fp;
  }
#line 8878 "bison-chpl-lib.cpp"
    break;

  case 364: /* $@9: %empty  */
#line 2399 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();
    context->enterScope(asttags::Function, STR("proc"));
  }
#line 8888 "bison-chpl-lib.cpp"
    break;

  case 365: /* fn_expr: fn_type TALIAS $@9 expr  */
#line 2405 "chpl.ypp"
  {
    FunctionParts fp = (yyvsp[-3].functionParts);
    fp.isBodyNonBlockExpression = true;
    fp.body = context->makeList((yyvsp[0].expr));
    context->clearComments();
    context->exitScope(asttags::Function, STR("proc"));
    (yyval.functionParts) = fp;
  }
#line 8901 "bison-chpl-lib.cpp"
    break;

  case 366: /* fn_decl_stmt_complete: fn_decl_stmt  */
#line 2417 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildRegularFunctionDecl((yyloc), (yyvsp[0].functionParts));
    }
#line 8909 "bison-chpl-lib.cpp"
    break;

  case 367: /* $@10: %empty  */
#line 2426 "chpl.ypp"
  {
    context->clearComments();
    context->resetDeclState();

    // May never have been built if there was a syntax error.
    if ((yyvsp[-4].functionParts).errorExpr == nullptr) {
      context->enterScope(asttags::Function, (yyvsp[-4].functionParts).name->name());
    }
  }
#line 8923 "bison-chpl-lib.cpp"
    break;

  case 368: /* fn_decl_stmt: fn_decl_stmt_inner opt_ret_tag opt_ret_type opt_throws_error opt_lifetime_where $@10 opt_function_body_stmt  */
#line 2436 "chpl.ypp"
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
#line 8946 "bison-chpl-lib.cpp"
    break;

  case 369: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_ident opt_formal_ls  */
#line 2458 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8958 "bison-chpl-lib.cpp"
    break;

  case 370: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag assignop_ident opt_formal_ls  */
#line 2466 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr));
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8970 "bison-chpl-lib.cpp"
    break;

  case 371: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT fn_ident opt_formal_ls  */
#line 2474 "chpl.ypp"
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
#line 8985 "bison-chpl-lib.cpp"
    break;

  case 372: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT assignop_ident opt_formal_ls  */
#line 2485 "chpl.ypp"
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
#line 9000 "bison-chpl-lib.cpp"
    break;

  case 373: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag error opt_formal_ls  */
#line 2496 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.errorExpr = ErroneousExpression::build(BUILDER, LOC((yyloc))).release();
      (yyval.functionParts) = fp;
    }
#line 9010 "bison-chpl-lib.cpp"
    break;

  case 374: /* fn_decl_stmt_start: linkage_spec proc_iter_or_op  */
#line 2505 "chpl.ypp"
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
#line 9026 "bison-chpl-lib.cpp"
    break;

  case 376: /* fn_decl_receiver_expr: TLP expr TRP  */
#line 2520 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[-1].expr); }
#line 9032 "bison-chpl-lib.cpp"
    break;

  case 379: /* fn_ident: ident_def TBANG  */
#line 2527 "chpl.ypp"
  {
    std::string s = (yyvsp[-1].uniqueStr).c_str();
    s += "!";
    (yyval.uniqueStr) = STR(s.c_str());
  }
#line 9042 "bison-chpl-lib.cpp"
    break;

  case 419: /* formal_var_arg_expr: TDOTDOTDOT  */
#line 2584 "chpl.ypp"
                         { (yyval.expr) = nullptr; }
#line 9048 "bison-chpl-lib.cpp"
    break;

  case 420: /* formal_var_arg_expr: TDOTDOTDOT expr  */
#line 2585 "chpl.ypp"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 9054 "bison-chpl-lib.cpp"
    break;

  case 421: /* opt_formal_ls: %empty  */
#line 2589 "chpl.ypp"
                     { (yyval.exprList) = context->parenlessMarker; }
#line 9060 "bison-chpl-lib.cpp"
    break;

  case 422: /* opt_formal_ls: TLP formal_ls TRP  */
#line 2590 "chpl.ypp"
                     { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9066 "bison-chpl-lib.cpp"
    break;

  case 423: /* req_formal_ls: TLP TRP  */
#line 2594 "chpl.ypp"
                            { (yyval.exprList) = context->makeList(); }
#line 9072 "bison-chpl-lib.cpp"
    break;

  case 424: /* req_formal_ls: TLP formal_ls_inner TRP  */
#line 2595 "chpl.ypp"
                            { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9078 "bison-chpl-lib.cpp"
    break;

  case 425: /* formal_ls_inner: formal  */
#line 2599 "chpl.ypp"
                                 { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9084 "bison-chpl-lib.cpp"
    break;

  case 426: /* formal_ls_inner: formal_ls_inner TCOMMA formal  */
#line 2600 "chpl.ypp"
                                 { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9090 "bison-chpl-lib.cpp"
    break;

  case 427: /* formal_ls: %empty  */
#line 2604 "chpl.ypp"
                           { (yyval.exprList) = context->makeList(); }
#line 9096 "bison-chpl-lib.cpp"
    break;

  case 428: /* formal_ls: formal_ls_inner  */
#line 2605 "chpl.ypp"
                           { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9102 "bison-chpl-lib.cpp"
    break;

  case 432: /* named_formal: opt_formal_intent_tag formal_ident_def opt_colon_formal_type opt_init_expr  */
#line 2619 "chpl.ypp"
  {
    (yyval.expr) = context->buildFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9110 "bison-chpl-lib.cpp"
    break;

  case 433: /* named_formal: pragma_ls opt_formal_intent_tag formal_ident_def opt_colon_formal_type opt_init_expr  */
#line 2624 "chpl.ypp"
  {
    (yyval.expr) = context->buildFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr), true);
  }
#line 9118 "bison-chpl-lib.cpp"
    break;

  case 434: /* named_formal: opt_formal_intent_tag formal_ident_def opt_colon_formal_type formal_var_arg_expr  */
#line 2629 "chpl.ypp"
  {
    (yyval.expr) = context->buildVarArgFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9126 "bison-chpl-lib.cpp"
    break;

  case 435: /* named_formal: pragma_ls opt_formal_intent_tag formal_ident_def opt_colon_formal_type formal_var_arg_expr  */
#line 2634 "chpl.ypp"
  {
    (yyval.expr) = context->buildVarArgFormal((yyloc), (yyvsp[-3].intentTag), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr), (yyvsp[0].expr), true);
  }
#line 9134 "bison-chpl-lib.cpp"
    break;

  case 436: /* named_formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_colon_formal_type opt_init_expr  */
#line 2639 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleFormal((yyloc), (yyvsp[-5].intentTag), (yyvsp[-3].exprList), (yyvsp[-1].expr), (yyvsp[0].expr));
  }
#line 9142 "bison-chpl-lib.cpp"
    break;

  case 437: /* named_formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_colon_formal_type formal_var_arg_expr  */
#line 2644 "chpl.ypp"
  {
    (yyval.expr) = context->syntax((yyloc), "variable-length argument may not be grouped in a tuple.");
  }
#line 9150 "bison-chpl-lib.cpp"
    break;

  case 438: /* opt_formal_intent_tag: %empty  */
#line 2650 "chpl.ypp"
             {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = Formal::DEFAULT_INTENT;
  }
#line 9159 "bison-chpl-lib.cpp"
    break;

  case 439: /* opt_formal_intent_tag: required_intent_tag  */
#line 2655 "chpl.ypp"
  {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = (yyvsp[0].intentTag);
  }
#line 9168 "bison-chpl-lib.cpp"
    break;

  case 440: /* required_intent_tag: TIN  */
#line 2662 "chpl.ypp"
              { (yyval.intentTag) = Formal::IN; }
#line 9174 "bison-chpl-lib.cpp"
    break;

  case 441: /* required_intent_tag: TINOUT  */
#line 2663 "chpl.ypp"
              { (yyval.intentTag) = Formal::INOUT; }
#line 9180 "bison-chpl-lib.cpp"
    break;

  case 442: /* required_intent_tag: TOUT  */
#line 2664 "chpl.ypp"
              { (yyval.intentTag) = Formal::OUT; }
#line 9186 "bison-chpl-lib.cpp"
    break;

  case 443: /* required_intent_tag: TCONST TIN  */
#line 2665 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_IN; }
#line 9192 "bison-chpl-lib.cpp"
    break;

  case 444: /* required_intent_tag: TCONST TREF  */
#line 2666 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_REF; }
#line 9198 "bison-chpl-lib.cpp"
    break;

  case 445: /* required_intent_tag: TCONST  */
#line 2667 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST; }
#line 9204 "bison-chpl-lib.cpp"
    break;

  case 446: /* required_intent_tag: TPARAM  */
#line 2668 "chpl.ypp"
              { (yyval.intentTag) = Formal::PARAM; }
#line 9210 "bison-chpl-lib.cpp"
    break;

  case 447: /* required_intent_tag: TREF  */
#line 2669 "chpl.ypp"
              { (yyval.intentTag) = Formal::REF; }
#line 9216 "bison-chpl-lib.cpp"
    break;

  case 448: /* required_intent_tag: TTYPE  */
#line 2670 "chpl.ypp"
              { (yyval.intentTag) = Formal::TYPE; }
#line 9222 "bison-chpl-lib.cpp"
    break;

  case 449: /* opt_this_intent_tag: %empty  */
#line 2674 "chpl.ypp"
                { (yyval.intentTag) = Formal::DEFAULT_INTENT; }
#line 9228 "bison-chpl-lib.cpp"
    break;

  case 450: /* opt_this_intent_tag: TPARAM  */
#line 2675 "chpl.ypp"
                { (yyval.intentTag) = Formal::PARAM; }
#line 9234 "bison-chpl-lib.cpp"
    break;

  case 451: /* opt_this_intent_tag: TREF  */
#line 2676 "chpl.ypp"
                { (yyval.intentTag) = Formal::REF; }
#line 9240 "bison-chpl-lib.cpp"
    break;

  case 452: /* opt_this_intent_tag: TCONST TREF  */
#line 2677 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST_REF; }
#line 9246 "bison-chpl-lib.cpp"
    break;

  case 453: /* opt_this_intent_tag: TCONST  */
#line 2678 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST; }
#line 9252 "bison-chpl-lib.cpp"
    break;

  case 454: /* opt_this_intent_tag: TTYPE  */
#line 2679 "chpl.ypp"
                { (yyval.intentTag) = Formal::TYPE; }
#line 9258 "bison-chpl-lib.cpp"
    break;

  case 455: /* proc_iter_or_op: TPROC  */
#line 2683 "chpl.ypp"
            { (yyval.functionKind) = Function::PROC; }
#line 9264 "bison-chpl-lib.cpp"
    break;

  case 456: /* proc_iter_or_op: TITER  */
#line 2684 "chpl.ypp"
            { (yyval.functionKind) = Function::ITER; }
#line 9270 "bison-chpl-lib.cpp"
    break;

  case 457: /* proc_iter_or_op: TOPERATOR  */
#line 2685 "chpl.ypp"
            { (yyval.functionKind) = Function::OPERATOR; }
#line 9276 "bison-chpl-lib.cpp"
    break;

  case 458: /* opt_ret_tag: %empty  */
#line 2689 "chpl.ypp"
                    { (yyval.returnTag) = Function::DEFAULT_RETURN_INTENT; }
#line 9282 "bison-chpl-lib.cpp"
    break;

  case 459: /* opt_ret_tag: TOUT  */
#line 2690 "chpl.ypp"
                    { (yyval.returnTag) = Function::OUT; }
#line 9288 "bison-chpl-lib.cpp"
    break;

  case 460: /* opt_ret_tag: TCONST  */
#line 2691 "chpl.ypp"
                    { (yyval.returnTag) = Function::CONST; }
#line 9294 "bison-chpl-lib.cpp"
    break;

  case 461: /* opt_ret_tag: TCONST TREF  */
#line 2692 "chpl.ypp"
                    { (yyval.returnTag) = Function::CONST_REF; }
#line 9300 "bison-chpl-lib.cpp"
    break;

  case 462: /* opt_ret_tag: TREF  */
#line 2693 "chpl.ypp"
                    { (yyval.returnTag) = Function::REF; }
#line 9306 "bison-chpl-lib.cpp"
    break;

  case 463: /* opt_ret_tag: TPARAM  */
#line 2694 "chpl.ypp"
                    { (yyval.returnTag) = Function::PARAM; }
#line 9312 "bison-chpl-lib.cpp"
    break;

  case 464: /* opt_ret_tag: TTYPE  */
#line 2695 "chpl.ypp"
                    { (yyval.returnTag) = Function::TYPE; }
#line 9318 "bison-chpl-lib.cpp"
    break;

  case 465: /* opt_throws_error: %empty  */
#line 2699 "chpl.ypp"
                          { (yyval.throwsTag) = ThrowsTag_DEFAULT; }
#line 9324 "bison-chpl-lib.cpp"
    break;

  case 466: /* opt_throws_error: TTHROWS  */
#line 2700 "chpl.ypp"
                          { (yyval.throwsTag) = ThrowsTag_THROWS; }
#line 9330 "bison-chpl-lib.cpp"
    break;

  case 467: /* opt_function_body_stmt: TSEMI  */
#line 2703 "chpl.ypp"
                      { context->clearComments(); (yyval.exprList) = nullptr; }
#line 9336 "bison-chpl-lib.cpp"
    break;

  case 468: /* opt_function_body_stmt: function_body_stmt  */
#line 2704 "chpl.ypp"
                      { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9342 "bison-chpl-lib.cpp"
    break;

  case 469: /* function_body_stmt: block_stmt_body  */
#line 2708 "chpl.ypp"
                    { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9348 "bison-chpl-lib.cpp"
    break;

  case 470: /* function_body_stmt: TDO toplevel_stmt  */
#line 2709 "chpl.ypp"
                    { (yyval.exprList) = context->buildSingleStmtRoutineBody((yyvsp[0].commentsAndStmt)); }
#line 9354 "bison-chpl-lib.cpp"
    break;

  case 471: /* function_body_stmt: return_stmt  */
#line 2710 "chpl.ypp"
                    { (yyval.exprList) = context->buildSingleStmtRoutineBody((yyvsp[0].commentsAndStmt), &((yylsp[0]))); }
#line 9360 "bison-chpl-lib.cpp"
    break;

  case 472: /* query_expr: TQUERIEDIDENT  */
#line 2714 "chpl.ypp"
                  { (yyval.expr) = context->buildTypeQuery((yyloc), (yyvsp[0].uniqueStr)); }
#line 9366 "bison-chpl-lib.cpp"
    break;

  case 473: /* opt_lifetime_where: %empty  */
#line 2719 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, nullptr); }
#line 9372 "bison-chpl-lib.cpp"
    break;

  case 474: /* opt_lifetime_where: TWHERE expr  */
#line 2721 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), nullptr); }
#line 9378 "bison-chpl-lib.cpp"
    break;

  case 475: /* opt_lifetime_where: TLIFETIME lifetime_components_expr  */
#line 2723 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, (yyvsp[0].exprList)); }
#line 9384 "bison-chpl-lib.cpp"
    break;

  case 476: /* opt_lifetime_where: TWHERE expr TLIFETIME lifetime_components_expr  */
#line 2725 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].expr), (yyvsp[0].exprList)); }
#line 9390 "bison-chpl-lib.cpp"
    break;

  case 477: /* opt_lifetime_where: TLIFETIME lifetime_components_expr TWHERE expr  */
#line 2727 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), (yyvsp[-2].exprList)); }
#line 9396 "bison-chpl-lib.cpp"
    break;

  case 478: /* lifetime_components_expr: lifetime_expr  */
#line 2732 "chpl.ypp"
  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9402 "bison-chpl-lib.cpp"
    break;

  case 479: /* lifetime_components_expr: lifetime_components_expr TCOMMA lifetime_expr  */
#line 2734 "chpl.ypp"
  { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9408 "bison-chpl-lib.cpp"
    break;

  case 480: /* lifetime_expr: lifetime_ident TASSIGN lifetime_ident  */
#line 2739 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9414 "bison-chpl-lib.cpp"
    break;

  case 481: /* lifetime_expr: lifetime_ident TLESS lifetime_ident  */
#line 2741 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9420 "bison-chpl-lib.cpp"
    break;

  case 482: /* lifetime_expr: lifetime_ident TLESSEQUAL lifetime_ident  */
#line 2743 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9426 "bison-chpl-lib.cpp"
    break;

  case 483: /* lifetime_expr: lifetime_ident TEQUAL lifetime_ident  */
#line 2745 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9432 "bison-chpl-lib.cpp"
    break;

  case 484: /* lifetime_expr: lifetime_ident TGREATER lifetime_ident  */
#line 2747 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9438 "bison-chpl-lib.cpp"
    break;

  case 485: /* lifetime_expr: lifetime_ident TGREATEREQUAL lifetime_ident  */
#line 2749 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9444 "bison-chpl-lib.cpp"
    break;

  case 486: /* lifetime_expr: TRETURN lifetime_ident  */
#line 2751 "chpl.ypp"
    { (yyval.expr) = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[0].expr))).release(); }
#line 9450 "bison-chpl-lib.cpp"
    break;

  case 487: /* lifetime_ident: TIDENT  */
#line 2755 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9456 "bison-chpl-lib.cpp"
    break;

  case 488: /* lifetime_ident: TTHIS  */
#line 2756 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9462 "bison-chpl-lib.cpp"
    break;

  case 489: /* type_alias_decl_stmt: type_alias_decl_stmt_start type_alias_decl_stmt_inner_ls TSEMI  */
#line 2761 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9471 "bison-chpl-lib.cpp"
    break;

  case 490: /* type_alias_decl_stmt_start: TTYPE  */
#line 2770 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
  }
#line 9479 "bison-chpl-lib.cpp"
    break;

  case 491: /* type_alias_decl_stmt_start: TCONFIG TTYPE  */
#line 2774 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
    context->noteIsVarDeclConfig(true);
  }
#line 9488 "bison-chpl-lib.cpp"
    break;

  case 492: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner  */
#line 2782 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
  }
#line 9496 "bison-chpl-lib.cpp"
    break;

  case 493: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner_ls TCOMMA type_alias_decl_stmt_inner  */
#line 2786 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 9504 "bison-chpl-lib.cpp"
    break;

  case 494: /* type_alias_decl_stmt_inner: ident_def opt_init_type  */
#line 2793 "chpl.ypp"
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
#line 9526 "bison-chpl-lib.cpp"
    break;

  case 495: /* opt_init_type: %empty  */
#line 2813 "chpl.ypp"
  { (yyval.expr) = nullptr; }
#line 9532 "bison-chpl-lib.cpp"
    break;

  case 496: /* opt_init_type: TASSIGN expr  */
#line 2815 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 9538 "bison-chpl-lib.cpp"
    break;

  case 497: /* var_decl_type: TPARAM  */
#line 2819 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::PARAM); }
#line 9544 "bison-chpl-lib.cpp"
    break;

  case 498: /* var_decl_type: TCONST TREF  */
#line 2820 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST_REF); }
#line 9550 "bison-chpl-lib.cpp"
    break;

  case 499: /* var_decl_type: TREF  */
#line 2821 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::REF); }
#line 9556 "bison-chpl-lib.cpp"
    break;

  case 500: /* var_decl_type: TCONST  */
#line 2822 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST); }
#line 9562 "bison-chpl-lib.cpp"
    break;

  case 501: /* var_decl_type: TVAR  */
#line 2823 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::VAR); }
#line 9568 "bison-chpl-lib.cpp"
    break;

  case 502: /* $@11: %empty  */
#line 2828 "chpl.ypp"
  {
    // Use a mid-rule action to thread along 'isVarDeclConfig'.
    context->noteIsVarDeclConfig(true);
  }
#line 9577 "bison-chpl-lib.cpp"
    break;

  case 503: /* var_decl_stmt: TCONFIG $@11 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2832 "chpl.ypp"
                                             {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9586 "bison-chpl-lib.cpp"
    break;

  case 504: /* var_decl_stmt: var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2837 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9595 "bison-chpl-lib.cpp"
    break;

  case 505: /* var_decl_stmt_inner_ls: var_decl_stmt_inner  */
#line 2845 "chpl.ypp"
    {
      (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    }
#line 9603 "bison-chpl-lib.cpp"
    break;

  case 506: /* var_decl_stmt_inner_ls: var_decl_stmt_inner_ls TCOMMA var_decl_stmt_inner  */
#line 2849 "chpl.ypp"
    {
      (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
    }
#line 9611 "bison-chpl-lib.cpp"
    break;

  case 507: /* var_decl_stmt_inner: ident_def opt_type opt_init_expr  */
#line 2856 "chpl.ypp"
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
#line 9633 "bison-chpl-lib.cpp"
    break;

  case 508: /* var_decl_stmt_inner: TLP tuple_var_decl_stmt_inner_ls TRP opt_type opt_init_expr  */
#line 2874 "chpl.ypp"
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
#line 9653 "bison-chpl-lib.cpp"
    break;

  case 509: /* tuple_var_decl_component: TUNDERSCORE  */
#line 2893 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9661 "bison-chpl-lib.cpp"
    break;

  case 510: /* tuple_var_decl_component: ident_def  */
#line 2897 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9669 "bison-chpl-lib.cpp"
    break;

  case 511: /* tuple_var_decl_component: TLP tuple_var_decl_stmt_inner_ls TRP  */
#line 2901 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[-1].exprList));
  }
#line 9677 "bison-chpl-lib.cpp"
    break;

  case 512: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_component  */
#line 2908 "chpl.ypp"
    { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9683 "bison-chpl-lib.cpp"
    break;

  case 513: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA  */
#line 2910 "chpl.ypp"
    { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9689 "bison-chpl-lib.cpp"
    break;

  case 514: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA tuple_var_decl_component  */
#line 2912 "chpl.ypp"
    { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9695 "bison-chpl-lib.cpp"
    break;

  case 515: /* opt_init_expr: %empty  */
#line 2918 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9701 "bison-chpl-lib.cpp"
    break;

  case 516: /* opt_init_expr: TASSIGN TNOINIT  */
#line 2919 "chpl.ypp"
                        { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9707 "bison-chpl-lib.cpp"
    break;

  case 517: /* opt_init_expr: TASSIGN opt_try_expr  */
#line 2920 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9713 "bison-chpl-lib.cpp"
    break;

  case 518: /* formal_or_ret_type_expr: expr  */
#line 2924 "chpl.ypp"
                        { (yyval.expr) = context->sanitizeArrayType((yyloc), (yyvsp[0].expr)); }
#line 9719 "bison-chpl-lib.cpp"
    break;

  case 519: /* ret_type: formal_or_ret_type_expr  */
#line 2928 "chpl.ypp"
                          { (yyval.expr) = (yyvsp[0].expr); }
#line 9725 "bison-chpl-lib.cpp"
    break;

  case 520: /* ret_type: reserved_type_ident_use  */
#line 2929 "chpl.ypp"
                          { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9731 "bison-chpl-lib.cpp"
    break;

  case 521: /* ret_type: error  */
#line 2930 "chpl.ypp"
                          { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9737 "bison-chpl-lib.cpp"
    break;

  case 522: /* colon_ret_type: TCOLON ret_type  */
#line 2934 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 9743 "bison-chpl-lib.cpp"
    break;

  case 523: /* colon_ret_type: error  */
#line 2935 "chpl.ypp"
                  { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9749 "bison-chpl-lib.cpp"
    break;

  case 524: /* opt_ret_type: %empty  */
#line 2939 "chpl.ypp"
                    { (yyval.expr) = nullptr; }
#line 9755 "bison-chpl-lib.cpp"
    break;

  case 526: /* opt_type: %empty  */
#line 2944 "chpl.ypp"
                                 { (yyval.expr) = nullptr; }
#line 9761 "bison-chpl-lib.cpp"
    break;

  case 527: /* opt_type: TCOLON expr  */
#line 2945 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9767 "bison-chpl-lib.cpp"
    break;

  case 528: /* opt_type: TCOLON reserved_type_ident_use  */
#line 2946 "chpl.ypp"
                                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9773 "bison-chpl-lib.cpp"
    break;

  case 529: /* opt_type: error  */
#line 2947 "chpl.ypp"
                                 { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9779 "bison-chpl-lib.cpp"
    break;

  case 530: /* formal_type: formal_or_ret_type_expr  */
#line 2951 "chpl.ypp"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 9785 "bison-chpl-lib.cpp"
    break;

  case 531: /* formal_type: reserved_type_ident_use  */
#line 2952 "chpl.ypp"
                            { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9791 "bison-chpl-lib.cpp"
    break;

  case 532: /* colon_formal_type: TCOLON formal_type  */
#line 2956 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9797 "bison-chpl-lib.cpp"
    break;

  case 533: /* opt_colon_formal_type: %empty  */
#line 2960 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9803 "bison-chpl-lib.cpp"
    break;

  case 534: /* opt_colon_formal_type: colon_formal_type  */
#line 2961 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9809 "bison-chpl-lib.cpp"
    break;

  case 535: /* expr_ls: expr  */
#line 2967 "chpl.ypp"
                             { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9815 "bison-chpl-lib.cpp"
    break;

  case 536: /* expr_ls: expr_ls TCOMMA expr  */
#line 2968 "chpl.ypp"
                             { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9821 "bison-chpl-lib.cpp"
    break;

  case 537: /* tuple_component: TUNDERSCORE  */
#line 2972 "chpl.ypp"
                { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9827 "bison-chpl-lib.cpp"
    break;

  case 538: /* tuple_component: opt_try_expr  */
#line 2973 "chpl.ypp"
                { (yyval.expr) = (yyvsp[0].expr); }
#line 9833 "bison-chpl-lib.cpp"
    break;

  case 539: /* tuple_expr_ls: tuple_component TCOMMA tuple_component  */
#line 2978 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList(context->makeList((yyvsp[-2].expr)), (yyvsp[0].expr));
  }
#line 9841 "bison-chpl-lib.cpp"
    break;

  case 540: /* tuple_expr_ls: tuple_expr_ls TCOMMA tuple_component  */
#line 2982 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9849 "bison-chpl-lib.cpp"
    break;

  case 541: /* opt_actual_ls: %empty  */
#line 2988 "chpl.ypp"
             { (yyval.maybeNamedActualList) = new MaybeNamedActualList(); }
#line 9855 "bison-chpl-lib.cpp"
    break;

  case 542: /* opt_actual_ls: actual_ls  */
#line 2989 "chpl.ypp"
             { (yyval.maybeNamedActualList) = (yyvsp[0].maybeNamedActualList); }
#line 9861 "bison-chpl-lib.cpp"
    break;

  case 543: /* actual_ls: actual_expr  */
#line 2994 "chpl.ypp"
    { MaybeNamedActualList* lst = new MaybeNamedActualList();
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 9870 "bison-chpl-lib.cpp"
    break;

  case 544: /* actual_ls: actual_ls TCOMMA actual_expr  */
#line 2999 "chpl.ypp"
    {
      MaybeNamedActualList* lst = (yyvsp[-2].maybeNamedActualList);
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 9880 "bison-chpl-lib.cpp"
    break;

  case 545: /* actual_expr: ident_use TASSIGN opt_try_expr  */
#line 3007 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr), (yyvsp[-2].uniqueStr)); }
#line 9886 "bison-chpl-lib.cpp"
    break;

  case 546: /* actual_expr: opt_try_expr  */
#line 3008 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr)); }
#line 9892 "bison-chpl-lib.cpp"
    break;

  case 547: /* ident_expr: ident_use  */
#line 3012 "chpl.ypp"
                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9898 "bison-chpl-lib.cpp"
    break;

  case 548: /* ident_expr: scalar_type  */
#line 3013 "chpl.ypp"
                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9904 "bison-chpl-lib.cpp"
    break;

  case 554: /* sub_type_level_expr: TSINGLE expr  */
#line 3026 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9910 "bison-chpl-lib.cpp"
    break;

  case 555: /* sub_type_level_expr: TINDEX TLP opt_actual_ls TRP  */
#line 3028 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9916 "bison-chpl-lib.cpp"
    break;

  case 556: /* sub_type_level_expr: TDOMAIN TLP opt_actual_ls TRP  */
#line 3030 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9922 "bison-chpl-lib.cpp"
    break;

  case 557: /* sub_type_level_expr: TSUBDOMAIN TLP opt_actual_ls TRP  */
#line 3032 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 9928 "bison-chpl-lib.cpp"
    break;

  case 558: /* sub_type_level_expr: TSPARSE TSUBDOMAIN TLP actual_expr TRP  */
#line 3034 "chpl.ypp"
  {
    auto locInner = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    auto inner = context->buildTypeConstructor(locInner, (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActual));
    (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-4].uniqueStr), inner);
  }
#line 9938 "bison-chpl-lib.cpp"
    break;

  case 559: /* sub_type_level_expr: TATOMIC expr  */
#line 3040 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9944 "bison-chpl-lib.cpp"
    break;

  case 560: /* sub_type_level_expr: TSYNC expr  */
#line 3042 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9950 "bison-chpl-lib.cpp"
    break;

  case 561: /* sub_type_level_expr: TOWNED  */
#line 3045 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9956 "bison-chpl-lib.cpp"
    break;

  case 562: /* sub_type_level_expr: TOWNED expr  */
#line 3047 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9962 "bison-chpl-lib.cpp"
    break;

  case 563: /* sub_type_level_expr: TUNMANAGED  */
#line 3049 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9968 "bison-chpl-lib.cpp"
    break;

  case 564: /* sub_type_level_expr: TUNMANAGED expr  */
#line 3051 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9974 "bison-chpl-lib.cpp"
    break;

  case 565: /* sub_type_level_expr: TSHARED  */
#line 3053 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9980 "bison-chpl-lib.cpp"
    break;

  case 566: /* sub_type_level_expr: TSHARED expr  */
#line 3055 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9986 "bison-chpl-lib.cpp"
    break;

  case 567: /* sub_type_level_expr: TBORROWED  */
#line 3057 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 9992 "bison-chpl-lib.cpp"
    break;

  case 568: /* sub_type_level_expr: TBORROWED expr  */
#line 3059 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9998 "bison-chpl-lib.cpp"
    break;

  case 569: /* sub_type_level_expr: TCLASS  */
#line 3061 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10004 "bison-chpl-lib.cpp"
    break;

  case 570: /* sub_type_level_expr: TRECORD  */
#line 3063 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10010 "bison-chpl-lib.cpp"
    break;

  case 571: /* for_expr: TFOR expr TIN expr TDO expr  */
#line 3068 "chpl.ypp"
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
#line 10025 "bison-chpl-lib.cpp"
    break;

  case 572: /* for_expr: TFOR expr TIN zippered_iterator TDO expr  */
#line 3079 "chpl.ypp"
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
#line 10040 "bison-chpl-lib.cpp"
    break;

  case 573: /* for_expr: TFOR expr TDO expr  */
#line 3090 "chpl.ypp"
  {
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false,
                    context->buildAttributeGroup((yyloc))).release();
                    context->resetAttributeGroupPartsState();
  }
#line 10054 "bison-chpl-lib.cpp"
    break;

  case 574: /* for_expr: TFOR expr TIN expr TDO TIF expr TTHEN expr  */
#line 3100 "chpl.ypp"
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
#line 10074 "bison-chpl-lib.cpp"
    break;

  case 575: /* for_expr: TFOR expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3116 "chpl.ypp"
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
#line 10094 "bison-chpl-lib.cpp"
    break;

  case 576: /* for_expr: TFOR expr TDO TIF expr TTHEN expr  */
#line 3132 "chpl.ypp"
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
#line 10114 "bison-chpl-lib.cpp"
    break;

  case 577: /* for_expr: TFORALL expr TIN expr TDO expr  */
#line 3148 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10127 "bison-chpl-lib.cpp"
    break;

  case 578: /* for_expr: TFORALL expr TIN zippered_iterator TDO expr  */
#line 3157 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10140 "bison-chpl-lib.cpp"
    break;

  case 579: /* for_expr: TFORALL expr TDO expr  */
#line 3166 "chpl.ypp"
  {
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10152 "bison-chpl-lib.cpp"
    break;

  case 580: /* for_expr: TFORALL expr TIN expr TDO TIF expr TTHEN expr  */
#line 3174 "chpl.ypp"
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
#line 10170 "bison-chpl-lib.cpp"
    break;

  case 581: /* for_expr: TFORALL expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3188 "chpl.ypp"
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
#line 10188 "bison-chpl-lib.cpp"
    break;

  case 582: /* for_expr: TFORALL expr TDO TIF expr TTHEN expr  */
#line 3202 "chpl.ypp"
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
#line 10206 "bison-chpl-lib.cpp"
    break;

  case 583: /* bracket_loop_expr: TLSBR TRSBR  */
#line 3219 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc));
  }
#line 10214 "bison-chpl-lib.cpp"
    break;

  case 584: /* bracket_loop_expr: TLSBR TRSBR expr  */
#line 3223 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-1]), (yyvsp[0].expr));
  }
#line 10222 "bison-chpl-lib.cpp"
    break;

  case 585: /* bracket_loop_expr: TLSBR expr_ls TRSBR expr  */
#line 3227 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10230 "bison-chpl-lib.cpp"
    break;

  case 586: /* bracket_loop_expr: TLSBR expr_ls TIN expr TRSBR expr  */
#line 3231 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10238 "bison-chpl-lib.cpp"
    break;

  case 587: /* bracket_loop_expr: TLSBR expr_ls TIN zippered_iterator TRSBR expr  */
#line 3235 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10246 "bison-chpl-lib.cpp"
    break;

  case 588: /* bracket_loop_expr: TLSBR expr_ls TIN expr TRSBR TIF expr TTHEN expr  */
#line 3239 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-7]), (yylsp[-3]), (yyvsp[-7].exprList), (yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10254 "bison-chpl-lib.cpp"
    break;

  case 589: /* bracket_loop_expr: TLSBR expr_ls TIN zippered_iterator TRSBR TIF expr TTHEN expr  */
#line 3243 "chpl.ypp"
  {
    (yyval.expr) = context->buildBracketLoopExpr((yyloc), (yylsp[-7]), (yylsp[-3]), (yyvsp[-7].exprList), (yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10262 "bison-chpl-lib.cpp"
    break;

  case 590: /* cond_expr: TIF expr TTHEN expr TELSE expr  */
#line 3250 "chpl.ypp"
  {
    auto node  = Conditional::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[-2]), (yyvsp[-2].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                    /*isExpressionLevel*/ true);
    (yyval.expr) = node.release();
  }
#line 10276 "bison-chpl-lib.cpp"
    break;

  case 591: /* nil_expr: TNIL  */
#line 3267 "chpl.ypp"
            { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 10282 "bison-chpl-lib.cpp"
    break;

  case 599: /* opt_task_intent_ls: %empty  */
#line 3285 "chpl.ypp"
                                { (yyval.withClause) = nullptr; }
#line 10288 "bison-chpl-lib.cpp"
    break;

  case 600: /* opt_task_intent_ls: task_intent_clause  */
#line 3286 "chpl.ypp"
                                { (yyval.withClause) = (yyvsp[0].withClause); }
#line 10294 "bison-chpl-lib.cpp"
    break;

  case 601: /* task_intent_clause: TWITH TLP task_intent_ls TRP  */
#line 3291 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10304 "bison-chpl-lib.cpp"
    break;

  case 602: /* task_intent_ls: intent_expr  */
#line 3299 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10310 "bison-chpl-lib.cpp"
    break;

  case 603: /* task_intent_ls: task_intent_ls TCOMMA intent_expr  */
#line 3300 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10316 "bison-chpl-lib.cpp"
    break;

  case 604: /* forall_intent_clause: TWITH TLP forall_intent_ls TRP  */
#line 3305 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10326 "bison-chpl-lib.cpp"
    break;

  case 605: /* forall_intent_ls: intent_expr  */
#line 3313 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10332 "bison-chpl-lib.cpp"
    break;

  case 606: /* forall_intent_ls: forall_intent_ls TCOMMA intent_expr  */
#line 3314 "chpl.ypp"
                                       { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10338 "bison-chpl-lib.cpp"
    break;

  case 607: /* intent_expr: task_var_prefix ident_expr opt_type opt_init_expr  */
#line 3319 "chpl.ypp"
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
#line 10356 "bison-chpl-lib.cpp"
    break;

  case 608: /* intent_expr: reduce_scan_op_expr TREDUCE ident_expr  */
#line 3333 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduceIntent((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 10364 "bison-chpl-lib.cpp"
    break;

  case 609: /* intent_expr: expr TREDUCE ident_expr  */
#line 3337 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduceIntent((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10372 "bison-chpl-lib.cpp"
    break;

  case 610: /* task_var_prefix: TCONST  */
#line 3343 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST;     }
#line 10378 "bison-chpl-lib.cpp"
    break;

  case 611: /* task_var_prefix: TIN  */
#line 3344 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::IN;        }
#line 10384 "bison-chpl-lib.cpp"
    break;

  case 612: /* task_var_prefix: TCONST TIN  */
#line 3345 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_IN;  }
#line 10390 "bison-chpl-lib.cpp"
    break;

  case 613: /* task_var_prefix: TREF  */
#line 3346 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::REF;       }
#line 10396 "bison-chpl-lib.cpp"
    break;

  case 614: /* task_var_prefix: TCONST TREF  */
#line 3347 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_REF; }
#line 10402 "bison-chpl-lib.cpp"
    break;

  case 615: /* task_var_prefix: TVAR  */
#line 3348 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::VAR;       }
#line 10408 "bison-chpl-lib.cpp"
    break;

  case 616: /* new_maybe_decorated: TNEW  */
#line 3353 "chpl.ypp"
    { (yyval.newManagement) = New::DEFAULT_MANAGEMENT; }
#line 10414 "bison-chpl-lib.cpp"
    break;

  case 617: /* new_maybe_decorated: TNEW TOWNED  */
#line 3355 "chpl.ypp"
    { (yyval.newManagement) = New::OWNED; }
#line 10420 "bison-chpl-lib.cpp"
    break;

  case 618: /* new_maybe_decorated: TNEW TSHARED  */
#line 3357 "chpl.ypp"
    { (yyval.newManagement) = New::SHARED; }
#line 10426 "bison-chpl-lib.cpp"
    break;

  case 619: /* new_maybe_decorated: TNEW TUNMANAGED  */
#line 3359 "chpl.ypp"
    { (yyval.newManagement) = New::UNMANAGED; }
#line 10432 "bison-chpl-lib.cpp"
    break;

  case 620: /* new_maybe_decorated: TNEW TBORROWED  */
#line 3361 "chpl.ypp"
    { (yyval.newManagement) = New::BORROWED; }
#line 10438 "bison-chpl-lib.cpp"
    break;

  case 621: /* new_expr: new_maybe_decorated expr  */
#line 3367 "chpl.ypp"
  {
    (yyval.expr) = context->buildNewExpr((yyloc), (yyvsp[-1].newManagement), (yyvsp[0].expr));
  }
#line 10446 "bison-chpl-lib.cpp"
    break;

  case 622: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3374 "chpl.ypp"
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
#line 10462 "bison-chpl-lib.cpp"
    break;

  case 623: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3386 "chpl.ypp"
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
#line 10478 "bison-chpl-lib.cpp"
    break;

  case 624: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3398 "chpl.ypp"
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
#line 10495 "bison-chpl-lib.cpp"
    break;

  case 625: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3411 "chpl.ypp"
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
#line 10513 "bison-chpl-lib.cpp"
    break;

  case 626: /* let_expr: TLET var_decl_stmt_inner_ls TIN expr  */
#line 3428 "chpl.ypp"
  {
    (yyval.expr) = context->buildLetExpr((yyloc), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10521 "bison-chpl-lib.cpp"
    break;

  case 627: /* range_literal_expr: expr TDOTDOT expr  */
#line 3435 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10530 "bison-chpl-lib.cpp"
    break;

  case 628: /* range_literal_expr: expr TDOTDOTOPENHIGH expr  */
#line 3440 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10539 "bison-chpl-lib.cpp"
    break;

  case 629: /* range_literal_expr: expr TDOTDOT  */
#line 3445 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-1].expr)),
                      /*upperBound*/ nullptr).release();
  }
#line 10548 "bison-chpl-lib.cpp"
    break;

  case 630: /* range_literal_expr: TDOTDOT expr  */
#line 3450 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10558 "bison-chpl-lib.cpp"
    break;

  case 631: /* range_literal_expr: TDOTDOTOPENHIGH expr  */
#line 3456 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10568 "bison-chpl-lib.cpp"
    break;

  case 632: /* range_literal_expr: TDOTDOT  */
#line 3462 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      /*upperBound*/ nullptr).release();
  }
#line 10578 "bison-chpl-lib.cpp"
    break;

  case 633: /* cast_expr: expr TCOLON expr  */
#line 3492 "chpl.ypp"
  {
    (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
  }
#line 10586 "bison-chpl-lib.cpp"
    break;

  case 634: /* tuple_expand_expr: TLP TDOTDOTDOT expr TRP  */
#line 3499 "chpl.ypp"
  {
    (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
  }
#line 10594 "bison-chpl-lib.cpp"
    break;

  case 635: /* super_expr: fn_expr  */
#line 3505 "chpl.ypp"
          { (yyval.expr) = context->buildFunctionExpr((yyloc), (yyvsp[0].functionParts)); }
#line 10600 "bison-chpl-lib.cpp"
    break;

  case 639: /* expr: sub_type_level_expr TQUESTION  */
#line 3514 "chpl.ypp"
  { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10606 "bison-chpl-lib.cpp"
    break;

  case 640: /* expr: TQUESTION  */
#line 3516 "chpl.ypp"
  { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 10612 "bison-chpl-lib.cpp"
    break;

  case 644: /* expr: fn_type  */
#line 3521 "chpl.ypp"
  { (yyval.expr) = context->buildFunctionType((yyloc), (yyvsp[0].functionParts)); }
#line 10618 "bison-chpl-lib.cpp"
    break;

  case 654: /* opt_expr: %empty  */
#line 3535 "chpl.ypp"
                  { (yyval.expr) = nullptr; }
#line 10624 "bison-chpl-lib.cpp"
    break;

  case 655: /* opt_expr: expr  */
#line 3536 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10630 "bison-chpl-lib.cpp"
    break;

  case 656: /* opt_try_expr: TTRY expr  */
#line 3540 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), false); }
#line 10636 "bison-chpl-lib.cpp"
    break;

  case 657: /* opt_try_expr: TTRYBANG expr  */
#line 3541 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), true); }
#line 10642 "bison-chpl-lib.cpp"
    break;

  case 658: /* opt_try_expr: super_expr  */
#line 3542 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10648 "bison-chpl-lib.cpp"
    break;

  case 664: /* call_base_expr: expr TBANG  */
#line 3559 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                             STR("postfix!"),
                                                             (yyvsp[-1].expr)); }
#line 10656 "bison-chpl-lib.cpp"
    break;

  case 665: /* call_base_expr: sub_type_level_expr TQUESTION  */
#line 3562 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10662 "bison-chpl-lib.cpp"
    break;

  case 668: /* call_expr: call_base_expr TLP opt_actual_ls TRP  */
#line 3569 "chpl.ypp"
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
#line 10678 "bison-chpl-lib.cpp"
    break;

  case 669: /* call_expr: call_base_expr TLSBR opt_actual_ls TRSBR  */
#line 3581 "chpl.ypp"
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
#line 10694 "bison-chpl-lib.cpp"
    break;

  case 670: /* call_expr: TPRIMITIVE TLP opt_actual_ls TRP  */
#line 3593 "chpl.ypp"
    {
      (yyval.expr) = context->buildPrimCall((yyloc), (yyvsp[-1].maybeNamedActualList));
    }
#line 10702 "bison-chpl-lib.cpp"
    break;

  case 671: /* dot_expr: expr TDOT ident_use  */
#line 3600 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10708 "bison-chpl-lib.cpp"
    break;

  case 672: /* dot_expr: expr TDOT TTYPE  */
#line 3602 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10714 "bison-chpl-lib.cpp"
    break;

  case 673: /* dot_expr: expr TDOT TDOMAIN  */
#line 3604 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10720 "bison-chpl-lib.cpp"
    break;

  case 674: /* dot_expr: expr TDOT TLOCALE  */
#line 3606 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10726 "bison-chpl-lib.cpp"
    break;

  case 675: /* dot_expr: expr TDOT TBYTES TLP TRP  */
#line 3608 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         false).release();
    }
#line 10736 "bison-chpl-lib.cpp"
    break;

  case 676: /* dot_expr: expr TDOT TBYTES TLSBR TRSBR  */
#line 3614 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         true).release();
    }
#line 10746 "bison-chpl-lib.cpp"
    break;

  case 677: /* parenthesized_expr: TLP tuple_component TRP  */
#line 3626 "chpl.ypp"
                                    { (yyval.expr) = (yyvsp[-1].expr); }
#line 10752 "bison-chpl-lib.cpp"
    break;

  case 678: /* parenthesized_expr: TLP tuple_component TCOMMA TRP  */
#line 3628 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consume((yyvsp[-2].expr))).release();
  }
#line 10760 "bison-chpl-lib.cpp"
    break;

  case 679: /* parenthesized_expr: TLP tuple_expr_ls TRP  */
#line 3632 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10768 "bison-chpl-lib.cpp"
    break;

  case 680: /* parenthesized_expr: TLP tuple_expr_ls TCOMMA TRP  */
#line 3636 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 10776 "bison-chpl-lib.cpp"
    break;

  case 681: /* bool_literal: TFALSE  */
#line 3642 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), false).release(); }
#line 10782 "bison-chpl-lib.cpp"
    break;

  case 682: /* bool_literal: TTRUE  */
#line 3643 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), true).release(); }
#line 10788 "bison-chpl-lib.cpp"
    break;

  case 683: /* str_bytes_literal: STRINGLITERAL  */
#line 3647 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10794 "bison-chpl-lib.cpp"
    break;

  case 684: /* str_bytes_literal: BYTESLITERAL  */
#line 3648 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10800 "bison-chpl-lib.cpp"
    break;

  case 687: /* literal_expr: INTLITERAL  */
#line 3654 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), INTLITERAL); }
#line 10806 "bison-chpl-lib.cpp"
    break;

  case 688: /* literal_expr: REALLITERAL  */
#line 3655 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), REALLITERAL); }
#line 10812 "bison-chpl-lib.cpp"
    break;

  case 689: /* literal_expr: IMAGLITERAL  */
#line 3656 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), IMAGLITERAL); }
#line 10818 "bison-chpl-lib.cpp"
    break;

  case 690: /* literal_expr: CSTRINGLITERAL  */
#line 3657 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[0].expr); }
#line 10824 "bison-chpl-lib.cpp"
    break;

  case 691: /* literal_expr: TNONE  */
#line 3658 "chpl.ypp"
                      { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 10830 "bison-chpl-lib.cpp"
    break;

  case 692: /* literal_expr: TLCBR expr_ls TRCBR  */
#line 3660 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), true,
                       context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10839 "bison-chpl-lib.cpp"
    break;

  case 693: /* literal_expr: TLCBR expr_ls TCOMMA TRCBR  */
#line 3665 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), true,
                       context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 10848 "bison-chpl-lib.cpp"
    break;

  case 694: /* literal_expr: TLSBR expr_ls TRSBR  */
#line 3670 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10856 "bison-chpl-lib.cpp"
    break;

  case 695: /* literal_expr: TLSBR expr_ls TCOMMA TRSBR  */
#line 3674 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList)), true).release();
  }
#line 10864 "bison-chpl-lib.cpp"
    break;

  case 696: /* literal_expr: TLSBR assoc_expr_ls TRSBR  */
#line 3678 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList)), false, true).release();
  }
#line 10872 "bison-chpl-lib.cpp"
    break;

  case 697: /* literal_expr: TLSBR assoc_expr_ls TCOMMA TRSBR  */
#line 3682 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList)), true, true).release();
  }
#line 10880 "bison-chpl-lib.cpp"
    break;

  case 698: /* assoc_expr_ls: expr TALIAS expr  */
#line 3690 "chpl.ypp"
  {
    auto node = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->makeList(node);
  }
#line 10889 "bison-chpl-lib.cpp"
    break;

  case 699: /* assoc_expr_ls: assoc_expr_ls TCOMMA expr TALIAS expr  */
#line 3695 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildBinOp(loc, (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 10899 "bison-chpl-lib.cpp"
    break;

  case 700: /* binary_op_expr: expr TPLUS expr  */
#line 3703 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10905 "bison-chpl-lib.cpp"
    break;

  case 701: /* binary_op_expr: expr TMINUS expr  */
#line 3704 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10911 "bison-chpl-lib.cpp"
    break;

  case 702: /* binary_op_expr: expr TSTAR expr  */
#line 3705 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10917 "bison-chpl-lib.cpp"
    break;

  case 703: /* binary_op_expr: expr TDIVIDE expr  */
#line 3706 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10923 "bison-chpl-lib.cpp"
    break;

  case 704: /* binary_op_expr: expr TSHIFTLEFT expr  */
#line 3707 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10929 "bison-chpl-lib.cpp"
    break;

  case 705: /* binary_op_expr: expr TSHIFTRIGHT expr  */
#line 3708 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10935 "bison-chpl-lib.cpp"
    break;

  case 706: /* binary_op_expr: expr TMOD expr  */
#line 3709 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10941 "bison-chpl-lib.cpp"
    break;

  case 707: /* binary_op_expr: expr TEQUAL expr  */
#line 3710 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10947 "bison-chpl-lib.cpp"
    break;

  case 708: /* binary_op_expr: expr TNOTEQUAL expr  */
#line 3711 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10953 "bison-chpl-lib.cpp"
    break;

  case 709: /* binary_op_expr: expr TLESSEQUAL expr  */
#line 3712 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10959 "bison-chpl-lib.cpp"
    break;

  case 710: /* binary_op_expr: expr TGREATEREQUAL expr  */
#line 3713 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10965 "bison-chpl-lib.cpp"
    break;

  case 711: /* binary_op_expr: expr TLESS expr  */
#line 3714 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10971 "bison-chpl-lib.cpp"
    break;

  case 712: /* binary_op_expr: expr TGREATER expr  */
#line 3715 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10977 "bison-chpl-lib.cpp"
    break;

  case 713: /* binary_op_expr: expr TBAND expr  */
#line 3716 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10983 "bison-chpl-lib.cpp"
    break;

  case 714: /* binary_op_expr: expr TBOR expr  */
#line 3717 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10989 "bison-chpl-lib.cpp"
    break;

  case 715: /* binary_op_expr: expr TBXOR expr  */
#line 3718 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10995 "bison-chpl-lib.cpp"
    break;

  case 716: /* binary_op_expr: expr TAND expr  */
#line 3719 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11001 "bison-chpl-lib.cpp"
    break;

  case 717: /* binary_op_expr: expr TOR expr  */
#line 3720 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11007 "bison-chpl-lib.cpp"
    break;

  case 718: /* binary_op_expr: expr TEXP expr  */
#line 3721 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11013 "bison-chpl-lib.cpp"
    break;

  case 719: /* binary_op_expr: expr TBY expr  */
#line 3722 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11019 "bison-chpl-lib.cpp"
    break;

  case 720: /* binary_op_expr: expr TALIGN expr  */
#line 3723 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11025 "bison-chpl-lib.cpp"
    break;

  case 721: /* binary_op_expr: expr THASH expr  */
#line 3724 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11031 "bison-chpl-lib.cpp"
    break;

  case 722: /* binary_op_expr: expr TDMAPPED expr  */
#line 3725 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11037 "bison-chpl-lib.cpp"
    break;

  case 723: /* unary_op_expr: TPLUS expr  */
#line 3729 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11043 "bison-chpl-lib.cpp"
    break;

  case 724: /* unary_op_expr: TMINUS expr  */
#line 3730 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11049 "bison-chpl-lib.cpp"
    break;

  case 725: /* unary_op_expr: TMINUSMINUS expr  */
#line 3731 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11055 "bison-chpl-lib.cpp"
    break;

  case 726: /* unary_op_expr: TPLUSPLUS expr  */
#line 3732 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11061 "bison-chpl-lib.cpp"
    break;

  case 727: /* unary_op_expr: TBANG expr  */
#line 3733 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11067 "bison-chpl-lib.cpp"
    break;

  case 728: /* unary_op_expr: expr TBANG  */
#line 3734 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                              STR("postfix!"),
                                                              (yyvsp[-1].expr)); }
#line 11075 "bison-chpl-lib.cpp"
    break;

  case 729: /* unary_op_expr: TBNOT expr  */
#line 3737 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11081 "bison-chpl-lib.cpp"
    break;

  case 730: /* reduce_expr: expr TREDUCE expr  */
#line 3742 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11089 "bison-chpl-lib.cpp"
    break;

  case 731: /* reduce_expr: expr TREDUCE zippered_iterator  */
#line 3746 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11097 "bison-chpl-lib.cpp"
    break;

  case 732: /* reduce_expr: reduce_scan_op_expr TREDUCE expr  */
#line 3750 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11105 "bison-chpl-lib.cpp"
    break;

  case 733: /* reduce_expr: reduce_scan_op_expr TREDUCE zippered_iterator  */
#line 3754 "chpl.ypp"
  {
    (yyval.expr) = context->buildReduce((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11113 "bison-chpl-lib.cpp"
    break;

  case 734: /* scan_expr: expr TSCAN expr  */
#line 3761 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11121 "bison-chpl-lib.cpp"
    break;

  case 735: /* scan_expr: expr TSCAN zippered_iterator  */
#line 3765 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11129 "bison-chpl-lib.cpp"
    break;

  case 736: /* scan_expr: reduce_scan_op_expr TSCAN expr  */
#line 3769 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11137 "bison-chpl-lib.cpp"
    break;

  case 737: /* scan_expr: reduce_scan_op_expr TSCAN zippered_iterator  */
#line 3773 "chpl.ypp"
  {
    (yyval.expr) = context->buildScan((yyloc), (yylsp[-2]), (yyvsp[-2].uniqueStr), (yyvsp[0].expr));
  }
#line 11145 "bison-chpl-lib.cpp"
    break;


#line 11149 "bison-chpl-lib.cpp"

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

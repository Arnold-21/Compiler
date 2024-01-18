/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LANG_TAB_H_INCLUDED
# define YY_YY_LANG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ARR = 258,                     /* ARR  */
    INT = 259,                     /* INT  */
    BOOL = 260,                    /* BOOL  */
    CHAR = 261,                    /* CHAR  */
    STRING = 262,                  /* STRING  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    WHILE = 265,                   /* WHILE  */
    PRINT = 266,                   /* PRINT  */
    READINT = 267,                 /* READINT  */
    READSTRING = 268,              /* READSTRING  */
    SET = 269,                     /* SET  */
    GET = 270,                     /* GET  */
    BOOLCONST = 271,               /* BOOLCONST  */
    CHARCONST = 272,               /* CHARCONST  */
    STRINGCONST = 273,             /* STRINGCONST  */
    IDENTIFIER = 274,              /* IDENTIFIER  */
    INTCONST = 275,                /* INTCONST  */
    PLUS = 276,                    /* PLUS  */
    MINUS = 277,                   /* MINUS  */
    TIMES = 278,                   /* TIMES  */
    DIV = 279,                     /* DIV  */
    MOD = 280,                     /* MOD  */
    EQ = 281,                      /* EQ  */
    BIGGER = 282,                  /* BIGGER  */
    BIGGEREQ = 283,                /* BIGGEREQ  */
    LESS = 284,                    /* LESS  */
    LESSEQ = 285,                  /* LESSEQ  */
    EQQ = 286,                     /* EQQ  */
    NEG = 287,                     /* NEG  */
    AND = 288,                     /* AND  */
    OR = 289,                      /* OR  */
    SEMICOLON = 290,               /* SEMICOLON  */
    OPEN = 291,                    /* OPEN  */
    CLOSE = 292,                   /* CLOSE  */
    SOPEN = 293,                   /* SOPEN  */
    SCLOSE = 294,                  /* SCLOSE  */
    BRACKETOPEN = 295,             /* BRACKETOPEN  */
    BRACKETCLOSE = 296,            /* BRACKETCLOSE  */
    COMMA = 297,                   /* COMMA  */
    QUOTE = 298,                   /* QUOTE  */
    SIMPLEQUOTE = 299              /* SIMPLEQUOTE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LANG_TAB_H_INCLUDED  */

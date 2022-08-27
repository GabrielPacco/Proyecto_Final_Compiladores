/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FININSTRUCCION = 258,
     IDENTIFICADOR = 259,
     TIPO = 260,
     SEPARADOR = 261,
     BLOQUEIZQ = 262,
     BLOQUEDER = 263,
     ASIGNADOR = 264,
     OPERADOR = 265,
     PARAIZQ = 266,
     PARADER = 267,
     NUMERICO = 268,
     CADENA = 269,
     RETORNO = 270,
     PRIMITIVO = 271,
     IF = 272,
     ELSE = 273,
     WHILE = 274,
     FOR = 275
   };
#endif
/* Tokens.  */
#define FININSTRUCCION 258
#define IDENTIFICADOR 259
#define TIPO 260
#define SEPARADOR 261
#define BLOQUEIZQ 262
#define BLOQUEDER 263
#define ASIGNADOR 264
#define OPERADOR 265
#define PARAIZQ 266
#define PARADER 267
#define NUMERICO 268
#define CADENA 269
#define RETORNO 270
#define PRIMITIVO 271
#define IF 272
#define ELSE 273
#define WHILE 274
#define FOR 275




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


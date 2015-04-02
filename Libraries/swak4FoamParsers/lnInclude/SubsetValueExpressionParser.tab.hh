/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Skeleton interface for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/**
 ** \file SubsetValueExpressionParser.tab.hh
 ** Define the parserSubset::parser class.
 */

/* C++ LALR(1) parser skeleton written by Akim Demaille.  */

#ifndef YY_PARSERSUBSET_SUBSETVALUEEXPRESSIONPARSER_TAB_HH_INCLUDED
# define YY_PARSERSUBSET_SUBSETVALUEEXPRESSIONPARSER_TAB_HH_INCLUDED



#include <string>
#include <iostream>
#include "SubsetValueExpressionParser_stack.hh"
#include "SubsetValueExpressionParser_location.hh"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif


namespace parserSubset {
/* Line 270 of lalr1.cc  */
#line 59 "SubsetValueExpressionParser.tab.hh"

  /// A Bison parser.
  class SubsetValueExpressionParser
  {
  public:
    /// Symbol semantic values.
#ifndef YYSTYPE
    union semantic_type
    {
/* Line 270 of lalr1.cc  */
#line 83 "../SubsetValueExpressionParser.yy"

    Foam::scalar val;
    Foam::label integer;
    Foam::vector *vec;
    Foam::word *name;
    Foam::vectorField *vfield;
    Foam::scalarField *sfield;
    Foam::Field<bool> *lfield;
    Foam::tensorField *tfield;
    Foam::symmTensorField *yfield;
    Foam::sphericalTensorField *hfield;


/* Line 270 of lalr1.cc  */
#line 85 "SubsetValueExpressionParser.tab.hh"
    };
#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;
    /// Tokens.
    struct token
    {
      /* Tokens.  */
   enum yytokentype {
     TOKEN_LINE = 258,
     TOKEN_LOOKUP = 259,
     TOKEN_SID = 260,
     TOKEN_VID = 261,
     TOKEN_LID = 262,
     TOKEN_TID = 263,
     TOKEN_YID = 264,
     TOKEN_HID = 265,
     TOKEN_PSID = 266,
     TOKEN_PVID = 267,
     TOKEN_PLID = 268,
     TOKEN_PTID = 269,
     TOKEN_PYID = 270,
     TOKEN_PHID = 271,
     TOKEN_FUNCTION_SID = 272,
     TOKEN_FUNCTION_PSID = 273,
     TOKEN_FUNCTION_VID = 274,
     TOKEN_FUNCTION_PVID = 275,
     TOKEN_FUNCTION_TID = 276,
     TOKEN_FUNCTION_PTID = 277,
     TOKEN_FUNCTION_YID = 278,
     TOKEN_FUNCTION_PYID = 279,
     TOKEN_FUNCTION_HID = 280,
     TOKEN_FUNCTION_PHID = 281,
     TOKEN_FUNCTION_LID = 282,
     TOKEN_FUNCTION_PLID = 283,
     TOKEN_NUM = 284,
     TOKEN_INT = 285,
     TOKEN_VEC = 286,
     START_DEFAULT = 300,
     START_FACE_SCALAR_COMMA = 301,
     START_FACE_SCALAR_CLOSE = 302,
     START_FACE_VECTOR_COMMA = 303,
     START_FACE_VECTOR_CLOSE = 304,
     START_FACE_TENSOR_COMMA = 305,
     START_FACE_TENSOR_CLOSE = 306,
     START_FACE_YTENSOR_COMMA = 307,
     START_FACE_YTENSOR_CLOSE = 308,
     START_FACE_HTENSOR_COMMA = 309,
     START_FACE_HTENSOR_CLOSE = 310,
     START_FACE_LOGICAL_COMMA = 311,
     START_FACE_LOGICAL_CLOSE = 312,
     START_POINT_SCALAR_COMMA = 313,
     START_POINT_SCALAR_CLOSE = 314,
     START_POINT_VECTOR_COMMA = 315,
     START_POINT_VECTOR_CLOSE = 316,
     START_POINT_TENSOR_COMMA = 317,
     START_POINT_TENSOR_CLOSE = 318,
     START_POINT_YTENSOR_COMMA = 319,
     START_POINT_YTENSOR_CLOSE = 320,
     START_POINT_HTENSOR_COMMA = 321,
     START_POINT_HTENSOR_CLOSE = 322,
     START_POINT_LOGICAL_COMMA = 323,
     START_POINT_LOGICAL_CLOSE = 324,
     START_CLOSE_ONLY = 325,
     START_COMMA_ONLY = 326,
     TOKEN_LAST_FUNCTION_CHAR = 327,
     TOKEN_IN_FUNCTION_CHAR = 328,
     TOKEN_VECTOR = 329,
     TOKEN_TENSOR = 330,
     TOKEN_SYMM_TENSOR = 331,
     TOKEN_SPHERICAL_TENSOR = 332,
     TOKEN_TRUE = 333,
     TOKEN_FALSE = 334,
     TOKEN_x = 335,
     TOKEN_y = 336,
     TOKEN_z = 337,
     TOKEN_xx = 338,
     TOKEN_xy = 339,
     TOKEN_xz = 340,
     TOKEN_yx = 341,
     TOKEN_yy = 342,
     TOKEN_yz = 343,
     TOKEN_zx = 344,
     TOKEN_zy = 345,
     TOKEN_zz = 346,
     TOKEN_ii = 347,
     TOKEN_unitTensor = 348,
     TOKEN_pi = 349,
     TOKEN_rand = 350,
     TOKEN_randFixed = 351,
     TOKEN_id = 352,
     TOKEN_randNormal = 353,
     TOKEN_randNormalFixed = 354,
     TOKEN_position = 355,
     TOKEN_area = 356,
     TOKEN_volume = 357,
     TOKEN_Sf = 358,
     TOKEN_normal = 359,
     TOKEN_deltaT = 360,
     TOKEN_time = 361,
     TOKEN_oldTime = 362,
     TOKEN_pow = 363,
     TOKEN_log = 364,
     TOKEN_exp = 365,
     TOKEN_mag = 366,
     TOKEN_magSqr = 367,
     TOKEN_sin = 368,
     TOKEN_cos = 369,
     TOKEN_tan = 370,
     TOKEN_min = 371,
     TOKEN_max = 372,
     TOKEN_minPosition = 373,
     TOKEN_maxPosition = 374,
     TOKEN_average = 375,
     TOKEN_sum = 376,
     TOKEN_sqr = 377,
     TOKEN_sqrt = 378,
     TOKEN_log10 = 379,
     TOKEN_asin = 380,
     TOKEN_acos = 381,
     TOKEN_atan = 382,
     TOKEN_sinh = 383,
     TOKEN_cosh = 384,
     TOKEN_tanh = 385,
     TOKEN_asinh = 386,
     TOKEN_acosh = 387,
     TOKEN_atanh = 388,
     TOKEN_erf = 389,
     TOKEN_erfc = 390,
     TOKEN_lgamma = 391,
     TOKEN_besselJ0 = 392,
     TOKEN_besselJ1 = 393,
     TOKEN_besselY0 = 394,
     TOKEN_besselY1 = 395,
     TOKEN_sign = 396,
     TOKEN_pos = 397,
     TOKEN_neg = 398,
     TOKEN_toPoint = 399,
     TOKEN_toFace = 400,
     TOKEN_points = 401,
     TOKEN_transpose = 402,
     TOKEN_diag = 403,
     TOKEN_tr = 404,
     TOKEN_dev = 405,
     TOKEN_symm = 406,
     TOKEN_skew = 407,
     TOKEN_det = 408,
     TOKEN_cof = 409,
     TOKEN_inv = 410,
     TOKEN_sph = 411,
     TOKEN_twoSymm = 412,
     TOKEN_dev2 = 413,
     TOKEN_eigenValues = 414,
     TOKEN_eigenVectors = 415,
     TOKEN_cpu = 416,
     TOKEN_weight = 417,
     TOKEN_flip = 418,
     TOKEN_OR = 419,
     TOKEN_AND = 420,
     TOKEN_NEQ = 421,
     TOKEN_EQ = 422,
     TOKEN_GEQ = 423,
     TOKEN_LEQ = 424,
     TOKEN_HODGE = 425,
     TOKEN_NOT = 426,
     TOKEN_NEG = 427
   };

    };
    /// Token type.
    typedef token::yytokentype token_type;

    /// Build a parser object.
    SubsetValueExpressionParser (void * scanner_yyarg, SubsetValueExpressionDriver& driver_yyarg, int start_token_yyarg, int numberOfFunctionChars_yyarg);
    virtual ~SubsetValueExpressionParser ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

  private:
    /// This class is not copyable.
    SubsetValueExpressionParser (const SubsetValueExpressionParser&);
    SubsetValueExpressionParser& operator= (const SubsetValueExpressionParser&);

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Generate an error message.
    /// \param state   the state where the error occurred.
    /// \param tok     the lookahead token.
    virtual std::string yysyntax_error_ (int yystate, int tok);

#if YYDEBUG
    /// \brief Report a symbol value on the debug stream.
    /// \param yytype       The token type.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_value_print_ (int yytype,
					 const semantic_type* yyvaluep,
					 const location_type* yylocationp);
    /// \brief Report a symbol on the debug stream.
    /// \param yytype       The token type.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_print_ (int yytype,
				   const semantic_type* yyvaluep,
				   const location_type* yylocationp);
#endif


    /// State numbers.
    typedef int state_type;
    /// State stack type.
    typedef stack<state_type>    state_stack_type;
    /// Semantic value stack type.
    typedef stack<semantic_type> semantic_stack_type;
    /// location stack type.
    typedef stack<location_type> location_stack_type;

    /// The state stack.
    state_stack_type yystate_stack_;
    /// The semantic value stack.
    semantic_stack_type yysemantic_stack_;
    /// The location stack.
    location_stack_type yylocation_stack_;

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    /// Internal symbol numbers.
    typedef unsigned char token_number_type;
    /* Tables.  */
    /// For a state, the index in \a yytable_ of its portion.
    static const short int yypact_[];
    static const short int yypact_ninf_;

    /// For a state, default reduction number.
    /// Unless\a  yytable_ specifies something else to do.
    /// Zero means the default is an error.
    static const unsigned short int yydefact_[];

    static const short int yypgoto_[];
    static const short int yydefgoto_[];

    /// What to do in a state.
    /// \a yytable_[yypact_[s]]: what to do in state \a s.
    /// - if positive, shift that token.
    /// - if negative, reduce the rule which number is the opposite.
    /// - if zero, do what YYDEFACT says.
    static const unsigned short int yytable_[];
    static const signed char yytable_ninf_;

    static const short int yycheck_[];

    /// For a state, its accessing symbol.
    static const unsigned char yystos_[];

    /// For a rule, its LHS.
    static const unsigned char yyr1_[];
    /// For a rule, its RHS length.
    static const unsigned char yyr2_[]; 

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *n);


    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#if YYDEBUG
    /// A type to store symbol numbers and -1.
    typedef short int rhs_number_type;
    /// A `-1'-separated list of the rules' RHS.
    static const rhs_number_type yyrhs_[];
    /// For each rule, the index of the first RHS symbol in \a yyrhs_.
    static const unsigned short int yyprhs_[];
    /// For each rule, its source line number.
    static const unsigned short int yyrline_[];
    /// For each scanner token number, its symbol number.
    static const unsigned short int yytoken_number_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    /* Debugging.  */
    int yydebug_;
    std::ostream* yycdebug_;
#endif

    /// Convert a scanner token number \a t to a symbol number.
    token_number_type yytranslate_ (int t);

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg        Why this token is reclaimed.
    ///                     If null, do not display the symbol, just free it.
    /// \param yytype       The symbol type.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    inline void yydestruct_ (const char* yymsg,
			     int yytype,
			     semantic_type* yyvaluep,
			     location_type* yylocationp);

    /// Pop \a n symbols the three stacks.
    inline void yypop_ (unsigned int n = 1);

    /* Constants.  */
    static const int yyeof_;
    /* LAST_ -- Last index in TABLE_.  */
    static const int yylast_;
    static const int yynnts_;
    static const int yyempty_;
    static const int yyfinal_;
    static const int yyterror_;
    static const int yyerrcode_;
    static const int yyntokens_;
    static const unsigned int yyuser_token_number_max_;
    static const token_number_type yyundef_token_;

    /* User arguments.  */
    void * scanner;
    SubsetValueExpressionDriver& driver;
    int start_token;
    int numberOfFunctionChars;
  };

} // parserSubset
/* Line 270 of lalr1.cc  */
#line 438 "SubsetValueExpressionParser.tab.hh"



#endif /* !YY_PARSERSUBSET_SUBSETVALUEEXPRESSIONPARSER_TAB_HH_INCLUDED  */

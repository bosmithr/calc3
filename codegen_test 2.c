bplist00�XUTI-Data�	
_public.utf16-plain-textZpublic.rtf_ public.utf16-external-plain-text_public.utf8-plain-text_$com.apple.traditional-mac-plain-textO�# i n c l u d e   " c t a p . h "  # i n c l u d e   " t o k e n i z e r . c "  # i n c l u d e   " c o d e g e n . c "  T E S T S / / i n t   m a i n ( )  {                 c o d e g e n ( )   ;          F I L E   * f p   =   N U L L ;          f p   =   f o p e n ( " p o s t f i x . t x t " ,   " r " ) ;      o k ( f p ! = N U L L ,   " 1   d o e s   i n   f a c t   e q u a l   1 " ) ;         }  __{\rtf1\ansi\ansicpg1252\cocoartf2511
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;\f1\fswiss\fcharset0 Helvetica;\f2\fnil\fcharset0 Menlo-Italic;
\f3\fnil\fcharset0 Menlo-Bold;}
{\colortbl;\red255\green255\blue255;\red100\green56\blue32;\red255\green255\blue255;\red196\green26\blue22;
\red0\green0\blue0;\red83\green101\blue121;\red155\green35\blue147;}
{\*\expandedcolortbl;;\csgenericrgb\c39147\c22031\c12446;\csgenericrgb\c100000\c100000\c100000;\csgenericrgb\c77000\c10200\c8600;
\csgenericrgb\c0\c0\c0;\csgenericrgb\c32401\c39745\c47507;\csgenericrgb\c60759\c13753\c57628;}
\deftab741
\pard\tx741\pardeftab741\pardirnatural\partightenfactor0

\f0\fs30 \cf2 \cb3 #include \cf4 "ctap.h"
\f1\fs24 \cf0 \

\f0\fs30 \cf2 #include \cf4 "tokenizer.c"
\f1\fs24 \cf0 \

\f0\fs30 \cf2 #include \cf4 "codegen.c"
\f1\fs24 \cf0 \

\f0\fs30 \cf5 TESTS
\f2\i \cf6 //int main()
\f1\i0\fs24 \cf0 \

\f0\fs30 \cf5 \{
\f1\fs24 \cf0 \

\f0\fs30 \cf5    
\f1\fs24 \cf0 \

\f0\fs30 \cf5     codegen() ;
\f1\fs24 \cf0 \

\f0\fs30 \cf5     FILE *fp = 
\f3\b \cf7 NULL
\f0\b0 \cf5 ;
\f1\fs24 \cf0 \

\f0\fs30 \cf5     fp = fopen(\cf4 "postfix.txt"\cf5 , \cf4 "r"\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5   ok(fp!=
\f3\b \cf7 NULL
\f0\b0 \cf5 , \cf4 "1 does in fact equal 1"\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5    
\f1\fs24 \cf0 \

\f0\fs30 \cf5 \}
\f1\fs24 \cf0 \
}O���# i n c l u d e   " c t a p . h " 
 # i n c l u d e   " t o k e n i z e r . c " 
 # i n c l u d e   " c o d e g e n . c " 
 T E S T S / / i n t   m a i n ( ) 
 { 
       
         c o d e g e n ( )   ; 
         F I L E   * f p   =   N U L L ; 
         f p   =   f o p e n ( " p o s t f i x . t x t " ,   " r " ) ; 
     o k ( f p ! = N U L L ,   " 1   d o e s   i n   f a c t   e q u a l   1 " ) ; 
       
 } 
 _�#include "ctap.h"
#include "tokenizer.c"
#include "codegen.c"
TESTS//int main()
{
   
    codegen() ;
    FILE *fp = NULL;
    fp = fopen("postfix.txt", "r");
  ok(fp!=NULL, "1 does in fact equal 1");
   
}
O�#include "ctap.h"#include "tokenizer.c"#include "codegen.c"TESTS//int main(){       codegen() ;    FILE *fp = NULL;    fp = fopen("postfix.txt", "r");  ok(fp!=NULL, "1 does in fact equal 1");   }     9 D g � �I�	P
"                           
�
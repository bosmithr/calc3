bplist00�XUTI-Data�	
_public.utf16-plain-textZpublic.rtf_ public.utf16-external-plain-text_public.utf8-plain-text_$com.apple.traditional-mac-plain-textOp# i n c l u d e   " c t a p . h "  # i n c l u d e   " t o k e n i z e r . c "  # i n c l u d e   " i n f i x t o p o s t f i x . c "  T E S T S   {                        / /   o k ( i s _ o p e r a t o r ( ' + ' ) = = 1 ,   " 1   d o e s   i n   f a c t   e q u a l   1 " ) ;          i n t   t e m p = t o p ;          p u s h ( ' 1 ' ) ;          / / o k ( t o p = = t e m p ,   " S t a c k   O v e r f l o w " ) ;          / / o k ( t o p = = t e m p + 1 ,   " p u s h   f u n c t i o n   s u c c e s s " ) ;        / /   o k ( p o p ( ) = = s t a c k [ t o p + 1 ] , " p o p   f u n c t i o n   s u c c e s s " ) ;          F I L E   * f p = N U L L ;          F I L E   * o u t p u t = f o p e n ( " t e m p . t x t " , " w " ) ;          w r i t e c h a r ( o u t p u t , ' c ' ) ;          f c l o s e ( o u t p u t ) ;          f p = f o p e n ( " t e m p . t x t " , " r " ) ;          o k ( f g e t c ( o u t p u t ) = = ' c ' , " w r i t e c h a r   f u n c t i o n   s u c c e s s " ) ;          o k ( p r e c e d e n c e ( ' ^ ' ) = = 3 ,   " p r e c e d e n c e   f u n c t i o n   s u c c e s s " ) ;        / *   F I L E   * i n p u t = f o p e n ( " t e m p 2 . t x t " , " w " ) ;                   w r i t e c h a r ( i n p u t , ' 1 ' ) ;            w r i t e c h a r ( i n p u t , ' + ' ) ;            w r i t e c h a r ( i n p u t , ' 1 ' ) ;          f c l o s e ( i n p u t ) ;          i n p u t = f o p e n ( " t e m p 2 . t x t " , " r " ) ;          F I L E   * o u t p u t 2 =   N U L L ;          o u t p u t 2   =   f o p e n ( " t e m p 3 . t x t " , " w " ) ; ;          i n f i x 2 p o s t f i x ( i n p u t ,   o u t p u t 2 ) ;          o u t p u t 2 = f o p e n ( " t e m p 3 . t x t " , " r " ) ;          o k ( r e a d c h a r ( o u t p u t 2 ) = = ' 1 ' , " i n f i x 2 p o s t f i x   f u n c t i o n   s u c c e s s " ) ;          * /          t e s t i n f i x t o p o s t f i x ( ) ;          F I L E   * i n p u t = f o p e n ( " p o s t f i x . t x t " , " r " ) ;          o k ( i n p u t ! = N U L L , " i n f i x 2 p o s t f i x   f u n c t i o n   s u c c e s s " ) ;  }  _�{\rtf1\ansi\ansicpg1252\cocoartf2511
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;\f1\fswiss\fcharset0 Helvetica;\f2\fnil\fcharset0 Menlo-Italic;
\f3\fnil\fcharset0 Menlo-Bold;}
{\colortbl;\red255\green255\blue255;\red100\green56\blue32;\red255\green255\blue255;\red196\green26\blue22;
\red0\green0\blue0;\red83\green101\blue121;\red155\green35\blue147;\red28\green0\blue207;}
{\*\expandedcolortbl;;\csgenericrgb\c39147\c22031\c12446;\csgenericrgb\c100000\c100000\c100000;\csgenericrgb\c77000\c10200\c8600;
\csgenericrgb\c0\c0\c0;\csgenericrgb\c32401\c39745\c47507;\csgenericrgb\c60759\c13753\c57628;\csgenericrgb\c11000\c0\c81000;}
\deftab741
\pard\tx741\pardeftab741\pardirnatural\partightenfactor0

\f0\fs30 \cf2 \cb3 #include \cf4 "ctap.h"
\f1\fs24 \cf0 \

\f0\fs30 \cf2 #include \cf4 "tokenizer.c"
\f1\fs24 \cf0 \

\f0\fs30 \cf2 #include \cf4 "infixtopostfix.c"
\f1\fs24 \cf0 \

\f0\fs30 \cf5 TESTS \{
\f1\fs24 \cf0 \

\f0\fs30 \cf5    
\f1\fs24 \cf0 \

\f0\fs30 \cf5     
\f1\fs24 \cf0 \

\f0\fs30 \cf5    
\f2\i \cf6 // ok(is_operator('+')==1, "1 does in fact equal 1");
\f1\i0\fs24 \cf0 \

\f0\fs30 \cf5     
\f3\b \cf7 int
\f0\b0 \cf5  temp=top;
\f1\fs24 \cf0 \

\f0\fs30 \cf5     push(\cf8 '1'\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5     
\f2\i \cf6 //ok(top==temp, "Stack Overflow");
\f1\i0\fs24 \cf0 \

\f0\fs30 \cf5     
\f2\i \cf6 //ok(top==temp+1, "push function success");
\f1\i0\fs24 \cf0 \

\f0\fs30 \cf5    
\f2\i \cf6 // ok(pop()==stack[top+1],"pop function success");
\f1\i0\fs24 \cf0 \

\f0\fs30 \cf5     FILE *fp=
\f3\b \cf7 NULL
\f0\b0 \cf5 ;
\f1\fs24 \cf0 \

\f0\fs30 \cf5     FILE *output=fopen(\cf4 "temp.txt"\cf5 ,\cf4 "w"\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5     writechar(output,\cf8 'c'\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5     fclose(output);
\f1\fs24 \cf0 \

\f0\fs30 \cf5     fp=fopen(\cf4 "temp.txt"\cf5 ,\cf4 "r"\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5     ok(fgetc(output)==\cf8 'c'\cf5 ,\cf4 "writechar function success"\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5     ok(precedence(\cf8 '^'\cf5 )==\cf8 3\cf5 , \cf4 "precedence function success"\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5    
\f2\i \cf6 /* FILE *input=fopen("temp2.txt","w");
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     writechar(input,'1');
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6      writechar(input,'+');
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6      writechar(input,'1');
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     fclose(input);
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     input=fopen("temp2.txt","r");
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     FILE *output2= NULL;
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     output2 = fopen("temp3.txt","w");;
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     infix2postfix(input, output2);
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     output2=fopen("temp3.txt","r");
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     ok(readchar(output2)=='1',"infix2postfix function success");
\f1\i0\fs24 \cf0 \

\f2\i\fs30 \cf6     */
\f1\i0\fs24 \cf0 \

\f0\fs30 \cf5     testinfixtopostfix();
\f1\fs24 \cf0 \

\f0\fs30 \cf5     FILE *input=fopen(\cf4 "postfix.txt"\cf5 ,\cf4 "r"\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5     ok(input!=
\f3\b \cf7 NULL
\f0\b0 \cf5 ,\cf4 "infix2postfix function success"\cf5 );
\f1\fs24 \cf0 \

\f0\fs30 \cf5 \}
\f1\fs24 \cf0 \
}Or��# i n c l u d e   " c t a p . h " 
 # i n c l u d e   " t o k e n i z e r . c " 
 # i n c l u d e   " i n f i x t o p o s t f i x . c " 
 T E S T S   { 
       
         
       / /   o k ( i s _ o p e r a t o r ( ' + ' ) = = 1 ,   " 1   d o e s   i n   f a c t   e q u a l   1 " ) ; 
         i n t   t e m p = t o p ; 
         p u s h ( ' 1 ' ) ; 
         / / o k ( t o p = = t e m p ,   " S t a c k   O v e r f l o w " ) ; 
         / / o k ( t o p = = t e m p + 1 ,   " p u s h   f u n c t i o n   s u c c e s s " ) ; 
       / /   o k ( p o p ( ) = = s t a c k [ t o p + 1 ] , " p o p   f u n c t i o n   s u c c e s s " ) ; 
         F I L E   * f p = N U L L ; 
         F I L E   * o u t p u t = f o p e n ( " t e m p . t x t " , " w " ) ; 
         w r i t e c h a r ( o u t p u t , ' c ' ) ; 
         f c l o s e ( o u t p u t ) ; 
         f p = f o p e n ( " t e m p . t x t " , " r " ) ; 
         o k ( f g e t c ( o u t p u t ) = = ' c ' , " w r i t e c h a r   f u n c t i o n   s u c c e s s " ) ; 
         o k ( p r e c e d e n c e ( ' ^ ' ) = = 3 ,   " p r e c e d e n c e   f u n c t i o n   s u c c e s s " ) ; 
       / *   F I L E   * i n p u t = f o p e n ( " t e m p 2 . t x t " , " w " ) ; 
         
         w r i t e c h a r ( i n p u t , ' 1 ' ) ; 
           w r i t e c h a r ( i n p u t , ' + ' ) ; 
           w r i t e c h a r ( i n p u t , ' 1 ' ) ; 
         f c l o s e ( i n p u t ) ; 
         i n p u t = f o p e n ( " t e m p 2 . t x t " , " r " ) ; 
         F I L E   * o u t p u t 2 =   N U L L ; 
         o u t p u t 2   =   f o p e n ( " t e m p 3 . t x t " , " w " ) ; ; 
         i n f i x 2 p o s t f i x ( i n p u t ,   o u t p u t 2 ) ; 
         o u t p u t 2 = f o p e n ( " t e m p 3 . t x t " , " r " ) ; 
         o k ( r e a d c h a r ( o u t p u t 2 ) = = ' 1 ' , " i n f i x 2 p o s t f i x   f u n c t i o n   s u c c e s s " ) ; 
         * / 
         t e s t i n f i x t o p o s t f i x ( ) ; 
         F I L E   * i n p u t = f o p e n ( " p o s t f i x . t x t " , " r " ) ; 
         o k ( i n p u t ! = N U L L , " i n f i x 2 p o s t f i x   f u n c t i o n   s u c c e s s " ) ; 
 } 
 _8#include "ctap.h"
#include "tokenizer.c"
#include "infixtopostfix.c"
TESTS {
   
    
   // ok(is_operator('+')==1, "1 does in fact equal 1");
    int temp=top;
    push('1');
    //ok(top==temp, "Stack Overflow");
    //ok(top==temp+1, "push function success");
   // ok(pop()==stack[top+1],"pop function success");
    FILE *fp=NULL;
    FILE *output=fopen("temp.txt","w");
    writechar(output,'c');
    fclose(output);
    fp=fopen("temp.txt","r");
    ok(fgetc(output)=='c',"writechar function success");
    ok(precedence('^')==3, "precedence function success");
   /* FILE *input=fopen("temp2.txt","w");
    
    writechar(input,'1');
     writechar(input,'+');
     writechar(input,'1');
    fclose(input);
    input=fopen("temp2.txt","r");
    FILE *output2= NULL;
    output2 = fopen("temp3.txt","w");;
    infix2postfix(input, output2);
    output2=fopen("temp3.txt","r");
    ok(readchar(output2)=='1',"infix2postfix function success");
    */
    testinfixtopostfix();
    FILE *input=fopen("postfix.txt","r");
    ok(input!=NULL,"infix2postfix function success");
}
O8#include "ctap.h"#include "tokenizer.c"#include "infixtopostfix.c"TESTS {          // ok(is_operator('+')==1, "1 does in fact equal 1");    int temp=top;    push('1');    //ok(top==temp, "Stack Overflow");    //ok(top==temp+1, "push function success");   // ok(pop()==stack[top+1],"pop function success");    FILE *fp=NULL;    FILE *output=fopen("temp.txt","w");    writechar(output,'c');    fclose(output);    fp=fopen("temp.txt","r");    ok(fgetc(output)=='c',"writechar function success");    ok(precedence('^')==3, "precedence function success");   /* FILE *input=fopen("temp2.txt","w");        writechar(input,'1');     writechar(input,'+');     writechar(input,'1');    fclose(input);    input=fopen("temp2.txt","r");    FILE *output2= NULL;    output2 = fopen("temp3.txt","w");;    infix2postfix(input, output2);    output2=fopen("temp3.txt","r");    ok(readchar(output2)=='1',"infix2postfix function success");    */    testinfixtopostfix();    FILE *input=fopen("postfix.txt","r");    ok(input!=NULL,"infix2postfix function success");}     9 D g � �	y"�                           &�
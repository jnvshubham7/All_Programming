%{


int COMMENT=0;


%}


identifier[a-z|A-Z][a-z|A-Z|0-9]*
%%


#.* {printf("\n%s is a preprocesor directive",yytext);}

int {printf("\n\t%s is a keyword",yytext);}

float {printf("\n\t%s is a keyword",yytext);}

double {printf("\n\t%s is a keyword",yytext);}

char {printf("\n\t%s is a keyword",yytext);}

if {printf("\n\t%s is a keyword",yytext);}

else {printf("\n\t%s is a keyword",yytext);}

while {printf("\n\t%s is a keyword",yytext);}

do {printf("\n\t%s is a keyword",yytext);}

return {printf("\n\t%s is a keyword",yytext);}

break {printf("\n\t%s is a keyword",yytext);}

continue {printf("\n\t%s is a keyword",yytext);}

void {printf("\n\t%s is a keyword",yytext);}

switch {printf("\n\t%s is keyword",yytext);}

for {printf("\n\t%s is a keyword",yytext);}

typedef {printf("\n\t%s is a keyword",yytext);}

struct {printf("\n\t%s is a keyword",yytext);}

goto {printf("\n\t%s is a keyword",yytext);}

"/*" {COMMENT=1;}

"*/" {COMMENT=0;}

{identifier}\( {if(!COMMENT) printf("\nFUNCTIONS\n\t%s",yytext);}

\{ {if(!COMMENT) printf("\nBLOCK BEGINS");}

\} {if(!COMMENT) printf("\nBLOCK ENDS");}

{identifier} {if(!COMMENT) printf("\n%sIDENTIFIER",yytext);}

{identifier}(\[[0-9]*\])?\( {if(!COMMENT)

printf("\n%sIDENTIFIER",yytext);}

\".*\" {if(COMMENT)printf("\n\t%s is a string",yytext);}

[0-9]+ {if(COMMENT)printf("\n\t%s is a number",yytext);}

\)(\;)? {if(!COMMENT)printf("\n\t");ECHO;printf("\n");}

\(ECHO;

= {if(!COMMENT) printf("\n\t%s is an assignment operator",yytext);}

\> {if(!COMMENT) printf("n\t%s is a relational operator",yytext);}

\\n

%%

int main(int argc,char **argv)

{
if(argc>1)

{
FILE *file;


file=fopen(argv[1],"r");

if(!file)

{
printf("COULD NOT OPEN %s\n",argv[1]);
exit(1);
}

yyin=file;
}

yylex();

printf("\n\n");

return 0;

}

int yywrap()

{
    
return 0;

}


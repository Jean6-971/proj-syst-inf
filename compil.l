
%%

int printf("trouvé mot clé INT");

%%

int yywrap(){
    return 1 ;
}

int main (){
    yylex() ;
    return 1 ;
}
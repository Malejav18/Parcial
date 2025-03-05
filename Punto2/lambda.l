%{
#include <stdio.h>
#include <stdlib.h>

int lambda = 0;
%}

%%

"lambda"         { lambda = 1; }  // Palabra "lambda"
[a-zA-Z_][a-zA-Z0-9_]*   { } /* Identificador */
[0-9]+           { } /* Numero */
"*"              { } /* Multiplicaciom */
"="              { } /* Asigancion */
":"              { } /* Dos puntos */
"("              { } /* Parentesis izquierdo */
")"              { } /* Parentesis derecho */
[ \t]+         { } /* Espacios, tabulaciones y saltos */
.                { } /* ignorar */

%%

int main(int argc, char **argv) {
    yylex();
    if (lambda) {
        printf("ACEPTA");
    } else {
        printf("NO ACEPTA");
    }
    return 0;
}

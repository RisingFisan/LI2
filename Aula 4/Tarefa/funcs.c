#include <stdio.h>
#include "funcs.h"

void printBoard(Board a) {
    for(int i = 0; i < a.linhas; i++) {
        for(int j = 0; j < a.colunas; j++) {
            printf("%c ",a.caracteres[i][j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    Board a;
    a.linhas = 2;
    a.colunas = 2;
    a.caracteres = malloc((char*) * 2);
    return 0;
}

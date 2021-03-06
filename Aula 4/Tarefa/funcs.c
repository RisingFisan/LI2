#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void printBoard(Board a, int ruler) {
    putchar('\n');
    if(ruler) {
        printf("  ");
        for (int i = 0; i < a.colunas; i++) printf("%d ", i);
        putchar('\n');
    }
    for(int i = 0; i < a.linhas; i++) {
        if(ruler) printf("%d ",i);
        for(int j = 0; j < a.colunas; j++) {
            printf("%c ", a.caracteres[i][j]);
        }
        putchar('\n');
    }
}

Board fillBoard(FILE* f) {
    Board a;
    fscanf(f,"%d %d\n",&a.linhas,&a.colunas);
    a.caracteres = malloc(sizeof(char*) * a.linhas);
    for(int i = 0; i < a.linhas; i++) {
        a.caracteres[i] = malloc(a.colunas);
        for(int j = 0; j < a.colunas; j++) {
            fscanf(f,"%c ",&a.caracteres[i][j]);
        }
    }
    return a;
}

void saveBoard(Board a, FILE* f) {
    fprintf(f,"%d %d\n",a.linhas,a.colunas);
    for(int i = 0; i < a.linhas; i++) {
        for(int j = 0; j < a.colunas; j++) {
            fprintf(f,"%c ",a.caracteres[i][j]);
        }
        fprintf(f,"\n");
    }
}
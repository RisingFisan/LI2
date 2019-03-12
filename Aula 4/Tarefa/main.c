#include <stdio.h>
#include "funcs.h"

#define FILEPATH "tabuleiro.txt"

int main() {
    int quit = 0;
    FILE* f = fopen(FILEPATH,"r");
    if(f == NULL) printf("X");
    Board a = fillBoard(f);
    fclose(f);
    while(!quit) {
        char opt,c;
        printf("***TABULEIRO***\n\n"
               "1. Ver tabuleiro.\n"
               "2. Alterar tabuleiro.\n"
               "3. Gravar alterações.\n\n"
               "0. Sair\n\nSelecione a opção que pretende: ");
        opt = getchar();
        while((c = getchar()) != '\n');
        switch(opt) {
            case '1':
                putchar('\n');
                printBoard(a,0);
                break;
            case '2':
                putchar('\n');
                printBoard(a,1);
                printf("\nIntroduza a posição do elemento que pretende alterar (coluna linha): ");
                int x,y,ch;
                scanf("%d %d",&x,&y);
                printf("Qual o caracter que pretende colocar nesse quadrado (X ou O)? ");
                while((ch = getchar()) != 'X' && ch != 'O');
                while((c = getchar()) != '\n');
                a.caracteres[y][x] = ch;
                printf("\nCaracter colocado com sucesso!\n");
                break;
            case '3':
                f = fopen(FILEPATH,"w");
                saveBoard(a,f);
                printf("\nAlterações guardadas com sucesso!\n");
                break;
            case '0':
                quit = 1;
                break;
        }
        if(!quit) {
            printf("\nPrima ENTER para continuar...\n");
            while((c = getchar()) != '\n' && c != EOF) {}
        }
    }
    return 0;
}

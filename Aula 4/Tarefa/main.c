#include <stdio.h>
#include "funcs.h"

int main() {
    FILE* f = fopen("tabuleiro.txt","r+");
    Board a;
    //a = fillBoard(f);
    while(1) {
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

                break;
        }
    }
    return 0;
}

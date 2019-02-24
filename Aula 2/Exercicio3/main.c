#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nib.h"

int main() {
    int exit = 0;
    char nib[75];
    while(!exit) {
        char opt, c;
        printf("------NIB------\n\n"
               "1. Ler NIB.\n"
               "2. Ver banco.\n"
               "3. Ver número da conta.\n"
               "4. Ver números de controlo.\n"
               "5. Ver NIB com espaçamento.\n\n"
               "0. Sair\n\n"
               "Indique o número correspondente à opção que deseja: ");
        opt = getchar();
        while((c = getchar()) != '\n' && c != EOF) {}
        switch (opt) {
            case '1':
                printf("\nIntroduza o seu NIB: ");
                fgets(nib,75,stdin);
                formatNIB(nib);
                printf("\nNIB introduzido com sucesso.\n");
                break;
            case '2':;
                char * banco = getBank(nib);
                printf("\nO seu banco é: %s\n",banco);
                break;
            case '3':;
                char * numConta = getAccount(nib);
                printf("\nO número da sua conta é %s\n",numConta);
                break;
            case '4':
                printf("\nOs números de controlo do seu NIB são %c%c\n",nib[19],nib[20]);
                break;
            case '5':
                for(int i = 0; i < 21; i++) {
                    if(i == 4 || i == 8 || i == 19) putchar(' ');
                    putchar(nib[i]);
                }
                putchar('\n');
                break;
            case '0':
                exit = 1;
                break;
            default:
                break;
        }
        if(!exit) {
            printf("Prima ENTER para continuar...\n");
            while((c = getchar()) != '\n' && c != EOF) {}
        }
    }
    return 0;
}
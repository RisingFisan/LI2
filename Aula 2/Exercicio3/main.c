#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nib.h"

int main() {
    int opt;
    int exit = 1;
    static char nib[21];
    while(exit) {
        printf("------NIB------\n\n"
               "1. Ler NIB.\n"
               "2. Ver banco.\n"
               "3. Ver número da conta.\n"
               "4. Ver números de controlo.\n"
               "5. Ver NIB com espaçamento.\n\n"
               "0. Sair\n"
               "Indique o número correspondente à opção que deseja: ");
        scanf("%d", &opt);
        getchar();
        switch (opt) {
            case 1:
                printf("\nIntroduza o seu NIB: ");
                scanf("%s", nib);
                break;
            case 2:;
                char * banco = getBank(nib);
                printf("\nO seu banco é: %s\n",banco);
                break;
            case 3:;
                char nConta[11];
                strncpy(nConta,nib + 8,11);
                char* end;
                printf("\nO número da sua conta é %ld\n",strtoul(nConta,&end,10));
            default:
                exit = 0;
                break;
        }
        getchar();
    }
    return 0;
}
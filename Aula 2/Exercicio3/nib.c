#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * getBank(char nib[]) {
    static char bank[100];
    char *end;
    char nBanco[4];
    strncpy(nBanco, nib, 4);
    switch (strtol(nBanco, &end, 10)) {
        case 7:
            strcpy(bank, "Novo Banco");
            break;
        case 10:
            strcpy(bank, "BPI");
            break;
        case 18:
            strcpy(bank, "Santander Totta");
            break;
        case 19:
            strcpy(bank, "BBVA");
            break;
        case 23:
            strcpy(bank, "Activo Bank");
            break;
        case 25:
            strcpy(bank, "Caixa BI");
            break;
        case 32:
            strcpy(bank, "Barclays");
            break;
        case 33:
            strcpy(bank, "Millenium BCP");
            break;
        case 34:
            strcpy(bank, "BNP Paribas");
            break;
        case 35:
            strcpy(bank, "CGD");
            break;
        case 235:
            strcpy(bank, "Banco Carregosa");
            break;
        case 36:
            strcpy(bank, "Montepio Geral");
            break;
        case 38:
            strcpy(bank, "Banif");
            break;
        case 43:
            strcpy(bank, "Deutsche Bank");
            break;
        case 45:
            strcpy(bank, "Crédito Agrícola");
            break;
        case 46:
            strcpy(bank, "Popular");
            break;
        case 59:
            strcpy(bank, "Caixa Eletrónica da Misericórdia de Angra do Heroísmo");
            break;
        case 61:
            strcpy(bank, "Big");
            break;
        case 65:
            strcpy(bank, "Best");
            break;
        case 79:
            strcpy(bank, "BIC");
            break;
        case 193:
            strcpy(bank, "Banco CTT");
            break;
        case 269:
            strcpy(bank, "Bankinter");
            break;
        case 781:
            strcpy(bank, "Direção Geral do Tesouro");
            break;
        case 5180:
            strcpy(bank, "Caixa Central de Crédito Agrícola Mútuo");
            break;
        default:
            strcpy(bank, "desconhecido");
    }
    return bank;
}
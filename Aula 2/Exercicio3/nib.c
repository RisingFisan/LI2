#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void formatNIB(char nib[]) {
    int i = 0;
    while(nib[i] != '\n' && nib[i]) {
        if(nib[i] == ' ') {
            for(int j = i; nib[j]; j++) {
                nib[j] = nib[j + 1];
            }
        }
        else i++;
    }
    nib[22] = '\0';
}

char * getAccount(char nib[]) {
    static char nConta[12];
    strncpy(nConta,nib + 8,11);
    nConta[11] = '\0';
    while(1) {
        if(nConta[0] != '0' || !nConta[1]) break;
        else {
            for(int j = 0; nConta[j]; j++) {
                nConta[j] = nConta[j + 1];
            }
        }
    }
    return nConta;
}

char * getBank(char nib[]) {
    static char bank[100];
    char *end;
    int nBanco;
    sscanf(nib,"%4d",&nBanco);
    switch (nBanco) {
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
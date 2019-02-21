#include <stdio.h>
#include <string.h>

char * signo();

int main() {
    int dia, mes;
    printf("Indique o seu dia e mês de nascimento, em formato numérico e separados por um espaço: ");
    scanf("%d %d",&dia,&mes);
    char * signoZ = signo(dia,mes);
    printf("O seu signo do zodíaco é %s", signoZ);
    return 0;
}

char *signo(int dia, int mes) {
    static char buffer[25];
    switch (mes) {
        case 1:
            strcpy(buffer, dia < 20 ? "Capricórnio" : "Aquário");
            break;
        case 2:
            strcpy(buffer, dia < 19 ? "Aquário" : "Peixes");
            break;
        case 3:
            strcpy(buffer, dia < 21 ? "Peixes" : "Carneiro");
            break;
        case 4:
            strcpy(buffer, dia < 20 ? "Carneiro" : "Touro");
            break;
        case 5:
            strcpy(buffer, dia < 21 ? "Touro" : "Gémeos");
            break;
        case 6:
            strcpy(buffer, dia < 21 ? "Gémeos" : "Caranguejo");
            break;
        case 7:
            strcpy(buffer, dia < 23 ? "Caranguejo" : "Leão");
            break;
        case 8:
            strcpy(buffer, dia < 23 ? "Leão" : "Virgem");
            break;
        case 9:
            strcpy(buffer, dia < 23 ? "Virgem" : "Balança");
            break;
        case 10:
            strcpy(buffer, dia < 23 ? "Balança" : "Escorpião");
            break;
        case 11:
            strcpy(buffer, dia < 22 ? "Escorpião" : "Sagitário");
            break;
        case 12:
            strcpy(buffer, dia < 22 ? "Sagitário" : "Capricórnio");
            break;
        default:
            strcpy(buffer, "desconhecido");
            break;
    }
    return buffer;
}
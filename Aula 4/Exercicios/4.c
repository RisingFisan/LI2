#include <stdio.h>

int main() {
    int num;
    FILE* fptr = fopen("programa.txt", "w");
    if (fptr == NULL) {
        printf("Erro!");
        return 1;
    }
    printf("Introduza um numero: ");
    int numero;
    scanf("%d", &numero);
    fprintf(fptr, "%d", numero);
    fclose(fptr);
    return 0;
}

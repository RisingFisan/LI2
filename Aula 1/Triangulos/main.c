#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main(void) {
    int a, b ,c;
    char* values = malloc(N);

    puts("Introduza as medidas dos 3 lados de um triângulo: ");
    if(fgets(values,N,stdin) == NULL) {
        puts("ERRO A LER INPUT");
        return 1;
    }
    values[strcspn(values,"\n")] = 0;
    if(sscanf(values,"%d %d %d",&a,&b,&c) != 3) {
        puts("ERRO - NUMERO INVALIDO DE VALORES");
        return 1;
    }
    if(a < b + c && b < a + c && c < a + b && a > abs(b - c) && b > abs(a - c) && c > abs(a - b)) {        
        printf("Comprimento dos lados: %d %d %d\n",a,b,c);
        if(a == b && b == c) puts("Triangulo equilatero");
        else if(a == b || a == c || c == b) puts("Triangulo isosceles");
        else puts("Triangulo escaleno");
        double s = (a+b+c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area: %lf\n", area);
        return 0;
    }
    else {
        puts("ERRO - VALORES INVALIDOS");
        return 1;
    }
}
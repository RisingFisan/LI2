#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b ,c;
    printf("Introduza as medidas dos 3 lados de um triângulo: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a < b + c && b < a + c && c < a + b && a > abs(b - c) && b > abs(a - c) && c > abs(a - b)) {
        if(a == b && b == c) printf("Triangulo equilatero\n");
        else if(a == b || a == c || c == b) printf("Triangulo isosceles\n");
        else printf("Triangulo escaleno\n");
        double s = (a+b+c)/2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area: %lf", area);
        return 0;
    }
    else {
        printf("ERRO - VALORES INVALIDOS");
        return 1;
    }
}
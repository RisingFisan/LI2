#include <stdio.h>

int main() {
    FILE* f = fopen("programa.txt","r");
    int num;
    fscanf(f,"%d",&num);
    printf("Valor de n=%d\n",num);
    return 0;
}

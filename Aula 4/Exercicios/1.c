#include <stdio.h>

int main()
{
    int temps[2][7];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 7; j++) {
            printf("Cidade %d, dia %d: ",i+1,j+1);
            scanf("%d",&temps[i][j]);
        }
    }
    printf("\nValores de temperatura registados:\n\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 7; j++) {
            printf("Cidade %d, Dia %d = %d\n",i+1,j+1,temps[i][j]);
        }
    }
    return 0;
}

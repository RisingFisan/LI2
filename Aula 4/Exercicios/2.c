#include <stdio.h>
#define N 2

void fillArray(int mat[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("Introduza elemento da posição %d %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
}

void sumArrays(int m1[N][N], int m2[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%5d",(m1[i][j]+m2[i][j]));
        }
        putchar('\n');
    }
}

int main() {
    int mat1[N][N];
    int mat2[N][N];
    printf("Matriz 1\n");
    fillArray(mat1);
    printf("Matriz 2\n");
    fillArray(mat2);
    printf("\nMatriz Soma:\n");
    sumArrays(mat1,mat2);
    return 0;
}

#include <stdio.h>

void inserir(int m, int n, int mat[m][n]) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Posicao %d %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
}

int multiplicar(int m1, int n1, int m2, int n2, int mat1[m1][n1], int mat2[m2][n2], int r[m1][n2]) {
    if(m2 == n1) {
        for(int i = 0; i < m1; i++) {
            for(int j = 0; j < n2; j++) {
                int result = 0;
                for(int k = 0; k < m2; k++) {
                    result += (mat1[i][k] * mat2[k][j]);
                }
                r[i][j] = result;
            }
        }
        return 1;
    } else {
        printf("Impossível multiplicar estas matrizes.");
        return 0;
    }
}

void mostrar(int m, int n, int mat[m][n]) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%5d",(mat[i][j]));
        }
        putchar('\n');
    }
}

int main() {
    int l1,c1,l2,c2;
    printf("Inserir numero de linhas e de colunas da primeira matriz: ");
    scanf("%d %d",&l1,&c1);
    int mat1[l1][c1];
    printf("Inserir numero de linhas e de colunas da segunda matriz: ");
    scanf("%d %d",&l2,&c2);
    int mat2[l2][c2];
    printf("Introduza os elementos da matriz 1:\n");
    inserir(l1,c1,mat1);
    printf("Introduza os elementos da matriz 2:\n");
    inserir(l2,c2,mat2);
    int prod[l1][c2];
    if(multiplicar(l1,c1,l2,c2,mat1,mat2,prod)) mostrar(l1,c2,prod);
    return 0;
}

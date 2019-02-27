#include <stdio.h>
#include <stdlib.h>

int rand_between(int min, int max) {
    return rand() % (max - min) + min;
}

void alineaA(int N, int arr[N]) {
    printf("Reverse of array is:\n");
    for(int i = N; i > 0; i--) {
        printf("%d ",arr[i - 1]);
    }
}

void alineaB(int N, int arr[N]) {
    int max = arr[0], min = arr[0];
    for(int i = 1; i < N; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("min: %d, max: %d",min,max);
}

void alineaCDE(int N, int arr[N], int opt) {
    int min, max;
    printf("Insert range (min max): ");
    scanf("%d %d",&min,&max);
    double sum = 0.0;
    int dup[abs(max - min)];
    for(int i = 0; i < abs(max - min); i++) dup[i] = 0;
    for(int i = 0; i < N; i++) {
        int* x = arr + i;
        *x = rand_between(min,max);
        printf("%d ", *x);
        sum += *x;
        dup[*x - min] += 1;
    }
    if(opt != 'c' && opt != 'C') printf("\nAverage: %lf\n",sum/N);
    if(opt == 'e' || opt == 'E') {
        for(int i = 0; i < N; i++) {
            if(dup[arr[i] - min] == 2) {
                printf("%d has 1 duplicate\n", arr[i]);
                dup[arr[i] - min] = 0;
            }
            else if(dup[arr[i] - min] > 2) {
                printf("%d has %d duplicates\n", arr[i], dup[arr[i] - min] - 1);
                dup[arr[i] - min] = 0;
            }
        }
    }
}

void scanArray(int N, int arr[N]);

int main() {
    char c;
    int len;
    printf("Insert question letter: ");
    c = getchar();
    printf("Insert array size: ");
    scanf("%d",&len);
    int arr[len];
    switch(c) {
        case 'a':
        case 'A':
            scanArray(len,arr);
            alineaA(len,arr);
            break;
        case 'b':
        case 'B':
            scanArray(len,arr);
            alineaB(len,arr);
            break;
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'e':
        case 'E':
            alineaCDE(len,arr,c);
            break;
    }
    return 0;
}

void scanArray(int N, int arr[N]) {
    for(int i = 0; i < N; i++) {
        printf("Insert element of index %d: ",i);
        scanf("%d",arr + i);
    }
}


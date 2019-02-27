#include <stdio.h>

int main() {
    char frase[1000];
    printf("Insira uma frase: ");
    fgets(frase,1000,stdin);
    int freq[26];
    for(int i = 0; i < 26; i++) freq[i] = 0;
    int freqMax = 0;
    for(int i = 0; frase[i] != '\n' && frase[i]; i++) {
        char c = frase[i];
        if(c >= 'a' && c <= 'z') c -= ('a' - 'A');
        if(c >= 'A' && c <= 'Z') {
            int x = ++freq[(c - 'A')];
            if(x > freqMax) freqMax = x;
        }
    }
    for(int i = freqMax; i > 0; i--) {
        for(int j = 0; j < 26; j++) {
            if(freq[j] == i) {
                freq[j]--;
                printf("* ")
            } else printf("  ");
        }
        putchar('\n');
    }
    for(int i = 'A'; i <= 'Z'; i++) printf("%c ",i); // Imprime as letras abaixo do histograma.
    return 0;
}
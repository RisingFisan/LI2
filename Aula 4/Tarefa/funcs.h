typedef struct Tabuleiro {
    int linhas;
    int colunas;
    char* caracteres[];
} Board;

void printBoard(Board a);
Board fillBoard(FILE* f);
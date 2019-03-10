typedef struct Board {
    int linhas;
    int colunas;
    char** caracteres;
} Board;

void printBoard(Board a, int x);
Board fillBoard(FILE* f);
void saveBoard(Board a, FILE* f);
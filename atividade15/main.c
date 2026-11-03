#include <stdio.h>
#include <stdlib.h>

// a) Aloca matriz linhas x colunas, tudo inicializado com zero
int** alocar_matriz(int linhas, int colunas) {
    // Etapa 1: vetor de ponteiros (um para cada linha)
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) return NULL;

    // Etapa 2: para cada linha, um vetor de inteiros zerado
    for (int i = 0; i < linhas; i++) {
        *(matriz + i) = (int *)calloc(colunas, sizeof(int));   // calloc zera tudo

        if (*(matriz + i) == NULL) {                           // falhou na linha i
            for (int j = 0; j < i; j++) {                      // desfaz as linhas já criadas
                free(*(matriz + j));
            }
            free(matriz);
            return NULL;
        }
    }
    return matriz;
}

// b) Libera na ordem correta
void liberar_matriz(int **matriz, int linhas) {
    if (matriz == NULL) return;

    for (int i = 0; i < linhas; i++) {
        free(*(matriz + i));        // 1º: libera cada linha (vetores de inteiros)
    }
    free(matriz);                   // 2º: libera o vetor de ponteiros
}

int main() {
    int linhas = 3, colunas = 4;
    int **m = alocar_matriz(linhas, colunas);

    if (m == NULL) {
        printf("Erro de alocacao.\n");
        return 1;
    }

    m[1][2] = 7;                    // exemplo de uso

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    liberar_matriz(m, linhas);
    m = NULL;
}

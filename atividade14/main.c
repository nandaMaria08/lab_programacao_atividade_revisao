#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacidade = 4;                             // capacidade inicial
    int tamanho = 0;                                // quantos elementos já foram lidos
    int *v = (int *)malloc(capacidade * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocacao.\n");
        return 1;
    }

    int valor;
    printf("Digite inteiros (-1 para parar):\n");

    while (1) {
        scanf("%d", &valor);
        if (valor == -1) break;                     // condição de parada

        if (tamanho == capacidade) {                // vetor cheio: precisa crescer
            int nova_cap = capacidade * 2;
            int *temp = (int *)realloc(v, nova_cap * sizeof(int));  // ponteiro temporário

            if (temp == NULL) {                     // realloc falhou
                printf("Erro ao redimensionar.\n");
                free(v);                            // v ainda é válido: libera para não vazar
                return 1;
            }
            v = temp;                               // só atribui se deu certo
            capacidade = nova_cap;
        }

        *(v + tamanho) = valor;                     // guarda o valor
        tamanho++;
    }

    printf("Foram lidos %d valores: ", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(v + i));
    }
    printf("\n");

    free(v);
}

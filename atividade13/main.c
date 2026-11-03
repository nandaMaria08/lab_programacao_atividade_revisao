#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite o tamanho da amostra: ");
    scanf("%d", &n);

    if (n <= 0) {                                   // validação básica
        printf("Tamanho invalido.\n");
        return 1;
    }

    int *p = (int *)malloc(n * sizeof(int));        // aloca n inteiros na Heap

    if (p == NULL) {                                // teste obrigatório
        printf("Erro: falha na alocacao de memoria.\n");
        return 1;
    }

    long soma = 0;                                  // long evita estouro em somas grandes
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", p + i);                         // p + i já é o endereço, sem &
        soma += *(p + i);
    }

    double media = (double)soma / n;                // cast evita divisão inteira
    printf("Media = %.2f\n", media);

    free(p);                                        // libera a memória
     p = NULL;                                       // evita ponteiro pendente (dangling)
}

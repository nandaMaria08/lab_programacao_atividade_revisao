#include <stdio.h>
#include <stdlib.h>

int somar_elementos_ponteiro(int *p, int tamanho) {
    int soma = 0;
    int *fim = p + tamanho;   // aponta para uma posição depois do último elemento

    while (p < fim) {
        soma += *p;           // soma o conteúdo atual
        p++;                  // avança para o próximo inteiro
    }
    return soma;
}

int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int resultado;

    resultado = somar_elementos_ponteiro(v, 5);

    printf("Soma = %d\n", resultado);
    return 0;
}

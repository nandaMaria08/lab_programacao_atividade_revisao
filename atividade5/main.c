#include <stdio.h>
#include <stdlib.h>


int indice_maior_elemento(float *v, int tamanho) {
    if (tamanho <= 0) return -1;

    float *ptr_maior = v;

    for (int i = 1; i < tamanho; i++) {
        if (*(v + i) > *ptr_maior) {
            ptr_maior = (v + i);
        }
    }
    return ptr_maior - v;
}

int main() {
    float notas[6] = {3.5, 8.2, 1.0, 9.7, 4.4, 6.1};
    int idx = indice_maior_elemento(notas, 6);

    if (idx != -1) {
        printf("Maior elemento: %.1f\n", *(notas + idx));
        printf("Indice: %d\n", idx);
    }
    return 0;
}

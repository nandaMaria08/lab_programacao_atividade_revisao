#include <stdio.h>
#include <stdlib.h>


int meu_strlen(const char *str) {
    const char *inicio = str;
    while (*str != '\0') {
        str++;
    }
    return (int)(str - inicio);
}

int main() {
    char texto[] = "Laboratorio de Programacao";

    int tamanho = meu_strlen(texto);

    printf("String: \"%s\"\n", texto);
    printf("Comprimento calculado: %d caracteres\n", tamanho);

    return 0;
}

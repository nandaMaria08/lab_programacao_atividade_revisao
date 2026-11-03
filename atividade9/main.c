#include <stdio.h>
#include <stdlib.h>

// Implementação da função meu_strcmp
int meu_strcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    // Retorna a diferença do valor ASCII dos primeiros caracteres divergentes
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main() {
    char str1[] = "Abacate";
    char str2[] = "Abacaxi";
    char str3[] = "Abacate";

    int res1 = meu_strcmp(str1, str2);
    int res2 = meu_strcmp(str1, str3);

    printf("Comparando \"%s\" com \"%s\" = %d\n", str1, str2, res1);
    // Retorna valor negativo ('t' vem antes de 'x' na tabela ASCII)

    printf("Comparando \"%s\" com \"%s\" = %d\n", str1, str3, res2);
    // Retorna 0 porque sao estritamente iguais

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Implementação da função remover_quebra_linha
void remover_quebra_linha(char *str) {
    while (*str != '\0') {
        if (*str == '\n') {
            *str = '\0'; // Substitui a quebra de linha pelo terminador nulo
            break;
        }
        str++;
    }
}

int main() {
    char buffer[50];

    printf("Digite seu nome: ");
    fgets(buffer, sizeof(buffer), stdin); // Lê a entrada (incluindo o '\n' se couber)

    printf("Antes da sanitizacao (comprimento real com \n): ");
    for(int i = 0; buffer[i] != '\0'; i++) {
        if(buffer[i] == '\n') printf("\\n");
        else printf("%c", buffer[i]);
    }
    printf("\n");

    // Sanitiza a string
    remover_quebra_linha(buffer);

    printf("Apos sanitizacao: \"%s\"\n", buffer);

    return 0;
}

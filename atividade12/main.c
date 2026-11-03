#include <stdio.h>
#include <stdlib.h>

struct Ponto2D {
    float x, y;
};

int main() {
    struct Ponto2D p1 = {1.5f, 2.5f};   // p1 criada na Stack
    struct Ponto2D p2;                  // p2 criada na Stack (valores ainda lixo)

    p2 = p1;                            // cópia byte a byte: p1 -> p2

    printf("Depois da copia:\n");
    printf("p1 = (%.1f, %.1f)\n", p1.x, p1.y);   // (1.5, 2.5)
    printf("p2 = (%.1f, %.1f)\n", p2.x, p2.y);   // (1.5, 2.5)

    p2.x = 99.0f;                       // altera SOMENTE a memoria de p2

    printf("\nDepois de p2.x = 99.0f:\n");
    printf("p1 = (%.1f, %.1f)\n", p1.x, p1.y);   // (1.5, 2.5)  <- nao mudou
    printf("p2 = (%.1f, %.1f)\n", p2.x, p2.y);   // (99.0, 2.5)

    printf("\nEnderecos: &p1 = %p, &p2 = %p\n", (void*)&p1, (void*)&p2);  // diferentes
    return 0;
}

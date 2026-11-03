#include <stdio.h>

void atualizar (int *a, int b, int *c) {
    *a = *a + b; //*a é o x original: 5 + 3 = 8 agora x = 8
    b = b * 2; //b é só uma cópia local: 3 * 2 = 6 o y da main não muda, ou seja o b muda apenas na função atualizar
    *c = *a + b; //*c é o z original: 8 + 6 = 14 agora z = 14
}
int main () {
    int x = 5, y = 3, z = 2;
    atualizar (&x, y, &z); //Passa o endereço de x e z, ou seja eles podem ser modificados, de y passa apenas a cópia
    printf ("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}

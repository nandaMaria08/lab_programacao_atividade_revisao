#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor = 50;
    int *p = NULL ;
    int **q = NULL ;
    p = &valor ; // O erro acontecia pq estava associando uma variável ao ponteiro e não o endereço da variável &valor
    q = &p;
    **q = 100;
    printf (" Valor = %d\n", valor );
    return 0;
}

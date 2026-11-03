#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {10 , 20, 30, 40, 50};
    int *p = v;
    // Laco A:
    for (int i = 0; i < 5; i++) printf ("%d ", v[i]);
    // Laco B:
    for (int i = 0; i < 5; i++) printf ("%d ", *(p + i));
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome [50];
    float salario ;
} Funcionario ;

void reajustar_salario(Funcionario *f, float percentual){
    if(f != NULL){
        f->salario += f->salario * (percentual/100.0);
        printf("O salario eh %.2f", f->salario);
    }
}

int main()
{
    Funcionario f1 = {1, "Fernanda", 1500};
    reajustar_salario(&f1, 25.0);
}

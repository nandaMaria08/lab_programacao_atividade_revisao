#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[50];
    float nota;
} Aluno;

Aluno buscar_melhor_aluno(Aluno turma[], int n){
    Aluno melhor = turma[0];
    for (int i = 1; i < n; i++){
        if(turma[i].nota > melhor.nota){
            melhor = turma[i];
        }
    }
    return melhor;
}

int main()
{
    Aluno turma[4] = {
        {101, "Ana Beatriz", 8.5},
        {102, "Carlos Eduardo", 9.2},
        {103, "Mariana Fernanda", 7.8},
        {104, "Gabriel Silva", 9.0}
    };

    Aluno destaque = buscar_melhor_aluno(turma, 4);

    printf("=== ALUNO DESTAQUE DA TURMA ===\n");
    printf("Matricula: %d\n", destaque.matricula);
    printf("Nome: %s\n", destaque.nome);
    printf("Nota: %.2f\n", destaque.nota);
}

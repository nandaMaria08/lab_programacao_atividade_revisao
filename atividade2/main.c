#include <stdio.h>
#include <stdlib.h>

void decompor_tempo(int total_segundos, int *horas, int *minutos, int *segundos) { //Eu recebo o valor total de segundos por cópia e eu tenho acesso para modificar os valores de horas, minutos e segundos pois eu acesso os endereços por meio de ponteiros
    *horas = total_segundos / 3600; //modifico a variavel horas na função e na main
    *minutos = (total_segundos % 3600) / 60; //modifico a variavel minutos na função e na main
    *segundos = total_segundos % 60; //modifico a variavel segundos na função e na main
}

int main() {
    int total, h, m, s;
    printf("Digite o total de segundos: ");
    scanf("%d", &total);

    decompor_tempo(total, &h, &m, &s); // Passo o endereço das variaveis da main para que elas possam ser modificadas na função

    printf("Tempo formatado: %02d:%02d:%02d\n", h, m, s);
    return 0;
}

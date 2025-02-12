#include <stdio.h>

int main() {
    int a, b, c, d;
    int horas, min;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int inicio_em_minutos = a * 60 + b;
    int fim_em_minutos = c * 60 + d;
    if (fim_em_minutos <= inicio_em_minutos) {
        fim_em_minutos += 24 * 60; 
    }
    int duracao_total_minutos = fim_em_minutos - inicio_em_minutos;
    horas = duracao_total_minutos / 60;
    min = duracao_total_minutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, min);
    return 0;
}

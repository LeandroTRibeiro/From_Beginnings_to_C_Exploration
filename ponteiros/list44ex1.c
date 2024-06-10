/*
1) Escreva um programa que receba um número inteiro representando a quantidade total
de segundos e, usando passagem de parâmetros por referência, converta a quantidade
informada de segundos em Horas, Minutos e Segundos. Imprima o resultado da conversão
no formato HH:MM:SS. Utilize a seguinte função protótipo:
void converteHora (int total_segundos, int *hora, int *min, int *seg);
*/

#include <stdio.h>

void convertTime(int segTotal, int *hour, int *min, int *seg);

int main() {
    int segTotal;
    int hour;
    int min;
    int seg;

    printf("\nDigite a quantidade de segundos: ");
    scanf(" %d", &segTotal);

    convertTime(segTotal, &hour, &min, &seg);

    printf(hour < 10 ? "0%d:" : "%d:", hour);
    printf(min < 10 ? "0%d:" : "%d:", min);
    printf(seg < 10 ? "0%d" : "%d", seg);

    return 0;
};

void convertTime(int segTotal, int *hour, int *min, int *seg) {

    *hour = segTotal / 3600;
    *min = (segTotal % 3600) / 60;
    *seg = segTotal % 60;
    return;
};
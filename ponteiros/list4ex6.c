/*
6) Calcule o valor da expressão “x2 - y + 10” por meio de um programa em C, seguindo as seguintes regras:
- o cálculo da expressão deve ser feito numa função do tipo void;
- utilize apenas variáveis locais;
- a leitura dos dados e exibição dos resultados deve ser feita em main().
*/

#include <stdio.h>

void calcResult(float *x, float *y, float *result);

int main() {
    float x;
    float y;
    float result;

    printf("\nDigite o valor de x: ");
    scanf(" %f", &x);

    printf("\nDigite o valor de y: ");
    scanf(" %f", &y);

    calcResult(&x, &y, &result);

    printf("\nO valor do calculo x2 - y + 10: %.2f", result);

    return 0;
};

void calcResult(float *x, float *y, float *result) {
    *result = (*x * 2) - *y + 10;
    return;
};
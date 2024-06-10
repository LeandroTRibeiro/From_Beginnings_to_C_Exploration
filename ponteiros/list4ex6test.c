/*
6) Calcule o valor da expressão “x2 - y + 10” por meio de um programa em C, seguindo as seguintes regras:
- o cálculo da expressão deve ser feito numa função do tipo void;
- utilize apenas variáveis locais;
- a leitura dos dados e exibição dos resultados deve ser feita em main().
*/

#include <stdio.h>

void calc(int *x, int *y, int *result);

int main() {
    int x;
    int y;
    int result;

    printf("\nDigite o valor de x em seguida o valor de y: \n");
    scanf(" %d", &x);
    printf("\n");
    scanf(" %d", &y);

    calc(&x, &y, &result);

    printf("\nO resultado da expressao x2 - y + 10, sendo x = %d e y = %d e de: %d", x, y, result);

    return 0;
};

void calc(int *x, int *y, int *result) {
    *result = *x * 2 - *y + 10;
};
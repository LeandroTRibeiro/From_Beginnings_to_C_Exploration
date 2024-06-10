/*
1. Escreva uma função CALCULA que:
a. receba como parâmetros duas variáveis inteiras, X e Y;
b. retorne em X a soma de X e Y;
c. retorne em Y a subtração de X e Y
*/

#include <stdio.h>

void result(int *x, int *y);

int main() {
    int x;
    int y;

    printf("\nDigite o valor de x: ");
    scanf(" %d", &x);

    printf("\nDigite o valor de y: ");
    scanf(" %d", &y);

    result(&x, &y);

    printf("\nValor de x: %d", x);
    printf("\nValor de y: %d", y);

    return 0;
};

void result(int *x, int *y) {
    *x = *x + *y;
    *y = *x - (*y * 2);
    return;
};
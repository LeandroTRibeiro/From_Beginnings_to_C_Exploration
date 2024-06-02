/*
1. Escreva uma função CALCULA que:
a. receba como parâmetros duas variáveis inteiras, X e Y;
b. retorne em X a soma de X e Y;
c. retorne em Y a subtração de X e Y. 
*/

#include <stdio.h>

void calc(int *x, int *y);

int main() {
    int x;
    int y;

    printf("\nDigite um valor para x: ");
    scanf(" %d", &x);
    printf("\nDigite um valor para y: ");
    scanf(" %d", &y);

    calc(&x, &y);

    printf("\nA soma de x + y: %d", x);
    printf("\nA subtracao de x - y: %d", y);

    return 0;
};

void calc(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y - *y;
    return;
};
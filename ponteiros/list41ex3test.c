/*
3. Fazer uma função que:
a. receba 3 ponteiros para números como parâmetros: A, B e C.
b. ordene de tal forma que, ao final da função, A contenha o menor número e C o maior. A função
deve usar os ponteiros para acessar os valores dos números por referência.
c. Fazer um programa que receba 3 números do usuário, chame a função e mostre os números
ordenados.
*/

#include <stdio.h>

void order(float *a, float *b, float *c);

int main() {
    float a;
    float b;
    float c;

    printf("\nDigite o valor de A: ");
    scanf(" %f", &a);

    printf("\nDigite o valor de B: ");
    scanf(" %f", &b);

    printf("\nDigite o valor de C: ");
    scanf(" %f", &c);

    order(&a, &b, &c);

    printf("\nLista Ordenada: %.2f %.2f %.2f", a, b, c);

    return 0;
};

void order(float *a, float *b, float *c) {
    float temp;

    if(*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    };

    if(*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    };

    if(*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    };

    return;
};
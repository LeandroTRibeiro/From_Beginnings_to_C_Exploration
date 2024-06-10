/*
6. Faça um programa que leia três valores inteiros e chame uma sub-rotina que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o
segundo menor valor na variável do meio, e o maior valor na última variável. A rotina deve
retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os
valores ordenados na tela.
*/

#include <stdio.h>

int orderValues(int *a, int *b, int *c);

int main() {
    int a;
    int b;
    int c;
    int equal;

    printf("\nDigite o valor de A: ");
    scanf(" %d", &a);

    printf("\nDigite o valor de B: ");
    scanf(" %d", &b);

    printf("\nDigite o valor de C: ");
    scanf(" %d", &c);

    equal = orderValues(&a, &b, &c);

    if(equal) {
        printf("\nOs tres valores sao iguais:\n%d\t%d\t%d", a, b, c);
        return 0;
    };

    printf("\nVariaveis ordenadas:\n%d\t%d\t%d", a, b, c);
    return 0;

};

int orderValues(int *a, int *b, int *c) {
    if(*a == *b && *b == *c) {
        return 1;
    };

    int temp;

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

    return 0;
};
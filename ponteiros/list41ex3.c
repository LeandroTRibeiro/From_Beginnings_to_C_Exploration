/*
3. Fazer uma função que:
a. receba 3 ponteiros para números como parâmetros: A, B e C.
b. ordene de tal forma que, ao final da função, A contenha o menor número e C o maior. A função
deve usar os ponteiros para acessar os valores dos números por referência.
c. Fazer um programa que receba 3 números do usuário, chame a função e mostre os números
ordenados.
*/

#include <stdio.h>

void minMax(int *a, int *b, int *c);

int main() {
    int a;
    int b;
    int c;

    printf("\nDigite um valor para A: ");
    scanf(" %d", &a);
    printf("\nDigite um valor para B: ");
    scanf(" %d", &b);
    printf("\nDigite um valor para C: ");
    scanf(" %d", &c);

    minMax(&a, &b, &c);

    printf("\nVariavel A: %d", a);
    printf("\nVariavel C: %d", c);

    return 0;
};

void minMax(int *a, int *b, int *c) {
    int array[] = { *a, *b, *c };

    for(int i = 0; i < 3; i++) {
        array[i] < *a ? *a = array[i] : (void)0;
        array[i] > *c ? *c = array[i] : (void)0;
    }
    return;
};
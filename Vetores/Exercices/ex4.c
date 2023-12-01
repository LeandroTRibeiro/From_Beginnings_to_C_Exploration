/*
4) Elabore um programa em C/C++ que armazene números em dois vetores inteiros de cinco elementos cada (A
e B), gere e imprima o vetor soma.
*/

#include <stdio.h>

int main() {
    int a[5], b[5], c[5], sum[5];

    printf("\nPreencha o vetor A\n");
    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero inteiro: ");
        scanf(" %d", &a[i]);
    }

    printf("\nPreencha o vetor B\n");
    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero inteiro: ");
        scanf(" %d", &b[i]);
        sum[i] = a[i] + b[i];
    }

    printf("\nimprimindo a soma dos dois vetores ...\n");

    for(int i = 0; i < 5; i++) {
        printf("%d\t", sum[i]);
    }

    return 0;

}
/*
8) Elabore um programa em C/C++ que entre com 5 números inteiros em dois vetores A e B. Construir um vetor
C, sendo este a junção dos vetores A e B. Dessa forma, C deve ter o dobro de elementos dos vetores A e B.
Ao final, imprima os elementos dos 3 vetores.
*/

#include <stdio.h>

int main() {
    int a[5], b[5], c[10];

    printf("Vetor A\n");

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &a[i]);
        c[i] = a[i];
    }

    printf("\nVetor B\n");

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &b[i]);
        c[i+5] = b[i];
    }

    printf("\nVetor C\n");

    for(int i = 0; i < 10; i++) {
        printf("%d\t", c[i]);
    }

    return 0;
};
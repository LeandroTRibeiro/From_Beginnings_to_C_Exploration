/*
5) Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e gere e imprima o vetor T
triplo, que deverá conter os elementos do primeiro vetor multiplicados por 3.
*/

#include <stdio.h>

int main() {
    int a[5], t[5];

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &a[i]);
        t[i] = 3 * a[i];
    }

    printf("\nImprimindo os valores triplicados ... \n");

    for (int i = 0; i < 5; i++) {
        printf("%d\t", t[i]);
    }

    return 0;
}
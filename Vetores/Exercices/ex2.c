/*
2) Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os
elementos do vetor, em ordem normal e ordem inversa, conforme o exemplo abaixo:
Insira os 5 valores:
a[0]: 10
a[1]: 5
a[2]: 15
a[3]: 8
a[4]: 13
Os valores informados são:
a[0]: 10
a[1]: 5
a[2]: 15
a[3]: 8
a[4]: 13
Em ordem inversa, os elementos são:
a[4]: 13
a[3]: 8
a[2]: 15
a[1]: 5
a[0]: 10
*/

#include <stdio.h>

int main() {
    int n[5];

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &n[i]);
    }

    printf("\nimprimindo em ordem recebina ... \n");

    for(int i = 0; i < 5; i++) {
        printf("%d\t", n[i]);
    }

    printf("\nimprimindo em ordem inversa ... \n");

    for(int i = 4; i >= 0; i--) {
        printf("%d\t", n[i]);
    }

    return 0;
}
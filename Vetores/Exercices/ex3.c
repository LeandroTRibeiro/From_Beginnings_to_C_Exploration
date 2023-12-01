/*
3) Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os
elementos, o maior, o menor, e a média dos valores informados.
*/

#include <stdio.h>

int main() {
    int n[5], bigger, smaller;
    float sum=0;

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &n[i]);
        sum = sum + n[i];

        if(i == 0) {
            bigger = n[i];
            smaller = n[i];
        }
        if(bigger < n[i]) {
            bigger = n[i];
        };
        if(smaller > n[i]) {
            smaller = n[i];
        };
    }

    printf("\nimprimindo ... \n");

    for(int i = 0; i < 0; i++) {
        printf("%d\n", n[i]);
    };

    printf("\nMedia: %.2f", sum / 5);
    printf("\nMaior: %d", bigger);
    printf("\nMenor: %d", smaller);

    return 0;

}
/*
9) Dado um vetor A de 5 elementos, elabore um programa em C/C++ que ordene esse vetor, e, ao final, imprima
esse vetor ordenado.
*/

#include <stdio.h>

int main() {
    int a[5], sort[5], temp;

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &a[i]);
    }

    for(int i = 0; i < 5; i++) {
        for(int c = i + 1; c < 5; c++) {
            if(a[c] < a[i]) {
                temp = a[i];
                a[i] = a[c];
                a[c] = temp;
            }
        }
    }

    printf("\nVetor ordenado: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
};
/*
6) Elabore um programa em C/C++ que leia um vetor X com 10 números e calcule e imprima a diferença entre o
maior e o menor elemento existente no vetor, bem como as posições que o maior e o menor ocupam no
conjunto de dados.
*/

#include <stdio.h>

int main() {
    int x[10], bigger, biggerIndex, smaller, smallerIndex;

    for(int i = 0; i < 10; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &x[i]);

        if(i == 0) {
            bigger = x[i];
            smaller = x[i];
            biggerIndex = i;
            smallerIndex = i;
        }

        if(smaller > x[i]) {
            smaller = x[i];
            smallerIndex = i;
        }

        if(bigger < x[i]) {
            bigger = x[i];
            biggerIndex = i;
        }
    };

    printf("\nDiferenca entro o maior e o menor: %d", bigger - smaller);
    printf("\nIndex do Maior: %d", biggerIndex);
    printf("\nIndex do Menor: %d", smallerIndex);


    return 0;
}
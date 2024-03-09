/*
4) Escreva um programa que lê um vetor de dimensão n e imprime o índice do
maior elemento daquele vetor.
*/

#include <stdio.h>

int main() {
    int array[100];
    int arrayLength;
    int largerIndex;

    printf("\nDigite o tamanho do vetor: ");
    scanf(" %d", &arrayLength);

    for(int i = 0; i < arrayLength; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &array[i]);

        if(i == 0) {
            largerIndex = i;
        }
        if(array[largerIndex] < array[i]) {
            largerIndex = i;
        }
    }

    printf("\nO index do maior elemento e: %d", largerIndex);

    return 0;
};
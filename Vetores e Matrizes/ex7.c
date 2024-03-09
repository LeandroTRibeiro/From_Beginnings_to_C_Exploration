/*
7) Criar um programa que defina um vetor de n posições e calcular a soma dos
elementos impares.
*/

#include <stdio.h>

int main() {
    int arrayLength;
    int array[100];
    int evenSum = 0;

    printf("\nDigite o tamanho do vetor: ");
    scanf(" %d", &arrayLength);

    for(int i = 0; i < arrayLength; i++) {
        printf("\nDigite o valor do elemento na posicao %d: ", i);
        scanf(" %d", &array[i]);
        if(array[i] % 2 != 0) {
            evenSum += array[i];
        };
    };

    for (int i = 0; i < arrayLength; i++) {
        printf("%d\t", array[i]);
    };

    printf("\nA soma dos numeros impares e de: %d", evenSum);
    
    return 0;
}
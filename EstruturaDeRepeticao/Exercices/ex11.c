/*
    11) Elabore um algoritmo que leia 5 números, e imprima quantos são pares e quantos são ímpares.
*/

#include <stdio.h>

int main() {
    int odd = 0, even = 0, receivedNumber;

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &receivedNumber);

        if((receivedNumber % 2) == 0)
            even++;
        else
            odd++;
    };

    printf("\nQuantidade de numeros pares: %d", even);
    printf("\nQuantidade de numeros impars: %d", odd);

    return 0;
};
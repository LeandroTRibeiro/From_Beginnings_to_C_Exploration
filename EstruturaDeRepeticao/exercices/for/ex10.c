/*

    10) Elabore um algoritmo que leia 20 números e imprima a soma dos positivos, e a quantidade de números
negativos.

*/

#include <stdio.h>

int main() {
    float negativeNumbers = 0, positiveNumbers = 0, receivedNumber;

    for(int i = 0; i < 20; i++) {
        printf("\nDigite o um numero: ");
        scanf(" %f", &receivedNumber);

        if(receivedNumber >= 0)
            positiveNumbers = positiveNumbers + receivedNumber;
        else
            negativeNumbers++;
    };

    printf("\nSoma dos numeros positivos: %.2f", positiveNumbers);
    printf("\nQuantidade de numeros negativos: %.2f", negativeNumbers);

    return 0;
};
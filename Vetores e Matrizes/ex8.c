/*
Escreva um programa que leia n elementos, crie um vetor com tais valores
e informe, a seguir, qual a média dos valores positivos e qual a média dos
valores negativos.
*/

#include <stdio.h>

int main() {
    int numList[100];
    int numLength;
    float medPositive=0;
    float medNegative=0;
    int quantPositive=0;
    int quantNegative=0;

    printf("\nDigite a quantidade de numeros que deseja armazenar: ");
    scanf(" %d", &numLength);

    for(int i = 0; i < numLength; i++) {
        printf("\nDigite um numero: ");
        scanf(" %f", &numList[i]);
        if(numList[i] >= 0) {
            quantPositive++;
            medPositive = numList[i];
        };
        if(numList[i] < 0) {
            quantNegative++;
            medNegative = numList[i];
        };
    };

    printf("\nMedia dos numeros positivos: %.2f", medPositive / quantPositive);
    printf("\nMedia dos numeros negativos: %.2f", medNegative / quantNegative);

}
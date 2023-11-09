/*
    13) Elabore um algoritmo que imprima todos os números pares e ímpares compreendidos entre 85 e 906, e
imprimir, ao final, a soma dos pares, a soma dos ímpares, o percentual de pares, e o percentual de ímpares,
*/

#include <stdio.h>

int main() {
    int evenSum=0, oddSum=0, evenAmount=0, oddAmount=0, startFor=85, endFor=906;

    for(int i = startFor; i < (endFor+1); i++) {
        printf("\n%d", i);
        if((i % 2) == 0) {
            evenSum = evenSum + i;
            evenAmount++;
        } else {
            oddSum = oddSum + i;
            oddAmount++;
        }
    };

    printf("\nSoma dos pares: %d", evenSum);
    printf("\nSoma dos impares: %d", oddSum);
    printf("\nPorcentagem de numeros pares: %d", (100*evenAmount)/(endFor-startFor));
    printf("\nPorcentagen de numeros impares: %d", (100*oddAmount)/(endFor-startFor));

    return 0;
};
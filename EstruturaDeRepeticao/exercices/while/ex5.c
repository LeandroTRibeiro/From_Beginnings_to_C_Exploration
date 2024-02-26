/*
5) Elabore um algoritmo que leia vários números, e imprima o maior, menor e a média aritmética dos
números. Considere que o número zero (0) finaliza a entrada de dados e não faz parte da
seqüência.
*/

#include <stdio.h>

int main() {
    float enteredNumbers=0, higherNumber, smallestNumber, sumNumber=0, number;

    printf("\nDigite um numero: ");
    scanf(" %f", &number);

    higherNumber = number;
    smallestNumber = number;

    while (number != 0) {

        enteredNumbers++;
        sumNumber = sumNumber + number;
        if(higherNumber < number)
            higherNumber = number;
        if(smallestNumber > number)
            smallestNumber = number;

        printf("\nDigite um numero: ");
        scanf(" %f", &number);
    };
    
    printf("\nMaior numero: %.2f", higherNumber);
    printf("\nMenor numero: %.2f", smallestNumber);
    printf("\nMedia dos numeros: %.2f", sumNumber/enteredNumbers);

    return 0;
};
/*
4) Elabore um algoritmo que leia vários números positivos e imprima, ao final, a média dos números
digitados. 
*/

#include <stdio.h>

int main() {
    float enteredNumbers=0, sumNumbers=0, number;

    printf("\nDigite um numero: ");
    scanf(" %f", &number);

    while (number >= 0) {

        enteredNumbers++;
        sumNumbers = sumNumbers + number;
   
        printf("\nDigite um numero: ");
        scanf(" %f", &number);
    };

    printf("\nA media dos numeros positivos e de : %.2f", sumNumbers / enteredNumbers);
    

    return 0;
};
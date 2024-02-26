/*
3) Elabore um algoritmo que leia vários números enquanto forem positivos e imprima, ao final, quantos
números foram digitados. 
*/

#include <stdio.h>

int main() {
    int enteredNumbers=0, number;

    printf("\nDigite um numero: ");
    scanf(" %d", &number);

    if(number >= 0) {
        enteredNumbers++;
        printf("\nNumero Positivo: %d\n", number);
    };

    while(number >= 0) {
        printf("\nDigite um numero: ");
        scanf(" %d", &number);

        if(number >= 0) {
            enteredNumbers++;
            printf("\nNumero Positivo: %d\n", number);
        };
    };

    printf("\n%d numeros positivos foram digitados!\n", enteredNumbers);
    
    return 0;
};
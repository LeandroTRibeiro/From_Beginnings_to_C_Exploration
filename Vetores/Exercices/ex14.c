/*
14) Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
a) todos os números pares;
b) a quantidade de números pares;
c) todos os números impares;
d) a quantidade de números ímpares
*/

#include <stdio.h>

int main() {
    int array[6], evenNumbers=0, oddNumbers=0;

    for(int i = 0; i < 6; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &array[i]);
    }

    printf("\nNumeros pares: \n");
    for(int i = 0; i < 6; i++) {
        if(array[i] % 2 == 0) {
            printf("%d\t", array[i]);
            evenNumbers++;
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", evenNumbers);
    for(int i = 0; i < 6; i++) {
        if(array[i] % 2 == 1) {
            printf("%d\t", array[i]);
            oddNumbers++;
        }
    }
    printf("\nQuantidade de numeros impars: %d\n", oddNumbers);


    return 0;
}
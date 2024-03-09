/*
5) Faça um programa que leia N elementos de um vetor e um valor de código.
Se o código for 1, mostrar o vetor na ordem direta, se o código for 2,
mostrar o vetor na ordem inversa.
*/

#include <stdio.h>

int main() {
    int array[100];
    int arrayLength;
    int option;

    printf("\nDigite a quantidade de elementos do array: ");
    scanf(" %d", &arrayLength);

    for(int i = 0; i < arrayLength; i++) {
        printf("\nDigite o valor de um elemento: ");
        scanf(" %d", &array[i]);
    }

    printf("\n1 --- Listar em ordem normal\n2 --- Listar em ordem inversa\n");
    scanf(" %d", &option);

    printf("\n");

    switch(option) {
    case 1:
        for(int i = 0; i < arrayLength; i++) {
            printf("%d\t", array[i]);
        }
        break;
    case 2:
        for(int i = arrayLength - 1; i >= 0; i--) {
            printf("%d\t", array[i]);
        }

        break;
    default:
        printf("\nOpcao invalida.");
        break;
    }

    return 0;
};
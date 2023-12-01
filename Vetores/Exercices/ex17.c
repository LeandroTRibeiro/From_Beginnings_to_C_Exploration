/*
17) Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de
elementos iguais a 30, mostrando as posições em que apareceram.
*/

#include <stdio.h>

int main() {
    int array[15];

    for(int i = 0; i < 15; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &array[i]);
    }

    printf("\nIndice dos numeros iguais a 30: \n");

    for(int i = 0; i < 15; i++) {
        if(array[i] == 30) {
            printf("%d\t", i);
        }
    }

    return 0;
}
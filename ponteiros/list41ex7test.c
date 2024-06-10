/*
7. Escreva uma função que aceita como parâmetro um vetor de inteiros com n valores, e
determina o maior elemento do vetor e o numero de vezes que este elemento ocorreu no vetor.
Por exemplo, para um vetor com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função
deve retornar para o programa que a chamou o valor 15 e o número 3 (indicando que o numero
15 ocorreu 3 vezes). A função deve ser do tipo void.
*/

#include <stdio.h>

void maxAndRepeat(int array[], int *max, int *repeat, int length);

int main() {
    int array[] = {5, 2, 15, 3, 7, 15, 8, 6, 15, 87};
    int max;
    int repeat;

    int length = sizeof(array) / sizeof(array[0]);

    maxAndRepeat(array, &max, &repeat, length);

    for(int i = 0; i < length; i++) {
        printf("%d\t", array[i]);
    };

    printf("\nMaior valor: %d", max);
    printf("\nSe repete: %d", repeat);

    return 0;
};

void maxAndRepeat(int array[], int *max, int *repeat, int length) {
    *max = array[0];
    *repeat = 1;

    for(int i = 0; i < length; i++) {
        if(array[i] > *max) {
            *max = array[i];
            *repeat = 1;
        } else if(array[i] == *max) {
            (*repeat)++;
        };
    };
    return;
};
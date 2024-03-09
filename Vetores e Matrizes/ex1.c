/*
1) Escreva um programa que lê uma lista de inteiros positivos e imprime essa
lista em ordem inversa. A lista pode ter até 100 elementos e a leitura deve
ser interrompida assim que o primeiro inteiro não positivo ou quanto o
centésimo elemento for digitado. Não será informado previamente o número
de inteiros da lista.
*/

#include <stdio.h>

int main() {
    int numList[100];
    int listLength=0;

    printf("\nDigite um numero: ");
    scanf(" %d", &numList[listLength]);

    while (listLength < 100 && numList[listLength] > 0) {

        listLength++;

        printf("\nDigite um numero: ");
        scanf(" %d", &numList[listLength]);
    };

    for(int i = listLength - 1; i >= 0; i--) {
        printf("%d\t", numList[i]);
    }
    
    return 0;
};
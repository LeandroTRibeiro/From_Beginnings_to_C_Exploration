/*
2) Escreva um programa que lê uma lista de inteiros e imprime os números
pares. A lista pode ter até 100 elementos e a leitura deve ser interrompida
assim que seja digitado -999 ou o centésimo elemento. Não será informado
previamente o número de inteiros da lista.
*/

#include <stdio.h>

int main() {

    int intList[100];
    int intListLength = 0;
    int evenList[100];
    int evenListLength = 0;

    printf("\nDigite um numero: ");
    scanf(" %d", &intList[intListLength]);


    while (intListLength < 100 && intList[intListLength] != -999) {

        if(intList[intListLength] % 2 == 0) {
            evenList[evenListLength] = intList[intListLength];
            evenListLength++;
        }

        intListLength++;

        printf("\nDigite um numero: ");
        scanf(" %d", &intList[intListLength]);

    };

    printf("\n");

    for(int i = 0; i < evenListLength; i++) {
        printf("%d\t", evenList[i]);
    }
    
}
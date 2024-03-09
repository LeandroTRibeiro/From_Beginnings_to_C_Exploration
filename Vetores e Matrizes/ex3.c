/*
3) Escreva um programa que lê o tamanho e na sequência 2 vetores. Após a
leitura o programa deve intercalar os valores dos dois vetores inteiros de
mesmo tamanho em um terceiro vetor. Assuma que, a dimensão do terceiro
vetor é pelo menos duas vezes a dimensão de cada um dos outros vetores. No
final imprima o novo vetor com os elementos intercalados.
*/

#include <stdio.h>

int main() {
    int arrayLength;
    int array1[100];
    int array2[100];
    int array3[200];
    int length;

    printf("\nDigite o tamanho dos arrays: ");
    scanf(" %d", &arrayLength);

    for(int i = 0; i < arrayLength; i++) {
        printf("\nDigite um numero do primeiro vetor: ");
        scanf(" %d", &array1[i]);
    }

    for(int i = 0; i < arrayLength; i++) {
        printf("\nDigite um numero do segundo vetor: ");
        scanf(" %d", &array2[i]);
    }

    for(int i = 0; i < 2*arrayLength; i++) {
        array3[2*i] = array1[i];
        array3[2*i+1] = array2[i];
    }

    printf("\n");

    for(int i = 0; i < 2*arrayLength; i++) {
        printf("%d\t", array3[i]);
    }

    return 0;
}
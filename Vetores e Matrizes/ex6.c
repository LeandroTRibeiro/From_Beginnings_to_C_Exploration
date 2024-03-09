/*
6) Ler N elementos de um vetor A e um valor x. Criar o vetor B contendo os
elementos do vetor A multiplicados por x.
*/

#include <stdio.h>

int main() {
    int arrayLength;
    int arrayA[100];
    int arrayB[100];
    int multiplier;

    printf("\nQual o tamnho do vetor desejado: ");
    scanf(" %d", &arrayLength);

    for(int i = 0; i < arrayLength; i++) {
        printf("\nDigite o valor do elemento na posicao %d: ", i);
        scanf(" %d", &arrayA[i]);
    };

    printf("\nDigite o numero multiplicador para os elementos: ");
    scanf(" %d", &multiplier);

    for(int i = 0; i < arrayLength; i++) {
        arrayB[i] = arrayA[i] * multiplier;
    };

    for (int i = 0; i < arrayLength; i++) {
        printf("%d\t", arrayB[i]);
    };
    
    return 0;
}
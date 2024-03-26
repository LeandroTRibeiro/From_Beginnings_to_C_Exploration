/*
4. Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os
elementos, o maior, o menor, e a média dos valores informados.
*/

#include <stdio.h>
#include <conio.h>

int finishProgram();

int main() {
    int A[5];
    int bigger;
    int smaller;
    float average = 0;

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero para a posicao %d: ", i + 1);
        scanf(" %d", &A[i]);
        if(i == 0) {
            bigger = A[i];
            smaller = A[i];
        };
        if(A[i] < smaller) {
            smaller = A[i];
        };
        if(A[i] > bigger) {
            bigger = A[i];
        };
        average += A[i];
    };

    printf("\nTodos os valores: ");
    for(int i = 0; i < 5; i++) {
        printf("%d\t", A[i]);
    };

    printf("\nO menor valor e: %d, o menor valor e: %d, a media de todos os valores e de: %.2f", smaller, bigger, average / 5);

    finishProgram();
};

int finishProgram() {
    printf("\n###############################\n");
    printf("\nPressione qualquer tecla para encerrar: ");
    getch();

    return 0;
};


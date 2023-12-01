/*
12) Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e 10 números inteiros
pares em um vetor B. Construir um vetor I, sendo este a intersecção dos vetores A e B. Dessa forma, C
deve ter a capacidade de armazenar no máximo 5 elementos. 
*/

#include <stdio.h>

int main() {
    int A[5], B[10], lenghtResponse=0, I[5];

    printf("\nVetor A: \n");
    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &A[i]);
    }

    printf("\nVetor B: ");
    for(int i = 0; i < 10; i++) {
        do {
            printf("\nDigite um numero par: ");
            scanf(" %d", &B[i]);
            if(B[i] % 2 != 0) {
                printf("\nO numero deve ser par!\n");
            }
        } while(B[i] % 2 != 0);
    }


    for(int a = 0; a < 5; a++) {
        for(int b = 0; b < 10; b++) {
            if(A[a] == B[b]) {
                I[lenghtResponse] = A[a];
                lenghtResponse++;
            }
        }
    }


    printf("\nVetor de interseccao:");
    for(int i = 0; i < lenghtResponse; i++) {
        printf(" %d\t", I[i]);
    }

    return 0;
}
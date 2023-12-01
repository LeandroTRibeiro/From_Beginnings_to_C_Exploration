/*
1) Elabore um programa em C/C++ que entre com 7 números inteiros e imprima uma listagem contendo os 7
números.
*/

#include <stdio.h>

int main() {
    int n[7];

    for(int i = 0; i < 7; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &n[i]);
    };

    printf("\nimprimindo...\n");

    for (int i = 0; i < 7; i++) {
      printf("%d\t", n[i]);
    };

    return 0;
    
};
/*
2. Elabore um programa em C/C++ que entre com 7 números inteiros e imprima uma listagem contendo os 7
números.
*/

#include <stdio.h>

int main() {
    int num[7];

    for(int i = 0; i < 7; i++) {
        printf("\nDigite o numero %do: ", i);
        scanf(" %d", &num[i]);
    };

    for(int i = 0; i < 7; i++) {
        printf("%d\t", num[i]);
    };

    return 0;
};
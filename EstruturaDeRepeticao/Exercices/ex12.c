/*
    12) Elabore um algoritmo que leia 5 números, e imprima o percentual de números pares informados.
*/

#include <stdio.h>

int main() {
    int receivedNumber, evenPercentage = 0;

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero: ");
        scanf(" %d", &receivedNumber);

        if((receivedNumber % 2) == 0)
            evenPercentage++;
    };

    printf("\nPorcentagem de numero pares informados: %d%%", ((100*evenPercentage) / 5));

    return 0;
};

/*
5 = 100
3 = x

x5 = 100*num
*/
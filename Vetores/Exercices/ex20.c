/*
20) Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de
números negativos e a soma dos números positivos desse vetor
*/

#include <stdio.h>

int main() {
    float array[10], negativeNumbers=0, positiveNumbers=0;

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero real: ");
        scanf(" %f", &array[i]);
        if(array[i] < 0) {
            negativeNumbers++;
        } else {
            positiveNumbers = positiveNumbers + array[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %.0f", negativeNumbers);
    printf("\nSoma dos numeros positivos: %.2f", positiveNumbers);

    return 0;
}
/*
3) O custo ao consumidor de um carro novo é a soma do preço de fábrica com
o percentual de lucro do distribuidor e dos impostos aplicados ao preço de
fábrica. Faça um programa que receba o preço de fábrica de um veículo, o
percentual de lucro do distribuidor e o percentual de impostos. Calcule e
mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.
*/

#include <stdio.h>

int main() {
    float fabPrice, percentGain, percentTaxes;

    printf("\nPreco de fabrica do veiculo: \n");
    scanf(" %f", &fabPrice);

    printf("\nPercentual de lucro do distribuidor: \n");
    scanf(" %f", &percentGain);

    printf("\nPercentual de impostos: \n");
    scanf(" %f", &percentTaxes);

    

    printf("\nvalor correspondente ao lucro do distribuidor: %.2f", fabPrice * (percentGain / 100));

    printf("\nvalor correspondente aos impostos: %.2f", fabPrice * (percentTaxes / 100));

    printf("\npreco final do veiculo: %.2f", fabPrice + (fabPrice * (percentGain / 100)) + fabPrice * (percentTaxes / 100));

    return 0;
};
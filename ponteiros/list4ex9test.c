/*
9) O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidor e os impostos aplicados ao preço de fábrica. Faça uma função que receba o preço de fábrica de
um veículo, o percentual de lucro do distribuidor e o percentual de impostos. A função dever retornar os
seguintes valores:

a. o valor correspondente ao lucro do distribuidor;
b. o valor correspondente aos impostos;
c. o preço final do veículo.
*/

#include <stdio.h>

void calcValues(float fabPrice, float *distGain, float *taxes, float *finalPrice);

int main() {
    float fabPrice;
    float distGain;
    float taxes;
    float finalPrice;

    printf("\nDigite o preco de fabrica do veiculo: ");
    scanf(" %f", &fabPrice);

    printf("\nDigite o percentual do lucro do distribuidor: ");
    scanf(" %f", &distGain);

    printf("\nDigite o percentual de impostos do veiculo: ");
    scanf(" %f", &taxes);

    calcValues(fabPrice, &distGain, &taxes, &finalPrice);

    printf("\nPreco de fabrica: %.2f", fabPrice);
    printf("\nLucro do distribuidor: %.2f", distGain);
    printf("\nImpostos: %.2f", taxes);
    printf("\nPreco final: %.2f", finalPrice);

    return 0;
};

void calcValues(float fabPrice, float *distGain, float *taxes, float *finalPrice) {
    *distGain = fabPrice * (*distGain / 100);
    *taxes = fabPrice * (*taxes / 100);
    *finalPrice = fabPrice + *distGain + *taxes;

    return;
};
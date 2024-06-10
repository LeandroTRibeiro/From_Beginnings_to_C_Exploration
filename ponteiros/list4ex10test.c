/*
10) Faça uma função que tenha como argumentos a porcentagem (%) de aumento do álcool, da gasolina e do
óleo diesel e também os valores destes combustíveis. Retorne os valores corrigidos de acordo com as
porcentagens de aumento informadas. Faça um programa (main) que demonstre utilização da função que
você criou.
*/

#include <stdio.h>

void fuelIncrease(
    float *gas, 
    float *alcohol, 
    float *diesel,
    float gasIncrease,
    float alcoholIncrese,
    float dieselIncrease
);

int main() {
    float gas;
    float alcohol;
    float diesel;
    float gasIncrease;
    float alcoholIncrease;
    float dieselIncrease;


    printf("\nDigite o preco do litro da gasolina: ");
    scanf(" %f", &gas);

    printf("\nDigite o preco do litro do alcool: ");
    scanf(" %f", &alcohol);

    printf("\nDigite o preco do litro do diesel: ");
    scanf(" %f", &diesel);

    printf("\nDigite valor do aumento da gasolina: ");
    scanf(" %f", &gasIncrease);

    printf("\nDigite valor do aumento do alcool: ");
    scanf(" %f", &alcoholIncrease);

    printf("\nDigite valor do aumento do diesel: ");
    scanf(" %f", &dieselIncrease);

    fuelIncrease(&gas, &alcohol, &diesel, gasIncrease, alcoholIncrease, dieselIncrease);

    printf("\nCom o aumento de %.2f%% no valor da gasolina o litro ficou: R$%.2f", gasIncrease, gas);
    printf("\nCom o aumento de %.2f%% no valor do alcool o litro ficou: R$%.2f", alcoholIncrease, alcohol);
    printf("\nCom o aumento de %.2f%% no valor do diesel o litro ficou: R$%.2f", dieselIncrease, diesel);

    return 0;
};

void fuelIncrease(
    float *gas,
    float *alcohol,
    float *diesel,
    float gasIncrease,
    float alcoholIncrease,
    float dieselIncrease
) {
    *gas = *gas + ((*gas * gasIncrease) / 100);
    *alcohol = *alcohol + ((*alcohol * alcoholIncrease) / 100);
    *diesel = *diesel + ((*diesel * dieselIncrease) / 100);
    return;
};
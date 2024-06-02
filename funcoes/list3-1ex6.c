/*
    6) O custo ao consumidor de um carro novo é a soma do preço de fábrica com o
    percentual (%) de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
    Faça uma função que:

    Tenha como parâmetros o preço de fábrica de um veículo, o percentual de lucro do
    distribuidor e o percentual de impostos;
    Calcule e mostre:

    O valor correspondente ao lucro do distribuidor;

    O valor correspondente aos impostos;

    Retorne o preço final do veículo.
*/

#include <stdio.h>
#include <conio.h>

void gainDist(float fab, float dist);
void taxValue(float fab, float tax);
void finalPrice(float fab, float dist, float tax);
int finishProgram();

int main() {
    float fab;
    float dist;
    float tax;

    printf("\nDigite o valor do preco de fabrica do veiculo: ");
    scanf(" %f", &fab);
    
    printf("\nDigite a porcentagem do lucro do distribuidor: ");
    scanf(" %f", &dist);

    printf("\nDigite o percentual de impostos: ");
    scanf(" %f", &tax);

    gainDist(fab, dist);
    taxValue(fab, tax);
    finalPrice(fab, dist, tax);

    return finishProgram();
};

void gainDist(float fab, float dist) {
    printf("\nO lucro do distribuidor e de: R$%.2f", (dist*fab) / 100);
    return;
};

void taxValue(float fab, float tax) {
    printf("\nO valor correspondente aos impostos e de: R$%.2f", (tax*fab) / 100);
    return;
};

void finalPrice(float fab, float dist, float tax) {
    printf("\nO preco final do veiculo e de: R$%.2f", ((tax*fab) / 100) + ((dist*fab) / 100) + fab);
    return;
};

int finishProgram() {
    printf("\n##############################################\n");
    printf("Digite qualquer tecla para encerrar!\n");
    getch();

    return 0;
};
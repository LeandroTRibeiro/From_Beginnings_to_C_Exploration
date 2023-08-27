/*

7. Faça um programa que receba o peso de uma pessoa, calcule e mostre: 
1. a. o novo peso, se a pessoa engordar 15% sobre o peso digitado; 
2. b. o novo peso, se a pessoa emagrecer 20% sobre o peso digitado;

*/

#include <stdio.h>

main() {
    char name[100];
    float weight, plusWeight, minusWeight;

    printf("---------------------------------");
    printf("---------------------------------\n\n");
    printf("digite seu nome: ");
    scanf("%s", &name);
    printf("digite seu peso(kg): ");
    scanf("%f", &weight);

    plusWeight=weight+((15*weight)/100);
    minusWeight=weight-((20*weight)/100);

    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\nnome: %s", name);
    printf("\npeso atual: %.2fkg", weight);
    printf("\nengordando 15%%, %s tera: %.2fkg", name, plusWeight);
    printf("\nemagrecendo 20%%, %s tera: %.2fkg", name, minusWeight);
    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\n---------------------------------");
    printf("---------------------------------");

};
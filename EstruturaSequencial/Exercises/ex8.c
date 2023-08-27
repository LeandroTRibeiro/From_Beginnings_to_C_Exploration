/*

8. Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em 
gramas.

*/

#include <stdio.h>

main() {
    char name[100];
    float weightKg, weightG;

    printf("---------------------------------");
    printf("---------------------------------\n\n");
    printf("digite seu nome: ");
    scanf("%s", &name);
    printf("digite seu peso(kg): ");
    scanf("%f", &weightKg);

    weightG=weightKg*1000;

    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\nnome: %s", name);
    printf("\npeso em (Kg): %.2fKg", weightKg);
    printf("\npeso em (g): %.2fg", weightG);
    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\n---------------------------------");
    printf("---------------------------------");
    
};
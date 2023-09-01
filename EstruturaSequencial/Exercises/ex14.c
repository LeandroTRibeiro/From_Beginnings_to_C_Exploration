/*

14. João recebeu seu salário e precisa pagar duas contas atrasadas. Por causa do atraso, ele deverá 
pagar multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará so 
salário de João.


*/

#include <stdio.h>

main() {
    char name[100];
    float salary, bills, penalty, remainingSalary;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("digite seu nome: ");
    gets(name);
    printf("digite seu salario: ");
    scanf("%f", &salary);
    printf("digite o valor das contas a pagar: ");
    scanf("%f", &bills);
    printf("digite a porcentagem de multa destas contas: ");
    scanf("%f", &penalty);

    remainingSalary=(salary-(((penalty*bills)/100)+bills));

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("\n%s", name);
    printf("\nsalario: R$%.2f", salary);
    printf("\ncontas a pagar: R$%.2f", bills);
    printf("\nporcentagem da multa: %.2f%%", penalty);
    printf("\nsalario restante: R$%.2f", remainingSalary);

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    return 0;
}
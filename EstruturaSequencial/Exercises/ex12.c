/*

12. Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule 
e mostre a quantidade de salário mínimos que esse funcionário ganha.


*/

#include <stdio.h>

main() {
    char worker[100];
    float minimumSalary, workerSalary, howManyMinumumSalary;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("digite o nome do funcionario: ");
    scanf("%s", &worker);
    printf("digite o salario do funcionario: ");
    scanf("%f", &workerSalary);
    printf("digite o valor do salario minimo atual: ");
    scanf("%f", &minimumSalary);

    howManyMinumumSalary=workerSalary/minimumSalary;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("\ntrabalhador: %s", worker);
    printf("\nsalario minimo atual: R$%.2f", minimumSalary);
    printf("\nsalario do funcionario: R$%.2f", workerSalary);
    printf("\n%s recebe %.2f salarios minimos.", worker, howManyMinumumSalary);
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    return 0;
}
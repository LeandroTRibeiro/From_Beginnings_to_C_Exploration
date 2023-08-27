/*

6. Um funcionário recebe um salário fixo mas 4% de comissão sobre as vendas. Faça um programa que 
receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário 
final.

*/

#include <stdio.h>

main() {
    char worker[100];
    float salary, newSalary, sales, salesCommissionP, salesCommissionV ;

    printf("---------------------------------");
    printf("---------------------------------\n\n");
    printf("digite o nome do funcionario(a): ");
    scanf("%s", &worker);
    printf("digite o salario base de %s: R$", worker);
    scanf("%f", &salary);
    printf("digite o total de vendas de %s: R$", worker);
    scanf("%f", &sales);
    printf("digite a porcentagem de comissao sobre as vendas de %s: ", worker);
    scanf("%f", &salesCommissionP);
    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\n---------------------------------");
    printf("---------------------------------");

    salesCommissionV=(salesCommissionP*salary)/100;
    newSalary=salesCommissionV+salary;

    printf("\nfuncionario(a): %s", worker);
    printf("\nsalario base: R$%.2f", salary);
    printf("\ntotal de vendas: R$%.2f", sales);
    printf("\nporcentagem da comissao: %.2f%%", salesCommissionP);
    printf("\nvalor da comissao: R$%.2f", salesCommissionV);
    printf("\nvalor total do salario: R$%.2f", newSalary);
    printf("\n---------------------------------");
    printf("---------------------------------");
    printf("\n---------------------------------");
    printf("---------------------------------");

};
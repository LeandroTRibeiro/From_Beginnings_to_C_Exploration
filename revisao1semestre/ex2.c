/*
2) Faça um algoritmo que receba o salário-base de um funcionário e mostre o
salário a receber, sabendo-se que esse funcionário tem gratificação de 5%
sobre o salário-base e paga imposto de 7% sobre o salário-base.
*/

#include <stdio.h>

int main() {
    float baseSalary, finalSalary;

    printf("\nDigite o valor do salario base: \n");
    scanf(" %f", &baseSalary);

    finalSalary = baseSalary - (baseSalary * 0.02);

    printf("\nO funcionario tem a receber %.2f", finalSalary);

    return 0;
};
/*
4) Faça uma função que tenha como argumento o salário de um funcionário e que retorne o valor do salário
atualizado conforme a tabela de bonificação abaixo. A função deve retornar também o valor da bonificação.
Escreva também o protótipo.

Salário Bonificação
Até R$ 500,00 5% do salário
Mais de R$ 500,00 e menos de R$ 1.200,00 12% do salário
R$ 1.200,00 ou mais Sem bonificação (zero)

*/

#include <stdio.h>

void calcBonus(float *salary, float *bonus);

int main() {
    char name[100];
    float salary;
    float bonus;

    printf("\nDigite o nome do funcionario(a): ");
    scanf(" %[^\n]", &name);

    printf("\nDigite o salario de %s: ", name);
    scanf(" %f", &salary);

    calcBonus(&salary, &bonus);

    printf("\nFuncionario: %s", name);
    bonus ? printf("\nNovo Salario: %.2f", salary) : printf("\nSalario: %.2f", salary);
    printf("\nBonus: %.2f", bonus);

    return 0;
};

void calcBonus(float *salary, float *bonus) {
    if(*salary < 500) {
        *bonus = *salary * 0.05;
        *salary += *bonus;
        return;
    };

    if(*salary < 1200) {
        *bonus = *salary * 0.12;
        *salary += *bonus;
        return;
    };

    *bonus = 0;
    return;
};


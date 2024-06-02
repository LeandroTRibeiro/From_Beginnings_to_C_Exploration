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

void getBonus(float *salary, float *bonus);

int main() {
    float salary;
    float bonus;

    printf("\nDigite o salario do funcionario: ");
    scanf(" %f", &salary);

    getBonus(&salary, &bonus);

    printf("\nO novo salario do usuario e de : %.2f", salary);
    printf("\nO valor do bonus e de : %.2f", bonus);

    return 0;
};

void getBonus(float *salary, float *bonus) {
    if(*salary <= 500) {
        *bonus = *salary * 5 / 100;
        *salary = *bonus + *salary;
        return;
    };
    if(*salary < 1200) {
        *bonus = *salary * 12 / 100;
        *salary = *bonus + *salary;
        return;
    };
    *bonus = 0;
    return;
};
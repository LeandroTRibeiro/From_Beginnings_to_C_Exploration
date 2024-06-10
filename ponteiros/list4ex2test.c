/*
2) Faça uma função que atualize o salário de um funcionário e retorne o bônus concedido de acordo com as
seguintes regras:
- se salário maior ou igual que R$ 1.200,00, ganha bônus de 110,00
- se salário menor que R$ 1.200,00, ganha bônus de 190,00
*/

#include <stdio.h>

float newSalary(float *salary);

int main() {
    char name[100];
    float salary;
    float bonus;

    printf("\nDigite o nome do funcionario: ");
    scanf(" %[^\n]", &name);
    printf("\nDigite o salario de %s: ", name);
    scanf(" %f", &salary);

    bonus = newSalary(&salary);

    printf("\nFuncionario: %s", name);
    printf("\nNovo salario: %.2f", salary);
    printf("\nBonus:  %.2f", bonus);

    return 0;
};

float newSalary(float *salary) {

    if(*salary >= 1200) {
        *salary += 110;
        return (float)110;
    };

    *salary += 190;
    return (float)190;
};
/*
2) Faça uma função que atualize o salário de um funcionário e retorne o bônus concedido de acordo com as
seguintes regras:
- se salário maior ou igual que R$ 1.200,00, ganha bônus de 110,00
- se salário menor que R$ 1.200,00, ganha bônus de 190,00
*/

#include <stdio.h>
#include <string.h>

void getBonus(float *salary, float *bonus);
int finishProgram();

int main() {
    float salary;
    float bonus;

    printf("\nDigite o valor do salario: ");
    scanf(" %f", &salary);

    getBonus(&salary, &bonus);

    printf("\nO bonus e de R$%.2f e o salario ficara em R$%.2f", bonus, salary);

    return finishProgram();
};

void getBonus(float *salary, float *bonus) {
    if(*salary < 1200) {
        *bonus = 190;
        *salary += *bonus;
        return;
    }
    *bonus = 110;
    *salary += *bonus;
    return;
};

int finishProgram() {
    printf("\n############################################\n");
    printf("Pressione qualquer tecla para encerrar!\n");
    getchar();
    getchar();

    return 0;
};
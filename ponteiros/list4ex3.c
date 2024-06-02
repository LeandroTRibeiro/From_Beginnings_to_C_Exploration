/*
3) Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça
uma função que tenha como argumento o salário do funcionário e retorne o valor do novo salário e do
aumento. Caso não haja aumento, retorne zero. A função deve obedecer ao seguinte protótipo:

    void calcularAumento (float *salario, float *aumento);
*/

#include <stdio.h>
#include <string.h>

void getIncrease(float *salary, float *increase);

int main() {
    float salary;
    float increase;

    printf("Digite o salario do funcionario: ");
    scanf(" %f", &salary);

    getIncrease(&salary, &increase);

    printf("\nO bonus sera de R$%.2f e o novo salario ficara em R$%.2f", increase, salary);

    return 0;
};

void getIncrease(float *salary, float *increase) {

    if(*salary < 500) {
        *increase = (*salary * 30) / 100;
        *salary += *increase;
    };

    return;
};
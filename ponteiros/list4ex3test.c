/*
3) Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça
uma função que tenha como argumento o salário do funcionário e retorne o valor do novo salário e do
aumento. Caso não haja aumento, retorne zero. A função deve obedecer ao seguinte protótipo:

void calcularAumento (float *salario, float *aumento);
*/

#include <stdio.h>

void calcIncrease(float *salary, float *increase);

int main() {
    float salary;
    float increase;
    char name[100];

    printf("\nDigite o nome do Funcionario(a): ");
    scanf(" %[^\n]", &name);

    printf("\nDigite o salario de %s: ", name);
    scanf(" %f", &salary);

    calcIncrease(&salary, &increase);

    printf("\nFuncionario: %s", name);
    increase ? printf("\nNovo salario: %.2f", salary) : printf("\nSalario: %.2f", salary);
    printf("\nAumento: %.2f", increase);

    return 0;
    
};

void calcIncrease(float *salary, float *increase) {
    if(*salary < 500) {
        *increase = *salary * 0.30;
        *salary += *increase;
        return; 
    };

    *increase = 0;
    return;
}
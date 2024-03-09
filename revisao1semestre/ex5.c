/*
5) Faça um algoritmo que receba o número de horas trabalhadas e o valor do
salário mínimo. Calcule e mostre o salário a receber seguindo as regras
abaixo:
a) a hora trabalhada vale 1/10 do salário mínimo;
b) o salário bruto equivale ao número de horas trabalhadas
multiplicado pelo valor da hora trabalhada;
c) o imposto equivale a 3% do salário bruto;
d) o salário a receber equivale ao salário bruto menos o
imposto.
*/

#include <stdio.h>

int main() {
    float workedHours, minSalary, salary;

    printf("\nHoras trabalhadas: ");
    scanf(" %f", &workedHours);

    printf("\nSalario minimo: ");
    scanf(" %f", &minSalary);

    salary = workedHours * (minSalary / 10);

    salary = salary - (salary * 0.03);

    printf("\nO salario do colaborador(a) e de : %.2f", salary);

    return 0;
}
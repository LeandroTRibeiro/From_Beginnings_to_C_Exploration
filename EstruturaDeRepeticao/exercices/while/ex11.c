/*
    11)Elabore um algoritmo que receba os dados de vários funcionários. Os dados a serem informados
    são:
         O valor do salário mínimo;
         O número de horas trabalhadas;
         O número de dependentes de cada funcionário;
         Quantidade de horas extras trabalhadas.
        Obs: Quando –1 for digitado para horas trabalhadas, a entrada de dados é finalizada.
        Ao final de cada leitura, calcule e imprima o salário a receber de cada funcionário, tendo em vista
        as regras a seguir:
            a. O valor da hora trabalhada é igual a 1/10 do salário mínimo;
            b. O salário do mês é igual ao número de horas trabalhadas, multiplicado pelo valor da hora
            trabalhada;
            c. Para cada dependente, é feito um acréscimo de R$ 32 reais;
            d. Para cada hora extra trabalhada, é feito um acréscimo de 50% ao valor da hora trabalhada;
            e. O salário bruto é igual ao salário do mês, mais os valores dos dependentes, e mais valores
            das horas extras;
            f. O desconto do Imposto de Renda retido na fonte segue a tabela a seguir:
                IRRF Salário Bruto
                Isento Até 900,00
                10% Acima de 900,00 até 1500,00
                20% Superior a 1500,00
            g. O salário líquido é igual ao salário bruto menos o IRRF;
            h. A gratificação segue a tabela a seguir:
                Salário Líquido Bonificação
                Até 900,00 R$ 100,00
                Superior a 900,00 R$ 50,00
            i. O salário a receber do funcionário é igual ao salário líquido mais a gratificação.
*/

#include <stdio.h>

int main() {
    int dependents;
    float minSalary, hoursWorked, extraHoursWorked;

    printf("\nDigite a quantidade de horas trabalhadas: ");
    scanf(" %f", &hoursWorked);

    while ( hoursWorked != -1) {
        
        print("\nDigite o salario minimo: ");
        scanf(" %f", &minSalary);
        printf("\nDigite a quantidade de dependentes do trabalhador(a): ");
        scanf(" %d", &dependents);
        printf("\nDigite a quantidade de horas extras trabalhas: ");
        scanf(" %f", &extraHoursWorked);

        printf("\n")


        printf("\nDigite a quantidade de horas trabalhadas: ");
        scanf(" %f", &hoursWorked);

    };
    


};
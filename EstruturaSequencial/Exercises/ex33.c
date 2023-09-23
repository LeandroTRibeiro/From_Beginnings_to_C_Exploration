/*

33. Elabore um algoritmo que leia o salário-base de um funcionário, calcule e mostre o seu salário a 
receber, sabendo-se que esse funcionário tem gratificação de R$ 50,00 e paga imposto de 10% sobre 
o salário-base.

*/


#include <stdio.h>
#include <conio.h>

struct Worker {
    char name[100];
    float salary;
    float finalSalary;
    float salaryIncreaseInPercentage;
    float salaryIncreaseInReal;
    float absents;
    float daysWorked;
    float month;
    float INSS;
};

int exitProgram();

int main() {

    int workersLength = 0;
    char addIncrease, valueDisplayMode;
    char absents;
    char repeat;

    struct Worker workers[100];

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("######### FOLHA DE PAGAMENTO #########");
    printf("\n######################################\n"); 
    printf("######################################\n");

    do {

        workers[workersLength].salaryIncreaseInPercentage = 0;
        workers[workersLength].salaryIncreaseInReal = 0;
        workers[workersLength].absents = 0;

        printf("\nDigite o nome do funcionario(a): ");
        scanf(" %[^\n]", &workers[workersLength].name);
        printf("\nDigite o salario do funcionario(a): ");
        scanf(" %f", &workers[workersLength].salary);
        printf("\nDigite a quantidade total de dias no mes: "); 
        scanf(" %f", &workers[workersLength].month);
        printf("\nDigite a porcentagem de desconto do INSS: (%%)");
        scanf(" %f", &workers[workersLength].INSS);

        printf("\nDeseja adicionar gratificacao de salario? (S/N)");
        scanf(" %c", &addIncrease);

        if(addIncrease == 's' || addIncrease == 'S') {
            printf("\nDeseja adicionar a gratificacao em valor real (R$) ou porcentagem (%%)? (R/P)");
            scanf(" %c", &valueDisplayMode);

            if(valueDisplayMode == 'p' || valueDisplayMode == 'P') {
                printf("\nDigite o valor do aumento em porcentagem: ");
                scanf(" %f", &workers[workersLength].salaryIncreaseInPercentage);
            } else if(valueDisplayMode == 'R' || valueDisplayMode == 'r') {
                printf("\nDigite o valor do aumento em real: ");
                scanf(" %f", &workers[workersLength].salaryIncreaseInReal);
            } else {
                return exitProgram();
            };
        };

        printf("\nO funcionario(a) cometeu faltas no mês? (S/N)");
        scanf(" %c", &absents);

        if(absents == 's' || absents == 'S') {
            printf("\nDigite a quantidade de faltas cometidas pelo funcionario(a): ");
            scanf(" %f", &workers[workersLength].absents);
        };

        workers[workersLength].daysWorked = workers[workersLength].month - workers[workersLength].absents;

        workers[workersLength].finalSalary = workers[workersLength].salary;

        if(
            workers[workersLength].salaryIncreaseInReal != 0 || 
            workers[workersLength].salaryIncreaseInPercentage != 0) {
                if(workers[workersLength].salaryIncreaseInReal != 0) {
                    workers[workersLength].salaryIncreaseInPercentage = (workers[workersLength].salaryIncreaseInReal * 100) / workers[workersLength].salary;
                } else {
                    workers[workersLength].salaryIncreaseInReal = (workers[workersLength].salary * workers[workersLength].salaryIncreaseInPercentage) / 100; 
                };
            
            workers[workersLength].finalSalary = (((workers[workersLength].salary - ((workers[workersLength].salary * workers[workersLength].INSS)/100)) + workers[workersLength].salaryIncreaseInReal) * workers[workersLength].daysWorked) / workers[workersLength].month;
        };

        printf("\nDeseja realizar mais um cadastro de funcionario? (S/N)");
        scanf(" %c", &repeat);

        workersLength++;

    } while (repeat == 's' || repeat == 'S');

    for(int i = 0; i < workersLength; i++) {
        printf("\n--------------------------------------\n");
        printf("\n######################################\n");
        printf("\nFuncionario(a): %s", workers[i].name);
        printf("\nDias no mes: %.0f", workers[i].month);
        printf("\nFaltas: %.0f", workers[i].absents);
        printf("\nDias trabalhados: %.0f", workers[i].daysWorked);
        printf("\nSalario Base do mes: R$%.2f", workers[i].salary);
        printf("\nGratificacao em Porcentagem: %.2f%%", workers[i].salaryIncreaseInPercentage);
        printf("\nGratificacao em Real: R$%.2f", workers[i].salaryIncreaseInReal);
        printf("\nDesconto do INSS: %.2f%%", workers[i].INSS);
        printf("\n\nSALARIO FINAL: R$%.2f\n\n", workers[i].finalSalary);
        printf("\n######################################\n");
        printf("\n--------------------------------------\n");
    };

    return exitProgram();
};

int exitProgram() {
    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("########### FIM DO PROGRAMA ##########");
    printf("\n######################################\n"); 
    printf("######################################\n");

    printf("\nPressione qualquer tecla para sair: ");
    getch();
    return 0;
};

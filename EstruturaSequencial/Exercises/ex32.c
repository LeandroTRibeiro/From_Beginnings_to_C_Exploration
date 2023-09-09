/*

32. Elabore um algoritmo que efetue o cálculo do salário líquido de um professor. Os dados fornecidos 
serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.

*/

#include <stdio.h>
#include <conio.h>

struct Teacher {
    char name[100];
    char discipline[100];
    float payPerHour;
    float hourPerClass;
    float classes;
    float salary;
    float INSS;
    float finalSalary;
};

int exitProgram();

int main() {
    int teacherLength = 0;
    char repeat;

    struct Teacher teachers[100];

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("### FOLHA DE PAGAMENTO PROFESSORES ###");
    printf("\n######################################\n"); 
    printf("######################################\n");

    do {

        printf("\nDigite o nome do professor(a): ");
        scanf(" %[^\n]", &teachers[teacherLength].name);
        printf("\nDigite a disciplina de atuacao do professor(a): ");
        scanf(" %[^\n]", &teachers[teacherLength].discipline);
        printf("\nDigite o valor da hora em Reais: (R$)");
        scanf(" %f", &teachers[teacherLength].payPerHour);
        printf("\nDigite a quantidade de horas por aula: ");
        scanf(" %f", &teachers[teacherLength].hourPerClass);
        printf("\nDigite a quantidade de aulas lesionadas pelo professor(a): ");
        scanf(" %f", &teachers[teacherLength].classes);
        printf("\nDigite a porcentagem de desconto do INSS: (%%)");
        scanf(" %f", &teachers[teacherLength].INSS);

        teachers[teacherLength].salary = (teachers[teacherLength].classes * teachers[teacherLength].hourPerClass) * teachers[teacherLength].payPerHour;

        teachers[teacherLength].finalSalary = teachers[teacherLength].salary - ((teachers[teacherLength].INSS * teachers[teacherLength].salary) / 100);

        teacherLength++;

        printf("\nDeseja cadastrar outro professor(a)? (S/N)");
        scanf(" %c", &repeat);

    } while (repeat == 's' || repeat == 'S');

    for(int i = 0; i < teacherLength; i++) {
        printf("\n--------------------------------------\n");
        printf("\n######################################\n");
        printf("\nCadastro: %d", i+1);
        printf("\nProfessor: %s", teachers[i].name);
        printf("\nDisciplina: %s", teachers[i].discipline);
        printf("\nAulas: %.0f", teachers[i].classes);
        printf("\nHoras por aula: %.2f", teachers[i].hourPerClass);
        printf("\nValor por hora: R$%.2f", teachers[i].payPerHour);
        printf("\nDesconto do INSS: %.2f%%", teachers[i].INSS);
        printf("\nSalario Base: R$%.2f\n", teachers[i].salary);
        printf("\n\nSalario Liquido R$%.2f\n\n", teachers[i].finalSalary);
        printf("\n--------------------------------------\n");
        printf("\n######################################\n");
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

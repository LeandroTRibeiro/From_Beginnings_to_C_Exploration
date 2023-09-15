/*

4. Faça um programa que receba duas notas, calcule e mostre a média aritmética e a
mensagem que se encontra na tabela a seguir:
Média Aritmética Mensagem
0,0 - 3,0 Reprovado
3,0 - 7,0 Exame
7,0 - 10,0 Aprovado

*/

#include <stdio.h>
#include <conio.h>

struct Student {
    char name[100];
    char discipline[100];
    float test1;
    float test2;
    float test3;
    float test4;
    float frequence;
    float average;
    int approved;
    int recovery;
};

int exitProgram();

int main() {

    int studentsLenght=0, classes, absents;
    char repeat;

    struct Student students[100];

    printf("\n########################################\n");
    printf("\n########################################\n");
    printf("\n######## REGISTRO DE ALUNOS ############\n");
    printf("\n########################################\n");
    printf("\n########################################\n");

    do {

        printf("\nCadastro: %d", studentsLenght+1);
        printf("\nDigite o nome do aluno(a): ");
        scanf(" %[^\n]", &students[studentsLenght].name);
        printf("\nDigite o nome da disciplina: ");
        scanf(" %[^\n]", &students[studentsLenght].discipline);
        printf("\nDigite a nota da primeira avaliacao: ");
        scanf(" %f", &students[studentsLenght].test1);
        printf("\nDigite a nota da segunda avaliacao: ");
        scanf(" %f", &students[studentsLenght].test2);
        printf("\nDigite a nota da terceira avaliacao: ");
        scanf(" %f", &students[studentsLenght].test3);
        printf("\nDigite a nota da quarta avaliacao: ");
        scanf(" %f", &students[studentsLenght].test4);
        printf("\nDigite a quantidade de aulas neste semestre: ");
        scanf(" %d", &classes);
        printf("\nDigite a quantidade de faltas do aluno(a): ");
        scanf(" %d", &absents);

        students[studentsLenght].frequence = 100 - ((absents * 100) / classes);

        students[studentsLenght].average = (students[studentsLenght].test1 + students[studentsLenght].test2 + students[studentsLenght].test3 + students[studentsLenght].test1) / 4;

        if(students[studentsLenght].average < 3) {
            students[studentsLenght].approved = 0;
            students[studentsLenght].recovery = 0;
        } else if(students[studentsLenght].average >= 3 && students[studentsLenght].average < 6) {
            students[studentsLenght].approved = 0;
            students[studentsLenght].recovery = 1;
        } else {
            students[studentsLenght].approved = 1;
            students[studentsLenght].recovery = 0;
        };

        studentsLenght++;

        printf("\nDeseja realizar mais um cadastro? (S/N)");
        scanf(" %c", &repeat);

    } while(repeat == 's' || repeat == 'S');

    for (int i = 0; i < studentsLenght; i++) {

        printf("\n########################################\n");
        printf("\nCadastro: %d", i+1);
        printf("\nAluno(a): %s", students[i].name);
        printf("\nDisciplina: %s", students[i].discipline);
        printf("\nAvaliacao 1: %.2f", students[i].test1);
        printf("\nAvalicao 2: %.2f", students[i].test2);
        printf("\nAvalicao 3: %.2f", students[i].test3);
        printf("\nAvalicao 4: %.2f", students[i].test4);
        printf("\nMedia: %.2f", students[i].average);
        printf("\nFrequencia: %.2f%%", students[i].frequence);
        if(students[i].approved == 1) {
            printf("\nO aluno(a) esta aprovado(a)!");
        } else if(students[i].recovery == 1) {
            printf("\nO aluno(a) esta em recuperacao!");
        } else {
            printf("\nO aluno(a) esta reprovado(a)!");
        };
        printf("\n########################################\n");
    };

    exitProgram();
};

int exitProgram() {

    printf("\n########## FIM DO PROGRAMA ##########");
    printf("\nPressione qualquer tecla para encerrar!:");
    getch();

    return 0;
};
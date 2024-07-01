#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    char email[100];
    char birth[11];
    float grades[3];
} Student;

void readStudents(Student students[], int length);
void showStudentsResults(Student students[], int length);
int getAge(char birth[]);

int main() {
    Student students[5];

    readStudents(students, 5);
    showStudentsResults(students, 5);

    return 0;
}

void readStudents(Student students[], int length) {
    for(int i = 0; i < length; i++) {
        printf("\nDigite o nome do Aluno No%d: ", i + 1);
        scanf(" %[^\n]", students[i].name);
        printf("\nDigite o email do aluno: ");
        scanf(" %[^\n]", students[i].email);
        printf("\nDigite a data de nascimento do aluno (DD-MM-AAAA): ");
        scanf(" %[^\n]", students[i].birth);

        for(int j = 0; j < 3; j++) {
            printf("\nDigite a nota No%d: ", j + 1);
            scanf("%f", &students[i].grades[j]);
        }
    }
}

void showStudentsResults(Student students[], int length) {
    for(int i = 0; i < length; i++) {
        float averageGrades = 0;

        for(int j = 0; j < 3; j++) {
            averageGrades += students[i].grades[j];
        }
        averageGrades /= 3;

        int age = getAge(students[i].birth);

        printf("\nAluno No%d", i + 1);
        printf("\nNome: %s", students[i].name);
        printf("\nEmail: %s", students[i].email);
        printf("\nData de nascimento: %s", students[i].birth);
        printf("\nIdade: %d anos", age);
        printf("\nMédia das notas: %.2f", averageGrades);
        printf("\n");
    }
}

int getAge(char birth[]) {
    int day, month, year;
    sscanf(birth, "%d-%d-%d", &day, &month, &year);

    int currentYear = 2024;
    return currentYear - year;
}

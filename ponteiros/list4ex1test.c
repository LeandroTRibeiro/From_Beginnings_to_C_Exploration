/*
1) Faça uma função que receba um vetor de notas de uma disciplina e retorne a média aritmética, a maior e a
menor das notas.
*/

#include <stdio.h>
#include <ctype.h>

void calcAvarage(float grades[], int length, float *bigger, float *smaller, float *avarage);

int main() {
    float grades[100];
    int length = -1;
    char addGrade = 's';
    float bigger;
    float smaller;
    float avarage;


    do {
        length++;
        printf("\nAdicione uma nota: ");
        scanf(" %f", &grades[length]);

        do {

            printf("\nDeseja adicionar mais uma nota: (s/n)");
            scanf(" %c", &addGrade);

        } while(tolower(addGrade) != 's' && tolower(addGrade) != 'n');

    } while(tolower(addGrade) == 's');

    calcAvarage(grades, length, &bigger, &smaller, &avarage);

    printf("\nAs notas do aluno foram: \n");

    for(int i = 0; i <= length; i++) {
        printf("%.2f\t", grades[i]);
    };

    printf("\nA media delas foi: %.2f\n", avarage);
    printf("\nA menor nota foi: %.2f\n", smaller);
    printf("\nA maior nota foi: %.2f\n", bigger);

    return 0;
};

void calcAvarage(float grades[], int length, float *bigger, float *smaller, float *avarage) {
    float sum = 0;
    *smaller = grades[0];
    *bigger = grades[0];

    for(int i = 0; i <= length; i++) {
        sum += grades[i];
        if(*smaller > grades[i]) {
            *smaller = grades[i];
        };
        if(*bigger < grades[i]) {
            *bigger = grades[i];
        };
    };

    *avarage = sum / (length + 1);
    return;
};
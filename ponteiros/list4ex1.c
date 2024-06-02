/*
1) Faça uma função que receba um vetor de notas de uma disciplina e retorne a média aritmética, a maior e a
menor das notas.
*/

#include <stdio.h>
#include <string.h>

void getGrades(float *grades, int lenght);
float getBigger(float *grades, int lenght);
float getSmaller(float *grades, int lenght);
float getAverage(float *grades, int lenght);
int finishProgram();

int main() {
    float grades[3];
    int gradesLength = 3;
    float bigger;
    float smaller;
    float average;

    getGrades(grades, gradesLength);

    bigger = getBigger(grades, gradesLength);
    smaller = getSmaller(grades, gradesLength);
    average = getAverage(grades, gradesLength);

    printf("\nA notas sao: \n");

    for(int i = 0; i < gradesLength; i++) {
        printf("%.2f\t", grades[i]);
    };

    printf("\nMaior nota: %.2f", bigger);
    printf("\nMenor nota: %.2f", smaller);
    printf("\nMedia das notas: %.2f", average);

    return finishProgram();
};

void getGrades(float *grades, int length) {

    for(int i = 0; i < length; i++) {
        printf("\nDigite a %da nota: ", i + 1);
        scanf(" %f", &grades[i]);
    };

    return;
};

float getBigger(float *grades, int lenght) {
    float bigger = -99999999999;

    for(int i = 0; i < lenght; i++) {
        if(bigger < grades[i]) {
            bigger = grades[i];
        };
    };

    return bigger;
};

float getSmaller(float *grades, int lenght) {
    float smaller = 99999999;

    for(int i = 0; i < lenght; i++) {
        if(smaller > grades[i]) {
            smaller = grades[i];
        };
    };

    return smaller;
};

float getAverage(float *grades, int lenght) {
    float sum = 0;

    for(int i = 0; i < lenght; i++) {
        sum += grades[i];
    }

    return sum / lenght;
};

int finishProgram() {
    printf("\n########################################\n");
    printf("Pressione qualquer tecla para encerrar!\n");
    getchar();
    getchar();

    return 0;
};
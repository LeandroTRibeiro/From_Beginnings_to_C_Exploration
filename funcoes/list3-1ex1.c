/*
1) Faça uma função que receba três notas e seus respectivos pesos, calcule e mostre a
média ponderada dessas notas. Obs.: Veja no final desta lista como se faz a média
ponderada.
*/

#include <stdio.h>
#include <conio.h>

void getValues(float *array, int size, char *name);
float calcGrade(float *grades, float *weight, int tests);
int finishProgram();

int main() {
    float *grades[3];
    float weigth[3];
    int tests;

    printf("\nDigite a quantidade de provas a calcular: ");
    scanf(" %d", &tests);

    getValues(grades, tests, "nota");
    getValues(weigth, tests, "peso");

    printf("\nA media das seguintes notas e pesos e de: %.2f", calcGrade(grades, weigth, tests));

    return finishProgram();
};

void getValues(float *array, int size, char *name) {

    for(int i = 0; i < size; i++) {
        printf("\nDigite o valor do(a) %s %d: ", name, i + 1);
        scanf(" %f", &array[i]);
    };
    return;
};

float calcGrade(float *grades, float *weight, int tests) {
    float grade = 0;
    float weigth = 0;

    for(int i = 0; i < tests; i++) {
        grade += grades[i] * weight[i];
        weigth += weight[i];
    };

    return grade / weigth;
};

int finishProgram() {
    printf("\n###################################################\n");
    printf("Pressione qualquer tecla para encerrar!");
    getch();

    return 0;
};

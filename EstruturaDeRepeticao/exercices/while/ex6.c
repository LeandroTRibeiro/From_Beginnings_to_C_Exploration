/*
6) Elabore um algoritmo que leia a idade e sexo (M– masculino, F – feminino) de várias pessoas.
Calcule e imprima a idade média, total de pessoas do sexo feminino, e o total de pessoas do sexo
masculino. O algoritmo termina quando se digita 0 para a idade. 
*/

#include <stdio.h>

int verifyChar(char sex);

int main() {
    float age, peopleCount=0, maleCount=0, femaleCount=0, ageSum=0;
    char sex;

    printf("\nDigite a idade: ");
    scanf(" %f", &age);

    while(age > 0) {

        printf("\nDigite o sexo : (M/F)");
        scanf(" %c", &sex);

        verifyChar(sex);

        peopleCount++;
        if(sex == 'm' || sex == 'M') {
            maleCount++;
        } else {
            femaleCount++;
        };
        ageSum = ageSum + age;

        printf("\nDigite a idade: ");
        scanf(" %f", &age);

    };

    printf("\nmedia de idade : %.2f", ageSum/peopleCount);
    printf("\ntotal de pessoas do sexo feminino: %.2f", femaleCount);
    printf("\ntotal de pessoas do sexo masculino: %.2f", maleCount);

    return 0;
};

int verifyChar(char sex) {
    while(sex != 'm' && sex != 'M' && sex != 'f' && sex != 'F') {
        printf("\nCaracter invalido!");
        printf("\nDigite o sexo : (M/F)");
        scanf(" %c", &sex);
    };
    return 0;
};
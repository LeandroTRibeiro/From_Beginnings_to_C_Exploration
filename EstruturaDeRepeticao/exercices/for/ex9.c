/*9) Elabore um algoritmo que leia o nome, nota da avaliação 1, e nota da avaliação 2 de 15 alunos. Após cada
leitura, imprimir o nome, nota da avaliação 1, nota da avaliação 2 e média aritmética de cada aluno. */

#include <stdio.h>

int main() {
    char name[15][15];
    float grade1[15], grade2[15], gradeF[15];

    for(int i = 0; i < 15; i++) {
        printf("\nDigite o nome do aluno: ");
        scanf(" %[^\n]", &name[i]);
        printf("\nDigite a primeira nota do aluno: ");
        scanf(" %f", &grade1[i]);
        printf("\nDigite a segunda nota do aluno: ");
        scanf(" %f", &grade2[i]);
    };

    for(int i = 0; i < 15; i++) {
        printf("\n\nAluno: %s", name[i]);
        printf("\nPrimeira nota: %.2f", grade1[i]);
        printf("\nSegunda nota: %.2f", grade2[i]);
        printf("\nMedia: %.2f", ((grade1[i] + grade2[i])/2));
    };

    return 0;
};
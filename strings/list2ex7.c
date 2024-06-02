/*
7. Faça um programa que lê uma string e conta e mostra quantos caracteres esta
string possui (caracteres - \0).
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int finishProgram();

int main() {
    char phrase[100];

    printf("\nEscreva uma frase: ");
    scanf(" %[^\n]", &phrase);

    printf("\nA frase possui %d caracteres!", strlen(phrase));

    return finishProgram();
};

int finishProgram() {
    printf("\n\n\n############################################\n");
    printf("\nPressione a tecla ENTER para encerrar o programa!");
    getchar();
    getchar();

    return 0;
};
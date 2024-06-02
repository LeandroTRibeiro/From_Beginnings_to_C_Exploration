/*
4. Desenvolva um programa para ler uma string. Modifique a string de modo que o
primeiro caracter passe para a última posição e desloque todos os outros caracteres uma
posição para a esquerda. Imprima a string modificada.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void changePosition(char *phrase);
int finishProgram();

int main() {
    char phrase[100];

    printf("\nEscreva uma frase: ");
    scanf(" %[^\n]", &phrase); 

    changePosition(phrase);

    printf("\nA string modifica fica da seguinte forma: \n\n%s", phrase);

    return finishProgram();
};

void changePosition(char *phrase) {
    int lenght;
    char temp;

    lenght = strlen(phrase);

    for(int i = 0; i < lenght / 2; i++) {
        temp = phrase[i];
        phrase[i] = phrase[lenght - 1 - i];
        phrase[lenght - 1 - i] = temp;
    };

    return;
};

int finishProgram() {
    printf("\n\n\n#########################################\n");
    printf("\nPressione a tecla ENTER para encerrar o programa: ");
    getchar();
    getchar();

    return 0;
}
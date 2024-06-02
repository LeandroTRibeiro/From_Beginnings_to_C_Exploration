/*
3. Escreva um programa que leia uma string, conte quantos caracteres desta string são
iguais a 'a' e substitua os que forem iguais a 'a' por 'b'. O programa deve imprimir o
número de caracteres modificados e a string modificada.
*/

#include <stdio.h>
#include <ctype.h>

void changeLetter(char *phrase, int *count);
int finishProgram();

int main() {
    char phrase[100];
    int count = 0;

    printf("\nEscreva uma frase: ");
    scanf(" %[^\n]", &phrase);

    changeLetter(phrase, &count);

    printf("\nA frase possui %d letras 'a', e modificando a frase ela ficou assim:\n%s", count, phrase);

    return finishProgram();
};

void changeLetter(char *phrase, int *count) {
    while(*phrase) {
        if(tolower(*phrase) == 'a') {
            *phrase = 'b';
            (*count)++;
        };
        phrase++;
    };
    return;
};

int finishProgram() {
    printf("\n#######################################################\n");
    printf("\nPressione a tecla ENTER para encerrar: ");
    getchar();
    getchar();
    return 0;
};
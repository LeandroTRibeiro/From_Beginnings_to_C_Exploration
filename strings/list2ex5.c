/*
5. Escreva um programa que leia uma frase e conte quantas palavras existem na frase
lida.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countWords(char *phrase, int *count);
int finishProgram();

int main() {
    char phrase[100];
    int count = 0;

    printf("\nEscreva uma frase: ");
    scanf(" %[^\n]", &phrase);

    countWords(phrase, &count);

    printf("\nForam encontradas %d palavras nesta frase!", count);

    return finishProgram();
};

void countWords(char *phrase, int *count) {
    int start = 0;

    while(*phrase) {
        if(isalpha(*phrase) && !start) {
            start = 1;
        };
        if((!isalpha(*phrase) || *phrase == ' ') && start) {
            (*count)++;
            start = 0;
        }
        phrase++;
    };
    if(start) {
        (*count)++;
    };

    return;
};

int finishProgram() {
    printf("\n\n\n################################################################\n");
    printf("\nPressione a tecla ENTER para encerrar o programa!");
    getchar();
    getchar();

    return 0;
};
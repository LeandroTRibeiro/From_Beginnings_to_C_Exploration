/*
2. Faça um programa que recebe uma frase, calcule e mostre a quantidade de letras ‘x’ da
frase digitada.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int getLetter(char *phrase, char letter);
int finishProgram();

int main() {
    char phrase[100];
    char letter;
    int count;

    printf("Escreva uma frase: ");
    scanf(" %[^\n]", &phrase);

    printf("\nQual letra voce gostaria de contar (digite um caracter): ");
    scanf(" %c", &letter);

    count = getLetter(phrase, letter);

    printf("\nA frase contem %d letras %c.", count, letter);

    return 0;
};

int getLetter(char *phrase, char letter) {
    int count = 0;
    while(*phrase) {
        if(tolower(*phrase) == tolower(letter)) {
            count++;
        }
        phrase++;
    };
    return count;
};

int finishProgram() {

    printf("\n####################################\n");
    printf("\nPrecione qualquer tecla para encerrar o programa: ");
    getch();

    return 0;
};

/*
1. Faça um programa que recebe uma frase, calcule e mostre a quantidade de vogais da
frase digitada.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void getPhrase(char *phrase);
int getVowels(char *phrase);
int incluideChar(char *array, char c);
int finishProgram();

int main() {
    char phrase[100];
    int vowels;

    getPhrase(phrase);
    vowels = getVowels(phrase);

    printf("\nA frase contem : %d vogais", vowels);

    return finishProgram();
};

void getPhrase(char *phrase) {

    printf("Escreva uma frase: ");
    scanf(" %[^\n]", phrase);

};

int getVowels(char *phrase) {
    char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
    int length;
    int count = 0;

    length = strlen(phrase);

    for(int i = 0; i < length; i++) {
        if(incluideChar(vowels, tolower(phrase[i]))) {
            count++;
        }
    }

    return count;
};

int incluideChar(char *array, char c) {
    while(*array) {
        if(*array == c) {
            return 1;
        }
        array++;
    }
    return 0;
};

int finishProgram() {
    printf("\n##################################\n");
    printf("\nPrecione qualquer tecla para encerrar o programa: ");
    getch();

    return 0;
}
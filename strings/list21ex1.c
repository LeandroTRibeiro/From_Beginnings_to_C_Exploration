/*
1. Elabore um programa que receba uma frase, calcule e mostre a quantidade
de palavras da frase digitada.
*/

#include <stdio.h>
#include <ctype.h>

void countWords(char *phrase, int *count);

int main() {
    char phrase[100];
    int count = 0;

    printf("\nEscreva uma frase : ");
    scanf(" %[^\n]", &phrase);

    countWords(phrase, &count);

    printf("\nA frase contem %d palavras!", count);

    return 0;
}; 

void countWords(char *phrase, int *count) {
    int start = 0;

    while(*phrase) {
        if(isalpha(*phrase) && !start) {
            start = 1;
        };
        if(!isalpha(*phrase) && start) {
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
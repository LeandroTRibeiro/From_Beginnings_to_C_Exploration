/*
1. Elabore um programa que receba uma frase, calcule e mostre a quantidade
de palavras da frase digitada.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char *str);

int main() {
    char phrase[100];
    // char trimPhrase[100];
    int words = 0;
    int start = 0;
    int length;

    printf("\nDigite uma frase: ");
    scanf(" %[^\n]", &phrase);

    // trim(phrase);

    length = strlen(phrase);

    for(int i = 0; i < length; i++) {
        if(isalpha(phrase[i])) {
            start = 1;
        };
        if(((!isalpha(phrase[i])) || (phrase[i] == ' ')) && start > 0) {
            words++;
            start = 0;
        }
    };

    if(words > 0) {
        printf("\nA quantidade de palavras na frase e de: %d", words);
        printf("\n%s", phrase);
    } else {
        printf("\nNao temos palavras!");
    }

};

void trim(char *str) {
    char newStr[100];
    int length;
    int end;
    int indexNewStr = 0;

    length = strlen(str);

    for(int i = 0; i < length; i++) {
        if(str[i] != ' ') {
            end = i + 1;
        }
    }

    str[end] = '\0';

    length = strlen(str);

    for(int i = 0; i < length; i++) {
        if(str[i] != ' ') {
            newStr[indexNewStr] = str[i];
            indexNewStr++;
        };
        if(str[i] == ' ') {
            if(str[i] != str[i+1]) {
                newStr[indexNewStr] = str[i];
                indexNewStr++;
            }
        }
    }

    newStr[indexNewStr] = '\0';

    length = strlen(newStr);

    for(int i = 0; i < length; i++) {
        str[i] = newStr[i];
    };

};
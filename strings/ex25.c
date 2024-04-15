/*
5. Escreva um programa que leia uma frase e conte quantas palavras existem na frase
lida.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char phrase[50];
    int count = 1;
    int length;

    printf("Digite uma frase: ");
    scanf(" %[^\n]", &phrase);

    length = strlen(phrase);

    for(int i = 0; i < length; i++) {
        if(phrase[i] == ' ') {
            count++;
        };
    };

    printf("\nQuantidade de palavras na frase: %d", count);

    return 0;
}
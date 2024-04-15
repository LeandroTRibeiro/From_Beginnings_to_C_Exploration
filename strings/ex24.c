/*
4. Desenvolva um programa para ler uma string. Modifique a string de modo que o
primeiro caracter passe para a última posição e desloque todos os outros caracteres uma
posição para a esquerda. Imprima a string modificada.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char phrase[50];
    int length;

    printf("Digite uma frase: ");
    scanf(" %[^\n]", &phrase);

    length = strlen(phrase);

    char firstChar = phrase[0];

    for(int i = 0; i < length; i++) {
        phrase[i] = phrase[i+1];
    }

    phrase[length - 1] = firstChar;

    printf("\nnova frase: %s", phrase);

    return 0;

}
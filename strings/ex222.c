/*
2. Elabore um programa para criptografar uma frase dada pelo usuário, ou seja,
a criptografia troca as vogais da frase por *
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char phrase[100];
    int length;

    printf("\nEscreva uma frase: ");
    scanf(" %[^\n]", &phrase);

    length = strlen(phrase);

    for(int i = 0; i < length; i++) {
        if(
            tolower(phrase[i]) == 'a' || 
            tolower(phrase[i]) == 'e' || 
            tolower(phrase[i]) == 'i' ||
            tolower(phrase[i]) == 'o' ||
            tolower(phrase[i]) == 'u'
        ) {
            phrase[i] = '*';
        }
    }

    printf("%s", phrase);

    return 0;
}
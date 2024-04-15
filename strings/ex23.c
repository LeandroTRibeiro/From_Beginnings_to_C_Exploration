/*
3. Escreva um programa que leia uma string, conte quantos caracteres desta string são
iguais a 'a' e substitua os que forem iguais a 'a' por 'b'. O programa deve imprimir o
número de caracteres modificados e a string modificada.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int count = 0;
    int length;
    char phrase[50];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", &phrase);

    length = strlen(phrase);

    for(int i = 0; i < length; i++) {
        if(tolower(phrase[i]) == 'a') {
            count++;
            phrase[i] = 'b';
        };
    };

    printf("\nnumero de char alterados: %d", count);
    printf("\nnova string: %s", phrase);

    return 0;
}
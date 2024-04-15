/*
2. Faça um programa que recebe uma frase, calcule e mostre a quantidade de letras ‘x’ da
frase digitada.
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
        if(tolower(phrase[i]) == 'x') {
            count++;
        }
    }

    printf("\nquantidade de x na frase: %d", count);

    return 0;
}
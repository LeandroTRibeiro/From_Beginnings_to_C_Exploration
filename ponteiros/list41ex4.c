/*
4. Faça uma função que leia um texto e converta este texto para maiúscula. O texto deve ser
passado para função por referência.
*/

#include <stdio.h>
#include <ctype.h>

void toLowerFunc(char *text);

int main() {
    char text[100];

    printf("\nEscreva uma frase: ");
    scanf(" %[^\n]", &text);

    toLowerFunc(text);

    printf("texto em maiusculo: \n %s", text);

    return 0;
};

void toLowerFunc(char *text) {
    while(*text) {
        islower(*text) ? *text = toupper(*text) : (void)0;
        text++;
    };
    return;
};
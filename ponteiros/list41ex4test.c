/*
4. Faça uma função que leia um texto e converta este texto para maiúscula. O texto deve ser
passado para função por referência.
*/

#include <stdio.h>
#include <ctype.h>

void toUpperCase(char text[]);

int main() {
    char text[100];

    printf("\nEscreva uma frase: ");
    scanf(" %[^\n]", &text);

    toUpperCase(text);

    printf(text);

    return 0;

};

void toUpperCase(char text[]) {
    while(*text) {
        *text = toupper(*text);
        *text++;
    };
    return;
}
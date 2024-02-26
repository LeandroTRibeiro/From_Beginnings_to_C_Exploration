/*
1) Elabore um algoritmo que leia várias letras enquanto forem diferentes de F, imprimindo cada letra
logo após a leitura.
*/

#include <stdio.h>

int main() {
    char letter;

    printf("\nDigite uma letra: ");
    scanf(" %c", &letter);
    printf("\nletra digitada: %c\n", letter);

    while(letter != 'f' && letter != 'F') {
        printf("\nDigite uma letra: ");
        scanf(" %c", &letter);
        printf("\nletra digitada: %c\n", letter);
    };
    
    return 0;
};
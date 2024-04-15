/*
6. Faça um programa que lê duas strings e as intercala, ou seja, “bola” e “jogo” fica
“bjoolgao”. Apresente a string intercalada.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[2][50];
    char wordTogether[100];
    int length = 0;
    int count = 0;

    for(int i = 0; i < 2; i++) {
        printf("\nDigite a %do palavra: ", i + 1);
        scanf(" %[^\n]", &word[i]);
        length =  length + strlen(word[i]);
    };

    for(int i = 0; i < length; i++) {
        if(isalpha(word[0][i]) != 0) {
            wordTogether[count] = word[0][i];
            count++;
        };
        if(isalpha(word[1][i]) != 0) {
            wordTogether[count] = word[1][i];
            count++;
        };
    };

    printf("\npalavra intercalada: %s", wordTogether);

    return 0;
}
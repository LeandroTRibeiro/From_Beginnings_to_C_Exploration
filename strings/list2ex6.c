/*
6. Faça um programa que lê duas strings e as intercala, ou seja, “bola” e “jogo” fica
“bjoolgao”. Apresente a string intercalada.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char words[2][100];
    char interleaved[200];
    int lengths[2];
    int maxLength = 0;
    int count = 0;

    for(int i = 0; i < 2; i++) {
        printf("\nEscreva a %d palavra a ser intercalada: ", i + 1);
        scanf(" %[^\n]", &words[i]);

        lengths[i] = strlen(words[i]);
        if(lengths[i] > maxLength) {
            maxLength = lengths[i];
        };
    };



    for(int i = 0; i < maxLength; i++) {
        if(i < lengths[0]) {
            interleaved[count] = words[0][i];
            count++;
        };
        if(i < lengths[1]) {
            interleaved[count] = words[1][i];
            count++;
        };
    };

    interleaved[count] = '\0';

    printf("\nAs palavras intercaladas: \n%s", interleaved);

    return 0;

};
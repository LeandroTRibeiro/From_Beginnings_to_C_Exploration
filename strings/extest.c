#include <stdio.h>
#include <string.h>

void showChangePhrase(char phrase[100], char letter);

int main() {
    char phrase[100];

    printf("\nDigite uma frase: ");
    scanf(" %[^\n]", &phrase);

    showChangePhrase(phrase, 'a');



    return 0;
};

void showChangePhrase(char phrase[100], char letter) {
    int lenght;
    char newPhrase[100];

    lenght = strlen(phrase);

    for(int i = 0; i < lenght; i++) {
        if(phrase[i] == letter) {
            newPhrase[i] = '_';
        } else {
            newPhrase[i] = phrase[i];
        }
    };
    newPhrase[lenght] = '\0';

    printf("\nnova frase: \n%s", newPhrase);
    return;
};
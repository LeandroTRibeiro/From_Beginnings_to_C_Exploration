/*
7. Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e imprima o índice do
primeiro número negativo, se houver. Caso não existam números negativos, imprimir a seguinte
mensagem “Negativo não encontrado”.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[30];
    int length;

    printf("digite um nome: ");
    scanf(" %[^\n]", &name);

    length = strlen(name);

    for(int i = 0; i < length; i++) {
        if(i == 0) {
            printf("%c\t", toupper(name[i]));
        } else {
            printf("%c\t", name[i]);
        }
    }

    return 0;

};
/*
    15) Elabore um algoritmo que leia um número e imprima o fatorial desse número. Suponha que o número lido será
maior ou igual a zero.
*/

#include <stdio.h>

int main() {
    int receivedNumber, factorial=1;

    printf("\nDigite um numero a ser fatorado: ");
    scanf(" %d", &receivedNumber);
    printf("\n%d! = ", receivedNumber);
    for(int i = 1; i <= receivedNumber; i++) {
        factorial=factorial*i;
        if((i+1) > receivedNumber) 
            printf("%d", i);
        else
            printf("%d x ", i);
    };
    printf("\nFatorial: %d", factorial);
    return 0;
};
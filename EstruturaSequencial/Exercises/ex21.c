/*

21. Elabore um algoritmo que leia 2 números (maiores que 0), e imprima os números informados, a soma, 
subtração do primeiro pelo segundo, multiplicação, considerando a seguinte saída:
Primeiro Número:____ Segundo Número:____
Soma: ____
Subtração: ____
Multiplicação: ____

*/

#include <stdio.h>

int main() {
    float n1, n2;
    char repeat;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("OPERAÇÕES BASICAS DE MATEMATICA");
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    do {   
        
        printf("\nDigite o primeiro numero: ");
        scanf(" %f", &n1);
        printf("\nDigite o segundo numero: ");
        scanf(" %f", &n2);

        printf("\n-----------------------------------\n"); 
        printf("-----------------------------------\n");
        printf("\nPrimeiro numero: %.2f", n1);
        printf("\nSegundo numero: %.2f", n2);
        printf("\nSoma: %.2f + %.2f = %.2f", n1, n2, n1+n2);
        printf("\nSubtracao: %.2f - %.2f = %.2f", n1, n2, n1-n2);
        printf("\nMultiplicacao: %.2f x %.2f = %.2f", n1, n2, n1*n2);
        printf("\nDivisao: %.2f / %.2f = %.2f", n1, n2, n1/n2);

        printf("\n\nDeseja fazer outra operacao? (S/N): ");
        scanf(" %c", &repeat);

    } while (repeat == 'S' || repeat == 's');

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("FIM DO PROGRAMA");
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    return 0;
};
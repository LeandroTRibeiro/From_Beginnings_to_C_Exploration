/*

20. Elabore um algoritmo que leia dois valores para as variáveis A e B, efetue a troca dos valores de forma 
que a variável A passe a ter o valor da variável B, e que a variável B passe a ter o valor da variável A. 
Ao final, imprima os valores com a troca efetuada.

*/

#include <stdio.h>

int main() {
    
    float A, B, C;
    char changeValue, repeat;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("TROCA DE VALORES EM VARIAVEIS");
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    do {
        printf("\nDigite um valor numerico para a variavel A: ");
        scanf("%f", &A);
        printf("Digite um valor para variavel B: ");
        scanf("%f", &B);

        printf("Deseja inverter os valores das variaveis? (S/N): ");
        scanf(" %c", &changeValue); 

        if (changeValue == 's' || changeValue == 'S') {
            C=A;
            A=B;
            B=C;

            printf("\n-----------------------------------\n"); 
            printf("-----------------------------------\n");
            printf("\nVariavel A: %.0f", A);
            printf("\nVariavel B: %.0f", B);

        } else {
            printf("\n-----------------------------------\n"); 
            printf("-----------------------------------\n");
            printf("\nVariavel A: %.0f", A);
            printf("\nVariavel B: %.0f", B);
        };

        printf("\nDeseja repetir? (S/N): ");
        scanf(" %c", &repeat);

    } while (repeat == 'S' || repeat == 's');
  
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("FIM DO PROGRAMA");
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    return 0;

};
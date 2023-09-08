/*

22. Elabore um algoritmo que leia um número inteiro e imprima seus sucessor e seu antecessor.

*/

#include <stdio.h>

int main() {

    int n1;
    char repeat;

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("INDICADOR DE ANTECESOR E SUCESSOR");
    printf("\n######################################\n"); 
    printf("######################################\n");

    do {

        printf("\nDigite um numero inteiro: ");
        scanf(" %d", &n1);

        printf("\nNumero: %d", n1);
        printf("\nAntecessor: %d", n1-1);
        printf("\nSucessor: %d", n1+1);

        printf("\n\n######################################\n"); 

        printf("\nDeseja repetir? (S/N):");
        scanf(" %c", &repeat);

        printf("\n######################################\n"); 


    } while (repeat == 's' || repeat == 'S');

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("########### FIM DO PROGRAMA ##########");
    printf("\n######################################\n"); 
    printf("######################################\n");

    return 0;
};
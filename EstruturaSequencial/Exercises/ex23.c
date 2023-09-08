/*

23. Elabore um algoritmo que leia um número real e imprima a terça parte desse número.

*/

#include <stdio.h>

int main() {

    float n1;
    char repeat;

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("#### UM TERCO DE QUALQUER NUMERO #####");
    printf("\n######################################\n"); 
    printf("######################################\n");

    do {

        printf("\nDigite um numero: ");
        scanf(" %f", &n1);

        printf("\nUm terco de %.2f = %.2f", n1, n1/3);

        printf("\n\n######################################\n"); 

        printf("\n\nDeseja repetir? (S/N): ");
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
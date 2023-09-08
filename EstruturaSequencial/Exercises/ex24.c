/*

24. Elabore um algoritmo que leia um número positivo maior que 0, calcule e mostre:
a. O número informado ao quadrado
b. O número informado ao cubo
c. A raiz quadrada do número informado
d. A raiz cúbica do número informado

*/

#include <stdio.h>
#include <math.h>

int main() {

    float n1;
    char repeat;

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("####### TRANFORMADOR DE NUMERO #######");
    printf("\n######################################\n"); 
    printf("######################################\n");

    do {

        printf("\nDigite um numero: ");
        scanf(" %f", &n1);

        printf("\n%.2f ao quadrado = %.2f", n1, pow(n1,2));
        printf("\n%.2f ao cubo = %.2f", n1, pow(n1,3));
        printf("\nA raiz quadrada de %.2f = %.2f", n1, sqrt(n1));
        printf("\nA raiz cubica de %.2f = %.2f", n1, pow(n1, 1.0/3.0)); // como a funcao cbtr retorna um inteiro usei a pow

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
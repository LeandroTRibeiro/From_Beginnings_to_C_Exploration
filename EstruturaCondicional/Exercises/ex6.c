/*

6. Elabore um algoritmo que leia dois números e imprima qual é maior e qual é menor.

*/

#include <stdio.h>
#include <conio.h>

int finishProgram();

int main() {

    float n1, n2, higher, smallest;
    char repeat;
    
    do {
        printf("\n----------------------------\n\n\n");
        printf("Digite um numero: ");
        scanf(" %f", &n1);
        printf("\nDigite outro numero: ");
        scanf(" %f", &n2);

        if(n1 > n2) {
            higher = n1;
            smallest = n2;
        } else {
            higher = n2;
            smallest = n1;
        };
        
        printf("\n----------------------------\n");
        printf("\nO menor numero e o %.2f\n", smallest);
        printf("O maior numero e o %.2f\n", higher);
        printf("----------------------------\n\n\n");
        printf("\nDeseja repetir? (S/N)\n");
        scanf(" %c", &repeat);

    } while (repeat == 'S' || repeat == 's');

    finishProgram();

};

int finishProgram() {

    printf("Pressione qualquer tecla para encerrar: ");
    getch();

    return 0;
};
/*

1. Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade
desse número.

*/

#include <stdio.h>
#include <conio.h>

int exitProgram();

int main() {
    char repeat;
    float num;

    do {
        printf("\nDigite qualquer numero: ");
        scanf(" %f", &num);

        if(num > 20) {
            printf("\nA metade de %.2f e %.2f", num, num/2);
        } else {
            printf("\nO numero digitado nao e maior que 20!");
        };

        printf("\n###########################\n");
        printf("\nDeseja continuar? (S/N)");
        scanf(" %c", &repeat);

    } while (repeat == 's' || repeat == 'S');

    exitProgram();

};

int exitProgram() {

    printf("\n######## FIM DO PROGRAMA ########\n");

    printf("\nPressione qualquer tecla para encerrar:");
    getch();

    return 0;

};
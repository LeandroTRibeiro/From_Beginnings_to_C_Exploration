/*

2. Elabore um algoritmo que leia dois números inteiros e efetue a adição; caso o resultado seja
maior que 10, imprima-o.

*/

#include <stdio.h>
#include <conio.h>

int exitProgram();

int main() {

    char repeat;
    int num1, num2;

    do {

        printf("\nDigite um numero inteiro: ");
        scanf(" %d", &num1);
        printf("\nDigite outro numero inteiro: ");
        scanf(" %d", &num2);

        if((num1+num2) > 10) {
            printf("\nA soma de %d + %d = %d\n", num1, num2, num1+num2);
        } else {
            printf("\nA soma dos numeros digitados nao e maior que 10!\n");
        };

        printf("\nDeseja repetir? (S/N)");
        scanf(" %c", &repeat);

    } while (repeat == 'S' || repeat == 's');

    exitProgram();
};

int exitProgram() {

    printf("\n########## FIM DO PROGRAMA ##########\n");
    printf("\nPressione qualquer tecla para encerrar!:");
    getch();

    return 0;

};

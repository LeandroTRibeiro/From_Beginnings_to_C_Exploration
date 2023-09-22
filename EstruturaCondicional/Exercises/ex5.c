/*

5. Elabore um algoritmo que leia dois números e imprima o maior número.

*/

#include <stdio.h>
#include <conio.h>

int finishProgram();

int main() {

    float n1, n2, res;
    char repeat;
    
    do {
        printf("----------------------------\n\n\n");
        printf("Digite um numero: ");
        scanf(" %f", &n1);
        printf("\nDigite outro numero: ");
        scanf(" %f", &n2);

        if(n1 > n2)
            res = n1;
        else
            res = n2;
        
        printf("\nO maior numero e o %.2f\n", res);
        printf("----------------------------\n\n\n");
        printf("Deseja repetir? (S/N)");
        scanf(" %c", &repeat);

    } while (repeat == 'S' || repeat == 's');

    finishProgram();

};

int finishProgram() {

    printf("Pressione qualquer tecla para encerrar: ");
    getch();

    return 0;
};
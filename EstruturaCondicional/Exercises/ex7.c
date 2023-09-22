/*

7. Elabore um algoritmo que leia três números e imprima o menor número.

*/

#include <stdio.h>
#include <conio.h>

int finishProgram();

int main() {

    float n1, n2, n3, res;
    char repeat;
    
    do {
        printf("----------------------------\n\n\n");
        printf("Digite um numero: ");
        scanf(" %f", &n1);
        printf("\nDigite outro numero: ");
        scanf(" %f", &n2);
        printf("\nDigite mais um numero: ");
        scanf(" %f", &n3);

        if(n1 < n2 && n1 < n3)
            res = n1;
        else if(n2 < n1 && n2 < n3)
            res = n2;
        else if(n3 < n1 && n3 < n2)
            res = n3;
            
        printf("\nO menor numero e o %.2f\n", res);
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


/*
1. Faça um programa com uma função que recebe um número inteiro, verifica e mostra
se o número recebido é par ou ímpar.
(exemplo)
#include <stdio.h>
#include <stdlib.h>
void verifica(int num)
{
 if ((num%2)== 0)
 printf("\numero par");
 else
 printf("\numero impar");
}
int main()
{
 int num, x;
 printf("\nDigite um numero:");
 scanf(“%d”, &num);
 verifica(num);
 systen(“pause”)
 return 0;
}
*/

#include <stdio.h>
#include <conio.h>

void isEven(int num);
int finishProgram();

int main() {
    int num;

    printf("Digite um numero: ");
    scanf(" %d", &num);

    isEven(num);

    return finishProgram();
};

void isEven(int num) {
    if(num % 2 == 0) {
        printf("\nnumero par!\n");
    } else {
        printf("\nnumero impar!\n");
    };

    return;
};

int finishProgram() {
    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("########### FIM DO PROGRAMA ##########");
    printf("\n######################################\n"); 
    printf("######################################\n");

    printf("\nPressione qualquer tecla para sair: ");
    getch();
    return 0;
}


/*
7. Faça um programa com uma função que receba como parâmetro um inteiro no
intervalo de 1 a 9 e mostre a seguinte tabela de multiplicação (no exemplo, n=9)
 1
 2 4
 3 6 9
 4 8 12 16
 5 10 15 20 25
 6 12 18 24 30 36
 7 14 21 28 35 42 49
 8 16 24 32 40 48 56 64
 9 18 27 36 45 54 63 72 81
*/

#include <stdio.h>
#include <conio.h>

int getNumber(int a, int b);
void showTable(int number);
int finishProgram();

int main() {
    int number;

    number = getNumber(1, 9);

    showTable(number);

    return finishProgram();
};

int getNumber(int a, int b) {
    int number;
    printf("\nDigite um numero de %d a %d: ", a, b);
    scanf(" %d", &number);

    return number;
};

void showTable(int number) {
    for(int i = 1; i <= number; i++) {
    for(int j = 1; j <= i; j++) {
        printf("%d\t", i*j);
    }
    printf("\n");
    }
    return;
};

int finishProgram() {
    printf("\n########################################################\n");
    printf("Digite qualquer tecla para encerrar!");
    getch();
    return 0;
}
/*
6. Faça um programa com uma função que recebe dois números inteiros e retorna a
multiplicação entre eles. O programa principal deve mostrar o resultado da
multiplicação.
*/

#include <stdio.h>
#include <conio.h>

int getNumber();
int multNumbers(int a, int b);
void showResult(int result);
int finishProgram();

int main() {
    int n1;
    int n2;
    int result;

    n1 = getNumber();
    n2 = getNumber();

    result = multNumbers(n1, n2);

    showResult(result);

    return finishProgram();
};

int getNumber() {

    int number;

    printf("\nDigite um numero: ");
    scanf(" %d", &number);

    return number;
};

int multNumbers(int a, int b) {
    return a * b;
};

void showResult(int result) {
    printf("\nO resultado e: %d", result);
    return;
};

int finishProgram() {
    printf("\n####################################\n");
    printf("Digite qualquer tecla para encerrar!\n");
    getch();

    return 0;
}
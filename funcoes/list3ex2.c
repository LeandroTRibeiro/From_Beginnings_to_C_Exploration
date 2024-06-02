/*
2. Faça um programa com uma função que recebe um número inteiro, verifica e retorna 1
se o número recebido é par e 0 se o número recebido é ímpar.
*/

#include <stdio.h>
#include <conio.h>

int isEven(int num);
int finishProgram();

int main() {
    int num;

    printf("Digite um numero: ");
    scanf(" %d", &num);

    isEven(num);

    return finishProgram();

};

int isEven(int num) {
    if(num % 2 == 0) {
        printf("\nNumero par!\n");
        return 1;
    } else {
        printf("\nNumero impar!\n");
        return 0;
    };
};

int finishProgram() {
    printf("\nDigite qualquer tecla para encerrar o programa!\n");
    getch();
    return 0;
}
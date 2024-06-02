/*
4. Faça uma função que receba três números: a, b e c, onde a é maior que 1. A função
deve somar todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e c) e
retornar o resultado para a função principal.
*/

#include <stdio.h>
#include <conio.h>

int readValue(char variable);
int sumInterval(int a, int b, int c);
int finishProgram();

int main() {

    int a;
    int b;
    int c;

    a = readValue('A');
    b = readValue('B');
    c = readValue('C');

    printf("\nA soma dos numeros inteiros no intervalo entre b e c divisiveis por a e de: %d", sumInterval(a, b, c));

    return finishProgram();
};

int readValue(char variable) {
    int num;

    do {
        printf("\nDigite um numero para variavel %c: ", variable);
        scanf(" %d", &num);
    } while(variable == 'A' && num <= 1);

    return num;
};

int sumInterval(int a, int b, int c) {
    int sum = 0;

    for(int i = b + 1; i < c; i++) {
        if(i % a == 0) {
            sum += i;
        };
    };

    return sum;
};

int finishProgram() {
    printf("\nprecione qualquer tecla para encerrar o programa!");
    getch();
    return 0;
};
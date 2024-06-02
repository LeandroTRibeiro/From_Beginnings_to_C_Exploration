/*
5) Considere o protótipo da função a seguir e depois faça um programa para elevar um número ao cubo.
void cubo (double numero, double *result);
Esta função eleva um número ao cubo e atualiza o parâmetro “result” com o resultado.
*/

#include <stdio.h>

void cube(double number, double *result);

int main() {
    double number;
    double result;

    printf("\nDigite um numero a ser elevado ao cubo: ");
    scanf(" %lf", &number);

    cube(number, &result);

    printf("\nO numero: %lf elevado ao cubo e igual a : %lf", number, result);

    return 0;
};

void cube(double number, double *result) {
    *result = number * number * number;
    return;
};
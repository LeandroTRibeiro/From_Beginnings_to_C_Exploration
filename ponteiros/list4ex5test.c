/*
5) Considere o protótipo da função a seguir e depois faça um programa para elevar um número ao cubo.
void cubo (double numero, double *result);
Esta função eleva um número ao cubo e atualiza o parâmetro “result” com o resultado.
*/

#include <stdio.h>
#include <math.h>

void cube(double number, double *result);

int main() {
    double number;
    double result;

    printf("\nDigite um numero: ");
    scanf(" %lf", &number);

    cube(number, &result);

    printf("\nO numero %.2lf elevado ao cubo e: %.2lf", number, result);

    return 0;
};

void cube(double number, double *result) {
    *result = pow(number, 3);
};
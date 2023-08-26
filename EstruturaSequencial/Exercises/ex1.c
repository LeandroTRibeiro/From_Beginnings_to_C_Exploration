/*

1. Faça um programa que recebe dois números, calcule e mostre a subtração do primeiro número pelo 
segundo.

*/

#include<stdio.h>

main() {

    float n1, n2, res;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);

    res=n1-n2;

    printf("A subtracao entre %f e %f e de : %f.", n1, n2, res);
};
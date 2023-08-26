/*

2. Faça um programa que receba três números, calcule mostre a multiplicação desses números.

*/

#include <stdio.h>

main () {
    float n1, n2, n3, res;

    printf("digite o primeiro numero:");
    scanf("%f", &n1);
    printf("digite o segundo numero:");
    scanf("%f", &n2);
    printf("digite o terceiro numero:");
    scanf("%f", &n3);

    res=n1*n2*n3;

    printf("a multiplicacao entre %.2f, %.2f e %.2f, e : %.2f", n1, n2, n3, res);

    return 0;

};

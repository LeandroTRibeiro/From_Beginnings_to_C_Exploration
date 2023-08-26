/*

3. Faça um programa que receba dois números, calcule e mostre a divisão do primeiro pelo segundo.
obs: Sabe-se que o segundo número não pode ser zero, portanto , não é necessário se preocupar 
com validações.

*/

#include <stdio.h>

main() {

    float n1, n2, res;

    printf("digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("digite o segundo numero: ");
    scanf("%f", &n2);

    res=n1/n2;

    printf("o resultado entre a divisao de %.2f e %.2f, e de : %.2f", n1, n2, res);

    return 0;

};
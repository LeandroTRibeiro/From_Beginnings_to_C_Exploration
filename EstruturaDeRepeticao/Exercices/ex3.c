/*3) Elabore um algoritmo que leia um número de entrada n que indicará a quantidade de números a serem lidos.
Em seguida, leia n números (conforme o valor informado anteriormente) e imprima o triplo de cada um.*/

#include <stdio.h>

main() {
    int n;
    float num;

    printf("\nDigite a quantidade de numeros que serao triplicados: ");
    scanf(" %d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nDigite um numero: ");
        scanf(" %f", &num);

        printf("\nO tripo de %.2f e %.2f", num, num*3);
    };
}
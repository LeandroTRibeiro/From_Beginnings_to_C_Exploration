/*
2) Elabore um algoritmo que leia vários números e imprima o triplo de cada um. O algoritmo acaba
quando for digitado o número –999. 
*/

#include <stdio.h>

int main() {
    int number;

    printf("\nDigite um numero: ");
    scanf(" %d", &number);
    printf("%d x 3 = %d", number, number*3);

    while(number != -999) {
        printf("\nDigite um numero: ");
        scanf(" %d", &number);
        printf("%d x 3 = %d", number, number*3);
    };

    return 0;
};
// 2) Elabore um algoritmo que leia quatro números, e ao final, imprima a média desses números.

#include <stdio.h>

main() {
    float num, sum=0;

    for (int i = 0; i < 4; i++) {
        printf("\nDigite um numero: ");
        scanf(" %f", &num);

        sum=sum+num;
    }

    printf("\nA soma dos numeros e %.2f", sum);
    
}
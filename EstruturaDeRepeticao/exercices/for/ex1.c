// 1) Elabore um algoritmo que leia quatro números, e imprima a raiz quadrada de cada um.

#include <stdio.h>
#include <math.h>

main() {
    float num;

    for (int i = 0; i < 4; i++) {

        printf("\nDigite um numero: ");
        scanf(" %f", &num);

        printf("\nA raiz quadrada de %.2f e %.2f", num, sqrt(num));

    };  
    
}
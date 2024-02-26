/*7) Elabore um algoritmo que imprima todos os números de 100 a 105, e ao final, a soma deles*/

#include <stdio.h>

int main() {
    int sum=0;

    for(int i = 100; i <= 105; i++) {
        printf("\n%d", i);
        sum=sum+i;
    }

    printf("\nA soma destes numeros e de %d", sum);
}
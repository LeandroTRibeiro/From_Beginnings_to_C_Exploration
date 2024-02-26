/*
12) Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e 10 números inteiros
pares em um vetor B. Construir um vetor I, sendo este a intersecção dos vetores A e B. Dessa forma, C
deve ter a capacidade de armazenar no máximo 5 elementos. 
*/

#include <stdio.h>

int main() {
    int a[5], b[10], inter[5], lenght=0;

    printf("\nVetor A:");

    for(int i = 0; i < 5; i++) {
        printf("\nDigite um numero inteiro: ");
        scanf(" %d", &a[i]);
    };

    printf("\nVetor B:");

    for(int i = 0; i < 10; i ++) {

        do{
            printf("\nDigite um numero inteiro: ");
            scanf(" %d", &b[i]);

            if(b[i] % 2 == 1) {
                printf("\nValor Invalido!\n");
            }
        } while(b[i] % 2 == 1);
        
    }

    for(int i = 0; i < 5; i++) {
        for(int c = 0; c < 10; c++) {
            if(a[i] == b[c]) {
                inter[lenght] = a[i];
                lenght++;
            }
        }
    }

    printf("\nVetor A -\n");

    for(int i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }

    printf("\nVetor B -\n");

    for(int i = 0; i < 10; i++) {
        printf("%d\t", b[i]);
    }

    printf("\nVetor I -\n");

    for(int i = 0; i < lenght; i++) {
        printf("%d\t", inter[i]);
    }

    return 0;
};
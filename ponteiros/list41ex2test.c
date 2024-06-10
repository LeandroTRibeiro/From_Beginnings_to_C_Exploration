/*
2. Escreva uma função que recebe como parâmetros um vetor de inteiros v, o número de
elementos dele N e ponteiros para variáveis nas quais devem ser armazenados os valores
maximo e minimo do vetor. Sua assinatura deve ser:
void maximoMinimo(int *v, int N, int *maximo, int *minimo);
*/

#include <stdio.h>

void maxMin(int v[], int length, int *max, int *min);

int main() {
    int v[]={1, 2, 455, 4, 5, -45, 7, 8, 9, 10};
    int length = 10;
    int max;
    int min;

    maxMin(v, length, &max, &min);

    printf("\nMaximo: %d\nMinimo: %d", max, min);

    return 0;
};

void maxMin(int v[], int length, int *max, int *min) {
    *max = v[0];
    *min = v[0];

    for(int i = 0; i < length; i++) {
        v[i] < *min ? *min = v[i] : (void)0;
        v[i] > *max ? *max = v[i] : (void)0;
    };
    return;
};
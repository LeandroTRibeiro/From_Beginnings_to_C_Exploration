/*
2. Escreva uma função que recebe como parâmetros um vetor de inteiros v, o número de
elementos dele N e ponteiros para variáveis nas quais devem ser armazenados os valores
maximo e minimo do vetor. Sua assinatura deve ser:
void maximoMinimo(int *v, int N, int *maximo, int *minimo);
*/

#include <stdio.h>

void maxMin(int v[10], int N, int *max, int *min);

int main() {
    int v[] = {1, 2, 3, 4, -5, 6, 45, 8, 9, 10};
    int lenght = 10;
    int max = v[0];
    int min = v[0];

    maxMin(v, lenght, &max, &min);

    printf("\nO menor valor: %d", min);
    printf("\nO maior valor: %d", max);

    return 0;
};

void maxMin(int v[10], int N, int *max, int *min) {

    for(int i = 0; i < N; i++) {
        v[i] < *min ? *min = v[i] : v[i] > *max ? *max = v[i] : 0;
    };

    return;
};
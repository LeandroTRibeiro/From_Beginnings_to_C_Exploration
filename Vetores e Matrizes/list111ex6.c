/*
6. Elabore um algoritmo que cadastre as informações em uma matriz 4 x 5 e imprima a soma das linhas e
das colunas.
*/

#include <stdio.h>

void printMatrix(int matrix[4][5]);

int main() {
    int matrix[4][5];
    int rows[4] = {0};
    int cols[5] = {0};
    int allRows = 0;
    int allCols = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf("\nDigite um numero para a matrix na posicao [%d][%d]: ", i+1, j+1);
            scanf(" %d", &matrix[i][j]);
            rows[i] += matrix[i][j];
            cols[j] += matrix[i][j];
        };
    };

    printMatrix(matrix);

    printf("\n A soma das linhas da matrix resulta no seguinte resulado: \n");
    for(int i = 0; i < 4; i++) {
        printf("%d\t", rows[i]);
        allRows += rows[i];
    };
    printf("\ntodas as linhas somadas resulta em: %d", allRows);
    printf("\n A soma das colunas da matrix resulta no seguinte resulado: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d\t", cols[i]);
        allCols += cols[i];
    };
    printf("\ntodas as colunas somadas resulta em: %d", allCols);

    return 0;
};

void printMatrix(int matrix[4][5]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d\t", matrix[i][j]);
        };
        printf("\n");
    };
    return;
};
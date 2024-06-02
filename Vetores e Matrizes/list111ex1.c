/*
1. Elabore um algoritmo que entre com valores reais para uma matriz M[2][3], outra matriz P[2][3], gere e
imprima a matriz soma S.
*/

#include <stdio.h>

void setMatrix(int matrix[2][3], char name);
void sumMatrix(int matrix1[2][3], int matrix2[2][3], int matrixResult[2][3]);
void printMatrix(int matrix[2][3]);

int main() {
    int matrixM[2][3];
    int matrixP[2][3];
    int matrixS[2][3];

    setMatrix(matrixM, 'M');
    setMatrix(matrixP, 'P');

    sumMatrix(matrixM, matrixP, matrixS);

    printf("\nA soma das tuas matrix resultou nesta matrix: \n");
    printMatrix(matrixS);

    return 0;
};

void setMatrix(int matrix[2][3], char name) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("\nDigite um numero para a matrix %c[%d][%d]: ", name, i + 1, j + 1);
            scanf(" %d", &matrix[i][j]);
        };
    };
    return;
};

void sumMatrix(int matrix1[2][3], int matrix2[2][3], int matrixResult[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            matrixResult[i][j] = matrix1[i][j] + matrix2[i][j];
        };
    };

    return;
};

void printMatrix(int matrix[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    };
    return;
};
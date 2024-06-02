/*
3. Elabore um algoritmo que entre com valores reais para uma matriz M[2][3], gere e imprima a matriz
metade M.
*/

#include <stdio.h>

void setMatrix(float matrix[2][3], char name);
void divisionMatrix(float matrix[2][3], float resultMatrix[2][3]);
void printMatrix(float matrix[2][3]);

int main() {
    float matrixM[2][3];
    float matrixS[2][3];

    setMatrix(matrixM, 'M');
    divisionMatrix(matrixM, matrixS);

    printf("\nA divisao da pela metade dos valores da matrix resultam nesta matrix:\n");
    printMatrix(matrixS);

    return 0;
};

void setMatrix(float matrix[2][3], char name) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("\nDigite um numero para ma matrix %c[%d][%d]: ", name, i+1, j+1);
            scanf(" %f", &matrix[i][j]);
        };
    };

    return;
};

void divisionMatrix(float matrix[2][3], float resultMatrix[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            resultMatrix[i][j] = matrix[i][j] / 2;
        };
    };
    return;
};

void printMatrix(float matrix[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%.2f\t", matrix[i][j]);
        };
        printf("\n");
    };
    return;
};
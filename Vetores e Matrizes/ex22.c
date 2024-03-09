/*
22) Faça um programa que lê uma matriz Amxm e mostra o menor elemento da
diagonal secundária.
*/

/*
M11 M12 M13 M14
M21 M22 M23 M24
M31 M32 M33 M34
M41 M42 M43 M44
*/

#include <stdio.h>

int main() {
    int matrixLength;
    int matrix[100][100];
    int sum = 0;

    printf("\nDigite o tamanho da matriz quadrada: ");
    scanf(" %d", &matrixLength);

    for(int i = 0; i < matrixLength; i++) {
        for(int j = 0; j < matrixLength; j++) {
            printf("\nElemento [%d][%d]: ", i, j);
            scanf(" %d", &matrix[i][j]);
        };
    };

    for(int i = matrixLength - 1; i >= 0; i--) {
        sum += matrix[i][i];
    };

    printf("\nA soma da diagonal secundaria da matriz e de: %d", sum);

    return 0;
};

/*
 1  2  3  4
 5  6  7  8
 9 10 11 12
13 14 15 16

= 34
*/
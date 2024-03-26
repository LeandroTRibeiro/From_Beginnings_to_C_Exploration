/*
3. Elabore um algoritmo que entre com valores reais para uma matriz M[2][3], gere e imprima a matriz
metade M.
*/

#include <stdio.h>
#include <conio.h>

void showMatrix(float *matrix, int rows, int cols);
int finishProgram();

int main() {
    float m[2][3];
    float division[2][3];


    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("\nDigite o valor da posicao [%d][%d]: ", i, j);
            scanf(" %f", &m[i][j]);
            division[i][j] = m[i][j] / 2;
        };
    };

    showMatrix((float *)division, 2, 3);

    finishProgram();

};

void showMatrix(float *matrix, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%.2f\t", *(matrix + i * cols + j));
        };
        printf("\n");
    };
};

int finishProgram() {

    printf("\n###############################\n");
    printf("\nPressione qualquer tecla para encerrar: ");
    getch();

    return 0;
};
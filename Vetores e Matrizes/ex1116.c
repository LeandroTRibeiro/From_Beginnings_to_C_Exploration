/*
6. Elabore um algoritmo que cadastre as informações em uma matriz 4 x 5 e imprima a soma das linhas e
das colunas.
*/

#include <stdio.h>
#include <conio.h>

int finishProgram();

int main() {
    int matrix[4][5];
    int rowSum[4] = {0};
    int colSum[5] = {0};

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf("\nDigite o valor do elemento [%d][%d]: ", i, j);
            scanf(" %d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        };
    };

    /*
     1  2  3  4  5      
     6  7  8  9  10
     11 12 13 14 15
     16 17 18 19 20
    */
    printf("\nSoma das linhas: ");
    for(int i = 0; i < 4; i++) {
        printf("%d\t", rowSum[i]);
    };
    printf("\nSoma das colunas: ");
    for(int j = 0; j < 5; j++) {
        printf("%d\t", colSum[j]);
    };

    finishProgram();
};

int finishProgram() {
    printf("\n###############################\n");
    printf("\nPressione qualquer tecla para encerrar: ");
    getch();

    return 0;
}
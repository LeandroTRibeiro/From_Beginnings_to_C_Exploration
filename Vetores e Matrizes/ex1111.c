/*1. Elabore um algoritmo que entre com valores reais para uma matriz M[2][3], outra matriz P[2][3], gere e
imprima a matriz soma S.*/

#include <stdio.h>

int main() {
    float M[2][3];
    float P[2][3];
    float sum[2][3];

    /*
        1 2 3
        1 2 3

        1 2 3
        1 2 3
    */

    for(int m = 0; m < 2; m++) {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 3; j++) {
                printf("\nDigite o valor [%d][%d] da matrix %d: ", i, j, m + 1);
                if(m == 0) {
                    scanf(" %f", &M[i][j]);
                } else {
                    scanf(" %f", &P[i][j]);
                };
            };
        };
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = M[i][j] + P[i][j];
            printf("\t%.2f", sum[i][j]);
        };
    };
    

    return 0;
};


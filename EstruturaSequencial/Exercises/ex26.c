/*

26. Elabore um algoritmo que leia dois números reais, xnum1, e xnum2 e imprima o valor de x, sabendo-se 
que:
x = xnum1 + xnum2 + 2(xnum1 – xnum2)

*/

#include <stdio.h>
#include <conio.h>

struct Data {
    float xNum1;
    float xNum2;
    float xRes;
};

void printRes(float xNum1, float xNum2, float xRes);

int main() {
    float xNum1, xNum2, xRes;
    int length = 0;
    char repeat, save, showData;

    struct Data registers[100];
    

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("########### FINDING THE ""X"" ############");
    printf("\n######################################\n"); 
    printf("######################################\n");

    do {

        printf("\nDigite o valor de primeiro numero: ");
        scanf(" %f", &xNum1);
        printf("\nDigite o valor do segundo numero: ");
        scanf(" %f", &xNum2);

        xRes = xNum1 + xNum2 + 2 * (xNum1 - xNum2);

        printRes(xNum1, xNum2, xRes);

        printf("\n\nDeseja salvar os dados? (S/N)");
        scanf(" %c", &save);

        if(save == 's' || save == 'S') {

            registers[length].xNum1 = xNum1;
            registers[length].xNum2 = xNum2;
            registers[length].xRes = xRes;

            length++;
        };

        printf("\nDeseja repetir? (S/N)");
        scanf(" %c", &repeat);

        printf("\n######################################\n"); 
        printf("######################################\n");

    } while (repeat == 's' || repeat == 'S');

    printf("\nDeseja visualizar os cadastros? (S/N)");
    scanf(" %c", &showData);

    if(showData == 's' || showData == 'S') {

        for (int i = 0; i < length; i++) {
            printf("\nCadastro: %d", i+1);
            printRes(registers[i].xNum1, registers[i].xNum2, registers[i].xRes);

            printf("\n######################################\n"); 
        };
        
    };

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("########### FIM DO PROGRAMA ##########");
    printf("\n######################################\n"); 
    printf("######################################\n");

    printf("\nPressione qualquer tecla para sair:\n");
    getch();
    return 0;
};

void printRes(float xNum1, float xNum2, float xRes) {

    printf("\n\nXnum1 = %f", xNum1);
    printf("\nXnum2 = %f", xNum2);
    printf("\nX = %f\n", xRes);

};


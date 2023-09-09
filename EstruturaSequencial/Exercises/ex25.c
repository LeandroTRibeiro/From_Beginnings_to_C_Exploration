/*

25. Elabore um algoritmo que leia um ângulo em graus e imprima: seno, co-seno, tangente, secante, cosecante, e co-tangente deste ângulo.

*/

#include <stdio.h>
#include <math.h>
#include <conio.h>

struct Data {
    double angleInDegrees;
    double angleInRadians;
    double seno;
    double coseno;
    double tangente;
    double secante;
    double cosecante;
    double cotangente;
};

void printRes(double angleInDregees, double angleInRadians, double seno, double coseno, double tangente, double secante, double cosecante, double cotangente);

int main() {
    double angleInDegrees, angleInRadians, seno, coseno, tangente, secante, cosecante, cotangente;
    int lenght=0;
    char repeat, save, showData;

    struct Data registers[100];

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("##### PROPRIEDADES DE UM ANGULO ######");
    printf("\n######################################\n"); 
    printf("######################################\n");

    do {

        printf("\nDigite um angulo em graus: ");
        scanf(" %lf", &angleInDegrees);

        angleInRadians=angleInDegrees*M_PI/180;
        seno=sin(angleInRadians);
        coseno=cos(angleInRadians);
        tangente=tan(angleInRadians);
        secante=1.0/cos(angleInRadians);
        cosecante=1.0/sin(angleInRadians);
        cotangente=1.0/tan(angleInRadians);

        printRes(angleInDegrees, angleInRadians, seno, coseno, tangente, secante, cosecante, cotangente);

        printf("\n\n######################################\n");

        printf("\nDeseja salvar estes valores? (S/N): ");
        scanf(" %c", &save);

        if(save == 's' || save == 'S') {
            registers[lenght].angleInDegrees=angleInDegrees;
            registers[lenght].angleInRadians=angleInRadians;
            registers[lenght].seno=seno;
            registers[lenght].coseno=coseno;
            registers[lenght].tangente=tangente;
            registers[lenght].secante=secante;
            registers[lenght].cosecante=cosecante;
            registers[lenght].cotangente=cotangente;
            lenght++;
        };

        printf("\n\n######################################\n"); 

        printf("\n\nDeseja repetir? (S/N): ");
        scanf(" %c", &repeat);

        printf("\n######################################\n"); 

    } while (repeat == 's' || repeat == 'S');

    printf("\nDeseja visualizar as informacoes salvas? (S/N):");
    scanf(" %c", &showData);

    if(showData == 's' || showData == 'S') {
        for(int i = 0; i < lenght; i++) {
            printf("\nCadastro: %d", i+1);

            printRes(registers[i].angleInDegrees, registers[i].angleInRadians, registers[i].seno, registers[i].coseno, registers[i].tangente, registers[i].secante, registers[i].cosecante, registers[i].cotangente);

            printf("\n######################################\n"); 
            printf("######################################\n");
        };
    };

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("########### FIM DO PROGRAMA ##########");
    printf("\n######################################\n"); 
    printf("######################################\n");

    printf("\nPressione qualquer tecla para sair: \n");
    getch();
    
    return 0;
};

void printRes(double angleInDegrees, double angleInRadians, double seno, double coseno, double tangente, double secante, double cosecante, double cotangente) {

    double epsilon = 1e-10;

    printf("\nAngulo = %.2lf", angleInDegrees);
    printf("\nSeno de %.2lf = %.2lf", angleInDegrees, seno);
    printf("\nCoseno de %.2lf = %.2lf", angleInDegrees, coseno);
    if(fabs(cos(angleInRadians)) > epsilon) {
        printf("\nTangente de %.2lf = %.2lf", angleInDegrees, tangente);
        printf("\nSecante de %.2lf = %.2lf", angleInDegrees, secante);
    } else {
        printf("\nTangente de %.2lf = indefinida", angleInDegrees);
        printf("\nSecante de %.2lf = indefinida", angleInDegrees);
    };
    if(fabs(sin(angleInRadians)) > epsilon) {
        printf("\nCosecante de %.2lf = %.2lf", angleInDegrees, cosecante);
    } else {
        printf("\nCosecante de %.2lf = indefinida", angleInDegrees);
    };
    if(fabs(tan(angleInRadians)) > epsilon) {
        printf("\nCotangente de %.2lf = %.2lf", angleInDegrees, cotangente);
    } else {
        printf("\nCotangente de %.2lf = indefinida", angleInDegrees);
    };

};
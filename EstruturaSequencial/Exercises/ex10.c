/*

10. Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado *lado.

*/

#include <stdio.h>

main () {
    float side, area;

    printf("-----------------------------------");
    printf("\ncalculadora de area de quadrado");
    printf("\n-----------------------------------\n");
    printf("digite o tamanho de uma das bases do quadrado:\n");
    scanf("%f", &side);

    area=side*side;

    printf("\n-----------------------------------");
    printf("\n-----------------------------------\n");
    printf("--- quadrado ---");
    printf("\nbases: %.2f", side);
    printf("\narea: %.2f", area);
    printf("\n-----------------------------------");
    printf("\n-----------------------------------\n");
    
}

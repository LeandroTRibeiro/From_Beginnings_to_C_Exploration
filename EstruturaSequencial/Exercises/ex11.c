/*

11. Faça um programa que calcule e mostre área de um losango. Sabe-se que: A = (diagonal maior * 
diagonal menor)/2.

*/

#include <stdint.h>

main() {
    float biggerBase, minorBase, area;

    printf("-----------------------------------");
    printf("\ncalculadora de area de losango");
    printf("\n-----------------------------------\n");
    printf("digite o tamanho da base maior:\n");
    scanf("%f", &biggerBase);
    printf("digite o tamanho da base menor:\n");
    scanf("%f", &minorBase);

    area=(biggerBase*minorBase)/2;

    printf("\n-----------------------------------");
    printf("\n-----------------------------------\n");
    printf("--- losango ---");
    printf("\nbase maior: %.2f", biggerBase);
    printf("\nbase menor: %.2f", minorBase);
    printf("\narea: %.2f", area);
    printf("\n-----------------------------------");
    printf("\n-----------------------------------\n");

}
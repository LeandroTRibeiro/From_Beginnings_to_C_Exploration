/*

9. Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2

*/

#include <stdio.h>

main() {

    float biggerBase, minorBase, height, area;

    printf("-----------------------------------");
    printf("\ncalculadora de area de trapezio");
    printf("\n-----------------------------------\n");
    printf("digite o tamanho da base maior: ");
    scanf("%f", &biggerBase);
    printf("digite o tamanho da base menor: ");
    scanf("%f", &minorBase);
    printf("digite a altura: ");
    scanf("%f", &height);

    area=((biggerBase+minorBase)*height)/2;

    printf("\n-----------------------------------");
    printf("\n-----------------------------------\n");
    printf("--- trapezio ---");
    printf("\nbase maior: %.2f", biggerBase);
    printf("\nbase menor: %.2f", minorBase);
    printf("\naltura: %.2f", height);
    printf("\narea: %.2f", area);
    printf("\n-----------------------------------");
    printf("\n-----------------------------------\n");

};
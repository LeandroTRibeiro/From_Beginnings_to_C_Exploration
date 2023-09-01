/*

15. Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em 
Fabrenheit. Sabe- se que: (0 °C × 9/5) + 32 = 32 °F.

*/

#include <stdio.h>

main() {
    float celsi, fabre;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("------ CONVERSOR DE TEMPERATURA -----");
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("digite a temperatura em celsius: ");
    scanf("%f", &celsi);

    fabre=(celsi*9/5)+32;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("\n%.2f celsius = %.2f fabrenheit", celsi, fabre);
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    return 0;
    
}


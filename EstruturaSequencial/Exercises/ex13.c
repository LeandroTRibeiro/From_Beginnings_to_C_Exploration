/*

13. Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário

*/

#include <stdio.h>

main() {
    int tab;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("------------ TABUADA --------------");
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("digite o numero da tabuada que deseja: ");
    scanf("%d", &tab);
    for (size_t i = 0; i <= 10; i++)
    {
        printf("\n%d x %d = %d", tab, i, tab*i);
    }

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    
    return 0;
    
}
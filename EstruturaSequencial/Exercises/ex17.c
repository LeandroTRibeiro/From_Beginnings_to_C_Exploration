/*

17. Elabore um algoritmo que leia o nome e a idade de uma pessoa, e imprima a seguinte saída:
Nome:___________
Idade: ___________

*/

#include <stdio.h>

main() {
    char name[100];
    int age;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("digite seu nome completo: ");
    gets(name);
    printf("digite sua idade: ");
    scanf("%d", &age);

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("\nnome: %s", name);
    printf("\nidade: %d", age);
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    return 0;
}
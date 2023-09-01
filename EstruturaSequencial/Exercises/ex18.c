/*

18. Elabore um algoritmo que leia e imprima os seguintes dados de um professor: nome, endereço, cidade, 
UF, CEP, telefone, CPF, RG, data de nascimento, grau de escolaridade e curso que leciona.


*/

#include <stdio.h>

main() {
    char name[100], address[100], city[100], UF[100], phone[100], CPF[100], RG[100], birth[100], schooling[100], course[100];

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    printf("digite o nome do professor: ");
    gets(name);
    printf("digite o endereco: ");
    gets(address);
    printf("digite a cidade: ");
    gets(city);
    printf("digite o estado: ");
    gets(UF);
    printf("digite o telefone: ");
    gets(phone);
    printf("digite o CPF: ");
    gets(CPF);
    printf("digite o RG: ");
    gets(RG);
    printf("digite a data de nascimento: ");
    gets(birth);
    printf("digite o nivel de escolaridade: ");
    gets(schooling);
    printf("digite o curso que lesiona: ");
    gets(course);

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("\nprofessor: %s", name);
    printf("\nendereço: %s", address);
    printf("\ncidade: %s", city);
    printf("\nUF: %s", UF);
    printf("\ntelegone: %s", phone);
    printf("\nCPF: %s", CPF);
    printf("\nRG: ", RG);
    printf("\ndata de nascimento: %s", birth);
    printf("\ngrau de escolaridade: %s", schooling);
    printf("\ncurso que leciona: %s", course);
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    return 0;
}
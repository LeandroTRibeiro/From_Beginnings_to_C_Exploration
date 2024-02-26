/*
7) Elabore um algoritmo que leia a idade e o estado civil (C – casado, S – solteiro, V – viúvo, e D –
desquitado ou separado) de várias pessoas. Considere que o algoritmo termina quando se digita um
número menor do que 0 para a idade. Ao final, calcule e imprima:
a. A quantidade de pessoas casadas;
b. A quantidade de pessoas solteiras;
c. A média das idades das pessoas viúvas;
d. A porcentagem de pessoas desquitadas ou separadas, dentre todas as pessoas analisadas. 
*/

#include <stdio.h>

int main() {

    float age, marriedCount=0, singleCount=0, widowerCount=0, widowerSum=0, separatedCount=0, peopleCount=0;
    char civilStatus;

    printf("\nDigite a idade: ");
    scanf(" %f", &age);

    while ( age > 0) {

        peopleCount++;

        printf("\nEscolha seu estado civil:\nC ----- Casado(a);\nS ----- Solteiro(a);\nV ----- Viuvo(a);\nD ----- Desquitado(a) ou Separado(a);");
        scanf(" %c", &civilStatus);

        switch (civilStatus) {
        case 'c':
        case 'C':
            marriedCount++;
            break;
        case 'S':
        case 's':
            singleCount++;
            break;
        case 'v':
        case 'V':
            widowerCount++;
            widowerSum = widowerSum + age;
            break;
        case 'd':
        case 'D':
            separatedCount++;
            break;
        default:
            printf("\nCaracter invalido!\n");
            break;
        };

        printf("\nDigite a idade: ");
        scanf(" %f", &age);
        
    };
    
    printf("\nCasados(as): %.0f", marriedCount);
    printf("\nSolteiros(as): %.0f", singleCount);
    printf("\nViuvos(as): %.2f", widowerSum/widowerCount);
    printf("\nSeparados(as): %.2f", (separatedCount/peopleCount)*100);

    return 0;
};
/*

4. Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, 
considerando peso 2 para a primeira e peso 3 para a segunda.

*/

#include <stdio.h>

main() {
    char name[100];
    float n1, n2, res;

    printf("digite o nome do aluno: ");
    scanf("%s", &name);
    printf("digite a nota com peso 2: ");
    scanf("%f", &n1);
    printf("digite a nota com peso 3: ");
    scanf("%f", &n2);

    res=(n1/2)+(n2/3);

    printf("a media de %s e de %.2f", name, res);

    return 0;

};
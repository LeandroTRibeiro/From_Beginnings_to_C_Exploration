/*8) Elabore um algoritmo que leia o nome, idade e sexo de 20 pessoas. A cada leitura, imprima o nome, se a
pessoa for do sexo masculino, e tiver mais de 21 anos.*/

#include <stdio.h>

int main() {
    char name[50];
    int age;
    char sex;

    for(int i = 0; i < 20; i++) {
        printf("\nDigite seu nome: ");
        scanf(" %[^\n]", &name);
        printf("\nDigite sua idade: ");
        scanf(" %d", &age);
        printf("\nQual seu sexo? (M/F)");
        scanf(" %c", &sex);

        if((sex == 'M' || sex == 'm') && ( age > 21))
            printf("\nNome: %s", name);

    }
}
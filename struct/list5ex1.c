/*
1) Crie um tipo "Revista" composto dos seguintes dados:
• nome: string de 100 caracteres;
• editora: string de 100 caracteres;
• páginas: float;
Crie um programa que utilize a “Revista” que você criaou para ler os dados de três revistas
e depois mostrá-los. Utilize uma função para ler os dados e outra para mostrá-los. Encontre
e imprima os nomes das revistas que possuam o maior e menor número de páginas.
Obs: não poderá haver variáveis globais.
*/

#include <stdio.h>

typedef struct {
    char name[100];
    char publishingCompany[100];
    float pages;
} Magazine;

void readMagazines(Magazine magazines[], int length);

void showMagazines(Magazine magazines[], int length);

int main() {
    Magazine magazines[3];

    readMagazines(magazines, 3);

    showMagazines(magazines, 3);

    return 0;
};

void readMagazines(Magazine magazines[], int length) {
    for(int i = 0; i < length; i++) {
        printf("\nRevista %d", i + 1);
        printf("\nDigite o nome da primeira revista: ");
        scanf(" %[^\n]", magazines[i].name);
        printf("\nDigite o nome da editora: ");
        scanf(" %[^\n]", magazines[i].publishingCompany);
        printf("\nDigite a quantidade de paginas: ");
        scanf(" %f", &magazines[i].pages);
    };
    return;
};

void showMagazines(Magazine magazines[], int length) {

    printf("\n-----------------------------------\n");
    printf("\nRevistas");
    printf("\n-----------------------------------\n");

    for(int i = 0; i < length; i++) {
        printf("\n-----------------------------\n");
        printf("\nRevista: %d", i +1);
        printf("\nNome: %s", magazines[i].name);
        printf("\nEditora: %s", magazines[i].publishingCompany);
        printf("\nPaginas: %.2f", magazines[i].pages);
    };
    return;
};
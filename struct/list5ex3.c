/*
3) Fazer um programa que receba três nomes e as idades das respectivas pessoas (idades
acima de 45 anos devem ser rejeitados) em um vetor de estruturas de dados. Após o
recebimento, listar os 3 nomes e idades que nela foram armazenados.
*/

#include <stdio.h>

typedef struct {
    char name[100];
    int age;
} Person;

void readPeople(Person people[], int length);

int main() {

    int length = 3;
    Person people[length];


    return 0;
};

void readPeople(Person people[], int length) {

    int age;

    for(int i = 0; i < length; i++) {
        printf("\nDigite a idade da pessoa: ");
        scanf(" %d", &age);

        if(age > 45 ) {
            
        }
        
    }


};

/*
1) Escreva um programa em C que manipule um vetor de registros com dados de 10
trabalhadores de uma empresa, conforme a estrutura a seguir:
int id;
char nome[30];
char sexo;
float salario;
O programa deve ter as seguintes funções:
a) uma função para ler os dados dos 10 funcionários. x
b) uma função para exibir os dados dos 10 funcionários. x
c) uma função que receba, como parâmetro, um caractere correspondente ao sexo para exibir os
dados somente dos funcionários do respectivo sexo. x
d) uma função que atualize o salário de todos os funcionários de acordo com o percentual
informado como parâmetro. x
*/

#include <stdio.h>
#include <ctype.h>

typedef struct {
    int id;
    char name[30];
    char sex;
    float salary;
} worker;

void writeWorkers(worker workers[], int *lenght);
void readAllWorkers(worker workers[], int length);
void readWorkersBySex(worker workers[], int length, char sex);
void attAllSalary(worker workers[], int length, float percentage);

int main () {

    worker workers[100];
    int lenght = 0;
    char sex;
    float increase;
    char repeat = 's';
    int action = 0;

    while(tolower(repeat) == 's') {
        printf("\nEscolha uma das opcoes:");
        printf("\n0 ---- Cadastrar Trabalhador");
        printf("\n1 ---- Mostrar todos Trabalhadores");
        printf("\n2 ---- Mostrar Trabalhadores pelo Sexo");
        printf("\n3 ---- Atualizar todos salarios");
        printf("\n4 ---- Sair do programa");
        
        do {
            scanf(" %d", &action);

            if(action < 0 && action > 4) {
                printf("\nAcao invalida! Digite de 0 a 4 para as opcoes validas!");
            };
        } while(action < 0 && action > 4);

        switch (action) {
            case 0:
                writeWorkers(workers, &lenght);
                break;
            case 1:
                readAllWorkers(workers, lenght);
                break;
            case 2:
                do {
                    printf("\nDigite o sexo desejado para a busca: (F: Feminino / M: Masculino)");
                    scanf(" %c", &sex);

                    if(tolower(sex) != 'f' && tolower(sex) != 'm') {
                        printf("\nValor invalido! Digite M para masculino e F para feminino.");
                    };
                } while(tolower(sex) != 's' && tolower(sex) != 'm');

                readWorkersBySex(workers, lenght, sex);
                break;

            case 3: 
                printf("\nDigite a porcetagem que deseja adicionar aos salarios dos trabalhadores: ");
                scanf(" %f", &increase);
                attAllSalary(workers, lenght, increase);
                break;
            case 4:
                return 0;
                break;

        };

        do {
            printf("\nDeseja realizar mais alguma acao? ( S / N)");
            scanf(" %c", &repeat);

            if(tolower(repeat) != 's' && tolower(repeat) != 'n') {
                printf("\nValor invalido! Digite S para sim e N para nao.");
            };
        } while(tolower(repeat) != 's' && tolower(repeat) != 'n');
    };

    return 0;
};

void writeWorkers(worker workers[], int *lenght) {

    char repeat = 's';

    while(tolower(repeat) == 's') {

        printf("\nDigite o nome do trabalhador(a): ");
        scanf(" %[^\n]", workers[*lenght].name);

        printf("\nDigite o id do trabalhador(a): ");
        scanf(" %d", &workers[*lenght].id);

        do {
            printf("\nDigite o sexo do trabalhor(a) (F: Feminino / M: Masculino): ");
            scanf(" %c", &workers[*lenght].sex);

            if(tolower(workers[*lenght].sex) != 'f' 
            && tolower(workers[*lenght].sex) != 'm') {
                printf("\nValor invalido! Digite M para masculino e F para feminino.");
            };
        } while(tolower(workers[*lenght].sex) != 'f' 
            && tolower(workers[*lenght].sex) != 'm');

        printf("\nDigite o salario do trabalhador(a): ");
        scanf(" %f", &workers[*lenght].salary);

        do {
            printf("\nDeseja cadastrar mais um trabalhador(a)? ( S / N ) ");
            scanf(" %c", &repeat);

            if(tolower(repeat) != 's' && tolower(repeat) != 'n') {
                printf("\nValor invalido! Digite S para sim e N para nao.");
            };
        } while(tolower(repeat) != 's' && tolower(repeat) != 'n');

        (*lenght)++;
    };

    return;
};

void readAllWorkers(worker workers[], int lenght) {
    for(int i = 0; i < lenght; i++) {
        printf("\n\n-------------------\n\n");
        printf("\nNome: %s", workers[i].name);
        printf("\nID: %d", workers[i].id);
        if(tolower(workers[i].sex) == 'f') {
            printf("\nSexo: Feminino");
        } else {
            printf("\nSexo: Masculino");
        };
        printf("\nSalario: %.2f", workers[i].salary);
    };
    return;
};

void readWorkersBySex(worker workers[], int length, char sex) {
    for(int i = 0; i < length; i++) {
        if(tolower(sex) == 'f' && tolower(workers[i].sex) == 'f') {
            printf("\n\n-------------------\n\n");
            printf("\nNome: %s", workers[i].name);
            printf("\nID: %d", workers[i].id);
            printf("\nSexo: Feminino");
            printf("\nSalario: %.2f", workers[i].salary);
        };
        if(tolower(sex) == 'm' && tolower(workers[i].sex) == 'm') {
            printf("\n\n-------------------\n\n");
            printf("\nNome: %s", workers[i].name);
            printf("\nID: %d", workers[i].id);
            printf("\nSexo: Masculino");
            printf("\nSalario: %.2f", workers[i].salary);
        };
    };

    return;
};

void attAllSalary(worker workers[], int length, float percentage) {
    for(int i = 0; i < length; i++) {
        workers[i].salary += workers[i].salary * (percentage / 100);
    };

    return;
};
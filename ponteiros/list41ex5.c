/*
5. Crie um programa para manipular vetores. O seu programa deve implementar uma função
chamada inverte_vetor, que recebe como parâmetro dois vetores V1 e V2, ambos de tamanho N.
A função deve copiar os elementos de V1 para V2 na ordem inversa. Ou seja, se a função receber
V1 = {1,2,3,4,5}, a função deve copiar os elementos para V2 na seguinte ordem: V2 = {5,4,3,2,1}.
Além disso, a função também deve retornar o maior valor encontrado em V1. A função deve
obedecer ao seguinte protótipo:
int inverte_vetor(int *v1, int *v2, int n);
*/

#include <stdio.h>

void printScan(char msg, char type, void* ponteiro);

int main() {
    char text = 'e';
    char test[100];
    printScan(text, 's', test);

    printf(test);

    return 0;
};

void printScan(char msg, char type, void* ponteiro) {
    printf("%c", msg);
    switch (type) {
    case 's':
        scanf(" %[^\n]", &ponteiro);
        break;
    }
}
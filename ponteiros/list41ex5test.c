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

void invertArray(int v1[], int v2[], int length);

int main() {
    int v1[] = {1, 2, 3, 4, 5};
    int v2[5];
    int length = 5;

    invertArray(v1, v2, length);

    for(int i = 0; i < length; i++) {
        printf("%d\t", v1[i]);
    }

    printf("\n");

    for(int i = 0; i < length; i++) {
        printf("%d\t", v2[i]);
    }

    return 0;
    
};

void invertArray(int v1[], int v2[], int length) {

    for(int i = 0; i < length; i++) {
        v2[(length - 1) - i] = v1[i];
    };

}
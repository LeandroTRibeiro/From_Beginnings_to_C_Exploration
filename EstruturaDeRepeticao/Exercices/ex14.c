/*
    14) Elabore um algoritmo que leia um número e imprima todos os números de 1 até o número lido, e também o seu
produto.
Exemplo:
Número: 3 Saída: 1 2 3 Produto: 6
*/

#include <stdio.h>

int main() {
    int count, product=1;
    printf("\nDigite um numero: ");
    scanf(" %d", &count);
    printf("\nNumero: %d", count);
    printf("\nSaida: ");
    for (int i = 1; i <= count; i++) {
        printf("%d ", i);
        product=product*i;
    };
    printf("\nProduto: %d", product);

    return 0;
};
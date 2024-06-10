/*
2) fazer um programa em "C" que solicita o total gasto pelo cliente de uma loja, imprime as
opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se
houverem).

1) Opção: a vista com 10% de desconto
2) Opção: em duas vezes (preço da etiqueta)
3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de
R$ 100,00).

OBS: fazer uma função que imprime o menu de opções e solicita a opção desejada e
retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função
correspondente (uma função para cada opção, todas devem ser void)
*/

#include <stdio.h>

int main() {
    float price;
    int option;

    printf("\nDigite o valor da compra: ");
    scanf(" %f", &price);

    do {
        printf("\nEscolha a opcao de pagamento: ");
        printf("\n1 --- A vista com 10%% de desconto.");
        printf("\n2 --- Em duas vezes (preco de etiqueta).");
        printf("\n3 --- de 3 a 10 vezes com 3%% de juros ao mes (somente para compras acima de R$100,00)");
        printf("\n4 --- Adicionar um novo valor de compra.");
        printf("\n0 --- Encerra o programa.");
        scanf(" %d", &option);
    } while(option != 0);

};
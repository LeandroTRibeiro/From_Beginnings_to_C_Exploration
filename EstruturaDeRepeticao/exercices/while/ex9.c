/*
    9) Uma loja utiliza os seguintes códigos para as vendas diárias:
        V – para compras à vista;
        P – para compras à prazo;
    Dada uma lista de transações de compra ou venda, contendo o valor de cada transação e o
    respectivo código de transação (V ou P), elabore um algoritmo que leia um conjunto de transações
    de vendas (x para o tipo da transação encerra o programa), e, ao final, calcule e imprima:
        a) O valor total de compras a vista;
        b) O valor total de compras a prazo;
        c) O valor total de compras efetuadas; 
*/

#include <stdio.h>

int main() {
    int cashSaleCount=0, installmentSaleCount=0, salesCount=0;
    char saleType;

    printf("\nEscolha o tipo de venda: \nV ----- para compras a vista;\nP ----- para compras a prazo;\nX ----- Encerrar programa;\n");
    scanf(" %c", &saleType);

    while (saleType != 'x' && saleType != 'X') {
        
        switch(saleType) {
            case 'V':
            case 'v':
                salesCount++;
                cashSaleCount++;
                break;
            case 'P':
            case 'p':
                salesCount++;
                installmentSaleCount++;
                break;
            default:
                printf("\nCaracter invalido!\n");
                break;
        };

        printf("\nEscolha o tipo de venda: \nV ----- para compras a vista;\nP ----- para compras a prazo;\nX ----- Encerrar programa;\n");
        scanf(" %c", &saleType);

    };
    
    printf("\nTotal de vendas a vista: %d", cashSaleCount);
    printf("\nTotal de vendas a prazo: %d", installmentSaleCount);
    printf("\nTotal de vendas: %d", salesCount);

    return 0;
};
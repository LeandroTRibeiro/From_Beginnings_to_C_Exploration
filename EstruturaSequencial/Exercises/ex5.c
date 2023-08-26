/*

5. Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que 
este sofreu um desconto de 10%.

*/

#include <stdio.h>

main() {
    char product[100];
    float price, priceF, discountP, discountV;

    printf("digite o nome do produto: ");
    scanf("%s", &product);
    printf("digite o preco do produto R$: ");
    scanf("%f", &price);
    printf("digite o desconto desejado %%: ");
    scanf("%f", &discountP);

    discountV=(discountP*price)/100;
    priceF=price-discountV;

    printf("\n\n--------------------------------\nproduto: %s \nvalor: R$%.2f \ndesconto em porcentagem: %.2f%% \ndesconto em valor: R$%.2f \nvalor final: R$%.2f", product, price, discountP, discountV, priceF);

    return 0;

};
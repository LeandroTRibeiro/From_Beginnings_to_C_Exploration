/*
8) A agência do Campus Universitário do Banco Real de Criciúma tem, no máximo, 10000 clientes.
Elabore um algoritmo que leia o número da conta, nome e saldo de cada cliente. Para cada cliente,
imprimir sua conta, o respectivo saldo e uma das mensagens: positivo / negativo. A digitação acaba
quanto se digita –999 para número da conta ou quando totalizar 10.000 clientes. Ao final, deverá
ser impresso o total de clientes com saldo negativo, o total de clientes da agência, o percentual de
clientes com saldo positivo, e o saldo da agência. 
*/

#include <stdio.h>

int main() {
    int bankAccount, accountCount=0, negativeCount=0;
    float bankBalance, positiveCount=0, bankValue=0;
    char name[20];

    printf("\nDigite o numero da conta :");
    scanf(" %d", &bankAccount);

    while (bankAccount > 0 && bankAccount < 10000 && accountCount < 10000) {

        accountCount++;
        printf("\nDigite o nome: ");
        scanf(" %[^\n]", &name);
        printf("\nDigite o saldo disponivel: ");
        scanf(" %f", &bankBalance);
        bankValue = bankValue + bankBalance;

        printf("\n---------------------------\n");
        printf("\nConta: %d", bankAccount);
        printf("\nNome: %s", name);
        if(bankBalance > 0) {
            positiveCount++;
            printf("\nSaldo Bancario Positivo: %.2f", bankBalance);
        } else {
            negativeCount++;
            printf("\nSaldo Bancario Negativo: %.2f", bankBalance);
        };
        printf("\n---------------------------\n");

        printf("\nDigite o numero da conta :");
        scanf(" %d", &bankAccount);
            
    };
    
    printf("\nClientes com saldo negativo: %d", negativeCount);
    printf("\nClientes da agencia: %d", accountCount);
    printf("\nPercentual dos clientes com saudo positivo: %.2f", (accountCount / positiveCount) * 100);
    printf("\nSaldo total do banco: %.2f", bankValue);

    return 0;
};
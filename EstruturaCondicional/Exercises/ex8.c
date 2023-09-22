/*

8. Elabore um algoritmo que receba dois números e execute as operações listadas a seguir, de
acordo com a escolha do usuário.
Escolha do
usuário
Operação
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do
programa. 

*/

#include <stdio.h>
#include <conio.h>

int finishProgram();

int main() {

    float n1, n2;
    int method;
    char repeat;

    do {

        printf("\nDigite o primeiro numero: ");
        scanf("%f", &n1);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &n2);

        printf("\nDigite o numero referente ao metodo desejado:\n");
        printf("\n1 ---------- Media entre os numeros digitados;\n2 ---------- Diferenca do maior pelo menor;\n3 ---------- Produto entre os numeros digitados;\n4 ---------- Divisao do primeiro pelo segundo;\n");
        scanf("%d", &method);

        switch (method)
        {
        case 1:
            printf("\nA media entre %.2f e %.2f e igual a %.2f\n", n1, n2, ((n1+n2)/2));
            break;
        case 2:
            if(n1>n2)
                printf("\nA diferenca entre %.2f e %.2f e igual a %.2f\n", n1, n2, (n1-n2));
            else
                printf("\nA diferenca entre %.2f e %.2f e igual a %.2f\n", n2, n1, (n2-n1));
            break;
        case 3: 
            printf("\nO produto entre os numeros %.2f e %.2f e %.2f\n", n1, n2, (n1*n2));
            break;
        case 4:
            printf("\nA divisao de %.2f por %.2f e de %.2f\n", n1, n2, (n1/n2));
            break;
        default:
            printf("\nFavor digitar uma das opcoes acima!\n");
            break;
        };

        printf("\nDeseja repetir? (S/N)");
        scanf(" %c", &repeat);

    } while(repeat == 's' || repeat == 'S');

    finishProgram();
};

int finishProgram() {

    printf("\n################################\n");
    printf("Pressione qualquer tecla para encerrar: ");
    getch();
    
    return 0;
};
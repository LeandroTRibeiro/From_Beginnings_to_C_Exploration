/*

9. Faça um programa que receba dois números e execute as operações listadas a seguir, de
acordo com a escolha do usuário. Se for digitada uma opção inválida, mostre uma
mensagem de erro e termine a execução do programa. As opções são:
a) O primeiro número elevado ao segundo.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.

*/

#include <stdio.h>
#include <math.h>
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
        printf("\n1 ---------- O primeiro numero elevado ao segundo;\n2 ---------- Raiz quadrada de cada um dos numeros;\n3 ---------- Raiz cubica de cada um dos numeros;\n");
        scanf("%d", &method);

        switch (method)
        {
        case 1:
            printf("\n%.2f elevado a %.2f e igual a %.2f\n", n1, n2, pow(n1, n2));
            break;
        case 2:
            printf("\nA raiz quadrada de %.2f e %.2f e a raiz quadrada de %.2f e %.2f\n", n1, sqrt(n1), n2, sqrt(n2));
            break;
        case 3: 
            printf("\nA raiz cubica de %.2f e %.2f e a raiz cubica de %.2f e %.2f\n", n1, cbrt(n1), n2, cbrt(n2));
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
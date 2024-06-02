/*
3. Faça uma função que receba dois números positivos por parâmetro e retorne a soma
dos n números inteiros existentes entre eles.
*/

#include <stdio.h>
#include <conio.h>

int readNumber();
int sumInterval(int a, int b);
int finishProgram();

int main() {
    int num1;
    int num2;

    num1 = readNumber();
    num2 = readNumber();

    printf("\nA soma dos numeros entre o intervalos dos numeros e de: %d", sumInterval(num1, num2));

    return finishProgram();
};

int readNumber() {
    int num;

    printf("\nDigite o primeiro numero: ");
    scanf(" %d", &num);

    return num;
};

int sumInterval(int a, int b) {
    int sum = 0;

    for(int i = a + 1; i < b; i++) {
        sum += i;
    };

    return sum;
};

int finishProgram() {
    printf("\nDigite qualquer tecla para encerrar!\n");
    getch();
    return 0;
}
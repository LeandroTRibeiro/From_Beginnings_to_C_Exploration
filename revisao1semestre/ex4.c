/*
4) Crie um algoritmo para calcular o número  a partir da série infinita abaixo.
O algoritmo deve receber o número de termos que serão utilizados para
calcular  
4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ....
*/

#include <stdio.h>

int main() {
    int termos;
    double pi = 0;

    printf("\nDigite o numero de termos: ");
    scanf(" %d", &termos);

    for(int i = 0; i < termos; i++) {
        if (i % 2 == 0) { 
            pi += 4.0 / (2 * i + 1);
        } else { 
            pi -= 4.0 / (2 * i + 1);
        }
    }

    printf("%f", pi);
    
    return 0;
}
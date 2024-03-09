/*
1) Faça um algoritmo que receba três notas e seus respectivos pesos, calcule
e mostre a média ponderada dessas notas.
__________________________________________________________
Média Aritmética Ponderada - MAP: Às vezes, é importante atribuir-se pesos
diferenciados a cada valor, para o cálculo da média e, neste caso, a média
recebe o nome de média ponderada.
Assim, dados n valores x1, x2, x3, ... , xn aos quais são atribuídos os pesos k1,
k2, k3, ... , kn respectivamente, a média ponderada destes n valores será dada
por:
Mp = (x1.k1 + x2.k2 + x3.k3 + ... xn.kn) / (k1 + k2 + k3 + ... + kn)
Exemplo: Se os valores 10, 8 e 6 possuem pesos 4, 3 e 2 respectivamente, a
média ponderada destes valores será igual a:
Mp = (10.4 + 8.3 + 6.2) / (4 + 3 + 2) = 76 / 9 = 8,44.
_______________________________________________
*/

#include <stdio.h>

int main() {

    float grades[3], weight[3], mpGrade=0, mpWeight=0;

    for(int i = 0; i < 3; i++) {
        printf("\nDigite a %d nota do aluno: \n", i + 1);
        scanf(" %f", &grades[i]);

        printf("\nDigite o peso da %d nota: \n", i + 1);
        scanf(" %f", &weight[i]);
    };

    for(int i = 0; i < 3; i++) {
        mpGrade = mpGrade + (grades[i] * weight[i]); //40 64 76
        mpWeight = mpWeight + weight[i]; // 4 7 9
    }

    printf("\nA media ponderada do aludo e de %.2f", mpGrade / mpWeight);

    return 0;
};
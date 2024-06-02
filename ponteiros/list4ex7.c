/*
7) Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio “r”. Essa
função deve obedecer ao protótipo:
void calcularEsfera (float r, float *area, float *volume);
- a área da superfície é dada por 4  r
2
e o volume é dado por 4  r
3
;
 3
- utilize o valor 3,14159 para  ou então faça uma função para calcular  com 200 termos usando a
série abaixo:
  = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ....
*/

#include <stdio.h>

void calculaEsfera(float ray, float *area, float *volume);

int main() {
    float ray;
    float area;
    float volume;

    printf("\nDigite o valor do raio da esfera: ");
    scanf(" %f", &ray);

    calculaEsfera(ray, &area, &volume);

    printf("\nO valor da area da esfera e de: %.2f\nO valor do volume da esfera e de: %.2f", area, volume);

    return 0;
};

void calculaEsfera(float ray, float *area, float *volume) {

    float pi = 3.14159;

    *area = 4 * pi * (ray * ray);
    *volume = (4 * pi * (ray * ray * ray)) / 3;

    return;
};
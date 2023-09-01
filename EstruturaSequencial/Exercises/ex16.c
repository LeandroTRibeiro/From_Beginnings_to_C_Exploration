/*

16. Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2 deve-se usar 
18W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), 
calcule e mostre a sua área (em m2
) e a potência de iluminação que deverá ser utilizada

*/

#include <stdio.h>

main() {
    float firstSide, secondSide, area, lightingPower;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("INDICADOR DE POTENCIA PARA LUMINOSIDADE");
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("digite em metros o primeiro lado do comodo: ");
    scanf("%f", &firstSide);
    printf("digite em metros o segundo lado do comodo: ");
    scanf("%f", &secondSide);

    area=(firstSide*secondSide)/2;
    lightingPower=area*18;

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("area: %.2fm2", area);
    printf("\npotencia necessaria: %.2fw", lightingPower);
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    return 0;
}
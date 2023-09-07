/*

19. Elabore um algoritmo que leia e imprima os dados de uma disciplina escolar: nome, descrição, 
freqüência e média mínima para aprovação.

*/

#include <stdio.h>

struct Dicipline {
    char name[100];
    char description[100];
    float frequence;
    float grade;
};

int main() {
    int length=0;
    char plusLength;

    struct Dicipline diciplines[100];

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    printf("CADASTRO DE DISCIPLINAS");
    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");

    do {
        printf("\ndigite o nome da disciplina: ");
        scanf(" %[^\n]", diciplines[length].name);

        printf("digite a descricao: ");
        scanf(" %[^\n]", diciplines[length].description);

        printf("digite a frequencia minima: ");
        scanf("%f", &diciplines[length].frequence);

        printf("digite a media: ");
        scanf("%f", &diciplines[length].grade);

        length++;

        printf("\ngostaria de adicionar mais uma disciplina? (S/N): ");
        scanf(" %c", &plusLength);

        printf("\n-----------------------------------\n"); 
        printf("-----------------------------------\n");

    } while (plusLength == 'S' || plusLength == 's');

    printf("\n-----------------------------------\n"); 
    printf("-----------------------------------\n");
    
    for (int i = 0; i < length; i++) {
        printf("\nCadastro: %d", i+1);
        printf("\ndisciplina: %s", diciplines[i].name);
        printf("\ndescricao: %s", diciplines[i].description);
        printf("\nfrequencia: %.2f%%", diciplines[i].frequence);
        printf("\nmedia: %.2f", diciplines[i].grade);
        printf("\n-----------------------------------\n"); 
        printf("-----------------------------------\n");
    }

    printf("\nFim do programa.\n");

    return 0;
    
}

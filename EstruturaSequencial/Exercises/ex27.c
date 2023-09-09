/*

27. Elabore um algoritmo que leia 3 notas de um aluno, calcule e mostre a média aritmética entre elas.

*/

#include <stdio.h>
#include <conio.h>

struct Dicipline {
    char name[100];
    float frequence;
    float grades[3];
    float finalGrade;
    float minGrade;
    float minFrequence;
};

struct Student {
    char name[100];
    int classRoom;
    struct Dicipline diciplines[100];
    int diciplinesLenght;
};

float averageReduce(float grades[], int size);

int main() {

    int semesterReviews;
    float studentFrequence, semesterClassDays;
    char repeatStudentRegister;
    char repeatDiciplineRegister;
    char showData;
    int studentLength = 0, diciplineLength = 0;

    struct Student students[100];

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("######### REGISTRO DE ALUNOS #########");
    printf("\n######################################\n"); 
    printf("######################################\n");

    do {

        printf("\nDigite o nome completo do aluno(a): ");
        scanf( " %[^\n]", &students[studentLength].name);
        printf("\nDigite o numero da classe do aluno(a): ");
        scanf(" %d", &students[studentLength].classRoom);
        
        do {

            printf("\nDigite o nome da diciplina que deseja registrar: ");
            scanf(" %[^\n]", &students[studentLength].diciplines[diciplineLength].name);
            printf("\nDigite a nota minima para aprovacao: ");
            scanf(" %f", &students[studentLength].diciplines[diciplineLength].minGrade);
            printf("\nDigite a frequencia minima para aprovacao em porcentagem: ");
            scanf(" %f", &students[studentLength].diciplines[diciplineLength].minFrequence);
            printf("\nDigite a quantidade de avaliacoes no semestre: ");
            scanf(" %d", &semesterReviews);
            for(int i = 0; i < semesterReviews; i++) {
                printf("\nDigite a nota da %da avaliacao: ", i+1);
                scanf(" %f", &students[studentLength].diciplines[diciplineLength].grades[i]);
            };
            printf("\nDigite a quantidade de aulas neste semestre: ");
            scanf(" %f", &semesterClassDays);
            printf("\nDigite a quantidade de aulas frequentadas pelo aluno(a): ");
            scanf(" %f", &studentFrequence);

            students[studentLength].diciplines[diciplineLength].finalGrade = averageReduce(students[studentLength].diciplines[diciplineLength].grades, semesterReviews);

            students[studentLength].diciplines[diciplineLength].frequence = (studentFrequence / semesterClassDays) * 100;

            students[studentLength].diciplinesLenght = diciplineLength;

            printf("\nDeseja cadastrar mais uma diciplina para o mesmo aluno(a)? (S/N)");
            scanf(" %c", &repeatDiciplineRegister);

            if(repeatDiciplineRegister == 's' || repeatDiciplineRegister == 'S') {
                diciplineLength++;
            } else {
                diciplineLength = 0;
            };

            printf("\n######################################\n"); 

        } while (repeatDiciplineRegister == 's' || repeatDiciplineRegister == 'S');

        printf("\nDeseja cadastrar mais um aluno(a)? (S/N)");
        scanf(" %c", &repeatStudentRegister);

        studentLength++;

        printf("\n######################################\n"); 

    } while (repeatStudentRegister == 's' || repeatStudentRegister == 'S');

    printf("\nDeseja visualizar os registros? (S/N)");
    scanf(" %c", &showData);

    if(showData == 's' || showData == 'S') {
        for(int student = 0; student < studentLength; student++) {
            printf("\n--------------------------------------\n");
            printf("\n######################################\n");
            printf("\nCadastro: %d", student+1);
            printf("\nAluno: %s", students[student].name);
            printf("\nClasse: %d", students[student].classRoom);
            printf("\n######################################\n");
            for(int dicipline = 0; dicipline <= students[student].diciplinesLenght; dicipline++) {
                printf("\nDiciplina: %s", students[student].diciplines[dicipline].name);
                printf("\nFrequencia: %.2f%%", students[student].diciplines[dicipline].frequence);
                printf("\nFrequencia minima necessaria: %.2f%%", students[student].diciplines[dicipline].minFrequence);
                for(int review = 0; review < semesterReviews; review++) {
                    printf("\n%da avaliacao: %.2f", review + 1, students[student].diciplines[dicipline].grades[review]);
                };
                printf("\nMedia Final: %.2f", students[student].diciplines[dicipline].finalGrade);
                printf("\nMedia minima necessaria: %.2f", students[student].diciplines[dicipline].minGrade);
                if(
                    students[student].diciplines[dicipline].finalGrade >= 
                    students[student].diciplines[dicipline].minGrade && 
                    students[student].diciplines[dicipline].frequence >= 
                    students[student].diciplines[dicipline].minFrequence ) {
                        printf("\nO aluno(a) %s esta aprovado!", students[student].name);
                } else {
                    printf("\nO aluno(a) %s esta reprovado!", students[student].name);
                };

                printf("\n######################################\n");
            }
            printf("\n######################################\n");
            printf("\n--------------------------------------\n");

        }
    }

    printf("\n######################################\n"); 
    printf("######################################\n");
    printf("########### FIM DO PROGRAMA ##########");
    printf("\n######################################\n"); 
    printf("######################################\n");

    printf("\nPressione qualquer tecla para sair: \n");
    getch();
    return 0;
};

float averageReduce(float grades[], int size) {
    float grade = 0;

    for(int i = 0; i < size; i++) {
        grade += grades[i];
    };

    return grade / size;
};
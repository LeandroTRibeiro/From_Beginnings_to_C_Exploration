/*
10)Uma pesquisa de opinião realizada em Criciúma teve as seguintes perguntas:
    Qual seu time do coração?
        1 – Criciúma
        2 – Próspera
        3 – Outro
    Qual bairro você mora?
        1 – Pinheirinho
        2 – Centro
        3 - Outro
    Qual o seu salário?
    Considerando que a entrada de dados finaliza quando for digitado 0 para o time, elabore um
    algoritmo que, ao final da leitura, imprima:
        a O número de torcedores por clube;
        b A média salarial dos torcedores do Próspera;
        c O número de pessoas moradoras do Centro, torcedores de outros clubes; 
*/

#include <stdio.h>

int main() {
    int team, neighborhood, prosperaTeamCount=0, criciumaTeamCount=0, otherTeamCount=0, interviewedCount=0, centerResidentOtherTeamCount=0;
    float salary, prosperaTeamSalary=0;

    printf("\nQual seu time do coracao?: \n1 ----- Criciuma;\n2 ----- Prospera;\n3 ----- Outro;\n0 ----- Encerrar Programa;\n");
    scanf(" %d", &team);

    while (team != 0) {

        interviewedCount++;


        printf("\nQual bairro vc mora?: \n1 ----- Pinheirinho;\n2 ----- Centro;\n3 ----- Outro;\n");
        scanf(" %d", &neighborhood);
        
        printf("\nQual seu salario?: ");
        scanf(" %f", &salary);

        switch(team) {
            case 1:
                criciumaTeamCount++;
                break;
            case 2:
                prosperaTeamCount++;
                prosperaTeamSalary = prosperaTeamSalary + salary;
                break;
            case 3:
                otherTeamCount++;
                if(neighborhood == 2) {
                    centerResidentOtherTeamCount++;
                };
                break;
        };


        printf("\nQual seu time do coracao?: \n1 ----- Criciuma;\n2 ----- Prospera;\n3 ----- Outro;\n0 ----- Encerrar Programa;\n");
        scanf(" %d", &team);
    };

    printf("\nTorcedores do Criciuma: %d", criciumaTeamCount);
    printf("\nTorcedores do Prospera: %d", prosperaTeamCount);
    printf("\nTorcedores de outros times: %d", otherTeamCount);
    printf("\nMedia salarial dos torcedores do prospera: %.2f", prosperaTeamSalary / prosperaTeamCount);
    printf("\nMoradores do centro que torcem para outros times: %d", centerResidentOtherTeamCount);

    return 0;
};
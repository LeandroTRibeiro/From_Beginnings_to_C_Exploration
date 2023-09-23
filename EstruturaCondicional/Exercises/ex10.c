/*

10.Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$
1.500,00. Escreva um algoritmo em que receba o salário do funcionário e mostre o valor do
salário reajustado ou uma mensagem, caso ele não tenha direito ao aumento.

// melhorando o exercicio 
1 ------------ Registrar Funcionario
2 ------------ Listar Funcionario
3 ------------ Editar Registro Especifico
4 ------------ Adicionar Aumento Para todos
5 ------------ Adicionar Aumento Condicional a Funcao
6 ------------ Adicionar Aumento Condicional a Faxa Salarial
7 ------------ Deletar Registro de Funcionario

*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

struct EmployeesRegister {
    char name[100];
    char jobFunction[100];
    float salary;
    int recentIncrease[2];
};

struct EmployeesRegister employeesRegisters[100];
int employeesRegisterLenght=0;

void showRegisters();
void registerEmployee();
void editRegister();

int finishProgram();

int main() {
    int optionFunction;
    char repeat;
 
    printf("\n#################################\n");
    printf("#################################");
    printf("\n##### PROGRAMA EMPRESARIAL ######\n");
    printf("#################################");
    printf("\n#################################\n");

    do {

        printf("\nDigite a opcao o numero da opcao desejada: \n1 ------------ Registrar Funcionario\n2 ------------ Listar Funcionario\n3 ------------ Editar Registro Especifico\n4 ------------ Adicionar Aumento Para todos\n5 ------------ Adicionar Aumento Condicional a Funcao\n6 ------------ Adicionar Aumento Condicional a Faxa Salarial\n7 ------------ Deletar Registro de Funcionario\n");
        scanf(" %d", &optionFunction);

        switch(optionFunction) {
        case 1:
            registerEmployee();
            break;
        case 2:
            showRegisters();
            break;
        case 3: 
            editRegister();
            break;
        default:
            printf("\nOpcao inexistente!");
            break;
        };


        printf("Deseja voltar ao inicio? (S/N)");
        scanf(" %c", &repeat);

    } while ( repeat == 'S' || repeat == 's' );

    finishProgram();

};

void showRegisters() {
    if(employeesRegisterLenght == 0) {
        printf("\nAinda nao temos nenhum registro cadastrado!\n");
        return;
    };
        
    for(int i = 0; i < employeesRegisterLenght; i++) {
        printf("\n#################################\n");
        printf("\nCadastro: %d\n", i+1);
        printf("\nNome: %s", employeesRegisters[i].name);
        printf("\nFuncao: %s\n", employeesRegisters[i].jobFunction);
        printf("\nSalario: %.2f\n", employeesRegisters[i].salary);
        if(employeesRegisters[i].recentIncrease[0] != 0) 
            printf("\nRecebeu aumento recentemente de %.2f\n", employeesRegisters[i].recentIncrease[1]);
        else 
            printf("\nFuncionario nao recebeu aumento recentemente\n");
        
        printf("\n#################################\n");
    };
};

void registerEmployee() {
    char addRegister;

    struct EmployeesRegister newRegister[100];

    printf("\n#################################\n");
    printf("\nCadastro %d:\n", employeesRegisterLenght+1);
    printf("\nDigite o nome do funcionario: ");
    scanf(" %[^\n]", &newRegister[0].name);
    printf("\nDigite a funcao do funcionario: ");
    scanf(" %[^\n]", &newRegister[0].jobFunction);
    printf("\nDigite o salario do funcionario: ");
    scanf(" %f", &newRegister[0].salary);

    printf("\n\nCadastro %d", employeesRegisterLenght+1);
    printf("\nFuncionario: %s", newRegister[0].name);
    printf("\nFuncao: %s", newRegister[0].jobFunction);
    printf("\nSalario: %.2f", newRegister[0].salary);
    printf("\n\nEfetuar registro?: (S/N)\n");
    scanf(" %c", &addRegister);

    if(addRegister == 's' || addRegister == 'S') {
        strcpy(employeesRegisters[employeesRegisterLenght].name, newRegister[0].name);
        // employeesRegisters[employeesRegisterLenght+1].name = name;
        strcpy(employeesRegisters[employeesRegisterLenght].jobFunction, newRegister[0].jobFunction);
        // employeesRegisters[employeesRegisterLenght+1].jobFunction = jobFunction;
        employeesRegisters[employeesRegisterLenght].salary = newRegister[0].salary;
        // employeesRegisters[employeesRegisterLenght+1].salary = salary;

        employeesRegisterLenght++;
        printf("\nFuncionario registrado com sucesso!\n");
    };
    printf("\n#################################\n");
    return;
};

void editRegister() {
    int employee;
    char confirm;
    struct EmployeesRegister editRegister[100];

    printf("\n#################################\n");
    printf("\nQual o numero cadastro deseja editar?");
    scanf(" %d", &employee);

    if(strlen(employeesRegisters[employee-1].name) == 0) {
        printf("\nCadastro nao encontrado!\n");
        return;
    };

    printf("\nCadastro: %d\n", employee);
    printf("\nNome: %s\n", employeesRegisters[employee-1].name);
    printf("\nFuncao: %s\n", employeesRegisters[employee-1].jobFunction);
    printf("\nSalario: %.2f\n", employeesRegisters[employee-1].salary);
    printf("\n#################################\n");

    printf("\nDigite o novo nome: ");
    scanf(" %[^\n]", &editRegister[0].name);
    printf("\nDigite a nova funcao: ");
    scanf(" %[^\n]", &editRegister[0].jobFunction);
    printf("Digite o novo salario: ");
    scanf(" %[^\n]", &editRegister[0].salary);

    printf("\n#################################\n");

    printf("\nCadastro: %d", employee);
    printf("\nNome: %s\n", editRegister[0].name);
    printf("\nFuncao: %s\n", editRegister[0].jobFunction);
    printf("\nSalario: %.2f\n", editRegister[0].salary);
    printf("\n#################################\n");

    printf("\nEfetuar edicao? (S/N)");~
    scanf(" %c", &confirm);

    if (confirm == 's' || confirm == 'S') {
        strcpy(employeesRegisters[employee-1].name, editRegister[0].name);
        strcpy(employeesRegisters[employee-1].jobFunction, editRegister[0].jobFunction);
    };
    

    return;
};

int finishProgram() {

    printf("\n###############################\n");
    printf("\nPressione qualquer tecla para encerrar: ");
    getch();

    return 0;
};
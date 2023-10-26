#include <stdio.h>

main() {
	float sal;
	int codigo;

	printf("digite o salario atual do funcionario(a): ");
	scanf("%f", &sal);
	printf("digite o codigo do cargo:\n1 ---- Escrituario(a)\n2 ---- Secretario(a)\n3 ---- Caixa\n4 ---- Gerente\n5 ---- Diretor\n");
	scanf(" %d", &codigo);

	switch(codigo) {
		case 1:
			printf("\nCargo: Escrituario(a)\nValor Aumento: %.2f\nNovo Salario: %.2f", sal*0.5, (sal*0.5) + sal );
		break;
		case 2:
			printf("\nCargo: Secretario(a)\nValor Aumento: %.2f\nNovo Salario: %.2f", sal*0.35, (sal*0.35) + sal );
		break;
		case 3:
			printf("\nCargo: Caixa\nValor Aumento: %.2f\nNovo Salario: %.2f", sal*0.2, (sal*0.2) + sal );
		break;
		case 4:
			printf("\nCargo: Gerente\nValor Aumento: %.2f\nNovo Salario: %.2f", sal*0.1, (sal*0.1) + sal);
		break;
		case 5:
			printf("\nCargo: Diretor\nValor Aumento: Sem Aumento\nSalario: %.2f", sal);
		break;
		default:
			printf("\nCodigo invalido");
		break;
	};
};
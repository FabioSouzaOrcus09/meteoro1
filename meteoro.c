#include <stdio.h>
int main (int argc, char *argv[]) {
	int operacao;
	double num1, num2, resultado;


	printf("Digite a operacao(+,-,*,/");

	scanf("%c", &operacao);

	printf("Digite o primeiro numero");
	scanf("%if", &num2);

	printf("Digite o segundo numero");
	scanf("%if", &num2);

	switch (operacao){
		case '+':
			resultado = num1 + num2;

			break;
		case '-':
			resultado = num1 - num2;

			break;
		case '*':
			resultado = num1 * num2;

			break;
		case '/':
			resultado = num1 / num2;
			
			break;

	}
	printf("O seu resultado é %d",resultado);
	return 0;
}



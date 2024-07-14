#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	char operador;
	float num1, num2;
	
	printf("Coloque um número: ");
	scanf("%f", &num1);
	printf("Coloque outro número: ");
	scanf("%f", &num2);
	
	fflush(stdin);
	printf("Coloque um operador: ");
	scanf("%c", &operador);	

	
	switch(operador){
		case '+':
			printf("%.2f\n", num1 + num2);
		break;
		case '-':
			printf("%.2f\n", num1 - num2);
		break;
		case '*':
			printf("%.2f", num1 * num2);
		break;
		case '/':
			printf("%.2f", num1/num2);
		break;
	}
}

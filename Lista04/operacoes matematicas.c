#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em v�rgula
	
	char operacao[1];
	float numero1, numero2;
	
	printf("Escolha uma opera��o(+, -, *, /): ");
	scanf("%s", operacao);
	printf("Escolha um n�mero: ");
	scanf("%f", &numero1);
	printf("Escolha outro n�mero: ");
	scanf("%f", &numero2);
	
	if(strcmp(operacao, "+")==0){
		printf("\n%.1f\n", numero1+numero2);
	}
	else if(strcmp(operacao, "-")==0){
		printf("\n%.1f\n", numero1-numero2);
	}
	else if(strcmp(operacao, "*")==0){
		printf("\n%.1f\n", numero1*numero2);
	}
	else if(strcmp(operacao, "/")==0){
		printf("\n%.1f\n", numero1/numero2);
	}
}

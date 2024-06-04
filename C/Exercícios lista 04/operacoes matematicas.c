#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	char operacao[1];
	float numero1, numero2;
	
	printf("Escolha uma operação(+, -, *, /): ");
	scanf("%s", operacao);
	printf("Escolha um número: ");
	scanf("%f", &numero1);
	printf("Escolha outro número: ");
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

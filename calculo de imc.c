#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	float alt, peso, imc;
	
	printf("Descubra seu Índice de Massa Corporal(IMC) \n\n");
	
	printf("Qual é o seu peso(em kg)? ");
	scanf("%f", &peso);
	
	printf("Qual é a sua altura(em metros)? ");
	scanf("%f", &alt);
	
	imc = peso / (alt*alt);
	
	printf("\nSeu IMC é: %.2f\n", imc);
	
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float alt, peso, imc;
	
	printf("Descubra seu �ndice de Massa Corporal(IMC) \n\n");
	
	printf("Qual � o seu peso(em kg)? ");
	scanf("%f", &peso);
	
	printf("Qual � a sua altura(em metros)? ");
	scanf("%f", &alt);
	
	imc = peso / (alt*alt);
	
	printf("\nSeu IMC �: %.2f\n", imc);
	
}

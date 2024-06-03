#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	float peso, altura, imc;
	
	printf("Descubra seu IMC e qual classificação você se encaixa!\n\n");
	
	printf("Qual é o seu peso?(em Kg) ");
	scanf("%f", &peso);
	printf("Qual é a sua altura?(em M) ");
	scanf("%f", &altura);
	
	imc = peso/pow(altura,2);
	
	printf("\nSeu IMC é: %.1f\n", imc);
	
	if(imc<18.5){
		printf("CLASSIFICAÇÃO: MAGREZA\n");
	}
	else if(imc>=18.5 && imc<=24.9){
		printf("CLASSIFICAÇÃO: NORMAL\n");
	}
	else if(imc>=25 && imc<=29.9){
		printf("CLASSIFICAÇÃO: SOBREPESO\n");
	}
	else if(imc>=30 && imc<=39.9){
		printf("CLASSIFICAÇÃO: OBESIDADE\n");
	}
	else{
		printf("CLASSIFICAÇÃO: OBESIDADE GRAVE\n");
	}
}

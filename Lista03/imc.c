#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em v�rgula
	
	float peso, altura, imc;
	
	printf("Descubra seu IMC e qual classifica��o voc� se encaixa!\n\n");
	
	printf("Qual � o seu peso?(em Kg) ");
	scanf("%f", &peso);
	printf("Qual � a sua altura?(em M) ");
	scanf("%f", &altura);
	
	imc = peso/pow(altura,2);
	
	printf("\nSeu IMC �: %.1f\n", imc);
	
	if(imc<18.5){
		printf("CLASSIFICA��O: MAGREZA\n");
	}
	else if(imc>=18.5 && imc<=24.9){
		printf("CLASSIFICA��O: NORMAL\n");
	}
	else if(imc>=25 && imc<=29.9){
		printf("CLASSIFICA��O: SOBREPESO\n");
	}
	else if(imc>=30 && imc<=39.9){
		printf("CLASSIFICA��O: OBESIDADE\n");
	}
	else{
		printf("CLASSIFICA��O: OBESIDADE GRAVE\n");
	}
}

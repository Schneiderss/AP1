#include <stdio.h>
#include <locale.h>

int main(){
	
	//Permitindo que o programa leia acentos(transforma ponto em v�rgula)
	setlocale(LC_ALL, "Portuguese");
	
	double p, d, porcento;
	
	printf("Descubra quanto ficar� determinado produto com desconto!\n\n");
	
	/*Solicitando ao usu�rio o valor antes do desconto e o armazenando
	na vari�vel p*/
	printf("Qual � o valor original do produto(em R$)? ");
	scanf("%lf", &p);
	
	/*Solicitando a porcentagem do desconto e o armazenando
	na vari�vel d*/
	printf("Qual a porcentagem de desconto(em %%)? ");
	scanf("%lf", &d);
	
	//Tornando a vari�vel d em por cento
	porcento = d/100;
	
	//Printando o produto com o desconto
	printf("\nO valor com desconto de %.2lf%% ser�: R$%.2lf!\n", d, p*(1-porcento));
	
}

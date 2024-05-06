#include <stdio.h>
#include <locale.h>

int main(){
	
	//Permitindo que o programa leia acentos(transforma ponto em vírgula)
	setlocale(LC_ALL, "Portuguese");
	
	double p, d, porcento;
	
	printf("Descubra quanto ficará determinado produto com desconto!\n\n");
	
	/*Solicitando ao usuário o valor antes do desconto e o armazenando
	na variável p*/
	printf("Qual é o valor original do produto(em R$)? ");
	scanf("%lf", &p);
	
	/*Solicitando a porcentagem do desconto e o armazenando
	na variável d*/
	printf("Qual a porcentagem de desconto(em %%)? ");
	scanf("%lf", &d);
	
	//Tornando a variável d em por cento
	porcento = d/100;
	
	//Printando o produto com o desconto
	printf("\nO valor com desconto de %.2lf%% será: R$%.2lf!\n", d, p*(1-porcento));
	
}

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Permitindo que o programa leia acentos(transforma ponto em vírgula)
	setlocale(LC_ALL, "Portuguese");
	
	double vp, j, p;
	int t;
	
	printf("Descubra quanto ficará o preço de determinado produto à prazo!\n\n");
	
	//Solicitando ao usuário o valor principal e o armazenando na variável vp
	printf("Qual é o valor principal(em R$)? ");
	scanf("%lf", &vp);
	
	//Solicitando a taxa de juros anual e a armazenando na variável j
	printf("Qual é a taxa de juros anual(em %%)? ");
	scanf("%lf", &j);
	
	/*Solicitando ao usuário o período em que será aplicado o juros e 
	o armazenando na variável t*/
	printf("Qual será o período da aplicação do juros(em anos)? ");
	scanf("%d", &t);
	
	//Ajustando a variável j para por cento
	p = j/100;
	
	//Printando na tela o resultado do juros composto
	printf("\nO valor final de R$%.2lf em %d anos com juros de %.2lf%% é: R$%.2lf!\n", vp, t, j, vp*pow(1+p,t));
	
}

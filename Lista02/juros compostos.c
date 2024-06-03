#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Permitindo que o programa leia acentos(transforma ponto em v�rgula)
	setlocale(LC_ALL, "Portuguese");
	
	double vp, j, p;
	int t;
	
	printf("Descubra quanto ficar� o pre�o de determinado produto � prazo!\n\n");
	
	//Solicitando ao usu�rio o valor principal e o armazenando na vari�vel vp
	printf("Qual � o valor principal(em R$)? ");
	scanf("%lf", &vp);
	
	//Solicitando a taxa de juros anual e a armazenando na vari�vel j
	printf("Qual � a taxa de juros anual(em %%)? ");
	scanf("%lf", &j);
	
	/*Solicitando ao usu�rio o per�odo em que ser� aplicado o juros e 
	o armazenando na vari�vel t*/
	printf("Qual ser� o per�odo da aplica��o do juros(em anos)? ");
	scanf("%d", &t);
	
	//Ajustando a vari�vel j para por cento
	p = j/100;
	
	//Printando na tela o resultado do juros composto
	printf("\nO valor final de R$%.2lf em %d anos com juros de %.2lf%% �: R$%.2lf!\n", vp, t, j, vp*pow(1+p,t));
	
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	//Permitindo que o programa leia acentos(transforma ponto em v�rgula)
	setlocale(LC_ALL, "Portuguese");
	
	double R, D;
	
	printf("Descubra quantos d�lares voc� consegue comprar!\n\n");
	
	//Scolicitando ao usu�rio a quantia que quer transformar em d�lares
	printf("Quanto reais voc� tem? ");
	scanf("%lf", &R);
	
	//Solicitando ao usu�rio o valor do d�lar atual
	printf("Quanto est� o d�lar nesse momento? ");
	scanf("%lf", &D);
	
	//Printando a quantidade de d�lar que o usu�rio pode ter
	printf("\nCom R$%.2lf e o d�lar em $%.2lf, voc� poder� comprar $%.2lf d�lares!\n", R, D, R/D);
	
}

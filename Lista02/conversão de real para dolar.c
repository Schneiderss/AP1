#include <stdio.h>
#include <locale.h>

int main(){
	
	//Permitindo que o programa leia acentos(transforma ponto em vírgula)
	setlocale(LC_ALL, "Portuguese");
	
	double R, D;
	
	printf("Descubra quantos dólares você consegue comprar!\n\n");
	
	//Scolicitando ao usuário a quantia que quer transformar em dólares
	printf("Quanto reais você tem? ");
	scanf("%lf", &R);
	
	//Solicitando ao usuário o valor do dólar atual
	printf("Quanto está o dólar nesse momento? ");
	scanf("%lf", &D);
	
	//Printando a quantidade de dólar que o usuário pode ter
	printf("\nCom R$%.2lf e o dólar em $%.2lf, você poderá comprar $%.2lf dólares!\n", R, D, R/D);
	
}

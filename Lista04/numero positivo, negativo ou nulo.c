#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em v�rgula
	
	int numero;
	
	printf("Descubra se determinado n�mero � positivo, negativo ou zero!\n\n");
	
	printf("Digite algum n�mero: ");
	scanf("%d", &numero);
	
	if(numero>0){
		printf("\nEsse n�mero � positivo!\n");
	}
	else if(numero<0){
		printf("\nEsse n�mero � negativo!\n");
	}
	else if(numero==0){
		printf("\nEsse n�mero � nulo!\n");
	}
}

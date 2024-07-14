#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	int numero;
	
	printf("Descubra se determinado número é positivo, negativo ou zero!\n\n");
	
	printf("Digite algum número: ");
	scanf("%d", &numero);
	
	if(numero>0){
		printf("\nEsse número é positivo!\n");
	}
	else if(numero<0){
		printf("\nEsse número é negativo!\n");
	}
	else if(numero==0){
		printf("\nEsse número é nulo!\n");
	}
}

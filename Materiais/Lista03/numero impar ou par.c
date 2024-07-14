#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	int n;
	
	printf("Descubra se determinado número é par ou ímpar!\n\n");
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("\nO número é par\n");
	}
	else{
		printf("\nO número é ímpar\n");
	}
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("\nSua idade é: %d!", idade);
	
}

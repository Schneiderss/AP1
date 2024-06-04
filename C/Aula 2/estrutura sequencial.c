#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	printf("Escolha uma opção: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("O dia está frio");
		break;
		case 2:
			printf("O dia está quente");
		break;
		case 3:
			printf("O Aguinelo mentiu");
		break;
		default:
			printf("Chega");
	}
	
}

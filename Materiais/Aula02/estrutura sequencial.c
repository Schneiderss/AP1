#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	printf("Escolha uma op��o: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("O dia est� frio");
		break;
		case 2:
			printf("O dia est� quente");
		break;
		case 3:
			printf("O Aguinelo mentiu");
		break;
		default:
			printf("Chega");
	}
	
}

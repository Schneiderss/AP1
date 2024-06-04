#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Escreva um número de 1 a 5: ");
	scanf("%d", &num);
	
	switch(num){
		case 1:
			printf("Péssimo");
		break;
		case 2:
			printf("Ruim");
		break;
		case 3:
			printf("Médio");
		break;
		case 4:
			printf("Bom");
		break;
		case 5:
			printf("Excelente");
		break;
	}
}

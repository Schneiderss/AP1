#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	int numero;
	
	printf("Faça uma avaliação!\n\n");
	
	printf("Digite um número de 1 a 5, 1 sendo péssimo e 5 excelente. ");
	scanf("%d", &numero);
	
	if(numero==1){
		printf("\nPéssimo\n");
	}
	else if(numero==2){
		printf("\nRuim\n");
	}
	else if(numero==3){
		printf("\nMédio\n");
	}
	else if(numero==4){
		printf("\nBom\n");
	}
	else if(numero==5){
		printf("\nExcelente\n");
	}
}

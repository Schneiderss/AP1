#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em v�rgula
	
	int numero;
	
	printf("Fa�a uma avalia��o!\n\n");
	
	printf("Digite um n�mero de 1 a 5, 1 sendo p�ssimo e 5 excelente. ");
	scanf("%d", &numero);
	
	if(numero==1){
		printf("\nP�ssimo\n");
	}
	else if(numero==2){
		printf("\nRuim\n");
	}
	else if(numero==3){
		printf("\nM�dio\n");
	}
	else if(numero==4){
		printf("\nBom\n");
	}
	else if(numero==5){
		printf("\nExcelente\n");
	}
}

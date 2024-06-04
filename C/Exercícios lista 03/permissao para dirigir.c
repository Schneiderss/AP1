#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	int idade;
	char permissao[5];
	
	printf("Descubra se você pode dirigir!\n\n");
	
	printf("Qual é a sua idade? ");
	scanf("%d", &idade);
	printf("Sua carteira é válida?(sim ou não) ");
	fflush(stdin);
	scanf("%s", permissao);
	
	if(strcmp(permissao, "sim")==0){
		if(idade>=18){
			printf("\nPode dirigir\n");
		}
		else{
			printf("\nNão pode dirigir\n");
		}
	}
	else{
		printf("\nNão pode dirigir\n");
	}
}

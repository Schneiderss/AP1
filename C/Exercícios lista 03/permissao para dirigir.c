#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em v�rgula
	
	int idade;
	char permissao[5];
	
	printf("Descubra se voc� pode dirigir!\n\n");
	
	printf("Qual � a sua idade? ");
	scanf("%d", &idade);
	printf("Sua carteira � v�lida?(sim ou n�o) ");
	fflush(stdin);
	scanf("%s", permissao);
	
	if(strcmp(permissao, "sim")==0){
		if(idade>=18){
			printf("\nPode dirigir\n");
		}
		else{
			printf("\nN�o pode dirigir\n");
		}
	}
	else{
		printf("\nN�o pode dirigir\n");
	}
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	int mediaAluno, faltas;
	
	printf("Descubra se você foi aprovado!\n\n");
	
	printf("Qual foi a sua média? ");
	scanf("%d", &mediaAluno);
	printf("Qual é a sua porcentagem de falta(em %%)? ");
	scanf("%d", &faltas);
	
	if(mediaAluno >= 7 && faltas<=25){
		printf("\nAluno aprovado\n");
	}
	else{
		printf("\nAluno reprovado\n");
	}
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em v�rgula
	
	int mediaAluno, faltas;
	
	printf("Descubra se voc� foi aprovado!\n\n");
	
	printf("Qual foi a sua m�dia? ");
	scanf("%d", &mediaAluno);
	printf("Qual � a sua porcentagem de falta(em %%)? ");
	scanf("%d", &faltas);
	
	if(mediaAluno >= 7 && faltas<=25){
		printf("\nAluno aprovado\n");
	}
	else{
		printf("\nAluno reprovado\n");
	}
}

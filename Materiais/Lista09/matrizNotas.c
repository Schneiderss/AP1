#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][4]={{1,0,0,0}, {2,0,0,0}, {3,0,0,0}}, i, j;
	int media[3]={0,0,0};
	
	for(i=0; i<3; i++){
		for(j=1; j<4; j++){
			printf("Digite a nota do aluno: ");
			scanf("%d", &matriz[i][j]);
		}
		printf("Próximo aluno\n");
	}
	
	for(i=0; i<3; i++){
		for(j=1; j<4; j++){
			media[i] += matriz[i][j];
		}
	}
	
	for(i=0; i<3; i++){
		printf("A media de notas do aluno %d é %d\n", matriz[i][0], media[i]/3);
	}
}

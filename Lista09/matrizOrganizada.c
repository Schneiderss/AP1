#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3], i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite um número: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
}

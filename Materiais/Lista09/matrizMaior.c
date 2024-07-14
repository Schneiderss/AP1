#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[4][4];
	int i, j, maior, pos1, pos2;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Escreva algum número: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	maior = matriz[0][0];
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(matriz[i][j]>maior){
				maior = matriz[i][j];
				pos1 = i+1;
				pos2 = j+1;
			}
		}
	}
	
	printf("O maior número dessa matriz é: %d e está na posição [%d][%d]\n", maior, pos1, pos2);
}

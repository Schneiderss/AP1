#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3], i, j, procurar, count=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite algum número: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("Digite algum número que gostaria de procurar nessa matriz: ");
	scanf("%d", &procurar);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(matriz[i][j] == procurar){
				printf("Esse número está na matriz e na posição [%d][%d]\n", i+1, j+1);
				count++;
			}
		}
	}
	
	if(count == 0){
		printf("Esse número não está na matriz\n");
	}
}

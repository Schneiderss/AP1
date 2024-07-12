#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char matriz[3][100];
	int i;
	
	for(i=0; i<3; i++){
		printf("Escreva um nome: ");
		fgets(matriz[i], 100, stdin);
		matriz[i][strcspn(matriz[i], "\n")] = '\0';
	}
	
	
	for(i=0; i<3; i++){
		printf("[%s]\n", matriz[i]);
	}
}

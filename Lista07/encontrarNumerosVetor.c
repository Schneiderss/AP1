#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int v[10], i, n, count=0;
	
	printf("Procure determinado número e sua respectiva posição no vetor entre 10 números!\n\n");
	
	printf("Escolha o primeiro número: ");
	scanf("%d", &v[0]);
	
	for(i=1; i<10; i++){
		printf("Escolha outro número: ");
		scanf("%d", &v[i]);
	}
	
	printf("\n");
	
	printf("Escolha um número que deseja procurar no vetor: ");
	scanf("%d", &n);
	
	printf("\n");
	
	for(i=0; i<10; i++){
		if(v[i]==n){
			printf("Está na posição %d\n", i+1);
		}
		else{
			count++;
		}
	}
	
	if(count==10){
		printf("O número informado não foi encontrado!\n");
	}
	
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int v[10], i, n, count=0;
	
	printf("Procure determinado n�mero e sua respectiva posi��o no vetor entre 10 n�meros!\n\n");
	
	printf("Escolha o primeiro n�mero: ");
	scanf("%d", &v[0]);
	
	for(i=1; i<10; i++){
		printf("Escolha outro n�mero: ");
		scanf("%d", &v[i]);
	}
	
	printf("\n");
	
	printf("Escolha um n�mero que deseja procurar no vetor: ");
	scanf("%d", &n);
	
	printf("\n");
	
	for(i=0; i<10; i++){
		if(v[i]==n){
			printf("Est� na posi��o %d\n", i+1);
		}
		else{
			count++;
		}
	}
	
	if(count==10){
		printf("O n�mero informado n�o foi encontrado!\n");
	}
	
	return 0;
}

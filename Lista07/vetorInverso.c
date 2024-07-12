#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int v[10], i;
	
	printf("Escolha o primeiro número: ");
	scanf("%d", &v[0]);
	
	for(i=1; i<10; i++){
		printf("Escolha outro número: ");
		scanf("%d", &v[i]);
	}
	
	printf("\n");
	
	for(i=9; i>=0; i--){
		printf("%d ", v[i]);
	}
	
	printf("\n");
	
	return 0;
	
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int v[12], i, d[12];
	
	printf("Escolha o primeiro número: ");
	scanf("%d", &v[0]);
	
	for(i=1; i<12; i++){
		printf("Escolha outro número: ");
		scanf("%d", &v[i]);
	}
	
	printf("\n");
	
	for(i=0; i<12; i++){
		d[i] = 2*v[i];
	}
	
	for(i=0; i<12; i++){
		printf("%d ", d[i]);
	}
	
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int m[5], i, sum=0;
	
	printf("Descubra a m�dia entre 5 n�meros escolhidos por voc�!\n\n");
	
	printf("Escolha o primeiro n�mero: ");
	scanf("%d", &m[0]);
	
	for(i=1; i<5; i++){
		printf("Escolha outro n�mero: ");
		scanf("%d", &m[i]);
	}
	for(i=0; i<5; i++){
		sum += m[i];
	}
	
	printf("Sua m�dia �: %d", sum/5);
}

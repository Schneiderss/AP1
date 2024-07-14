#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int m[5], i, sum=0;
	
	printf("Descubra a média entre 5 números escolhidos por você!\n\n");
	
	printf("Escolha o primeiro número: ");
	scanf("%d", &m[0]);
	
	for(i=1; i<5; i++){
		printf("Escolha outro número: ");
		scanf("%d", &m[i]);
	}
	for(i=0; i<5; i++){
		sum += m[i];
	}
	
	printf("Sua média é: %d", sum/5);
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int v[8], i, maior, menor;
	
	printf("Descubra o maior e o menor número de uma sequência aleatória de 8 números que você determinar!\n\n");
	
	printf("Escolha o primeiro número: ");
	scanf("%d", &v[0]);
	
	for(i=1; i<8; i++){
		printf("Escolha outro número: ");
		scanf("%d", &v[i]);
	}
	
	maior = v[0];
	menor = v[0];
	
	for(i=0; i<8; i++){
		if(v[i]>maior){
			maior = v[i];
		}
		else if(v[i]<menor){
			menor = v[i];
		}
	}
	
	printf("O maior e o menor número são, respectivamente, %d e %d\n", maior, menor);
	
	return 0;
}

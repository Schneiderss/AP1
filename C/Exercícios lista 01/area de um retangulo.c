#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura;
	float comp;
	
	printf("Descubra a �rea de um ret�ngulo qualquer!\n\n");
	printf("Digite uma altura: ");
	scanf("%f", &altura);
	printf("Digite um comprimento: ");
	scanf("%f", &comp);
	
	printf("\nA �rea desse ret�ngulo �: %.2f", altura*comp);
	
}

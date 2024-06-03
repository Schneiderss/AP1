#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura;
	float comp;
	
	printf("Descubra a área de um retângulo qualquer!\n\n");
	printf("Digite uma altura: ");
	scanf("%f", &altura);
	printf("Digite um comprimento: ");
	scanf("%f", &comp);
	
	printf("\nA área desse retângulo é: %.2f", altura*comp);
	
}

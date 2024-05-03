#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	const double pi = 3.14159265;
	
	printf("Descubra a área de um círculo qualquer!\n\n");
	printf("Informe o raio do círculo: ");
	scanf("%f", &raio);
	
	printf("\nA área desse círculo é %.2f!", pi*pow(raio, 2));
	
}

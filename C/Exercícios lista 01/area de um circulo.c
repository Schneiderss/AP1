#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	const double pi = 3.14159265;
	
	printf("Descubra a �rea de um c�rculo qualquer!\n\n");
	printf("Informe o raio do c�rculo: ");
	scanf("%f", &raio);
	
	printf("\nA �rea desse c�rculo � %.2f!", pi*pow(raio, 2));
	
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	float temp;
	
	printf("Conversor Celsius para Fahrenheit!\n\n");
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &temp);
	
	printf("\nA temperatura em Fahrenheit é: %.2f", temp*9/5+32);
	
}

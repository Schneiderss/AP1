#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Declaração de variáveis
	int numero;
	float numeroReal;
	char caractere;
	double numeroPreciso;
	
	//Declaração de constante
	const float PI = 3.14;
	
	//ler atribuições das variáveis
	printf("Numero inteiro: ");
	scanf("%i", &numero);
	printf("Numero real: ");
	scanf("%f", &numeroReal);
	setbuf(stdin, NULL); //Limpar buffer para atribuir caracteres
	printf("Um caractere: ");
	scanf("%c", &caractere);
	printf("Numero real com mais decimais: ");
	scanf("%lf", &numeroPreciso);
	
	//Printando os dados informados pelo usúario
	printf("Numero inteiro: %d. \n", numero);
	printf("Numero real: %.2f. \n", numeroReal);
	printf("Caractere: %c. \n", caractere);
	printf("Numero preciso: %.4lf. \n", numeroPreciso);
	
	//Determinando novos valores para as variáveis
	numero = 10;
	numeroPreciso = 10.5;
	caractere = 'B';
	numeroReal = 5.11;
	
	//Printando novos dados atribuidos
	printf("Numero inteiro: %i \n", numero);
	printf("Numero real: %.2f \n", numeroReal);
	printf("Caractere: %c \n", caractere);
	printf("Numero preciso: %.4lf \n", numeroPreciso);
	
}

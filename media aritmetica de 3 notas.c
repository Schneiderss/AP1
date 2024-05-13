#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	float n1;
	float n2;
	float n3;
	
	printf("Descubra a média aritmética de suas notas! \n\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("\nA sua média é: %.2f!", (n1+n2+n3)/3);
	
}

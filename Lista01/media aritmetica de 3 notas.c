#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1;
	float n2;
	float n3;
	
	printf("Descubra a m�dia aritm�tica de suas notas! \n\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("\nA sua m�dia �: %.2f!", (n1+n2+n3)/3);
	
}

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1;
	float n2;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%f", &n1);
	printf("Digite outro n�mero: ");
	scanf("%f", &n2);
	
	printf("\nA soma entre %.0f e %.0f � %.0f \n", n1, n2, n1+n2);
	printf("A diferen�a entre %.0f e %.0f � %.0f \n", n1, n2, n1-n2);
	printf("A multiplica��o entre %.0f e %.0f � %.0f \n", n1, n2, n1*n2);
	printf("A divis�o entre %.0f e %.0f � %.4f", n1, n2, n1/n2);
	
}

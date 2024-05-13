#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	float n1;
	float n2;
	
	printf("Digite um número inteiro: ");
	scanf("%f", &n1);
	printf("Digite outro número: ");
	scanf("%f", &n2);
	
	printf("\nA soma entre %.0f e %.0f é %.0f \n", n1, n2, n1+n2);
	printf("A diferença entre %.0f e %.0f é %.0f \n", n1, n2, n1-n2);
	printf("A multiplicação entre %.0f e %.0f é %.0f \n", n1, n2, n1*n2);
	printf("A divisão entre %.0f e %.0f é %.4f", n1, n2, n1/n2);
	
}

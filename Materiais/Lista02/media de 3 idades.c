#include <stdio.h>
#include <locale.h>

int main(){

	int i1, i2, i3;	
	
	//Permitindo que o programa leia acentos(transforma ponto em v�rgula)
	setlocale(LC_ALL, "Portuguese");
	
	printf("Descubra a m�dia entre 3 idades!\n\n");
	
	//Solicitando as idades para o usu�rio
	printf("Digite a primeira idade: ");
	scanf("%d", &i1);
	
	printf("Digite a segunda idade: ");
	scanf("%d", &i2);
	
	printf("Digite a terceira idade: ");
	scanf("%d", &i3);
	
	//Printando o resultado da m�dia para o usu�rio
	printf("\nA m�dia entre as idades %d, %d e %d anos � %.2f!\n", i1, i2, i3, (i1+i2+i3)/3.0);
	
}

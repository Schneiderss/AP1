#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em v�rgula
	
	int n;
	
	printf("Descubra se determinado n�mero � par ou �mpar!\n\n");
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("\nO n�mero � par\n");
	}
	else{
		printf("\nO n�mero � �mpar\n");
	}
}

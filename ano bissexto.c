#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em v�rgula
	
	int ano;
	
	printf("Descubra se determinado ano � bissexto!\n\n");
	
	printf("Digite um ano: ");
	scanf("%d", &ano);
	
	if(ano%4==0 && ano%100!=0){
		printf("\nAno bissexto\n");
	}
	else if(ano%400==0){
		printf("\nAno bissexto\n");
	}
	else{
		printf("\nAno n�o bissexto\n");
	}
}

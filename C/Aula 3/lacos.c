#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i=0, soma=0;
	
/*	while(i<5){
		printf("Valor de i: %d\n", i);
		i++;
	}*/
	
/*	do{
		printf("Digite um valor: ");
		scanf("%d", &i);
	}
	while(i!=0);*/
	
	for(i=0; i<5; i++){
		soma = soma + 10;
		printf("%d\n", soma);
	}
	
	
	return 0;
	
}

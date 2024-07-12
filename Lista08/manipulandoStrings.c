#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char frase[100], copia[100];
	int count=0, i, letras;
	
	printf("Escreva alguma frase: ");
	fgets(frase, 100, stdin);
	fflush(stdin);
	
	for(i=0; frase[i]!='\0'; i++){
		if(frase[i]==' ' || frase[i]=='\n'){
			count++;
		}
	}
	
	strcpy(copia, frase);
	
	letras = strlen(frase) - count;
	
	strupr(frase);
	
	strlwr(copia);
	
	printf("O número de palavras da frase é %d\n", count);
	printf("O número de letras que a frase tem é %d\n", letras);
	printf("A frase toda maiúscula é: %s", frase);
	printf("A frase tod minúscula é: %s\n", copia);
	
	return 0;
}

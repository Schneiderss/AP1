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
	
	printf("O n�mero de palavras da frase � %d\n", count);
	printf("O n�mero de letras que a frase tem � %d\n", letras);
	printf("A frase toda mai�scula �: %s", frase);
	printf("A frase tod min�scula �: %s\n", copia);
	
	return 0;
}

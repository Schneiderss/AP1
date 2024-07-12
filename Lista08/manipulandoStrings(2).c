#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char string[100], inversao[100];
	int i, letras, count = 1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escreva o que quiser: ");
	fgets(string, 100, stdin);
	fflush(stdin);
	
	string[strcspn(string, "\n")] = '\0';
	
	letras = strlen(string);
	strlwr(string);
	
	for(i=0; i<letras; i++){
		inversao[i] = string[letras-1-i];
	}
	
	inversao[letras] = '\0';
	strlwr(inversao);
	
	for(i=0; i<letras; i++){
		if(tolower(string[i]) != tolower(string[letras-1-i])){
			count = 0;
			break;
		}
	}
	
	printf("A frase invertida é: %s", inversao);
	
	printf("\n");
	
	if(count == 1){
		printf("Essa frase é palíndroma\n");
	}
	else{
		printf("Essa frase não é palíndroma\n");
	}
	
	return 0;
}

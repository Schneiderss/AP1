#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char string[100], spaceless[100], letra[1];
	int i, j=0;
	
	printf("Escreva uma frase: ");
	fgets(string, 100, stdin);
	
	string[strcspn(string, "\n")] = '\0';
	
	for(i=0; i<strlen(string); i++){
		if(string[i] != ' '){
			spaceless[j] = string[i];
			j++;
		}
	}
	
	spaceless[j++] = '\0';
	
	printf("Escolha alguma letra dentro da frase escrita anteriormente para ser substituida por *: ");
	fflush(stdin);
	scanf("%c", &letra[0]);
	
	for(i=0; i<strlen(string); i++){
		if(tolower(string[i]) == tolower(letra[0])){
			string[i] = '*';
		}
	}
	
	printf("A frase sem espaços: %s\n", spaceless);
	printf("A frase modificada: %s\n", string);
}

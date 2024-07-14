#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char string[100];
	int i, count=0;
	
	printf("Escreva uma frase: ");
	fgets(string, 100, stdin);
	
	string[strcspn(string, "\n")] = '\0';
	
	for(i=0; i<strlen(string); i++){
		if(tolower(string[i])=='a'||tolower(string[i])=='e'||tolower(string[i])=='i'||tolower(string[i])=='o'||tolower(string[i])=='u'){
			count++;
			string[i] = '_';
		}
	}
	
	printf("A frase sem vogais: %s\n", string);
	printf("A quantidade de vogais da frase: %d\n", count);
}

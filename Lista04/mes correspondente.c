#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");//Transforma ponto em vírgula
	
	int mes;
	
	printf("Descubra qual mês corresponde a determinado número de 1 a 12!\n\n");
	
	printf("Digite um número de 1 a 12: ");
	scanf("%d", &mes);
	
	if(mes==1){
		printf("\nJaneiro\n");
	}
	else if(mes==2){
		printf("\nFevereiro\n");
	}
	else if(mes==3){
		printf("\nMarço\n");
	}
	else if(mes==4){
		printf("\nAbril\n");
	}
	else if(mes==5){
		printf("\nMaio\n");
	}
	else if(mes==6){
		printf("\nJunho\n");
	}
	else if(mes==7){
		printf("\nJulho\n");
	}
	else if(mes==8){
		printf("\nAgosto\n");
	}
	else if(mes==9){
		printf("\nSetembro\n");
	}
	else if(mes==10){
		printf("\nOutubro\n");
	}
	else if(mes==11){
		printf("\nNovembro\n");
	}
	else if(mes==12){
		printf("\nDezembro\n");
	}
}

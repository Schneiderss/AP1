#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, n, i, count=0, idade, indice;
	int numero, resultado=0;
	float media, somaIdades=0, possibilidades;
	double atual, num1, num2;
	
	do{
		printf("Escolha a ação que você deseja!\n\n");
		
		for(i=0; i<=15; i++){
			printf("-");
		}
		
		printf("Menu");
		
		for(i=0; i<=15; i++){
			printf("-");
		}
		
		printf("\n");
		
		printf("1)Média das idades informadas.\n");
		printf("2)Sequência de Fibonacci até o índice informado.\n");
		printf("3)Descubra se o número informado é primo.\n");
		
		for(i=0; i<=35; i++){
			printf("-");
		}
		
		printf("\n");
		
		scanf("%d", &opcao);
		printf("\n");
		
		if(opcao!=1 && opcao!=2 && opcao!=3){
			while(opcao!=1 || opcao!=2 || opcao!= 3){
				printf("Opção inválida!\nDigite uma opção válida: ");
				scanf("%d", &opcao);
				printf("\n");
				if(opcao==1 || opcao==2 || opcao==3){
					break;
				}
			}
		}
		
		printf("\n");
		
		switch(opcao){
			case 1:
				printf("Para encerrar essa opção, digite qualquer número negativo!\n\n");
				printf("Digite a primeira idade: ");
				scanf("%d", &idade);
				while(idade>=0){
					count++;
					somaIdades = somaIdades + idade;
					printf("Digite outra idade: ");
					scanf("%d", &idade);
				}
				media = somaIdades/count;
				if(count==1){
					printf("A idade é: %.1f\n\n", somaIdades);
				}
				else{
					printf("\nA média dessas idades é: %.1f.\n\n", media);
				}
				break;
			case 2:
				i = 2;
				num1 = 1;
				num2 = 1;
				atual = 1;
				printf("Digite o índice: ");
				scanf("%d", &indice);
				printf("\n");
				if(indice==1){
					printf("0");
				}
				else{
					printf("0 1 ");
					while(i<indice){
					printf("%.0lf ", atual);
					atual = num1 + num2;
					num1 = num2;
					num2 = atual;
					i++;
					}
				}
				printf("\n\n");
				break;
			case 3:
				printf("Digite um número: ");
				scanf("%d", &numero);
				possibilidades = sqrt(numero);
				i = 2;
				while(i<=possibilidades){
					if(numero%i==0){
						resultado++;
					}
					i++;
				}
				if(resultado==0){
					printf("\nEsse número é primo!\n\n");
				}
				else{
					printf("\nEsse número não é primo!\n\n");
				}
				break;
		}
		
		printf("Se você deseja encerrar o programa, digite 0.\n");
		printf("Caso queira repetir o programa, digite 1.\n\n");
		scanf("%d", &n);
		
		if(n!=0 && n!=1){
			while(n!=0 || n!=1){
				printf("\nOpção inválida!\nDigite alguma válida: ");
				scanf("%d", &n);
				if(n==1 || n==0){
					break;
				}
			}
		}
		
		printf("\n");
		
	}
	while(n!=0);

	return 0;
	
}

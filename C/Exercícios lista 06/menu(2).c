#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, i, n, num[5], maior, menor, numero;
	
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
		
		printf("1)Escolha 5 números inteiros de sua escolha, e aparecerá apenas os pares dentre eles.\n");
		printf("2)Digite 5 números inteiros e aparecerá o maior e menor entre eles.\n");
		printf("3)Descubra a tabuada de qualquer número!\n");
		
		for(i=0; i<=35; i++){
			printf("-");
		}
		
		printf("\n");
		
		scanf("%d", &opcao);
		
		if(opcao!=1 && opcao!=2 && opcao!=3){
			while(opcao!=1 || opcao!=2 || opcao!=3){
				printf("Opcão inválida\nDigite uma opção válida: ");
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
				printf("Digite o primeiro número: ");
				scanf("%d", &num[0]);
				for(i=1; i<5;i++){
					printf("Digite outro número: ");
					scanf("%d", &num[i]);
				}
				printf("\n");
				printf("Os números pares são: ");
				for(i=0; i<5; i++){
					if(num[i]%2==0){
						printf("%d ", num[i]);
					}
				}
				printf("\n\n");
				break;
			case 2:
				printf("Digite o primeiro número: ");
				scanf("%d", &num[0]);
				maior = num[0];
				menor = num[0];
				for(i=1; i<5; i++){
					printf("Digite outro número: ");
					scanf("%d", &num[i]);
					if(num[i]>maior){
						maior = num[i];
					}
					if(menor>num[i]){
						menor = num[i];
					}
				}
				printf("\nO maior número é %d e o menor número é %d.\n\n", maior, menor);
				break;
			case 3:
				printf("Digite o número desejado: ");
				scanf("%d", &numero);
				printf("\n");
				for(i=1; i<=10; i++){
					printf("%dx%d = %d\n", numero, i, numero*i);
				}
				printf("\n");
				break;
		}
	
		printf("Se você deseja encerrar o programa, digite 0.\n");
		printf("Caso queira repetir o programa, digite 1.\n");
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

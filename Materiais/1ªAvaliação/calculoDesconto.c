//Discente: Luís Felipe Schneiders Gonçalves
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float total, desconto, valorDesconto, valorFinal;
	char cupom[1];
	
	printf("Digite o valor total da compra: ");
	scanf("%f", &total);
	
	if(total<=0){
		printf("Valor inválido!\n\n");
		printf("Digite um valor válido: ");
		scanf("%f", &total);
	}
	
	printf("\nDigite seu cupom de desconto: ");
	fflush(stdin);
	scanf("%c", &cupom[1]);
	
	//Verificando a validade do cupom.
	switch(cupom[1]){
		case 'A':
			printf("\nCupom válido.\nAplicado.\n");
			break;
		case 'B':
			printf("\nCupom válido.\nAplicado.\n");
			break;
		case 'C':
			printf("\nCupom válido.\nAplicado.\n");
			break;
		case 'D':
			printf("\nCupom válido.\nAplicado.\n");
			break;
		case 'E':
			printf("\nCupom válido.\nAplicado.\n");
			break;
		default:
			printf("Cupom inválido\n\n");
			printf("Digite um cupom válido: ");
			fflush(stdin);
			scanf("%c", &cupom[1]);
			printf("\n");
	}
	
	//Desconto aplicado.
	switch(cupom[1]){
		case 'A':
			printf("\nDesconto aplicado: 10%%\n\n\n");
			desconto = 0.1;
			break;
		case 'B':
			printf("\nDesconto aplicado: 20%%\n\n\n");
			desconto = 0.2;
			break;
		case 'C':
			printf("\nDesconto aplicado: 30%%\n\n\n");
			desconto = 0.3;
			break;
		case 'D':
			printf("\nDesconto aplicado: 40%%\n\n\n");
			desconto = 0.4;
			break;
		case 'E':
			printf("\nDesconto aplicado: 50%%\n\n\n");
			desconto = 0.5;
			break;
	}
	
	valorDesconto = total*desconto;
	valorFinal = total - valorDesconto;
	
	for(i=0; i<=18; i++){
		printf(" ");
	}
	printf("NOTA FISCAL\n");
	
	for(i=0;i<=50;i++){
		printf("-");
	}
	printf("\n");
	
	printf("Valor sem desconto: %.2f.\n\n", total);
	printf("Cupom escolhido: %c, porcentagem de desconto %.0f%%.\n\n", cupom[1], desconto*100);
	printf("Valor do desconto: %.2f.\n\n", valorDesconto);
	printf("Valor Final: %.2f.\n", valorFinal);
	
	for(i=0; i<=50; i++){
		printf("-");
	}
	
	printf("\n");
	
	return 0;
}

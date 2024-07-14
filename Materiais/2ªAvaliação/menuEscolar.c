#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float notas[3][3], medias[3]={0, 0,0};
	int matriculas[3], i, j, n, count=0;
	char nomes[3][50];
	
	
	for(i=0; i<3; i++){
		count++;
		fflush(stdin);
		printf("D� o nome do aluno: ");
		fgets(nomes[i], 50, stdin);

		printf("Sua matr�cula: ");
		scanf("%d", &matriculas[i]);
		
		if(count==2 || count==3){
			if(count==2){
				while(matriculas[0]==matriculas[1]){
					printf("Matr�cula incorreta, digite a correta: ");
					scanf("%d", &matriculas[1]);
				}
			}
			if(count==3){
				while(matriculas[0]==matriculas[2] || matriculas[1]==matriculas[2]){
					printf("Matr�cula incorreta, digite a correta: ");
					scanf("%d", &matriculas[2]);
				}
			}
		}

		
		printf("Agora, d� as notas desse aluno.\n");
		
		for(j=0; j<3; j++){
			printf("Nota: ");
			scanf("%f", &notas[i][j]);
			while(notas[i][j]<0 || notas[i][j]>10){
				printf("Nota inv�lida, digite uma v�lida: ");
				scanf("%f", &notas[i][j]);
			}
		}
		
		if(i==2){
			break;
		}
		
		printf("\nGostaria de armazenar mais informa��es? Digite 1, caso contr�rio, digite 0\n");
		scanf("%d", &n);
		
		while(n!=1 && n!=0){
			if(n!=1 || n!=0){
				printf("Op��o inv�lida, digite uma v�lida: ");
				scanf("%d", &n);
			}
			if(n==1 || n==0){
				break;
			}
		}
		
		printf("\n");
		
		if(n==0){
			break;
		}
	}
	
	for(i=0; i<count; i++){
		for(j=0; j<3; j++){
			medias[i] += notas[i][j];
		}
	}
	
	for(i=0; i<count; i++){
		for(j=0; j<20; j++){
			printf(" ");
		}
		printf("Boletim\n\n");
		printf("Aluno: %s\n", nomes[i]);
		printf("Sua matr�cula: %d\n", matriculas[i]);
		printf("Suas notas: %.1f, %.1f, %.1f\n", notas[i][0], notas[i][1], notas[i][2]);
		printf("Sua m�dia final: %.1f\n\n", medias[i]/3);
	}

	
	return 0;
}

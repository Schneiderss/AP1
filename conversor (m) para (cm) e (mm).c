#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float medida;
	
	printf("Converta uma medida de metros(m) em (cm) e (mm)!\n\n");
	printf("D� alguma medida em (m): ");
	scanf("%f", &medida);
	
	printf("\nA medida %.2fm, � %.2fcm", medida, medida*pow(10, 2));
	printf("\nA medida %.2fm, � %.2fmm", medida, medida*pow(10, 3));
	
}

/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
11-12-2021
5.3 Desenvolva um programa para calcular e comparar
a área de dois retângulos A e B. O programa deverá
dizer qual retângulo possui a maior área ou se
ambos possuem tamanhos iguais. Dados de entrada:
tamanho da base e da altura (tipo das variáveis:
inteiro, valor em centímetros).
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int base_A, base_B, altura_A, altura_B, area_A, area_B; 
	printf("\t\tCOMPARACAO DE BASE DE DOIS RETANGULOS\n\n");
	printf("Informe a base do retangulo A:");
	scanf("%d", &base_A);
	printf("Informe a altura do retangulo A:");
	scanf("%d", &altura_A);
	
	area_A = base_A * altura_A;
	
	printf("Informe a base do retangulo B:");
	scanf("%d", &base_B);
	printf("Informe a altura do retangulo B:");
	scanf("%d", &altura_B);
	
	area_B = base_B * altura_B;
	
	if(area_A > area_B){
		printf("Area do retangulo A: %d\n", area_A);
		printf("Area do retangulo B: %d\n", area_B);
		printf("O retangulo A possui area maior do que o retangulo B\n");
	} else if (area_B > area_A){
		printf("Area do retangulo B: %d\n", area_B);
		printf("Area do retangulo A: %d\n", area_A);
		printf("O retangulo B possui area maior do que o retangulo A\n");
	} else{
		printf("Os dois retangulos possuem area iguais");
	}
	
	return 0;
}
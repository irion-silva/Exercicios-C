/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
14-12-2021
5.12 Faça um programa em C que leia três números
diferentes (assuma que o sejam) e os imprima na tela
em ordem crescente.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num_A, num_B, num_C;
	printf("\t\tNUMEROS EM ORDEM CRESCENTE:\n\n");
	printf("Informe o primeiro numero:");
	scanf("%d", &num_A);
	do {
	printf("Informe o segundo numero(diferente de %d)", num_A);
	scanf("%d", &num_B);
	if(num_B == num_A){
		printf("Informe um numero diferente\n");
	}
	} while(num_B == num_A);
	do {
	printf("Informe o terceiro numero(diferente de %d e %d)", num_A, num_B);
	scanf("%d", &num_C);
	if(num_C == num_A || num_C == num_B){
		printf("Informe um numero diferente\n");
	}
	} while(num_C == num_A || num_C == num_B);
	
	if(num_A < num_B && num_A < num_C){
		if(num_B < num_C){
			printf("%d, %d, %d", num_A, num_B, num_C);
		} else {
			printf("%d, %d, %d", num_A, num_C, num_B);
		}
	} else if(num_B < num_A && num_B < num_C){
		if(num_A < num_C){
			printf("%d, %d, %d", num_B, num_A, num_C);
		} else {
			printf("%d, %d, %d", num_B, num_C, num_A);
		}
	} else{
		if(num_A < num_B){
			printf("%d, %d, %d", num_C, num_A, num_B);
		} else {
			printf("%d, %d, %d", num_C, num_B, num_A);
		}
	}
	return 0;
}
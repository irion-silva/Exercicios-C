/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
12-12-2021
5.13 Elabore um programa em C que leia dois números
inteiros e apresente o resultado da diferença do maior
número pelo menor deles.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num_1, num_2, dif;
	
	printf("\t\tDIFERENCA DO MAIOR PARA O MENOR\n\n");
	printf("Informe um numero:");
	scanf("%d", &num_1);
	printf("Informe outro numero:");
	scanf("%d", &num_2);
	
	if(num_1 > num_2){
		dif = num_1 - num_2;
		printf("A diferenca do maior numero para o menor eh:%d\n", dif);
	} else if(num_2 > num_2) {
		dif = num_2 - num_1;
		printf("A diferença do maior numero para o menor eh:%d\n", dif);
	} else {
		printf("Os numeros sao iguais, a diferenca entre eles eh 0\n");
	}
	return 0;
}
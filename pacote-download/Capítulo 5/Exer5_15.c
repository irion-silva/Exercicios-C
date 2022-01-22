/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
14-12-2021
5.15 Faça um programa em C que leia dois números inteiros
e apresente a soma do módulo desses dois números.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num_1, num_2, mod_1, mod_2;
	
	printf("\t\tSOMA DO MODULO DE DOIS NUMEROS:\n\n");
	printf("Informe um numero:");
	scanf("%d", &num_1);
	printf("Informe outro numero:");
	scanf("%d", &num_2);
	
	if(num_1 >= 0){
		mod_1 = num_1;
	} else if(num_1 < 0){
		mod_1 = -num_1;
	}
	
	if(num_2 >= 0){
		mod_2 = num_2;
	} else if(num_2 < 0){
		mod_2 = -num_2;
	}
	
	printf("A soma dos modulos eh:%d", mod_1+mod_2);
	return 0;
}
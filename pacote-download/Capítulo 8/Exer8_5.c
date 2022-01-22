/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Final - 03-01-2022
8.5 Faça um programa que mostre todos os números
pares existentes entre 1 e 50.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num = 1;
	
	printf("Os numeros pares entre 1 e 50 sao:\n");
	
	do
	{
		if(num % 2 == 0)
		{
			printf("%d ", num);
		}
		num++;
	} while(num < 50);
	
	printf("\n");
	
	return 0;
}
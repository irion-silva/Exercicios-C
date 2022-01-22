/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Final - 29-12-2021
8.1 Dado um número, crie um programa C que escreva
todos os números ímpares menores que esse
número e maiores do que um. Assuma que o número
informado é positivo.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num, auxnum;
	printf("\t\tIMPARES E MAIORES QUE UM NUMERO:\n\n");
	printf("Informe um numero inteiro positivo maior que 3:");
	scanf("%d", &num);
	
	do
	{
		if(num <= 3){
		printf("Erro! Informe um numero inteiro positivo maior que 3:");
		scanf("%d", &num);
		}
	}while(num <= 3);
	
	auxnum = num;
	
	if(auxnum % 2 == 1)
	{
		auxnum = auxnum - 2;
	}
	
	if(auxnum % 2 == 0)
	{
		auxnum = auxnum - 1;
	}
	
	do
	{
		if(auxnum % 2 == 1){
			printf("%d ", auxnum);
		}
		auxnum = auxnum - 2;
	}while(auxnum >= 3);
	
	return 0;
}
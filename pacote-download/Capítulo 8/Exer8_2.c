/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Final - 29-12-2021
8.2 Dado um conjunto de N números, faça um programa
C que calcule e que mostre a média aritmética dos
elementos do conjunto.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int qtd, cont = 1;
	double num, soma = 0;
	printf("\t\tMEDIA ARITMETICA DE N NUMEROS\n\n");
	printf("Digite a quantidade de numeros que voce deseja calcular:");
	scanf("%d", &qtd);
	
	do
	{
		if(qtd <= 0)
		{
			printf("Erro! Informe uma quantidade maior que 0:");
			scanf("%d", &qtd);
		}
	} while(qtd <= 0);
	
	do
	{
		printf("Informe o %d.o numero:", cont);
		scanf("%lf", &num);
		cont++;
		soma += num;
	} while(cont <= qtd);
	
	printf("\nA media dos numeros fornecidos eh:%.2lf\n", soma/qtd);
	
	return 0;
}
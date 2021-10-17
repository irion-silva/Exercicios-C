/*Lista de Exercícios - Estrutura de Controle de Fluxo(Seleção Simples) - 16-10-2021
4.7 Faça um programa que receba um número inteiro
e que verifique se esse número é par ou ímpar.
O programa deve informar:
a)	 se o número é par, caso afirmativo informar também
se ele é maior que 15;
b)	 se o número é ímpar, caso afirmativo se ele é menor
que 50.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int numero;
	printf("\t\tPAR OU IMPAR E MAIOR OU MENOR\n\n");
	printf("Informe um numero:");
	scanf("%d", &numero);
	
	if(numero % 2 == 0)
	{
		printf("O numero %d e PAR", numero);
		if(numero > 15)
		{
			printf(" e MAIOR que 15\n");
		}
	}
	else
	{
		printf("O numero %d e IMPAR", numero);
		if(numero < 50)
		{
			printf(" e MENOR que 50");
		}
	}
	return 0;
}
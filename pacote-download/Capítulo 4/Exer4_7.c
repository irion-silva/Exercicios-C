/*Lista de Exerc�cios - Estrutura de Controle de Fluxo(Sele��o Simples) - 16-10-2021
4.7 Fa�a um programa que receba um n�mero inteiro
e que verifique se esse n�mero � par ou �mpar.
O programa deve informar:
a)	 se o n�mero � par, caso afirmativo informar tamb�m
se ele � maior que 15;
b)	 se o n�mero � �mpar, caso afirmativo se ele � menor
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
/*Lista de Exerc�cios - Estrutura de Controle de Fluxo(Sele��o Simples) - 16-10-2021
4.4 Fa�a um programa que receba um n�mero inteiro e
que verifique se esse n�mero � par ou �mpar.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int numero;
	printf("\t\tNUMERO PAR OU IMPAR:");
	printf("\n\nInforme um numero:");
	scanf("%d", &numero);
	if(numero % 2 == 0)
	{
		printf("O numero %d e PAR\n", numero);
	}
	else
	{
		printf("O numero %d e IMPAR\n", numero);
	}
	return 0;
}
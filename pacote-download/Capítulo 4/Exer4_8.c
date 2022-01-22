/*Lista de Exercícios - Estrutura de Controle de Fluxo(Seleção Simples) - 25-10-2021
4.8 Faça um programa que receba um número inteiro
e que verifique se esse número é par ou se é ímpar.
O programa deve informar ao usuário o número
apenas se for par e maior que 15 e se for ímpar apenas
se for menor que 50.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int numero;
	printf("Informe um numero:");
	scanf("%d", &numero);
	if (numero % 2 == 0)
	{
		   if (numero > 15)
		   {
			   printf("Numero %d %c PAR", numero, 130);
		   }	
	} else 
	{
		if (numero < 50)
		{
			printf("Numero %d %c IMPAR", numero, 130);
		}
	}
	return 0;
}
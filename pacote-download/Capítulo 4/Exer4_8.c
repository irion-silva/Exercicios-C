/*Lista de Exerc�cios - Estrutura de Controle de Fluxo(Sele��o Simples) - 25-10-2021
4.8 Fa�a um programa que receba um n�mero inteiro
e que verifique se esse n�mero � par ou se � �mpar.
O programa deve informar ao usu�rio o n�mero
apenas se for par e maior que 15 e se for �mpar apenas
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
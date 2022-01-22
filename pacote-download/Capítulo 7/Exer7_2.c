/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Início - 20-12-2021
7.2 Faça um programa que exiba a tabuada dos números
de 10 a 20. Por exemplo:
10x0=0
10x1=10
....
10x10=100
até chegar à tabuada de 20,
20x0=0
20x1=20
....
20x10=200
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int auxcont = 10, cont;
	printf("\t\tTABUADA DO 10 AO 20:\n\n");
	while(auxcont <= 20)
	{
		cont = 0;
		while(cont <= 10)
		{
			printf("%d x %d = %d\n", auxcont, cont, auxcont*cont);
			cont++;
		}
		printf("\n\n");
		auxcont++;
	}
	return 0;
}
/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Início - 22-12-2021
7.6 Desenvolva um programa que apresente a tabuada
de 0 até 9 para o intervalo de 0 até 10. Entre cada
tabuada, coloque uma pausa para o usuário conseguir
lê-la.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int cont = 0, cont_2;
	while(cont <= 9)
	{
		cont_2 = 0;
		while(cont_2 <= 10)
		{
			printf("%d x %d = %d\n", cont, cont_2, cont*cont_2);
			cont_2++;
		}
		cont++;
		printf("\n");
	}
	return 0;
}
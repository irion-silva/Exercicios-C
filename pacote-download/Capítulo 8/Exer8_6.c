/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Final - 03-01-2022
8.6 Faça um programa que calcule o valor da soma:
S = 1/1+3/2+5/3+7/4+ .... + 99/50.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	float soma = 0;
	float cont_1 = 1, cont_2 = 1;
	
	do
	{
		soma = soma+(cont_2/cont_1);
		cont_2 = cont_2 + 2;
		cont_1 = cont_1 + 1;
	} while(cont_2 <= 99);
	
	printf("A soma total eh: %.3f\n", soma);
	return 0;
}
/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Início - 22-12-2021
7.8 Faça um programa que apresente a soma acumulada
de todos os valores entre 1 e 100, somando os
números 1 e 100 (inclusive).
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int cont = 1, soma = 0;
	
	while(cont <= 100)
	{
		soma += cont;
		cont++;
	}
	printf("A soma acumulada de todos os valores entre 0 e 100 eh = %d\n", soma);
	return 0;
}
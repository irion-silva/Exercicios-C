/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Início - 27-12-2021
7.9 Dado um conjunto de N números, faça um programa
C que calcule e mostre a média aritmética do
elementos desse números.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int qtd, cont = 1;
	double m, num, soma;
	
	printf("Informe a quantidade de numeros que voce deseja calcular a media:");
	scanf("%d", &qtd);
	
	while(cont <= qtd)
	{
		printf("Informe o %d.o numero:", cont);
		scanf("%lf", &num);
		cont++;
		soma += num;
	}
	
	m = soma/qtd;
	
	printf("A media dos numeros fornecidos eh: %.2lf\n", m);
	return 0;
}
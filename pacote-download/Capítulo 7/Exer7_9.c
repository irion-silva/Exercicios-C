/*Lista de Exerc�cios - Estrutura de Repeti��o
Condicional com Teste no In�cio - 27-12-2021
7.9 Dado um conjunto de N n�meros, fa�a um programa
C que calcule e mostre a m�dia aritm�tica do
elementos desse n�meros.
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
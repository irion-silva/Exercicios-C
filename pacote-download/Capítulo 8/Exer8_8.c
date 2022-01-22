/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Final - 04-01-2022
8.8 Desenvolva um programa para calcular a tabuada de
um intervalo de números que será informado pelo
usuário.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int qtd_1, qtd_2, cont = 0;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &qtd_1);
	
	do
	{
		if(qtd_1 < 0)
		{
			printf("Erro! Informe um numero positivo:");
			scanf("%d", &qtd_1);
		}
	} while(qtd_1 < 0);
	
	printf("Digite o segundo numero:");
	scanf("%d", &qtd_2);
		
	do
	{
		if((qtd_2 < 0) && (qtd_2 < qtd_1))
		{
			printf("Erro! Informe um numero maior que %d:", qtd_1);
			scanf("%d", &qtd_2);
		}
	} while((qtd_2 < 0) && (qtd_2 < qtd_1));
	
	do
	{
		do
		{
			printf("%d x %d = %d\n", qtd_1, cont, qtd_1 * cont);
			cont++;
		} while(cont <= 10);
		cont = 0;
		qtd_1++;
		printf("\n");
	} while(qtd_1 <= qtd_2);
	
	return 0;
}
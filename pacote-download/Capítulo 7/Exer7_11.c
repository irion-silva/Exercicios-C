/*Lista de Exerc�cios - Estrutura de Repeti��o
Condicional com Teste no In�cio - 28-12-2021
7.11 Fa�a um programa C que leia dez n�meros que
representam as notas de dez alunos, e obtenha:
a)	 a soma dos n�meros;
b)	 a m�dia dos n�meros;
c)	 o maior n�mero;
d)	 o menor n�mero.
Assuma que as notas s�o informadas corretamente
no intervalo de 1 a 10.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int qtd, cont = 1;
	double nota, soma, media, maior = 0, menor = 10;
	
	printf("Informe quantas notas voce deseja calcular a media:");
	scanf("%d", &qtd);
	
	while(qtd <= 0)
	{
		printf("Erro! Informe um valor valido para a quantidade de notas\n");
		printf("\nInforme quantas notas voce deseja calcular a media:");
		scanf("%d", &qtd);
	}
	
	while(cont <= qtd)
	{
		printf("Informe a %d.o nota:", cont);
		scanf("%lf", &nota);
		
		while((nota < 0) || (nota > 10))
		{
			printf("Erro! Informe uma nota no intervalo entre 1 e 10\n");
			printf("Informe a %d.o nota:", cont);
			scanf("%lf", &nota);
		}
		
		soma += nota;
		media = soma/qtd;
		
		if(nota > maior)
		{
			maior = nota;
		}
		
		if(nota < menor)
		{
			menor = nota;
		}
		
		cont++;
	}
	
	printf("A soma das notas fornecidas eh: %.2lf\n", soma);
	printf("A media das notas fornecidas eh: %.2lf\n", media);
	printf("A maior nota eh: %.2lf\n", maior);
	printf("A menor nota eh %.2lf\n", menor);
		
	return 0;
}
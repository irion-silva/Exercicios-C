/*Lista de Exercícios - Estrutura de Repetição Contada -
6.4 Faça um programa C que leia dez números que
representem as notas de dez alunos, e que apresente:
a)	 a soma dos números;
b)	 a média dos números;
c)	 o maior número;
d)	 o menor número.
Assuma que as notas são informadas corretamente
no intervalo de 1 a 10.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	double nota, media, soma = 0, maior = 0, menor = 10;
	int i;
	
	
	for(i = 1; i <= 10; i++)
	{
		do
		{
		printf("Informe a %d%c nota:", i, 166);
		scanf("%lf", &nota);
		if(nota < 0 || nota > 10)
		{
			printf("Nota invalida\n");
		}
		} while(nota < 0 || nota > 10);
		
		soma = soma + nota;
		
		media = soma/10;
		
		if(nota > maior)
		{
			maior = nota;
		}
		
		if(nota < menor){
			menor = nota;
		}	
	}
	
	printf("A soma das notas eh:%.2lf\n", soma);
	printf("A media das notas fornecidas eh:%.2lf\n", media);
	printf("A maior nota eh:%.2lf\n", maior);
	printf("A menor nota eh:%.2lf\n", menor);
	return 0;
}
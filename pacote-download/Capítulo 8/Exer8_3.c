/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Final - 30-12-2021
8.3 Faça um programa C que leia dez números que
representam as notas de dez alunos de uma disciplina.
As notas variam de zero até dez (0 a 10). O programa
deve validar a entrada de dados e obter:
a)	 a soma das notas;
b)	 a média das notas;
c)	 a maior nota;
d)	 a menor nota.
Assuma que as notas são informadas corretamente
no intervalo de 1 a 10.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int cont = 1;
	double nota, soma, maior = 0.0, menor = 10.0;
	
	printf("Digite 10 notas para calcular a media:\n");
	
	do
	{
		printf("Digite a %d.a nota:", cont);
		scanf("%lf", &nota);
		
		do
		{
			if((nota < 0.0) || (nota > 10.0))
			{
				printf("Erro! Informe uma nota entre 0 e 10:");
				scanf("%lf", &nota);
			}
		} while((nota < 0.0) || (nota > 10.0));
		
		soma = soma + nota;
		
		if(nota < menor)
		{
			menor = nota;
		}
		
		if(nota > maior)
		{
			maior = nota;
		}
		
		cont++;
	} while(cont <= 10);
	
	printf("\nA media das notas fornecidas eh: %.2lf\n", soma/10);
	printf("A soma das notas eh: %.2lf\n", soma);
	printf("A maior nota eh: %.2lf\n", maior);
	printf("A menor nota eh: %.2lf\n", menor);
	
	return 0;
}
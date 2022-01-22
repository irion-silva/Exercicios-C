/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Final - 30-12-2021
8.4 Faça um programa que leia dois conjuntos de dois
valores, o primeiro representando o número do
aluno e o segundo representando a sua altura em
centímetros. Encontre o aluno mais alto e o mais
baixo. Mostre o número do aluno mais alto, e o
número do aluno mais baixo, juntamente com suas
alturas.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int qtd, cont = 1, numero, maior_num, menor_num;
	double altura, maior = 0, menor = 2.51;
	
	printf("Informe quantos alunos voce quer comparar as alturas:");
	scanf("%d", &qtd);
	
	do
	{
		if ( qtd <= 0)
		{
			printf("Erro! Informe uma quantidade maior que 0:");
			scanf("%d", &qtd);
		}
	} while(qtd <= 0);
	
	do
	{
		printf("Informe o numero do %d.o aluno:", cont);
		scanf("%d", &numero);
		
		do
		{
			if(numero <= 0){
			printf("Informe um numero positivo maior que 0 para o %d.o aluno:", cont);
			}
		} while(numero <= 0);
		
		printf("Informe a altura do %d.o aluno:", cont);
		scanf("%lf", &altura);
		
		do
		{
			if((altura <= 0) || (altura >= 2.51))
			{
				printf("Erro! Informe uma altura valida:");
				scanf("%lf", &altura);
			}
		} while((altura <= 0) || (altura >= 2.51) );
		
		if(altura > maior)
		{
			maior = altura;
			maior_num = numero;
		}
		
		if(altura < menor)
		{
			menor = altura;
			menor_num = numero;
		}
		
		cont++;
	}while (cont <= qtd);
		
		printf("O aluno mais baixo eh o de numero %d com %.2lfm\n", menor_num, menor);
		printf("O aluno mais alto eh o de numero %d com %.2lfm\n", maior_num, maior);
	return 0;
}
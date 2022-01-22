/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Início - 21-12-2021
7.4 Faça um programa que leia dez conjuntos de dois
valores, o primeiro representando o número do
aluno e o segundo representando a sua altura em
centímetros. Encontre o aluno mais alto e o mais
baixo. Apresente o número do aluno mais alto e o do
aluno mais baixo, cada um com sua altura.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int numero, cont = 1;
	double altura, menor = 3.0, maior = 0.0;
	printf("\t\tALUNO MAIS ALTO E O MAIS BAIXO:\n\n");
	while(cont <= 10){
		printf("Informe o numero do %d.o aluno:", cont);
		scanf("%d", &numero);
		while(numero < 0)
		{
			printf("Erro! Digite novamente o numero do aluno:");
			scanf("%d", &numero);
		}
		
		printf("Informe a altura do %d.o aluno:", cont);
		scanf("%lf", &altura);
		while(altura < 0 || altura > 3)
		{
			printf("Erro! Digite novamente a altura do aluno:");
			scanf("%lf", &altura);
		}
		
		if(altura > maior)
		{
			maior = altura;
		}
		
		if(altura < menor)
		{
			menor = altura;
		}
		cont++;
	}
	printf("O aluno mais baixo eh o de numero %d com %.2lfm\n", numero, menor);
	printf("O aluno mais alto eh o de numero %d com %.2lfm\n", numero, maior);
	
	return 0;
}
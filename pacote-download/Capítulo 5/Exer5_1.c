/*Lista de Exerc�cios - Estrutura de Controle de Fluxo Condicional Composta - 
18-11-2021
5.1 Escreva um programa que leia o n�mero de alunos
e o de alunas de uma sala. Como sa�da, o programa
deve apresentar primeiro quem estiver em maior
quantidade. Por exemplo, se na sala tiver mais
alunos, apresente primeiro o n�mero de alunos, caso
contr�rio apresente o n�mero de alunas e depois o de
alunos. Considere o caso em que o n�mero de alunos
� igual ao n�mero de alunas.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int alunos, alunas;
	printf("Informe o numero de alunos:");
	scanf("%d", &alunos);
	printf("Informe o numero de alunas:");
	scanf("%d", &alunas);
	
	if(alunos > alunas)
	{
		printf("Numero de alunos:%d\nNumero de alunas:%d\n",alunos,alunas);
	} else if (alunas > alunos)
	{
		printf("Numero de alunas:%d\nNumero de alunos:%d\n",alunas,alunos);
	} else 
	{
		printf("Numero de alunos e alunas sao iguais\n");
	}
	return 0;
}
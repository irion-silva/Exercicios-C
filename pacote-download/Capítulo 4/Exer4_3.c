/*Lista de Exercícios - Estrutura de Controle de Fluxo(Seleção Simples) - 15-10-2021
4.3 Escreva um programa que leia a quantidade de alunas
e de alunos. Depois esse programa deve informar se
essa turma possui mais alunos ou mais alunas. Se
essa turma possuir a quantidade de alunas maior que
a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos
é igual a de alunas.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int alunos,alunas,total;
	printf("\t\tQUANTIDADES DE ALUNOS DE UMA TURMA:\n");
	printf("\n\nInforme a quantidade de alunos:");
	scanf("%d", &alunos);
	printf("Informe a quantidade de alunas:");
	scanf("%d", &alunas);
	
	total = alunos + alunas;
	
	if(alunas > alunos)
	{
		printf("A turma possui mais alunas do que alunos\n");
		printf("Total de alunos da turma:%d\n", total);
	} else if (alunas == alunos)
	{
		printf("A turma possui a mesma quantidade de alunos e alunas\n");
	} else
	{
		printf("A turma possui mais alunos do que alunas\n");
	}
	
	return 0;
}
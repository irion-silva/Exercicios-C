/*Lista de Exercícios - Funções - 14-01-2022
9.7 Desenvolva um programa que solicite ao usuário
idade de três pessoas e apresente na tela a maior
idade. Esse programa deve possuir uma função para
verificar qual é a maior idade.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int maior_idade(int idd_1, int idd_2, int idd_3)
{
	int maior = 0;
	if((idd_1 > idd_2) && (idd_1 > idd_3))
	{
		maior = idd_1;
	} else if( idd_2 > idd_3)
	{
		maior = idd_2;
	} else
	{
		maior = idd_3;
	}
	
	return maior;
}
int main()
{
	int idd_1, idd_2, idd_3;
	printf("Digite a primeira idade:");
	scanf("%d", &idd_1);
	printf("Digite a segunda idade:");
	scanf("%d", &idd_2);
	printf("Digite a terceira idade:");
	scanf("%d", &idd_3);
	
	printf("\nMaior idade:%d\n", maior_idade(idd_1, idd_2, idd_3));
	
	return 0;
}
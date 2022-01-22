/*Lista de Exercícios - Funções - 17-01-2022
9.8 Desenvolva um programa que solicite ao usuário
a idade de três pessoas e apresente na tela a maior
e a menor idade. Esse programa deve possuir uma
função para verificar qual é a maior idade e outra
para verificar a menor idade.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int maior_idade(idd_1, idd_2, idd_3)
{
	int maior = 0;
	if(idd_1 > maior)
	{
		maior = idd_1;
	} 
	
	if(idd_2 > maior)
	{
		maior = idd_2;
	}
	
	if(idd_3 > maior)
	{
		maior = idd_3;
	}
	
	return maior;
}

int menor_idade(idd_1, idd_2, idd_3)
{
	int menor = 119;
	if(idd_1 < menor)
	{
		menor = idd_1;
	} 
	
	if(idd_2 < menor)
	{
		menor = idd_2;
	}
	
	if(idd_3 < menor)
	{
		menor = idd_3;
	}
	
	return menor;
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
	
	printf("\nMaior idade eh:%d\n", maior_idade(idd_1, idd_2, idd_3));
	printf("Menor idade eh:%d\n", menor_idade(idd_1, idd_2, idd_3));
	return 0;
}
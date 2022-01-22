/*Lista de Exercícios - Funções - 04-01-2022
9.1 Escreva um programa que solicite dois números do
tipo inteiro distintos ao usuário e que apresente na
tela o maior deles. Esse programa deve possuir uma
função para verificar qual é o maior número.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int maior(num_1, num_2)
{
	int maior, menor;
	if(num_1 > num_2)
	{
		maior = num_1;
		menor = num_2;
		printf("O maior numero eh:%d\n", maior);
	} else if (num_2 > num_1)
	{
		maior = num_2;
		menor = num_1;
		printf("O maior numero eh:%d\n", maior);
	} else 
	{
		printf("Os numeros sao iguais\n");
	}
	
	return maior;
}
int main()
{
	int num_1, num_2;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &num_1);
	
	printf("Digite o segundo numero:");
	scanf("%d", &num_2);
	
	printf("\n");
	
	maior(num_1, num_2);
	
	return 0;
}

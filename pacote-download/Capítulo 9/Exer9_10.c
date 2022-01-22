/*Lista de Exercícios - Funções - 18-01-2022
9.10 Escreva um programa que solicite dois números ao
usuário e que apresente na tela o resultado da sua
soma e o dobro de cada um deles. Esse programa
deve possuir duas funções, uma para calcular a soma
e outro para calcular o dobro desses números.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
double soma(double n1,double n2)
{
	return n1 + n2;
}

double dobro(double num)
{
	return num * 2;
}
int main()
{
	double n1,n2;
	printf("Digite o primeiro numero:");
	scanf("%lf", &n1);
	printf("Digite o segundo numero:");
	scanf("%lf", &n2);
	
	printf("\nSoma dos numeros: %.2lf\n", soma(n1, n2));
	printf("Dobro do numero 1: %.2lf\n", dobro(n1));
	printf("Dobro do numero 2: %.2lf\n", dobro(n2));
	
	return 0;
}
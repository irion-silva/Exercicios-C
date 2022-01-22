/*Lista de Exercícios - Funções - 05-01-2022
9.3 Escreva um programa que solicite a temperatura em
Celsius ao usuário e apresente na tela o resultado da
conversão dessa temperatura em Fahrenheit. Esse
programa deve possuir uma função para converter a
temperatura. Dados: Fahrenheit = Celsius x 1,8 + 32.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
double converter(double c)
{
	double f;
	f = c * 1.8 + 32;
	return f;
}
int main()
{
	double c;
	printf("Digite a temperatura em %cC:", 167);
	scanf("%lf", &c);
	
	printf("Temperatura em %cF:%.2lf", 167, converter(c));
	return 0;
}
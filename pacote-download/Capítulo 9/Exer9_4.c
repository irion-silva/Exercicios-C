/*Lista de Exerc�cios - Fun��es - 10-01-2022
9.4 Escreva um programa que solicite dois n�meros ao
usu�rio e apresente na tela o resultado da soma do
m�dulo desses n�meros. Esse programa deve possuir
uma fun��o para calcular o m�dulo.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
double modulo(int a, int b)
{
	double mod_a, mod_b, soma_mods;
	if(a >= 0)
	{
		mod_a = a;
	} else if(a < 0)
	{
		mod_a = -a;
	}
	
	if(b >= 0)
	{
		mod_b = b;
	} else if(b < 0)
	{
		mod_b = -b;
	}
	
	soma_mods = mod_a + mod_b;
	
	return soma_mods;
	
}
int main()
{
	double a, b;
	printf("Digite o primeiro numero:");
	scanf("%lf", &a);
	
	printf("Digite o segundo numero:");
	scanf("%lf", &b);
	
	printf("\nSoma do modulo dos numeros:%.2lf\n", modulo(a, b));
	return 0;
}

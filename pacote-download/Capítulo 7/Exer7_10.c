/*Lista de Exerc�cios - Estrutura de Repeti��o
Condicional com Teste no In�cio - 28-12-2021
7.10 A convers�o de graus Fahrenheit para Celsius � obtida
por Tc={(Tf-32)x(5/9)}, em que Tc � a temperatura em
graus Celsius e Tf em Fahrenheit. Fa�a um programa
C que calcule e que imprima uma tabela de graus
Fahrenheit e graus Celsius, cujos graus variem de
50 a 65, de 1 em 1.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int cont = 50;
	while(cont <= 65)
	{
		printf("%d %cC = %.2lf %cF\n", cont, 248, cont * 1.8 + 32, 248);
		cont++;
	}
	return 0;
}
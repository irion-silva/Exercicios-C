/*Lista de Exerc�cios - Estrutura de Repeti��o Contada -
6.3 A convers�o de graus Fahrenheit para Celsius � obtida
por Tc={(Tf-32)x(5/9)}, em que Tc � a temperatura
em Celsius e T
f em Fahrenheit. Fa�a um programa
C que calcule e que imprima uma tabela de graus
Fahrenheit e graus Celsius, cujos graus variem de
50 a 65, de 1 em 1.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	double tc;
	for(tc = 50; tc <= 65; tc++){
		printf("%.2lf %cC = %.2lf %cF\n",tc, 248, tc*1.8+32, 248);
	}
	return 0;
}
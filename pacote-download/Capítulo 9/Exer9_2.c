/*Lista de Exerc�cios - Fun��es - 05-01-2022
9.2 Desenvolva um programa para calcular e comparar
a �rea de dois ret�ngulos A e B, o programa dever�
dizer qual ret�ngulo possui a maior �rea ou se eles
possuem tamanhos iguais. Esse programa deve
possuir uma fun��o para calcular a �rea do ret�ngulo.
Dados de entrada: tamanho da base e da altura (tipo
das vari�veis: inteiro, valor em cent�metros).
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int area_ret(int b, int h)
{
	int area;
	area = b * h;
	return area;
}
int main()
{
	int b, h, area_1, area_2, maior;
	printf("Digite a altura do primeiro retangulo:");
	scanf("%d", &h);
	printf("Digite a base do primeiro retangulo:");
	scanf("%d", &b);
	
	area_1 = area_ret(b, h);

	printf("Digite a altura do segundo retangulo:");
	scanf("%d", &h);
	printf("Digite a base do segundo retangulo:");
	scanf("%d", &b);
	
	area_2 = area_ret(b, h);
	
	printf("\nArea do primeiro retangulo:%d\n", area_1);
	printf("Area do segundo retangulo:%d\n", area_2);
	
	if(area_1 > area_2)
	{
		maior = area_1;
		printf("A maior area eh:%d", area_1);
	} else if (area_2 > area_1)
	{
		maior = area_2;
		printf("A maior area eh:%d", area_2);
	} else
	{
		printf("As areas dos retangulos sao iguais\n");
	}
	
		
	return 0;
}
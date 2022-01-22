/*Lista de Exercícios - Funções - 05-01-2022
9.2 Desenvolva um programa para calcular e comparar
a área de dois retângulos A e B, o programa deverá
dizer qual retângulo possui a maior área ou se eles
possuem tamanhos iguais. Esse programa deve
possuir uma função para calcular a área do retângulo.
Dados de entrada: tamanho da base e da altura (tipo
das variáveis: inteiro, valor em centímetros).
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
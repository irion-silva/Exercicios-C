/*Lista de Exerc�cios - Vari�veis e Operadores - 26-09-2021
3.3 Desenvolva um programa para calcular e escrever
a �rea e o per�metro de um ret�ngulo. Dados de
entrada: tamanho da base e da altura (tipo das
vari�veis: inteiro, valor em cent�metros).
*/
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int main()
{
	int b, h, area, perimetro;// b = base, h = altura.
	printf("Informe o tamanho da base do ret%cgulo:", 131);
	scanf("%d", &b);
	printf("Informe o tamanho da altura do ret%cngulo:", 131);
	scanf("%d", &h);
	
	area = b * h;
	perimetro = b + b + h + h;
	
	printf("\nA area do ret%cngulo %c:%d\n",131, 130, area);
	printf("O per%cmetro do ret%cngulo %c:%d\n",161, 131, 130, perimetro);
	return 0;
}
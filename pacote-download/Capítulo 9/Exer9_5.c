/*Lista de Exercícios - Funções - 10-01-2022
9.5 Desenvolva um programa que solicite três notas de
provas de um aluno e apresente na tela a média dessas
notas. A obtenção das notas deve ser realizada na
função principal e o cálculo da média das notas deve
ser obtido por outra função (MEDIA). Para o cálculo
da média considere que a primeira prova tem peso 1
e as outras duas provas possuem peso 2.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
double media(double nota_1,double nota_2,double nota_3)
{
	double media_1;
	nota_2 = nota_2 * 2;
	nota_3 = nota_3 * 2;
	
	media_1 = (nota_1 + nota_2 + nota_3)/5;
		 
	return media_1;
}
int main()
{
	double nota_1, nota_2, nota_3;
	
	printf("Digite a primeira nota:");
	scanf("%lf", &nota_1);
	
	do
	{
		if((nota_1 < 0) || (nota_1 > 10))
		{
			printf("Erro! Informe uma nota de 0 a 10:");
			scanf("%lf", &nota_1);
		}	
	} while((nota_1 < 0) || (nota_1 > 10));
	
	printf("Digite a segunda nota:");
	scanf("%lf", &nota_2);
	
	do
	{
		if((nota_2 < 0) || (nota_2 > 10))
		{
			printf("Erro! Informe uma nota de 0 a 10:");
			scanf("%lf", &nota_2);
		}	
	} while((nota_2 < 0) || (nota_2 > 10));
	
	printf("Digite a terceira nota:");
	scanf("%lf", &nota_3);
	
	do
	{
		if((nota_3 < 0) || (nota_3 > 10))
		{
			printf("Erro! Informe uma nota de 0 a 10:");
			scanf("%lf", &nota_3);
		}	
	} while((nota_3 < 0) || (nota_3 > 10));
	
	printf("\nA media das notas:%.2lf\n", media(nota_1, nota_2, nota_3));
	
	return 0;
}
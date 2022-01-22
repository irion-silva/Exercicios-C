/*Lista de Exerc�cios - Fun��es - 17-01-2022
9.9 Escreva um programa que leia os dados de um
funcion�rio e que aplique um aumento sobre o seu
sal�rio, sendo que a empresa definiu um aumento de
10% para quem possuir mais de cinco anos de casa e for
casado, para os demais o aumento � de 8%. Esse aumento
deve ser calculado por uma fun��o. Dados de entrada:
sal�rio bruto, quantidades de anos na empresa, e estado
civil (C, c, S, s). Dados de sa�da: taxa do aumento, sal�rio
inicial, e sal�rio com aumento do funcion�rio.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
double novo_sal(double sal_bruto, int tempo_de_casa, char estado_civil)
{
	double novo_salario;
	
	if((tempo_de_casa > 4) && (estado_civil == 'C' || estado_civil == 'c'))
	{
		novo_salario = sal_bruto * 1.10;
	} else {
		novo_salario = sal_bruto * 1.08;
	}
	
	return novo_salario;
}
int main()
{
	double sal_bruto;
	int tempo_de_casa;
	char estado_civil;
	
	printf("Digite o salario bruto do funcionario:");
	scanf("%lf", &sal_bruto);
	printf("Digite quanto tempo de casa o funcionario tem:");
	scanf("%d", &tempo_de_casa);
	printf("Estado civil do funcionario <C para casado ou S para solteiro>:");
	fflush(stdin);
	scanf("%c", &estado_civil);
	printf("\nNovo salario do funcionario: %.2lf", novo_sal(sal_bruto, tempo_de_casa, estado_civil));
	return 0;
}
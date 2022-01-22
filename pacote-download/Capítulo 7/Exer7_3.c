/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Início - 20-12-2021
7.3 Um funcionário de uma empresa recebe aumento
salarial anualmente. Sabe-se que:
a)	 esse funcionário foi contratado em 1995, com
salário inicial de R$ 1.000,00;
b)	 em 1996 recebeu aumento de 1,5% sobre seu
salário inicial;
c)	 a partir de 1997 (inclusive), os aumentos
salariais sempre corresponderam ao dobro do
percentual do ano anterior.
Faça um programa que determine o salário desse
funcionário até o ano 2000 (caso você tenha uma
excelente máquina, poderá realizar a operação até o
ano final desejado).
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int ano, cont;
	float sal = 1015.0, perc = 0.015;
	printf("\t\tSALARIO DE UM FUNCIONARIO:\n\n");
	printf("Digite o ano, a partir de 1996 que deseja saber o valor do salario:");
	scanf("%d", &ano);
	
	while((ano < 1997) || (ano > 2000))
	{
		printf("Erro. Digite o ano entre 1997 e 2000");
		scanf("%d", &ano);
	}
	
	cont = ano - 1996;
	
	while(cont >= 1){
		perc = perc * 2;
		sal += (sal*perc);
		printf("%d = R$%.2f   \n",((ano - cont)+ 1), sal);
		cont--;
	}
	
	printf("O salario do ano de %d sera: R$%.2f", ano, sal);
	
	return 0;
}
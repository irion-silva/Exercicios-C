/*Lista de Exercícios - Estrutura de Controle de Fluxo(Seleção Simples) - 16-10-2021
4.6 Desenvolva um programa para comparar a idade de
Pedro, de Joana e de Ismael e informar quem é o mais
velho. Dados de entrada: idade de Pedro, de Joana e
de Ismael (tipo das variáveis: inteiro, e valor em anos).
Considere que essas pessoas possuem idades diferentes.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int idade_Pedro, idade_Joana, idade_Ismael;
	printf("\t\tCOMPARANDO IDADES:");
	printf("\n\nInforme a idade de Pedro:");
	scanf("%d", &idade_Pedro);
	printf("Informe a idade de Joana:");
	scanf("%d", &idade_Joana);
	printf("Informe a idade de Ismael:");
	scanf("%d", &idade_Ismael);
	
	if((idade_Pedro > idade_Joana) && (idade_Pedro > idade_Ismael))
	{
		printf("Pedro e o mais velho\n");
	}else if((idade_Joana > idade_Pedro) && (idade_Joana > idade_Ismael))
	{
		printf("Joana e a mais velha\n");	
	}else
	{
		printf("Ismael e o mais velho\n");
	}
	
	return 0;
}
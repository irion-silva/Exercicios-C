/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
12-12-2021
5.6 Desenvolva um programa para comparar a idade de
Pedro, de Joana e de Ismael e informar quem é o mais
velho. Dados de entrada: idade de Pedro, de Joana
e de Ismael (tipo das variáveis: inteiro, e valor em
anos). Considere que essas pessoas possuem idades
diferentes.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int idade_Pedro, idade_Joana, idade_Ismael;
	
	printf("\t\tCOMPARACAO DE IDADES:\n\n");
	printf("Informe a idade do Pedro:");
	scanf("%d", &idade_Pedro);
	printf("Informe a idade da Joana:");
	scanf("%d", &idade_Joana);
	printf("Informe a idade do Ismael:");
	scanf("%d", &idade_Ismael);
	
	if(idade_Pedro > idade_Joana && idade_Pedro > idade_Ismael){
		printf("Pedro eh o mais velho\n");
	} else if(idade_Joana > idade_Ismael){
		printf("Joana eh a mais velha\n");
	} else {
		printf("Ismael eh o mais velho\n");
	}
	
	return 0;
}
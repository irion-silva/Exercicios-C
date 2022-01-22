/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
11-12-2021
5.2 Desenvolva um programa para comparar a idade de
Pedro e de Joana e informar quem é o mais velho.
Dados de entrada: idade de Pedro e de Joana (tipo
das variáveis: inteiro, e valor em anos). Observação:
essas pessoas possuem idades diferentes.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int idade_Pedro, idade_Joana;
	printf("\t\tCOMPARACAO DE IDADE ENTRE PEDRO E JOANA\n\n");
	printf("Informe a idade do Pedro:");
	scanf("%d", &idade_Pedro);
	printf("Informe a idade da Joana:");
	scanf("%d", &idade_Joana);
	
	if(idade_Pedro > idade_Joana){
		printf("Pedro tem %d anos, e eh mais velho do que a Joana que tem %d anos\n", idade_Pedro, idade_Joana);
	} else if (idade_Joana > idade_Pedro){
		printf("Joana tem %d anos, e eh mais velha do que o Pedro que tem %d anos\n", idade_Joana, idade_Pedro);
	} else{
		printf("Pedro e Joana tem a mesma idade\n");
	}
	return 0;
}
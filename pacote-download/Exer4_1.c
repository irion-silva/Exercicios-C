/*Lista de Exerc�cios - Estrutura de Controle de Fluxo(Sele��o Simples) - 01-10-2021
4.1 Desenvolva um programa para comparar a idade de
Pedro e a de Joana e informar quem � o mais velho.
Dados de entrada: idade de Pedro e de Joana (tipo
das vari�veis: inteiro, e valor em anos). Observa��o:
essas pessoas possuem idades diferentes.
*/
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int main()
{
	int Pedro, Joana;
	printf("COMPARACAO DE IDADES:\n");
	printf("ATENCAO: As idades n�o devem ser iguais!\n\n");
	printf("Informe a idade do Pedro:");
	scanf("%d", &Pedro);
	printf("Informe a idade da Joana:");
	scanf("%d", &Joana);
	
	if (Pedro > Joana){
		printf("\nPedro %c o mais velho\n", 130);
	} else {
		printf("\nJoana %c a mais velha\n", 130);
	}
	return 0;
}
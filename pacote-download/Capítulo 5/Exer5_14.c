/*Lista de Exerc�cios - Estrutura de Controle de Fluxo Condicional Composta - 
14-12-2021
5.14 Desenvolva um programa em C que leia um n�mero
inteiro, positivo ou negativo, e apresente o valor do
m�dulo desse n�mero.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num;
	
	printf("\t\tMODULO DE UM NUMERO:\n\n");
	printf("Informe um numero:");
	scanf("%d", &num);
	
	if(num >= 0){
		printf("O modulo do numero eh:%d\n", num);
	} else if(num < 0){
		printf("O modulo do numero eh:%d\n", -num);
	}
	return 0;
}
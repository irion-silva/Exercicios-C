/*Lista de Exerc�cios - Estrutura de Controle de Fluxo Condicional Composta - 
12-12-2021
5.7 Fa�a um programa que receba um n�mero inteiro
e que verifique se esse n�mero � par ou �mpar.
O programa deve informar se o n�mero � par, caso
afirmativo informar tamb�m se � ou n�o maior que
15 ou se o n�mero � �mpar, caso afirmativo informar
se � ou n�o menor que 50.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num;
	
	printf("\t\tVERIFICACAO PAR OU IMPAR:\n\n");
	printf("Informe um numero:");
	scanf("%d", &num);
	
	if((num % 2) == 0){
		printf("O numero eh PAR");
		if(num > 15){
			printf(" e eh maior que 15\n");
		} else if(num < 15){
			printf(" e eh menor que 15");
		} 
		} else{
		printf("O numero eh IMPAR");
		if(num > 50){
			printf(" e eh maior que 50");
		} else if(num < 50){
			printf(" e eh menor que 50");	
		} 
	}
	
	return 0;
}
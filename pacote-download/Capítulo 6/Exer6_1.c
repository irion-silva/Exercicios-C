/*Lista de Exerc�cios - Estrutura de Repeti��o Contada - 
14-12-2021
6.1 Dado um n�mero, crie um programa C que escreva
todos os n�meros �mpares menores e/ou iguais a
esse n�mero e maiores ou igual a um. Assuma que o
n�mero informado � positivo.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num, cont;
	
	printf("\t\tMENORES E IMPARES DE UM NUMERO:\n\n");
	do{
	printf("Informe um numero:");
	scanf("%d", &num);
	if(num < 0){
		printf("Informe um numero positivo\n");
	}
	} while(num < 0);
	
	if(num%2==0){
		num -= 1;
	}
	for(cont = num; cont >= 1; cont -= 2){
		printf("%d ", cont);
	}
	
	return 0;
}
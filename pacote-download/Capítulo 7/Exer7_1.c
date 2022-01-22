/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Início - 20-12-2021
7.1 Dado um número, crie um programa C que escreva
todos os números ímpares menores que o número
informado e maiores do que um. Assuma que o
número informado é positivo.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("\t\tNUMEROS IMPARES MENORES QUE UM DADO NUMERO\n\n");
	do{
	printf("Digite um numero inteiro positivo:");
	scanf("%d", &num);
	if(num < 0){
		printf("Numero invalido. Informe um numero positivo\n");
	}
	}while(num < 0);
	
	if(num % 2 == 0){
		num--;
	} else {
		num = num - 2;
	}
	
	while(num > 1){
		printf("%d ", num);
		num = num - 2;
	}
	
	return 0;
}
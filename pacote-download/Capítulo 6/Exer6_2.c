/*Lista de Exercícios - Estrutura de Repetição Contada - 
15-12-2021
6.2 Dado um conjunto de N números, faça um programa
C que calcule e mostre a média aritmética dos
elementos desse conjunto.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int cont, tot_numeros;
	double num, media, soma = 0;
	
	printf("\t\tMEDIA ARITMETICA DE UM CONJUNTO DE ELEMENTOS:\n\n");
	do {		
	printf("De quantos numeros voce deseja calcular a media?:");
	scanf("%d", &tot_numeros);
	if(tot_numeros <= 0){
		printf("Dados incorreto. O numero deve ser positivo\n");
	}
	} while(tot_numeros <= 0);
	
	for(cont = 1; cont <= tot_numeros; cont++){
		printf("Digite um dos numero:");
		scanf("%lf", &num);
		soma += num;
	}
	
	media = soma/tot_numeros;
	
	printf("A media dos numeros fornecidos eh:%.2lf\n", media);
	
	return 0;
}
/*Lista de Exercícios - Estrutura de Repetição
Condicional com Teste no Início - 22-12-2021
7.5 Faça um programa que mostre todos os números
pares existentes entre 1 e 50.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int cont = 1;
	printf("\t\tNUMEROS PARES ENTRE 1 E 50\n\n");
	while(cont <= 50){
		if(cont % 2 == 0){
			printf("%d ", cont);
		}
		cont++;
	}
	return 0;
}
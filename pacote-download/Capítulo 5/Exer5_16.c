/*Lista de Exerc�cios - Estrutura de Controle de Fluxo Condicional Composta - 
14-12-2021
5.16 Fa�a um programa em C, que a uma vez que se
forne�a um n�mero inteiro de 1 a 12, apresente o
nome do m�s correspondente por extenso ou uma
mensagem de inv�lido, caso o usu�rio digite um
n�mero fora do estabelecido.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num;
	
	printf("\t\tM�S DO ANO:\n\n");
	printf("Digite um numero inteiro de 1 a 12 correspondente ao mes desejado:");
	scanf("%d", &num);
	
	if(num == 1){
		printf("O numero corresponde ao mes de Janeiro\n");
	} else if(num == 2){
		printf("O numero corresponde ao mes de Fevereiro\n");
	} else if (num == 3){
		printf("O numero corresponde ao mes de Marco\n");
	} else if (num == 4){
		printf("O numero corresponde ao mes de Abril\n");
	} else if (num == 5){
		printf("O numero corresponde ao mes de Maio\n");
	} else if (num == 6){
		printf("O numero corresponde ao mes de Junho\n");
	}  else if (num == 7){
		printf("O numero corresponde ao mes de Julho\n");
	}  else if (num == 8){
		printf("O numero corresponde ao mes de Agosto\n");
	} else if (num == 9){
		printf("O numero corresponde ao mes de Setembro\n");
	} else if (num == 10){
		printf("O numero corresponde ao mes de Outubro\n");
	} else if (num == 11){
		printf("O numero corresponde ao mes de Novembro\n");
	} else if (num == 12){
		printf("O numero corresponde ao mes de Dezembro\n");
	} else {
		printf("O numero nao corresponde a nenhum mes do ano\n");
	}
	return 0;
}
/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
11-12-2021
5.4 Faça um programa que receba dois números inteiros
e que informe o maior deles. O programa deve
verificar também se o maior número é par ou ímpar.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num_1, num_2, maior, menor;
	printf("\t\tVERIFICAR O MAIOR NUMERO E SE ELE EH PAR OU IMPAR\n\n");
	printf("Informe um numero:");
	scanf("%d", &num_1);
	printf("Informe outro numero:");
	scanf("%d", &num_2);
	
	if(num_1 > num_2){
		maior = num_1;
		menor = num_2;
		printf("O numero 1(%d) eh maior do que o numero 2(%d)\n", maior, menor);
	} else if(num_2 > num_1){
		maior = num_2;
		menor = num_1;
		printf("O numero 2(%d) eh maior do que o numero 1(%d)\n", maior, menor);
	}else{
		printf("O numero 1 eh igual ao numero 2\n");
	}
	
	if(maior % 2 == 0){
		printf("O numero %d eh par", maior);
	} else{
		printf("O numero %d eh impar", maior);
	}
	return 0;
}
/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
12-12-2021
5.9 Escreva um programa para informar o valor de
uma corrida de taxi que considere o valor mínimo
da corrida. Ou seja, ao entrar no taxi, o cliente deve
pagar um valor mínimo de R$ 3,50, independente do
tamanho da corrida. O programa deve considerar as
informações do exercício anterior.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int bandeira, kms;
	double tot_corrida;
	
	printf("\t\tVALOR DE UMA CORRIDA:\n\n");
	printf("ATENCAO: Taxa minima do taxi: R$ 3.50\n");
	do {
		printf("Informe o numero da bandeira <1 ou 2>:");
		scanf("%d", &bandeira);
		if(bandeira != 1 && bandeira != 2){
			printf("Informe uma bandeira valida <1 ou 2>\n");
		}
	} while(bandeira != 1 && bandeira != 2);
	printf("Informe a kilometragem rodada:");
	scanf("%d", &kms);
	
	if(bandeira == 1){
		tot_corrida = kms * 1.80;
		if(tot_corrida > 3.50){
			printf("Valor da corrida:R$%.2lf\n", tot_corrida);
		} else{
			tot_corrida = 3.50;
		 printf("Valor da corrida:R$%.2lf\n", tot_corrida);
		}
	}
	
	if(bandeira == 2){
		tot_corrida = kms * 2.30;
		if(tot_corrida > 3.50){
			printf("Valor da corrida:R$%.2lf\n", tot_corrida);
		} else{
			tot_corrida = 3.50;
		 printf("Valor da corrida:R$%.2lf\n", tot_corrida);
		}
	}
	return 0;
}
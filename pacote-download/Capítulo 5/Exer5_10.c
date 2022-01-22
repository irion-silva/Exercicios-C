/*Lista de Exerc�cios - Estrutura de Controle de Fluxo Condicional Composta - 
12-12-2021
5.10 Escreva um programa para informar o valor de
uma corrida de taxi em Bras�lia. A diferen�a com o
exerc�cio anterior � que alguns taxis oferecem um
desconto de 30 %. Altere o programa do exerc�cio
anterior para que ele solicite se a corrida possui ou
n�o desconto de 30% (1 � sim, 2 � n�o).
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(v)
{
	int bandeira, kms, desconto;
	double tot_corrida;
	
	printf("\t\tVALOR DE UMA CORRIDA:\n\n");
	do {
	printf("Digite o numero da bandeira <1 ou 2>:");
	scanf("%d", &bandeira);
	if(bandeira != 1 && bandeira != 2){
		printf("Informe uma bandeira valida <1 ou 2>\n");
	}
	} while(bandeira != 1 && bandeira != 2);
	printf("Digite a kilometragem rodada:");
	scanf("%d", &kms);
	do {
	printf("O taxi oferece um desconto de 30% ? <1 - SIM ou 2 - NAO>");
	scanf("%d", &desconto);
	if(desconto != 1 && desconto != 2){
		printf("Informe uma opcao de desconto valida <1 ou 2>\n");
	}
	} while (desconto != 1 && desconto != 2);
	
	if(bandeira == 1 && desconto == 1){
		tot_corrida = kms * 1.80 * 0.3;
		printf("Valor da corrida:R$%.2lf\n", tot_corrida);
	} else if (bandeira == 1 && desconto == 2){
		tot_corrida = kms * 1.30;
		printf("Valor da corrida:R$%.2lf\n", tot_corrida);
	} else if (bandeira == 2 && desconto == 1){
		tot_corrida = kms * 2.30 * 0.3;
		printf("Valor da corrida:R$%.2lf\n", tot_corrida);
	} else if (bandeira == 2 && desconto == 2){
		tot_corrida = kms * 2.30;
		printf("Valor da corrida:R$%.2lf\n", tot_corrida);
	}
	return 0;
}
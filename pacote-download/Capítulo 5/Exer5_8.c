/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
12-12-2021
5.8 Escreva um programa para informar o valor de
uma corrida de taxi. Para calcular o valor da corrida
é necessário saber a distância percorrida em
quilômetros e qual o tipo da bandeira da corrida, 1
ou 2. Caso a bandeira seja 1, o preço do quilômetro
rodado é de R$ 1,80, se a bandeira for 2 o valor
do quilômetro rodado é de R$ 2,30. Escreva um
programa em linguagem C que solicite a distância
percorrida em quilômetros e qual o tipo da bandeira
da corrida e informe o valor da corrida.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int bandeira, kms;
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
	
	if(bandeira == 1){
		tot_corrida = kms * 1.80;
		printf("Valor da corrida:R$%.2lf", tot_corrida);
	} else if (bandeira == 2){
		tot_corrida = kms * 2.30;
		printf("Valor da corrida:R$%.2lf", tot_corrida);
	}
	return 0;
}
/*Lista de Exerc?cios - Estrutura de Controle de Fluxo(Sele??o Simples) - 18-11-2021
4.12 Escreva um programa que informe o valor de uma
corrida de taxi em Bras?lia. A diferen?a em rela??o
ao exerc?cio anterior ? que alguns taxis oferecem um
desconto de 30%. Altere o programa do exerc?cio
anterior para que solicite se a corrida possui ou n?o
desconto de 30% (1 ? sim, 2 ? n?o).
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	float km, valor, valor_corrida, valor_minimo = 3.50;
	int bandeira, desconto;
	
	printf("ATENCAO: Taxa minima do taxi:R$ 3,50\n");
	printf("Informe a distancia percorrida(Em quilometros):");
	scanf("%f", &km);
	printf("Qual o tipo da bandeira da corrida(1 ou 2):");
	scanf("%d", &bandeira);
	printf("O taxi oferece 30% de desconto?(1 - SIM / 2 - NAO)");
	scanf("%d", &desconto);
	
	if(bandeira == 1)
	{
		valor = 1.80;
	}
	if(bandeira == 2)
	{
		valor = 2.30;
	}
	
	valor_corrida = valor*km;
	if(valor_corrida < valor_minimo)
	{
		valor_corrida = valor_minimo;
	}
	
	if(desconto == 1)
	{
		valor_corrida *= 0.3;
	}
	
	printf("Valor da corrida: %.2f\n", valor_corrida);
	
	return 0;
}
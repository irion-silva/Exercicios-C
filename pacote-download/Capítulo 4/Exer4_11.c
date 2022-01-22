/*Lista de Exercícios - Estrutura de Controle de Fluxo(Seleção Simples) - 18-11-2021
4.11 Escreva um programa para informar o valor de
uma corrida de taxi que considere o valor mínimo
da corrida. Ou seja, ao entrar no taxi, o cliente
deve pagar um valor mínimo de R$ 3,50, mesmo
que o tamanho da corrida seja inferior a esse valor.
O programa deve considerar as informações do
exercício anterior.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	float km, valor, valor_corrida, valor_minimo = 3.50;
	int bandeira;
	
	printf("ATENCAO: Taxa minima do taxi:R$ 3,50\n");
	printf("Informe a distancia percorrida(Em quilometros):");
	scanf("%f", &km);
	printf("Qual o tipo da bandeira da corrida(1 ou 2):");
	scanf("%d", &bandeira);
	
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
	
	printf("Valor da corrida: %.2f\n", valor_corrida);
	
	return 0;
}
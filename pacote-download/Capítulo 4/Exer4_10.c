/*Lista de Exerc�cios - Estrutura de Controle de Fluxo(Sele��o Simples) - 18-11-2021
4.10 Escreva um programa que informe o valor de uma corrida de taxi. Para 
calcular o valor da corrida � necess�rio saber a dist�ncia percorrida em 
quil�metros e qual o tipo da bandeira da corrida, 1 ou 2. Caso a bandeira seja 
1, o pre�o do quilometro percorrido � de R$ 1,80, se a bandeira for 2 o valor � 
de R$ 2,30. Escreva um programa em linguagem C que solicite a dist�ncia 
percorrida em quil�metros e qual o tipo da bandeira da corrida e informe o valor
da corrida.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	float valor, valor_corrida;
	int km, bandeira;
	
	printf("Informe a distancia percorrida(Em quilometros):");
	scanf("%d", &km);
	printf("Qual o tipo da bandeira da corrida(1 ou 2):");
	scanf("%d", &bandeira);
	
	if (bandeira == 1)
	{
	valor = 1.80;	
	}
	if (bandeira == 2)
	{
		valor = 2.30;
	}
	
	valor_corrida = valor*km;
	
	printf("Valor da corrida: %.2f\n", valor_corrida);
	
	return 0;
}
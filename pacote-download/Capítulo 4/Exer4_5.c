/*Lista de Exercícios - Estrutura de Controle de Fluxo(Seleção Simples) - 16-10-2021
4.5 Escreva um programa em C que calcule o volume de
um cilindro circular, dados o seu raio e sua altura.
Observação: V = pi x r^2 x h, em que pi=3,14, r = raio
e h = altura.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	float pi = 3.14, r, h, v;
	
	printf("\t\tVOLUME DE UM CILINDRO CIRCULAR:");
	printf("\n\nInforme o raio:");
	scanf("%f", &r);
	printf("Informe a altura:");
	scanf("%f", &h);
	
	v = pi * ((r * r)* h);
	
	printf("Volume do cilindro:%.2f\n", v); 
	return 0;
} 
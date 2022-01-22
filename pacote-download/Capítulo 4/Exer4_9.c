/*Lista de Exercícios - Estrutura de Controle de Fluxo(Seleção Simples) - 30-10-2021
4.9 Escreva um programa em C que calcule o volume de
dois cilindros circulares e que verifique qual deles é
maior. O raio e altura dos cilindros serão informados
pelo usuário. Observação: V = pi x r2 x h, em que pi=3,14,
r = raio e h = altura.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	float r1, h1, v1, r2, h2, v2, pi = 3.14;
	printf("Informe o raio do primeiro cilindro:");
	scanf("%f", &r1);
	printf("Informe a altura do primeiro cilindro:");
	scanf("%f", &h1);
	
	v1 = pi * (r1 * r1) * h1;
	
	printf("Informe o raio do segundo cilindro:");
	scanf("%f", &r2);
	printf("Informe a altura do segundo cilindro:");
	scanf("%f", &h2);
	
	v2 = pi * (r2 * r2) * h2;
	
	printf("\n\nVolume do primeiro cilindro: %0.2f\n", v1);
	printf("Volume do segundo cilindro %0.2f\n", v2);
	
	if (v1 > v2)
	{
		printf("\n\nO volume do primeiro cilindro e maior que o volume do segundo cilindro\n");
	} else 
	{
		printf("\n\nO volume do segundo cilindro e maior que o volume do primeiro cilindro\n");
	}
	return 0;
}
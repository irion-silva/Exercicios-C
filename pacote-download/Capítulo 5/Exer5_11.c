/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
12-12-2021
5.11 Dados três números, elabore um programa em C
para verificar se eles formam um triângulo, caso
verdadeiro calcule a sua área.
Três números só podem ser comprimento dos lados de
um triângulo, se cada um deles for menor que a soma dos
outros dois.
A < (B+C) e B < (A+C) e C < (A+B)
Caso contrário, A, B, e C não formam os lados de um
triângulo.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	double A, B, C, area;
	
	printf("\t\tAREA DO TRIANGULO:\n\n");
	printf("Informe o tamanho do lado A:");
	scanf("%lf", &A);
	printf("Informe o tamanho do lado B:");
	scanf("%lf", &B);
	printf("Informe o tamanho do lado C:");
	scanf("%lf", &C);
	
	if(A < (B+C) && B < (A+C) && C < (A+B)){
		if(A == B && B == C){
			printf("Os lados formam um triangulo equilatero\n");
			area = (A * B)/ 2;
			printf("Area:%.2lf", area);
		} else if(A == B || A == C || C == B){
			printf("Os lados formam um triangulo Isosceles\n");
			area = (A * B)/2;
			printf("Area:%.2lf", area);
		} else {
			printf("Os lados formam um triangulo escaleno\n");
			area = (A * B)/2;
			printf("Area:%.2lf", area);
		}
	} else {
		printf("Os lados não formam um triangulo\n");
	}
	
	return 0;
}
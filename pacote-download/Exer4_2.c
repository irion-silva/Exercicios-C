/*Lista de Exercícios - Estrutura de Controle de Fluxo(Seleção Simples) - 01-10-2021
4.2 Desenvolva um programa para calcular e para
comparar a área de dois retângulos A e B. O programa
deverá informar qual retângulo possui a maior área
ou se possuem tamanhos iguais. Dados de entrada:
tamanho da base e da altura (tipo das variáveis:
inteiro, valor em centímetros)
*/
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int main()
{
	int bA,hA,bB,hB,areaA, areaB;
	printf("COMPARACAO DE RETANGULOS:\n");
	printf("Informe a base do rentangulo A:");
	scanf("%d", &bA);
	printf("Informe a altura do rentangulo A:");
	scanf("%d", &hA);
	
	areaA = bA * hA;
	
	printf("Informe a base do rentangulo B:");
	scanf("%d", &bB);
	printf("Informe a altura do rentangulo B:");
	scanf("%d", &hB);
	
	areaB = bB * hB;
	
	if(areaA > areaB){
		printf("\nA area do retangulo A %c maior\n", 130);
	} else if (areaA == areaB){
		printf("\nA area dos rentagulos sao iguais\n");
	} else {
		printf("\nA area do retangulo B %c maior\n", 130);
	}
	return 0;
}
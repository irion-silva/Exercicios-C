/*Lista de Exerc�cios - Estrutura de Controle de Fluxo(Sele��o Simples) - 01-10-2021
4.2 Desenvolva um programa para calcular e para
comparar a �rea de dois ret�ngulos A e B. O programa
dever� informar qual ret�ngulo possui a maior �rea
ou se possuem tamanhos iguais. Dados de entrada:
tamanho da base e da altura (tipo das vari�veis:
inteiro, valor em cent�metros)
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
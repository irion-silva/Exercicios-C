/*Lista de Exerc�cios - Vari�veis e Operadores - 25-09-2021
3.2 Desenvolva um programa para calcular e escrever
a �rea e o per�metro de um quadrado. Dados de
entrada: tamanho do lado (tipo da vari�vel: num�rico
inteiro, valor em cent�metros). Essa convers�o deve
ser feita por meio da fun��o printf().
Resposta: o c�digo do programa � apresentado na
Figura 3.4 e o resultado da execu��o desse c�digo
na Figura 3.5.
*/
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int main(){
	int tamLado, area, perimetro;
	printf("Informe o tamanho do lado do quadrado:");
	scanf("%d", &tamLado);
	
	area = tamLado * tamLado;
	perimetro = tamLado + tamLado + tamLado + tamLado;
	
	printf("\nArea do quadrado:%d", area);
	printf("\nPer%cmetro do quadrado:%d", 161, perimetro);
	
	return (0);
}

/*Lista de Exercícios - Variáveis e Operadores - 25-09-2021
3.2 Desenvolva um programa para calcular e escrever
a área e o perímetro de um quadrado. Dados de
entrada: tamanho do lado (tipo da variável: numérico
inteiro, valor em centímetros). Essa conversão deve
ser feita por meio da função printf().
Resposta: o código do programa é apresentado na
Figura 3.4 e o resultado da execução desse código
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

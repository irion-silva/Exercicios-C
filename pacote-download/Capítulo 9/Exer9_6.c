/*Lista de Exerc�cios - Fun��es - 14-01-2022
9.6 Escreva um programa que solicite dois n�meros
inteiros ao usu�rio e que apresente na tela como
resultado o dobro desses n�meros que devem ser
somados e o resultado da soma devem ser triplicados.
Esse programa deve possuir uma fun��o para dobrar
o valor de um n�mero, outra para somar dois
n�meros e uma terceira para triplicar um n�mero.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int dobro(int num)
{
	return num*2;
}

int soma(int num_1, int num_2)
{
	
	return num_1+num_2;
}

int triplo(int num)
{
	
	return num*3;
}
int main()
{
	int num_1, num_2, sum;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &num_1);
	printf("Digite o segundo numero:");
	scanf("%d", &num_2);
	
	printf("\nDobro do primeiro numero eh: %d\n", dobro(num_1));
	printf("Dobro do segundo numero eh: %d\n", dobro(num_2));
	sum = soma(dobro(num_1), dobro(num_2));
	printf("Soma do dobro dos numeros eh: %d\n", sum);
	printf("triplo da soma acima eh: %d\n", triplo(sum));
	
	
	return 0;
}
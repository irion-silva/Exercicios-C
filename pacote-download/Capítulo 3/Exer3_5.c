/*Lista de Exercícios - Variáveis e Operadores - 01-10-2021
3.5 Escreva um programa que solicite ao usuário um
número inteiro e imprima a tabuada de multiplicação
desse número até 6, sendo que o comando da operação
de multiplicação deve ser usado dentro do printf.
*/
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int main()
{
	int num;
	printf("***** TABUADA *****\n");
	printf("Informe um n%cmero:", 163);
	scanf("%d", &num);
	
	printf("%d x 1 = %d\n", num, num*1);
	printf("%d x 2 = %d\n", num, num*2);
	printf("%d x 3 = %d\n", num, num*3);
	printf("%d x 4 = %d\n", num, num*4);
	printf("%d x 5 = %d\n", num, num*5);
	printf("%d x 6 = %d\n", num, num*6);
	
	return 0;
}
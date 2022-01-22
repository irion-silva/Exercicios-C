/*Lista de Exercícios - Variáveis e Operadores - 25-09-2021
3.1 Escreva um programa que leia um número na base
decimal e em seguida imprima esse mesmo número
nas bases octal e hexadecimal.
*/
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int main(){
	int dec, hex, oct;
	printf("Informe um n%cmero na base decimal:", 163);
	scanf("%d", &dec);
	
	printf("\nO n%cmero %d na base octal %c:%o",163, dec, 130, dec);
	printf("\nO n%cmero %d na base hexadecimal %c:%x\n",163, dec, 130, dec);
	return (0);
}


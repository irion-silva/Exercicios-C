/*Lista de Exerc�cios - Estrutura de Repeti��o
Condicional com Teste no Final - 03-01-2022
8.7 Desenvolva um programa que apresente a tabuada
de 0 at� 9 para o intervalo de 0 at� 10. Entre cada
tabuada, coloque uma pausa para o usu�rio conseguir
l�-la.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int cont_1 = 0, cont_2 = 0;
	
	do
	{
		do
		{		
			printf("%d x %d = %d\n", cont_1, cont_2, cont_1 * cont_2);
			cont_2++;
		} while(cont_2 <= 10);
		cont_1++;
		cont_2 = 0;
		printf("\n");
	} while(cont_1 <= 9);
	return 0;
}
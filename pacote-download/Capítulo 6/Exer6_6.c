/*Lista de Exerc�cios - Estrutura de Repeti��o Contada -
6.6 Desenvolva um programa, tabuada.cpp, que
apresente a tabuada de 0 at� 9 para o usu�rio. Entre
cada tabuada, coloque uma pausa para o usu�rio
conseguir l�-la.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int cont, tabuada;
	for(tabuada = 1; tabuada <= 9; tabuada++)
	{
		for(cont = 1; cont <= 10 ; cont++)
		{
			printf("%d x %d = %d\n", tabuada, cont, tabuada*cont);
		}
		printf("\n");
	}
	
	return 0;
}
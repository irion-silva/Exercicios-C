/*Lista de Exerc�cios - Fun��es - 18-01-2022
9.11 Desenvolva um programa, tabuada.cpp, que
apresente a tabuada de 0 at� 9 para um n�mero
determinado pelo usu�rio. Esse programa deve
conter um procedimento que recebe por par�metro
o n�mero digitado pelo usu�rio. Esse procedimento
deve escrever as tabuadas na tela.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void tabuada(int num)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("\n%d x %d = %d", num, i, num * i);
	}	
}
int main()
{
	int num;
	
	printf("De qual numero deseja a tabuada?:");
	scanf("%d", &num);
	
	tabuada(num);
	return 0;
}
/*Lista de Exerc�cios - Fun��es - 18-01-2022
9.12 Desenvolva um programa para calcular a tabuada de
um intervalo de dois n�meros que ser� informado
pelo usu�rio. Entre cada tabuada, deve haver uma
pausa para o usu�rio conseguir l�-la. Esse programa
deve conter um procedimento, imptabuinter, que
recebe por par�metro os dois n�meros do intervalo.
Esse procedimento deve escrever as tabuadas na tela.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void imptabuinter(int n1, int n2)
{
	int i, j, cont, cont_2;
	cont = n1;
	cont_2 = n2;
	for(i = cont; i <= cont_2; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("\n%d x %d = %d", cont, j, cont * j);
		}
		printf("\n");
		cont++;
	}
}
int main()
{
	int num_1, num_2;
	printf("Digite o primeiro numero:");
	scanf("%d", &num_1);
	printf("Digite o segundo numero:");
	scanf("%d", &num_2);
	
	imptabuinter(num_1, num_2);
	return 0;
}
/*Lista de Exerc�cios - Estrutura de Repeti��o
Condicional com Teste no In�cio - 22-12-2021
7.7 Desenvolva um programa para calcular a tabuada de
um intervalo de n�meros que ser� informado pelo
usu�rio.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num_1, num_2, auxcont;
	
	printf("Informe o primeiro numero:");
	scanf("%d", &num_1);
	printf("Informe o segundo numero:");
	scanf("%d", &num_2);
		
	
		while(num_1 <= num_2)
		{
			auxcont = 0;
			while(auxcont <= 10)
			{
				printf("%d x %d = %d\n", num_1, auxcont, num_1 * auxcont);
				auxcont++;
			}
			num_1++;
			printf("\n");
		}
		
	return 0;
}
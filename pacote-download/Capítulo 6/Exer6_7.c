/*Lista de Exercícios - Estrutura de Repetição Contada -
6.7 Desenvolva um programa, tabinter.cpp, para calcular
a tabuada de um intervalo de números que será
informado pelo usuário.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int num_1, num_2, cont_1, cont_2;
	
	printf("Digite o primeiro limite do intervalo:");
	scanf("%d", &num_1);
	printf("Digite o segundo limite do intervalo:");
	scanf("%d", &num_2);
	
	if(num_2 <= num_1 ){
		printf("O segundo limite deve ser maior que o primeiro\n");
		printf("Digite o primeiro limite do intervalo:");
		scanf("%d", &num_1);
		printf("Digiteo segundo limite do intervalo:");
		scanf("%d", &num_2);
	}
	
	for(cont_1 = num_1; cont_1 <= num_2 ; cont_1++)
	{
		for(cont_2 = 1; cont_2 <= 10 ; cont_2++)
		{
			printf("%d x %d = %d\n", cont_1, cont_2, cont_1 * cont_2);
		}
		printf("\n");
	}
	
	return 0;
}
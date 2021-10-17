/*Lista de Exercícios - Tipos de Dados e Variáveis - 25-09-2021
2.2 Escreva um programa em C que apresente a tabuada
de um número qualquer, apresentando a tela,
conforme a Figura 2.3, sendo que esse programa
deverá apresentar o seguinte trecho de código para
apresentação dos dados:
*/
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

int main (){
	int tabuada;
	
	printf("Informe um n%cmero inteiro:",163);
	scanf("%d", &tabuada);
	printf("Tabuado do %d:\n\n", tabuada);
	printf("\t%d x 1 = %d\n",tabuada,tabuada*1);
	printf("\t%d x 2 = %d\n",tabuada,tabuada*2);
	printf("\t%d x 3 = %d\n",tabuada,tabuada*3);
	printf("\t%d x 4 = %d\n",tabuada,tabuada*4);
	printf("\t%d x 5 = %d\n",tabuada,tabuada*5);
	printf("\t%d x 6 = %d\n",tabuada,tabuada*6);
	printf("\t%d x 7 = %d\n",tabuada,tabuada*7);
	printf("\t%d x 8 = %d\n",tabuada,tabuada*8);
	printf("\t%d x 9 = %d\n",tabuada,tabuada*9);
	printf("\t%d x 10 = %d\n",tabuada,tabuada*10);
	
	return (0);
}

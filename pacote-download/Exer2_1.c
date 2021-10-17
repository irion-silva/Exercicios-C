/*Lista de Exercícios - Tipos de Dados e Variáveis - 22-09-2021
2.1 Escreva um programa que leia o número de
chuteiras de uma loja de esporte. Os valores deverão
ser inseridos por meio do teclado. Como saída, o
programa deve apresentar o número de chuteiras e
suas marcas (marca A, marca B e marca C).
*/
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int main (){
	int marca_A, marca_B, marca_C;
	
	printf("N%cmero de chuteiras:\n\n",163);
	printf("Informe a quantidade de chuteiras da marca (A):");
	scanf("%d", &marca_A);
	printf("Informe a quantidade de chuteiras da marca (B):");
	scanf("%d", &marca_B);
	printf("Informe a quantidade de chuteiras da marca (C):");
	scanf("%d", &marca_C);
	
	printf("\n\n\t\tQuantidade de chuteiras em estoque\n\n");
	printf("\tMarca (A)\t\tMarca (B)\t\tMarca (C)\n\n");
	printf("\t  %d     \t\t  %d    \t\t  %d\n\n", marca_A, marca_B, marca_C);
	return (0);
}

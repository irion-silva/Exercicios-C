/*Lista de Exercícios - Comandos Básicos - 22-09-2021
1.4 Escreva um programa em C para o Ministério da
Saúde que o auxilie nas informações sobre a dengue
em Brasília. Esse programa deve receber os dados
sobre o número de casos suspeitos, o número de casos
confirmados e o número de mortes, apresentando a
tela, conforme Figura 1.7.
*/
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int main (){
	int casos_suspeitos, casos_confirmados, qtd_mortes, tot_dados;
	
	printf("Preencha com as seguintes informa%coes sobre a Dengue em Bras%clia\n\n",135, 161);
	printf("\tCasos suspeitos:");
	scanf("%d", &casos_suspeitos);
	printf("\tCasos confirmados:");
	scanf("%d", &casos_confirmados);
	printf("\tQuantidade de mortes:");
	scanf("%d", &qtd_mortes);
	
	tot_dados = casos_suspeitos + casos_confirmados + qtd_mortes;
	
	printf("\nInforma%coes sobre a dengue em Bras%clia\n", 135, 161);
	printf("\tCasos suspeitos:%d\n", casos_suspeitos);
	printf("\tCasos confirmados:%d\n", casos_confirmados);
	printf("\tQuantidade de mortes:%d\n", qtd_mortes);
	printf("\n\tTotal de dados:%d\n", tot_dados);
}

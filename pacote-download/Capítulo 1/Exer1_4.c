/*Lista de Exerc�cios - Comandos B�sicos - 22-09-2021
1.4 Escreva um programa em C para o Minist�rio da
Sa�de que o auxilie nas informa��es sobre a dengue
em Bras�lia. Esse programa deve receber os dados
sobre o n�mero de casos suspeitos, o n�mero de casos
confirmados e o n�mero de mortes, apresentando a
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

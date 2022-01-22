/*Lista de Exercícios - Estrutura de Controle de Fluxo Condicional Composta - 
11-12-2021
5.5 Uma frutaria vende frutas com a seguinte tabela de
preços:
	Até 5 Kg          |	Acima de 5 Kg
Morango: R$ 7,50 p/Kg |  R$ 5,30 p/Kg
Maçã: R$ 3,50 p/Kg    |  R$ 2,80 p/Kg
Se o cliente comprar menos de 5 kg de frutas e o valor
total da compra ultrapassar R$ 19,00, receberá um
desconto de 8% sobre o total. Escreva um programa
em C para ler a quantidade (em Kg) de morangos e
a de maçãs (em Kg) e que informe o valor a ser pago
pelo cliente.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	double qtd_macas, qtd_morangos, kilo_macas1 = 3.50, kilo_macas2 = 2.80, kilo_morangos1 = 7.50 , kilo_morangos2 = 5.30, tot_peso, tot_compra;
	printf("\t\tVALOR DAS COMPRAS\n\n");
	printf("Informe o peso total de macas em kg:");
	scanf("%lf", &qtd_macas);
	printf("Informe o peso total de morangos em kg:");
	scanf("%lf", &qtd_morangos);
	
	tot_peso = qtd_macas + qtd_morangos;
	
	if(tot_peso < 5.0){
		tot_compra = (qtd_macas * kilo_macas1) + (qtd_morangos * kilo_morangos1);
		if(tot_compra > 19.00){
			tot_compra *= 0.08;
			printf("Peso total de macas:%.2lf\n", qtd_macas);
			printf("Peso total de morangos:.2%lf\n", qtd_morangos);
			printf("Valor total da compra:%.2lf\n", tot_compra);
		} else if(tot_compra <= 19.00){
		printf("Peso total de macas:%.2lf\n", qtd_macas);
		printf("Peso total de morangos:%.2lf\n", qtd_morangos);
		printf("Valor total da compra:%.2lf\n", tot_compra);	
		}
	} else if(tot_peso >= 5.0){
		tot_compra = (qtd_macas * kilo_macas2) + (qtd_morangos * kilo_morangos2);
		printf("Peso total de macas:%.2lf\n", qtd_macas);
		printf("Peso total de morangos:%.2lf\n", qtd_morangos);
		printf("Valor total da compra:%.2lf\n", tot_compra);
	}
	
	return 0;
}
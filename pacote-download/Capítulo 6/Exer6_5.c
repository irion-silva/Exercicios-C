/*Lista de Exercícios - Estrutura de Repetição Contada -
6.5 Desenvolva um programa, maioridade.cpp, que
solicite ao usuário a idade de três pessoas e apresente
na tela a maior e a menor idade.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int idade, menor = 1000, maior = 0, cont;
	for(cont = 1; cont <= 3; cont++){
		printf("Informe a %d%c idade:", cont, 166);
		scanf("%d", &idade);
		if(idade < 0){
			printf("Informe a %d%c idade, deve ser positivo:", cont, 166);
			scanf("%d", &idade);
		}
		
		if(idade > maior){
			maior = idade;
		}
		if(idade < menor){
			menor = idade;
		} 
	}
	
	printf("\nA maior idade eh:%d\n", maior);
	printf("A menor idade eh:%d\n", menor);
	return 0;
}
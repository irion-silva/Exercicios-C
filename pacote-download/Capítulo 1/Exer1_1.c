/*Lista de Exercícios - Comandos Básicos - 22-09-2021
1.1 Escreva um programa que leia o número de alunos
e de alunas de uma sala. Como saída, o programa
deve apresentar o número de alunos e em seguida
o de alunas.
*/
# include <stdio.h>
# include <conio.h>

int main (){
	int num_alunos, num_alunas, tot_alunos;
	
	printf("Informe o n%cmero de alunos:", 163);
	scanf("%d", &num_alunos);
	printf("Informe o n%cmero de alunas:", 163);
	scanf("%d", &num_alunas);
	
	tot_alunos = num_alunos + num_alunas;
	
	printf("N%cmero de alunos:%d\n", 163, num_alunos);
	printf("N%cmero de alunas:%d\n", 163, num_alunas);
	printf("Total da turma:%d\n", tot_alunos);
	
	
}

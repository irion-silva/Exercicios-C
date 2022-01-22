/*Lista de Exercícios - Comandos Básicos - 22-09-2021
1.2 Execute novamente o programa, de modo que seja
apresentado primeiro o número de alunas e depois
o número de alunos.
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
	
	printf("N%cmero de alunas:%d\n", 163, num_alunas);
	printf("N%cmero de alunos:%d\n", 163, num_alunos);
	printf("Total da turma:%d\n", tot_alunos);
	
	
}

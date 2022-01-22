/*Lista de Exercícios - Variáveis e Operadores - 26-09-2021
3.4 Escreva um programa que solicite ao usuário dois
números inteiros diferentes de zero. Com esses
números imprima na tela: a soma, a subtração, o
produto, a divisão e a média.
*/
# include <stdio.h>
# include <conio.h>
# include <stdio.h>
int main()
{
	int num1, num2, soma, subtracao, mult;
	double div, m;
	
	printf("Informe o primeiro n%cmero:",163);
	scanf("%d", &num1);
	printf("Informe o segundo n%cmero:",163);
	scanf("%d", &num2);
	
	soma = num1 + num2;
	subtracao = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	m = (num1 + num2)/2;
	
	printf("\nA soma entre %d e %d %c = %d\n",num1, num2, 130, soma);
	printf("A subtra%cao entre %d e %d %c = %d\n",135, num1, num2, 130, subtracao);
	printf("A multiplica%cao entre %d e %d %c = %d\n",135, num1, num2, 130, mult);
	printf("A divisao entre %d e %d %c = %.2f\n",num1, num2, 130, div);
	printf("A m%cdia entre %d e %d %c = %.2f\n",130, num1, num2, 130, m);
		
	return 0;
}
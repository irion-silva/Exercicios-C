/*Lista de Exerc�cios - Comandos B�sicos - 22-09-2021
1.3 Escreva um programa em C que apresente a tabuada
do n�mero 3, conforme a Figura 1.5.
*/
# include <stdio.h>
# include <conio.h>
int main (){
	int tabuada = 3;
	int contador = 1;
	
	for (contador = 1; contador <= 10; contador++){
		printf("%d x %d = %d\n", tabuada, contador, tabuada*contador);
	}
	
	return(0);
}

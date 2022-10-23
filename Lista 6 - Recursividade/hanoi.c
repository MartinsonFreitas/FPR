/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 25/10/2021
	
	Recursividade
	
	Implementar uma fun��o recursiva que resolva o problema das Torres de Han�i.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void hanoi (int n, char O, char D, char aux);

//implementa��o da fun��o main
void main ()
{
	//chamando a fun��o
	hanoi (5, 'A', 'C', 'B');
}

//implementa��es das fun��es
void hanoi (int n, char O, char D, char aux)
{
	if (n > 0)
	{
			hanoi (n-1, O, aux, D);
			printf  ("%c  ->  %c\n", O, D);
			hanoi (n-1, aux, D, O);
	}
}


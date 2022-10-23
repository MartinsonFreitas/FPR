/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 25/10/2021
	
	Recursividade
	
	Lista de Exerc�cios VI
	
	Quest�o 03: Fazer uma fun��o recursiva que, dado um n�mero inteiro N, exiba o mesmo 
	na base 2 (bin�ria).
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void binario (int N);

//implementa��o da fun��o main
void main ()
{
	//chamando a fun��o
	binario (100);
}

//implementa��es das fun��es
void binario (int N)
{
	if (N > 0)		//caso geral
	{
		binario (N/2);		
		printf ("%d", N%2);
	}
}

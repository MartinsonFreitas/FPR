/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 01/11/2021
	
	Recursividade
	
	Lista de Exerc�cios VI
	
	Quest�o 04: Pede-se a implementa��o de uma fun��o recursiva que exiba os n 
	primeiros termos de uma PG (Progress�o Geom�trica), onde a1 � o seu primeiro 
	termo e q a raz�o.
	
	Exemplo:
	
			n = 5, a1 = 2, q = 3
			PG: 2, 6, 18, 54, 162 
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void PG (int n, float a1, float q);

//implementa��o da fun��o main
void main ()
{
	PG (10, 1, 2);
}

//implementa��es das fun��es
void PG (int n, float a1, float q)
{
	if (n>0)		//caso geral
	{
        printf("%.1f, ",a1);
        
		PG (n-1, a1*q, q);
    }
    //caso base (impl�cito): n = 0
}

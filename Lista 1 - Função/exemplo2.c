/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 30/08/2021
	
	Revis�o - FAC
	
	Desenvolver uma fun��o que exiba os n�meros de 1 a 1000
*/

//importa��o de bibliotecas
#include <stdio.h>

void exibeNumeros ()
{
	//declara��o de vari�veis
	int i;
	
	//variando os valores de 1 a 1000 e exibindo-os
	for (i=1; i<=1000; i++)
	{
		printf ("%d  ", i);
	}
	
}

void main ()
{
	exibeNumeros ();
}

/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 18/10/2021
	
	Recursividade
	
	Exemplo 3: Calcular o valor de a x b, atrav�s de sucessivas somas, onde a e b s�o 
	inteiros positivos.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int produtoRecursivo (int a, int b);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int x = 5, y = 5;
	
	printf ("%d x %d = %d\n\n", x, y, produtoRecursivo (x, y));
}

//implementa��es das fun��es
int produtoRecursivo (int a, int b)
{
	//caso base
	if (b==1)
	{
    	return a;
	}
	else 
	{
		//caso geral
		return a + produtoRecursivo (a,b-1);
	}
}

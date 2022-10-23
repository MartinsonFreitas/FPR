/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 18/10/2021
	
	Recursividade
	
	Exemplo 4: Calcular o n-�simo termo da sequ�ncia de fibonacci
	
						0,1,1,2,3,5,8,13,21,...
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int fibonacciI (int n);
int fibonacciR (int n);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int ordem = 60;
	
	printf ("%do. termo de Fibonacci (iterativo): %d\n", ordem, fibonacciI(ordem));    
	
	system ("pause");
	
	printf ("%do. termo de Fibonacci (recursivo): %d\n", ordem, fibonacciR(ordem));    
}

//implementa��es das fun��es
int fibonacciI (int n)
{
	//declara��o de vari�veis
	int i, a, b, c;
	
	if (n==1)  //1� termo
	{
		return 0;
	}
	else
	{
		if (n==2)  //2� termo
		{
			return 1;
		}
		else
		{
			//do 3� termo em diante
			a = 0;
			b = 1;
			
			for (i=3;i<=n;i++)
			{
				//calculando o i-�simo termo
				c = a + b;
				
				//atualizando os dois �ltimos valores
				a = b;
				b = c;				
			}
			
			//retornando o resultado
			return c;
		}
	}	
}

int fibonacciR (int n)
{
	if (n==1)  //1� termo   = caso base
	{
		return 0;
	}
	else
	{
		if (n==2)  //2� termo  =  caso base
		{
			return 1;
		}
		else
		{
			//caso geral
			return fibonacciR (n-1) + fibonacciR (n-2);
		}	
	}
}

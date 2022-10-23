/*
	FAC - 2021/1
	Data: 20/05/2021
	
	Lista de Exerc�cios VIII (Fun��es)
	
	QUEST�O 03:
	Desenvolver uma fun��o que calcule o n-�simo termo da sequ�ncia de Fibonacci.
	
									1 1 2 3 5 8 13 21...
	
	Exemplos:
	
		n: 2		a fun��o retorna: 2� termo: 1
		n: 8		a fun��o retorna: 8� termo: 21
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o dos prot�tipos das fun��es
int fibonacci (int n);

//main
void main()
{
	//declara��o de vari�veis
	int posicao, i;
	
	//leitura do elemento que o usu�rio deseja saber
	printf ("Qual a posicao ordinal da sequencia de fibonacci? ");
	scanf ("%d", &posicao);

	for (i=1;i<=posicao;i++)
	{
		printf ("%d ", fibonacci (i));	
	}	
}

//implementa��o das fun��es
int fibonacci (int n)
{
	//declara��o de vari�veis
	int i, t1, t2, resposta;
	
	//se for o 1� termo, retorna 1
	if (n==1)
	{
		resposta = 1;
	}
	else
	{
		//se for o 2� termo, retorna 1	
		if (n==2)
		{
			resposta = 1;
		}
		else
		{
			//se chegou aqui, � pq deseja-se calcular um valor que est� da terceira posi��o em diante
			t1 = 1;
			t2 = 1;

			//calculando do 3� ao n-�simo termo
			for (i=3;i<=n;i++)
			{
				resposta = t1 + t2;
				
				t1 = t2;
				t2 = resposta;
			}
     			// exemplo: n=6
				// 1  1  2  3  5  8  13  21...
				// 1  2  3  4  5  6  7   8
				//          t1 t2 r      
		}
	}
	
	//retornando o resultado
	return resposta;	
}

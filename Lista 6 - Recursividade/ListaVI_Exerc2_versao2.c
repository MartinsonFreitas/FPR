/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 01/11/2021
	
	Recursividade
	
	Lista de Exerc�cios VI
	
	Quest�o 02: Desenvolver uma fun��o recursiva que exiba todos os m�ltiplos do n�mero N, inferiores ou iguais 
	ao valor V.
	
	Exemplo:
			N = 3
			V = 20
			Ser�o apresentados: 0, 3, 6, 9, 12, 15, 18			
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void exibirMultiplos (int n, int v);

//implementa��o da fun��o main
void main ()
{
	exibirMultiplos (5, 100);
}

//implementa��es das fun��es
void exibirMultiplos (int n, int v)
{
	if (v!=0)			//caso geral
	{
		exibirMultiplos (n,v-1);
		
		if (v%n==0)		//verificando se 'v' � um m�ltiplo de 'n'
		{
			printf ("\n%d",v);
		}	
	}
	else 				//caso base
	{
    	printf("\n%d",v);
	}
}

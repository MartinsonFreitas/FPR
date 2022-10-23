/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 20/09/2021
	
	MATRIZES
	
	Exemplo 1: Desenvolver uma fun��o que zere os elementos de uma matriz M10x5
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 10
#define C 5

//prot�tipos/cabe�alhos das fun��es
void zerar (int matriz[L][C]);
void exibir (int matriz[L][C]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int m[L][C];
	
	//exibindo a matriz
	exibir (m);	
	
	//zerando a matriz
	zerar (m);
	
	//exibindo a matriz
	exibir (m);	
}

//implementa��o das demais fun��es
void zerar (int matriz[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo todas as posi��es da matriz
	for (i=0;i<L;i++)			//percorrendo todas as linhas da matriz
	{
		for (j=0;j<C;j++)		//percorrendo todas as colunas da matriz
		{
			//zerar cada elemento da matriz
			matriz[i][j] = 0;
		}
	}
}


void exibir (int matriz[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo todas as posi��es da matriz
	for (i=0;i<L;i++)			//percorrendo todas as linhas da matriz
	{
		for (j=0;j<C;j++)		//percorrendo todas as colunas da matriz
		{
			printf ("%11d ", matriz[i][j]);
		}
		printf ("\n");
	}	
	printf ("\n\n");
}

/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 20/09/2021
	
	MATRIZES
	
	Exemplo 2: Desenvolver uma fun��o que armazene o valor 1 em todas as posi��es da 1� linha 
	           de uma matriz 20 x 15, o n�mero 2 na 2�, e assim por diante.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define L 20
#define C 15

//prot�tipos/cabe�alhos das fun��es
void preencherOrdenado (int matriz[L][C]);
void exibir (int matriz[L][C]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int m[L][C];
	
	//preenchendo a matriz
	preencherOrdenado (m);
	
	//exibindo a matriz
	exibir (m);	
}

//implementa��o das demais fun��es
void preencherOrdenado (int matriz[L][C])
{
	//declara��o de vari�veis
	int i, j, numero;
	
	//percorrendo todas as posi��es da matriz
	for (i=0;i<L;i++)			//percorrendo todas as linhas da matriz
	{
		numero = i+1;
		for (j=0;j<C;j++)		//percorrendo todas as colunas da matriz
		{
			matriz[i][j] = numero;
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
			printf ("%3d ", matriz[i][j]);
		}
		printf ("\n");
	}	
	printf ("\n\n");
}

/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 20/09/2021
	
	MATRIZES
	
	Exemplo 3: Desenvolver uma fun��o que preencha uma matriz 30x20 com n�meros aleat�rios (fun��o rand).

*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define L 30
#define C 20

//prot�tipos/cabe�alhos das fun��es
void preencherAleatorio (int matriz[L][C]);
void exibir (int matriz[L][C]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int m[L][C];
	
	//preenchendo a matriz
	preencherAleatorio (m);
	
	//exibindo a matriz
	exibir (m);	
}

//implementa��o das demais fun��es
void preencherAleatorio (int matriz[L][C])
{
	//declara��o de vari�veis
	int i, j;
	
	srand (time(NULL));
	
	//percorrendo todas as posi��es da matriz
	for (i=0;i<L;i++)			//percorrendo todas as linhas da matriz
	{
		for (j=0;j<C;j++)		//percorrendo todas as colunas da matriz
		{
			matriz[i][j] = 1+rand()%100; //preenchendo a matriz com valores aleat�rios no intervalo de 1 a 100
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

/*
	FPR - Fundamentos de Programa��o
	Professor Leonardo Vianna

	Data: 27/09/2021
	
	Lista de Exerc�cios IV - Matrizes
	
	QUEST�O 03:
	Desenvolver uma fun��o que gere a seguinte matriz M5x5:

			1	2	3	4	5	
			2	3	4	5	6	
			3	4	5	6	7	
			4	5	6	7	8	
			5	6	7	8	9	
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defini��o de constantes
#define L 5
#define C 5

//prot�tipos/cabe�alhos das fun��es
void exibir (int matriz[L][C]);

void geraMatriz(int matriz[L][C]);

//implementa��o da fun��o main
void main ()
{
	//declara��o de vari�veis
	int m[L][C];
		
	//gerando a matriz conforme o enunciado
	geraMatriz (m);
	
	//exibindo a matriz
	exibir (m);	
}

//implementa��o das demais fun��es
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

void geraMatriz(int matriz[L][C])
{
	//declara��o de vari�veis
    int i, j;
    
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            matriz[i][j] = i + j + 1;
        }
    }
}
